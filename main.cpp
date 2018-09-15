#include "game.h"


Game *game = nullptr;

int main(int args, char *argv[]) {

	game = new Game();

	game->init("Window", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 1200, 720, false);

	while (game->running()) {
		game->handleEvents();
		game->update();
		game->render();
	}

	game->clean();
	
	return 0;

}