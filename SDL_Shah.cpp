#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <iostream>
#include <string>

SDL_Window* window = NULL;
SDL_Texture* currentImage = NULL;    //ChessBoard
SDL_Texture* Image2 = NULL;          //pawn White
SDL_Texture* Image3 = NULL;          //Knight White
SDL_Texture* Image4 = NULL;          //Bishop White
SDL_Texture* Image5 = NULL;          //Rook White
SDL_Texture* Image6 = NULL;          //Queen White
SDL_Texture* Image7 = NULL;          //King WHite
SDL_Texture* Image8 = NULL;          //Pawn Black
SDL_Texture* Image9 = NULL;          //Knight Black
SDL_Texture* Image10 = NULL;         //Bishop Black
SDL_Texture* Image11 = NULL;         //Rook Black
SDL_Texture* Image12 = NULL;         //Queen Black
SDL_Texture* Image13 = NULL;         //King Black

SDL_Rect imgRect2;  //Pawn Black
SDL_Rect imgRect3;  //Pawn Black
SDL_Rect imgRect4;  //Pawn Black
SDL_Rect imgRect5;  //Pawn Black
SDL_Rect imgRect6;  //Pawn Black
SDL_Rect imgRect7;  //Pawn Black
SDL_Rect imgRect8;  //Pawn Black
SDL_Rect imgRect9;  //Pawn Black

SDL_Rect imgRect10; //Pawn White
SDL_Rect imgRect11; //Pawn White
SDL_Rect imgRect12; //Pawn White
SDL_Rect imgRect13; //Pawn White
SDL_Rect imgRect14; //Pawn White
SDL_Rect imgRect15; //Pawn White
SDL_Rect imgRect16; //Pawn White
SDL_Rect imgRect17; //Pawn White

SDL_Rect imgRect18; //Knight White
SDL_Rect imgRect19; //Knight Black

SDL_Rect imgRect20; //Bishop White
SDL_Rect imgRect21; //Bishop Black

SDL_Rect imgRect22; //Rook White
SDL_Rect imgRect23; //Rook Black

SDL_Rect imgRect24; //Queen White
SDL_Rect imgRect25; //Queen Black

SDL_Rect imgRect26; //King White
SDL_Rect imgRect27; //King Black


SDL_Renderer* renderTarget = NULL;

SDL_Texture* LoadTexture(std::string filePath, SDL_Renderer* renderTarget)
{
    SDL_Texture* texture = NULL;
    SDL_Surface* surface = IMG_Load(filePath.c_str());
    if(surface == NULL){
        std::cout<< "ERROR\n";
    }
    else{
        texture = SDL_CreateTextureFromSurface(renderTarget, surface);
        if(texture == NULL){

            std::cout<< "ERROR\n";

        }
    }

    SDL_FreeSurface(surface);

    return texture;
}

void SetChessPiecesCoordinates(){

/*                  Pawn White START              */
    imgRect2.h = 40;
    imgRect2.w = 54;
    imgRect2.x = 64+5;
    imgRect2.y = 100;

    imgRect3.h = 40;
    imgRect3.w = 54;
    imgRect3.x = (64*2)+5;
    imgRect3.y = 148;

    imgRect4.h = 40;
    imgRect4.w = 54;
    imgRect4.x = (64*3)+5;
    imgRect4.y = 100;

    imgRect5.h = 40;
    imgRect5.w = 54;
    imgRect5.x = (64*4)+5;
    imgRect5.y = 148;

    imgRect6.h = 40;
    imgRect6.w = 54;
    imgRect6.x = (64*5)+5;
    imgRect6.y = 100;

    imgRect7.h = 40;
    imgRect7.w = 54;
    imgRect7.x = (64*6)+5;
    imgRect7.y = 148;

    imgRect8.h = 40;
    imgRect8.w = 54;
    imgRect8.x = (64*7)+5;
    imgRect8.y = 100;

    imgRect9.h = 40;
    imgRect9.w = 54;
    imgRect9.x = (64*8)+5;
    imgRect9.y = 148;
/*                  Pawn Black END              */

/*                  Pawn White START              */
    imgRect10.h = 40;
    imgRect10.w = 54;
    imgRect10.x = 64+5;
    imgRect10.y = 389;

    imgRect11.h = 40;
    imgRect11.w = 54;
    imgRect11.x = (64*2)+5;
    imgRect11.y = 341;

    imgRect12.h = 40;
    imgRect12.w = 54;
    imgRect12.x = (64*3)+5;
    imgRect12.y = 389;

    imgRect13.h = 40;
    imgRect13.w = 54;
    imgRect13.x = (64*4)+5;
    imgRect13.y = 341;

    imgRect14.h = 40;
    imgRect14.w = 54;
    imgRect14.x = (64*5)+5;
    imgRect14.y = 389;

    imgRect15.h = 40;
    imgRect15.w = 54;
    imgRect15.x = (64*6)+5;
    imgRect15.y = 341;

    imgRect16.h = 40;
    imgRect16.w = 54;
    imgRect16.x = (64*7)+5;
    imgRect16.y = 389;

    imgRect17.h = 40;
    imgRect17.w = 54;
    imgRect17.x = (64*8)+5;
    imgRect17.y = 341;



}

void Loader(){
    currentImage = LoadTexture("chessboard2.png", renderTarget);
   Image2 = LoadTexture("PawnBlack.png", renderTarget);
   Image3 = LoadTexture("KnightBlack.png", renderTarget);
   Image4 = LoadTexture("BishopBlack.png", renderTarget);
   Image5 = LoadTexture("RookBlack.png", renderTarget);
    Image6 = LoadTexture("QueenBlack.png", renderTarget);
    Image7 = LoadTexture("Kinglack.png", renderTarget);
    Image8 = LoadTexture("PawnWhite.png", renderTarget);
    Image9 = LoadTexture("KnightWhite.png", renderTarget);
    Image10 = LoadTexture("BishopWhite.png", renderTarget);
   Image11 = LoadTexture("RookWhite.png", renderTarget);
    Image12 = LoadTexture("QueenWhite.png", renderTarget);
    Image13 = LoadTexture("KingWhite.png", renderTarget);
}

void CopyRender(){

    SDL_RenderCopy(renderTarget, currentImage, NULL, NULL);

    SDL_RenderCopy(renderTarget, Image8, NULL, &imgRect10);
    SDL_RenderCopy(renderTarget, Image8, NULL, &imgRect11);
    SDL_RenderCopy(renderTarget, Image8, NULL, &imgRect12);
    SDL_RenderCopy(renderTarget, Image8, NULL, &imgRect13);
    SDL_RenderCopy(renderTarget, Image8, NULL, &imgRect14);
    SDL_RenderCopy(renderTarget, Image8, NULL, &imgRect15);
    SDL_RenderCopy(renderTarget, Image8, NULL, &imgRect16);
    SDL_RenderCopy(renderTarget, Image8, NULL, &imgRect17);

   SDL_RenderCopy(renderTarget, Image3, NULL, &imgRect18);
   SDL_RenderCopy(renderTarget, Image4, NULL, &imgRect20);
   SDL_RenderCopy(renderTarget, Image5, NULL, &imgRect22);
   SDL_RenderCopy(renderTarget, Image6, NULL, &imgRect24);
   SDL_RenderCopy(renderTarget, Image7, NULL, &imgRect26);

   SDL_RenderCopy(renderTarget, Image9, NULL, &imgRect19);
   SDL_RenderCopy(renderTarget, Image10, NULL, &imgRect21);
   SDL_RenderCopy(renderTarget, Image11, NULL, &imgRect23);
   SDL_RenderCopy(renderTarget, Image12, NULL, &imgRect25);
   SDL_RenderCopy(renderTarget, Image13, NULL, &imgRect27);

}

void CopyRenderBlack(){
    SDL_RenderCopy(renderTarget, Image2, NULL, &imgRect2);
    SDL_RenderCopy(renderTarget, Image2, NULL, &imgRect3);
    SDL_RenderCopy(renderTarget, Image2, NULL, &imgRect4);
    SDL_RenderCopy(renderTarget, Image2, NULL, &imgRect5);
    SDL_RenderCopy(renderTarget, Image2, NULL, &imgRect6);
    SDL_RenderCopy(renderTarget, Image2, NULL, &imgRect7);
    SDL_RenderCopy(renderTarget, Image2, NULL, &imgRect8);
    SDL_RenderCopy(renderTarget, Image2, NULL, &imgRect9);
}

bool Init(){

    SDL_Init(SDL_INIT_VIDEO);

    int imgFlags = IMG_INIT_PNG;
    if(IMG_Init(imgFlags) != imgFlags){
        std::cout<<"ERROR: "<< IMG_GetError << std::endl;
    }

    window = SDL_CreateWindow("SDL2 TEST", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 640, 480, SDL_WINDOW_SHOWN);
    renderTarget = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);

    return true;
}

void Destroy(){
    SDL_DestroyWindow(window);
    SDL_DestroyTexture(currentImage);
    SDL_DestroyTexture(Image2);
    SDL_DestroyRenderer(renderTarget);
}

void Reset(){
    window = NULL;
    currentImage = NULL;
    Image2 = NULL;
    renderTarget = NULL;
}

int main(int argc, char *argv[])
{

    SetChessPiecesCoordinates();

    Init();
    Loader();

    bool isRunning = true;
    bool black = false;
    SDL_Event ev;

    while (isRunning){
        while(SDL_PollEvent(&ev) != 0){
            switch (ev.type)
            {
            case SDL_QUIT:
                isRunning = false;
            break;
            case SDL_KEYDOWN:
                switch (ev.key.keysym.sym)
                {
                    case SDLK_RETURN:
                    black = true;
                    break;
                    case SDLK_BACKSPACE:
                    black = false;
                    break;
                }
                break;
            }


        }
        SDL_RenderClear(renderTarget);
        CopyRender();
        if(black){
            CopyRenderBlack();
        }
        SDL_RenderPresent(renderTarget);
    }


    Destroy();
    Reset();

    SDL_Quit();

    return 0;
}
