// Listado: compatibilidad_video.c
// Comprueba la compatibilidad del sistema con los modos de video de libsdl
// mediante el método ensayo-error

#include <stdio.h>
#include <SDL/SDL.h>
#include "compatibilidad_video.h"


void compatibilidad_video_sdl(int w, int h, int bpp)
{

   // Nuestro "rectángulo" gráfico con la información de video a mostrar;

   SDL_Surface *pantalla;

   // Vamos a probar los diferentes parametros de SetVideoMode

   // Almacenando la superficie en memoria principal a w x h x bpp

   pantalla = SDL_SetVideoMode(w, h, bpp, SDL_SWSURFACE);

   if(pantalla == NULL)
       printf("SDL_SWSURFACE %d x %d x %d no compatible. Error: %s\n",
               w, h, bpp, SDL_GetError());
   else
       printf("Compatible con SDL_SWSURFACE %d x %d x %d\n", w, h, bpp);

   // Almacenando la superficia en memoria de video a w x h x bpp
   
   pantalla = SDL_SetVideoMode(w, h, bpp, SDL_HWSURFACE);

   if(pantalla == NULL)
       printf("SDL_HWSURFACE %d x %d x %d no compatible. Error: %s\n",
               w, h, bpp, SDL_GetError());
   else {

	printf("Compatible con SDL_HWSURFACE %d x %d x %d\n", w, h, bpp);
	
	// ¿Es compatible con el doble búffer? Sólo con HWSURFACE
	pantalla = SDL_SetVideoMode(w, h, bpp, SDL_HWSURFACE | SDL_DOUBLEBUF);
	if(pantalla == NULL)
	    printf("SDL_DOUBLEBUF %d x %d x %d no compatible. Error: %s\n",
		   w, h, bpp, SDL_GetError());
	else
	    printf("Compatible con SDL_DOUBLEBUF %d x %d x %d\n", w, h, bpp);
   }
   
   // Blit asíncrono para mejorar rendimiento en máquinas multiprocesador
   pantalla = SDL_SetVideoMode(w, h, bpp, SDL_ASYNCBLIT);
   if(pantalla == NULL)
	printf("SDL_ASYNCBLIT %d x %d x %d no compatible. Error: %s\n",
		w, h, bpp, SDL_GetError());
   else
	printf("Compatible con SDL_ASYNCBLIT %d x %d x %d\n", w, h, bpp);
   
   // Forzamos los bpp en modo ventana
   pantalla = SDL_SetVideoMode(w, h, bpp, SDL_ANYFORMAT);
   if(pantalla == NULL)
	printf("SDL_ANYFORMAT %d x %d x %d no compatible. Error: %s\n",
	       w, h, bpp, SDL_GetError());
   else
	printf("Compatible con SDL_ANYFORMAT %d x %d x %d\n", w, h, bpp);
   
   
   // Acceso exclusivo a la paleta de color
   pantalla = SDL_SetVideoMode(w, h, bpp, SDL_HWPALETTE);
   if(pantalla == NULL)
	printf("SDL_HWPALETTE %d x %d x %d no compatible. Error: %s\n",
		w, h, bpp, SDL_GetError());
   else
	printf("Compatible con SDL_HWPALETTE %d x %d x %d\n", w, h, bpp);
   
   
   // Modo a pantalla completa
   pantalla = SDL_SetVideoMode(w, h, bpp, SDL_FULLSCREEN);
   if(pantalla == NULL)
	printf("SDL_FULLSCREEN %d x %d x %d no compatible. Error: %s\n",
		w, h, bpp, SDL_GetError());
   else
	printf("Compatible con SDL_FULLSCREEN %d x %d x %d\n", w, h, bpp);
   
   
   // Crear un contexto OpenGL en la superficie
   pantalla = SDL_SetVideoMode(w, h, bpp, SDL_OPENGL);
   if(pantalla == NULL)
	printf("SDL_OPENGL %d x %d x %d no compatible. Error: %s\n",
		w, h, bpp, SDL_GetError());
   else
	printf("Compatible con SDL_OPENGL %d x %d x %d\n", w, h, bpp);
   
   
   // Crear un contexto OpenGL en la superficie y permitir renderizado opengl
   pantalla = SDL_SetVideoMode(w, h, bpp, SDL_OPENGLBLIT);
   if(pantalla == NULL)
	printf("SDL_OPENGLBLIT %d x %d x %d no compatible. Error: %s\n",
		w, h, bpp, SDL_GetError());
   else
	printf("Compatible con SDL_OPENGLBLIT %d x %d x %d\n", w, h, bpp);
   
   // Permite que la superficie principal pueda cambiarsele el tamaño
   pantalla = SDL_SetVideoMode(w, h, bpp, SDL_RESIZABLE);
   if(pantalla == NULL)
	printf("SDL_RESIZABLE %d x %d x %d no compatible. Error: %s\n",
		w, h, bpp, SDL_GetError());
   else
	printf("Compatible con SDL_RESIZABLE %d x %d x %d\n", w, h, bpp);
   
   pantalla = SDL_SetVideoMode(w, h, bpp, SDL_NOFRAME);
   if(pantalla == NULL)
	printf("SDL_NOFRAME %d x %d x %d no compatible. Error: %s\n",
		w, h, bpp, SDL_GetError());
   else
	printf("Compatible con SDL_NOFRAME %d x %d x %d\n", w, h, bpp);

   
}

