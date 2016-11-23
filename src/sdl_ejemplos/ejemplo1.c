#include <stdio.h>
#include <SDL/SDL.h>
#include <SDL2/SDL_image.h>

int main()  {
	int b;
	SDL_Surface* pantalla;
	SDL_Event evento;
	pantalla = SDL_SetVideoMode(800,600,32,SDL_HWSURFACE);
	SDL_Flip(pantalla);
	//evento = NULL;
	b = 1;
	while(b == 1)  {
		SDL_PollEvent(&evento); 
		if (evento.type  == SDL_KEYDOWN)  {
			b = 0;
		}
		}
}


