#include <SDL3/SDL.h>
#include <stdio.h>
#include <string>
// The image we will load and show on the screen

int main()
{

    if (SDL_Init(SDL_INIT_VIDEO) != 0)
    {
        // SDL initialization failed
        return 1;
    }

    // Create a window
    SDL_Window *window = SDL_CreateWindow("SDL Window", 800, 600, SDL_WINDOW_VULKAN);
    if (window == nullptr)
    {
        // Window creation failed
        printf("window fail \n");
        SDL_Quit();
        return 1;
    }

    SDL_Surface *helloWorld = SDL_LoadBMP("images/sdl2.bmp");
    if (helloWorld == nullptr)
    {
        // Window creation failed
        printf("image fail \n");
        SDL_Quit();
        return 1;
    }
    SDL_UpdateWindowSurface(window);
    auto gScreenSurface = SDL_GetWindowSurface(window);
    SDL_BlitSurface(helloWorld, NULL, gScreenSurface, NULL);
    SDL_UpdateWindowSurface(window);

    // Run your program logic
    printf("Changes! \n");
    SDL_Delay(500);

    // Cleanup and quit SDL
    SDL_DestroyWindow(window);
    SDL_Quit();
    return 0;
}
