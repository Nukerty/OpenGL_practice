// Since I've hoarded this with multiple shit
// Ill make using all of them I guess

#include <SDL2/SDL.h>
#include <iostream>

void create_SDL_window(int time = 1000){

  SDL_Init(SDL_INIT_EVERYTHING);

  SDL_Delay(time);

  SDL_Quit();
}

int main(int argc, char *argv[]) {
  std::cout << "Creating window\n";
  create_SDL_window(10000);
  std::cout << "Finished window\n";

}
