#pragma once
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>

class Entity
{
private:
    SDL_Rect currentFrame;
    SDL_Texture* tex;
    float x, y;

public:
    Entity(float p_x, float p_y, SDL_Texture* p_tex, float p_w, float p_h);
    float getX();
    float getY();
    SDL_Texture* getTex();
    SDL_Rect getCurrentFrame();
};