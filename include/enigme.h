#ifndef ENIGME_H_INCLUDED

#define ENIGME_H_INCLUDED

#include <SDL/SDL_ttf.h>

#include <SDL/SDL.h>



typedef struct {

     char question[200];

     char reponse[200];

     char reponse2[100];

     char reponse3[100]; 

    SDL_Rect questionLocation;

    SDL_Rect reponseLocation;

    SDL_Rect textLocation;

    TTF_Font *font;

    SDL_Surface* screen;

    SDL_Color textColor;

    SDL_Color textColor_GREEN;

    SDL_Color textColor_YELLOW ;

    SDL_Color textColor_RED;

    SDL_Surface *spriteSheet;

    int currentFrame;

    Uint16 frameWidth;

    Uint16 frameHeight;

    int totalFrames;

} Enigme;



void afficherEnigme(Enigme e, SDL_Surface* screen, TTF_Font* font, SDL_Color textColor);

void genererEnigme(Enigme* p, char* nomfichier);

void animerEnigme(Enigme *e, SDL_Surface *screen);



#endif // ENIGME_H_INCLUDED

