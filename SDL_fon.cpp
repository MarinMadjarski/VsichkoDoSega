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

    int x1 = 200;
    int y1 = 200;
    int w1 = 150;
    int h1 = 150;
    double angle = 0;
    SDL_Point* centre = 0;

    SDL_RendererFlip flip = SDL_FLIP_NONE;

    // init SDL
    SDL_Init(SDL_INIT_VIDEO);
    SDL_Window * window = SDL_CreateWindow("SDL2 Keyboard/Mouse events",
        SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 500, 500, 0);
    SDL_Renderer * renderer = SDL_CreateRenderer(window, -1, 0);
    SDL_Surface * image = IMG_Load("GREEN.png");
    SDL_Surface * image2 = IMG_Load("DICE.png");

    SDL_Texture * texture = SDL_CreateTextureFromSurface(renderer,
        image);
    SDL_Texture * texture2 = SDL_CreateTextureFromSurface(renderer,
        image2);
    SDL_FreeSurface(image);
    SDL_FreeSurface(image2);
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

            }
            break;
        case SDL_KEYDOWN: // natiskaite butonite ot 1 do 5
            switch(event.key.keysym.sym){
                case SDLK_1:
                    angle += 60;
                break;
                case SDLK_2:
                    angle -=60;
                break;
                case SDLK_3:
                    flip = SDL_FLIP_VERTICAL;
                break;
                case SDLK_4:
                    flip = SDL_FLIP_HORIZONTAL;
                break;
                case SDLK_5:
                    flip = SDL_FLIP_NONE;
                break;
            }

        }
        SDL_Rect dstrect = { x, y, w, h };
        SDL_Rect dstrect2= { x1, y1, w1, h1 };
        SDL_RenderClear(renderer);
        SDL_RenderCopy(renderer, texture, NULL, &dstrect);
        SDL_RenderCopyEx(renderer,texture2,NULL,&dstrect2, angle, centre, flip);
//        SDL_RenderCopyEx(renderer, texture2, NULL, &dstrect2);
        SDL_RenderPresent(renderer);
    }
    // cleanup SDL
    SDL_DestroyTexture(texture);
    SDL_DestroyTexture(texture2);
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();
    return 0;
}
