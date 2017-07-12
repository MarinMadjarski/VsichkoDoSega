#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>


int main(int argc, char ** argv)
{
    // variables
    bool quit = false;
    SDL_Event event;
    int x = 0;
    int y = 0;
    int w = 50;
    int h = 50;
    // init SDL
    SDL_Init(SDL_INIT_VIDEO);
    SDL_Window * window = SDL_CreateWindow("SDL2 Keyboard/Mouse events",
        SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 500, 500, 0);
    SDL_Renderer * renderer = SDL_CreateRenderer(window, -1, 0);
    SDL_Surface * image = IMG_Load("GREEN.png");
    SDL_Texture * texture = SDL_CreateTextureFromSurface(renderer,
        image);
    SDL_FreeSurface(image);
    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
    // handle events
    while (!quit)
    {
        SDL_WaitEvent(&event);
        switch (event.type)
        {
        case SDL_QUIT:
            quit = true;
            break;
        case SDL_MOUSEBUTTONDOWN:
            switch (event.button.button){
            case SDL_BUTTON_LEFT:
                w+=10;
                h+=10;
                if(w == 510 || h == 510){
                    w = 50;
                    h = 50;
                }
                break;
                case SDL_BUTTON_RIGHT:
                    w-=10;
                    h-=10;
                if(w == -10 || h == -10){
                    w = 50;
                    h = 50;
                }
                break;
            }

        }
        SDL_Rect dstrect = { x, y, w, h };
        SDL_RenderClear(renderer);
        SDL_RenderCopy(renderer, texture, NULL, &dstrect);
        SDL_RenderPresent(renderer);
    }
    // cleanup SDL
    SDL_DestroyTexture(texture);
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();
    return 0;
}
