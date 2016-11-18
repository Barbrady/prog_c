// Listado: sdl_videoinfo
//
// Implementación de la función sdl_videoinfo()

#include <SDL/SDL.h>
#include "sdl_videoinfo.h"

void sdl_videoinfo(void)
{

   const SDL_VideoInfo *propiedades;
   SDL_Surface *pantalla;
   SDL_Rect **modos;

   //Variables auxiliares
   char driver[20];
   int maxlen = 20;
   int i = 0;

   // Obtenemos la información del sistema de video
   propiedades = SDL_GetVideoInfo();
   if(propiedades == NULL) {
	 fprintf(stderr, "No se pudo obtener la información %s\n",
		  SDL_GetError());
	 exit(1);
   }

   // Obtenemos los modos de video disponibles
   modos = SDL_ListModes(NULL, SDL_HWSURFACE);

   printf("\n\n == MODOS DE VIDEO DISPONIBLES == \n");

   // Comprobamos que métodos están disponibles
   if(modos == (SDL_Rect **)0)
	 printf("No existen modos disponibles \n");
   else if(modos == (SDL_Rect **)-1)
	 printf("Todos los modos disponibles \n");
   else {
	 printf("Lista de modos disponibles\n");
	 for(i = 0; modos[i]; i++)
	     printf("%d x %d\n", modos[i]->w, modos[i]->h);
   }

   // Comprobamos que el modo a seleccionar sea compatible
   if(SDL_VideoModeOK(640, 480, 24, SDL_SWSURFACE) == 0) {
	 fprintf(stderr, "Modo no soportado: %s\n", SDL_GetError());
	 exit(1);
   }


   // Una vez comprobado establecemos el modo de video
   pantalla = SDL_SetVideoMode(640, 480, 24, SDL_SWSURFACE);
   if(pantalla == NULL)
	 printf("SDL_SWSURFACE 640x480x24 no compatible. Error: %s\n",
		 SDL_GetError());


   // Obtenemos información del driver de video
   printf("\n\n == INFORMACIÓN DRIVER VIDEO == \n");
   SDL_VideoDriverName(driver, maxlen);

   if(driver == NULL) {
	 fprintf(stderr, "No se puede obtener nombre driver video\n");
	 exit(1);
   }

   printf("Driver: %s\n", driver);

   
   // Obtenemos información sobre las capacidades de nuestro
   // sistema respecto a SDL
   printf("\n == INFORMACION SDL_INFO == \n\n");
   if(propiedades->hw_available == 1)
	 printf("HW Compatible\n");
   else
	 printf("HW no compatible\n");

   if(propiedades->wm_available == 1)
	 printf("Hay un manejador de ventanas disponible\n");
   else
	 printf("No hay un manejador de ventanas disponible\n");

   if(propiedades->blit_hw == 1)
	 printf("El blitting hardware - hardware está acelerado\n");
   else
	 printf("El blitting hardware - hardware NO está acelerado\n");

   if(propiedades->blit_hw_CC == 1) {
	 printf("El blitting con transparencias hardware - hardware ");
	 printf("está acelerado\n");
   }
   else {
	 printf("El blitting con transparencias hardware - hardware ");
	 printf("NO está acelerado\n");
   }

   if(propiedades->blit_sw == 1)
	 printf("El blitting software - hardware está acelerado.\n");
   else
	 printf("El blitting software - hardware NO está acelerado. \n");
   
   if(propiedades->blit_sw_CC == 1) {
	 printf("El blitting software - hardware con transparencias");
	 printf(" está acelerado\n");
   }
   else {
	 printf("El blitting software - hardware con transparencias");
	 printf(" NO está acelerado\n");
   }

   if(propiedades->blit_sw_A == 1)
	 printf("El blitting software - hardware con alpha está acelerado\n");
   else
	 printf("El blitting software - hardware con alpha NO está acelerado\n");

   if(propiedades->blit_fill == 1)
	 printf("El rellenado de color está acelerado\n");
   else
	 printf("El rellenado de color NO está acelerado\n");

   printf("La memoria de video tiene %f MB\n", (float) propiedades->video_mem);
				
}
