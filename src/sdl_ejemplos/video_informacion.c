// Listado: main.c
//
// Programa de prueba, compatibilidad del sistema e información SDL video_info

#include <stdio.h>
#include <SDL/SDL.h>
#include "compatibilidad_video.h" //Ejemplo 1
#include "sdl_videoinfo.h" //Ejemplo 2


void datos_configuracion(int *w, int *h, int *bpp);


int main()
{
   int opcion;
   
   int h, w, bpp;
   
   atexit(SDL_Quit);

   do {

	// Iniciamos SDL
	if(SDL_Init(SDL_INIT_VIDEO) < 0){
	    fprintf(stderr, " No se pudo iniciar SDL: %s\n", SDL_GetError());
	    exit(1);
       }

	 
	printf("\n 1.Compatibilidad Video SDL\n");
	printf(" 2.Información SDL_VideoInfo.\n"); 
	printf(" 3.Salir\n");
	printf("Elija una opción: ");
	scanf("%d", &opcion);
	
	switch(opcion) {

	case 1:
	    datos_configuracion(&w, &h, &bpp);
	    compatibilidad_video_sdl(w, h, bpp);
	    SDL_Quit();
	    break;

	 case 2: sdl_videoinfo(); SDL_Quit(); break;

	 case 3: SDL_Quit(); break;

	 default: printf("\nOpción no válida\n");
	
        }

    } while(opcion != 3);
   

   return 0;
}

// Función para inicializar los datos para comprobar la compatibilidad

void datos_configuracion(int *w, int *h, int *bpp) {

   printf("\nIntroduce la anchura en píxeles de la pantalla: ");
   scanf("%d", w);

   printf("Introduce la altura en píxeles de la pantalla: ");
   scanf("%d", h);

   printf("Introduce la profundidad de color: ");
   scanf("%d", bpp);    

   printf("\n"); // Para el formato

}
