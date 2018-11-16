//
// SENAC BCC PI 2
// Projeto Betelgeuse

#include <time.h>
#include "engine.h"

// Forward declaration de
// Funções de ambiente (macOS, Linux etc)
bool setupEnvironment(Game *game);
void loopEnvironmentBeforeFrame(Game *game, bool *redraw);
void loopEnvironmentAfterFrame(Game *game, bool redrawing);
void updateEnvironmentKeys(Game *game);
void quitEnvironment(Game *game);
void menuOverlayOnFrame(Game *game, int frame);

// # função createNewGame
// Preenche uma nova estrutura de jogo, com os valores
// iniciais e ainda sem cena
Game createNewGame(){

    struct Game game;

#ifdef PLATFORM_POKITTO
    game.screenSetup.scaleFactor = 1;
#else
    game.screenSetup.scaleFactor = 3;
#endif

    game.screenSetup.width  = 220 * game.screenSetup.scaleFactor;
    game.screenSetup.height = 176 * game.screenSetup.scaleFactor;
    game.screenSetup.fps    = 320;

    game.currentScene.onEnter = NULL;
    game.currentScene.onFrame = NULL;
    game.currentScene.onExit  = NULL;
    game.running              = true;

    game.keyState.a       = KEY_IS_UP;
    game.keyState.b       = KEY_IS_UP;
    game.keyState.up      = KEY_IS_UP;
    game.keyState.right   = KEY_IS_UP;
    game.keyState.down    = KEY_IS_UP;
    game.keyState.left    = KEY_IS_UP;

    game.menuOverlay.visible = false;

    setupEnvironment(&game);
    preloadMenuAssets(&game);

    //RANDOMIZE LEVELS
    //BASE: [CRIME = ATUAL,CERTO,ERRADO,ERRADO,ERRADO] [DICA1,DICA2,DICA3] -> referente ao destino certo
    //Números são referentes aos índices da array original
    //LEVEL 1:      [0,1*,2,3,4]     *destino certo
    //LEVEL 2:      [1,5*,6,7,8]     *destino certo
    //LEVEL 3:      [5,9*,10,11,12]  *fim de jogo

    int tam = 16;
    int array[tam];

    // Preenche o vetor com 1-16
    for (int i = 0; i < tam; i++) {
        array[i] = i + 1;
    }

    // Troca
    void swap(int *a, int *b) {
        int temp = *a;
        *a = *b;
        *b = temp;
    }

    // Embaralha o vetor
    srand(time(NULL));
    int i;
    for(i = tam-1; i > 0; i--) {
        int j = rand() % (i+1);
        swap(&array[i], &array[j]);
    }

    //Fill levels
    LEVEL_1[0] = array[0]; // Crime
    for(int i = 1; i < 5; i++){
        LEVEL_1[i] = array[i];
    }

    LEVEL_2[0] = LEVEL_1[1]; // Destino certo
    for(int i = 5; i < 9; i++){
        LEVEL_2[i-5] = array[i];
    }

    LEVEL_3[0] = LEVEL_2[1]; // Destino certo
    for(int i = 9; i < 13; i++){
        LEVEL_3[i-9] = array[i];
    }

    return game;
}

// # função nextFrame
void nextFrame(Game *game){

    bool shouldRedraw = false;
    loopEnvironmentBeforeFrame(game, &shouldRedraw);

    if (shouldRedraw) {
        int sceneFrame = (++game->frame - game->sceneFrame);
        updateEnvironmentKeys(game);

        if (game->menuOverlay.visible == true) {
            menuOverlayOnFrame(game, game->frame);
        } else if (game->currentScene.onFrame != NULL){
            game->currentScene.onFrame(game, sceneFrame);
        }
    }

    loopEnvironmentAfterFrame(game, shouldRedraw);
}

// # função createNewGame
// Precisa ser chamada no fim do jogo, para gestão
// correta da memória
void endGame(Game *game){

	// Avisa a cena anterior que o jogo acabou
    // & platform specifcs
    int frame = game->frame - game->sceneFrame;
	if (game->currentScene.onExit != NULL) game->currentScene.onExit(game, frame);
    unloadMenuAssets(game);
    quitEnvironment(game);
}
