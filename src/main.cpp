#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <iostream>
#include <vector>

#include "RenderWindow.hpp"
#include "Entity.hpp"
#include "Math.hpp"

int main(int argc, char* args[])
{
    if (SDL_Init(SDL_INIT_VIDEO) > 0)
    {
        std::cout << "SDL crashed. Error: " << SDL_GetError();
    }

    if (!IMG_Init(IMG_INIT_PNG))
    {
        std::cout << "SDL_image crashed. Error: " << SDL_GetError();
    }

    RenderWindow window("GAME v1.0", 1280, 720);

    SDL_Texture* sampleTex = window.loadTexture("res/gfx/logo.png");

    // dynamic array of entities
    std::vector<Entity> entities = {
        Entity(0, 0, sampleTex, 766, 766)
    };

    bool gameRunning = true;

    SDL_Event event;

    while (gameRunning)
    {
        while (SDL_PollEvent(&event))
        {
            if (event.type == SDL_QUIT)
            {
                gameRunning = false;
            }
        }

        window.clearWindow();

        for (Entity &e : entities)
        {
            window.renderEntity(e);
        }

        window.display();
    }

    window.cleanUp();
    return 0;
}