#include "SDL3/SDL.h"
#include "SDL3_image/SDL_image.h"
#include "SDL3_mixer/SDL_mixer.h"
#include "SDL3_ttf/SDL_ttf.h"
#include "stdio.h"

#define WIDTH 640 
#define HEIGHT 640

SDL_Window *gWindow;
SDL_Renderer *gRenderer;

int main(){
    SDL_Event event;

    if(!SDL_Init(SDL_INIT_VIDEO)){
        printf("%s\n", SDL_GetError());
    }


    if(!SDL_CreateWindowAndRenderer("test", 640, 640, 0, &gWindow, &gRenderer)){
        printf("%s\n", SDL_GetError());
    }

    
    while(1){
        SDL_PollEvent(&event);
        if(event.type == SDL_EVENT_QUIT) break;


        SDL_SetRenderDrawColorFloat(gRenderer, 1, 0.2, 0.8, 1);
        SDL_RenderPresent(gRenderer);
    }


    SDL_DestroyWindow(gWindow);
    SDL_DestroyRenderer(gRenderer);
    SDL_Quit();

}
