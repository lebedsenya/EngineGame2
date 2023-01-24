#include <SDL2/SDL.h>

void handleInput() {
    SDL_Event event;
    while (SDL_PollEvent(&event)) {
        switch (event.type) {
            case SDL_KEYDOWN:
                switch (event.key.keysym.sym) {
                    case SDLK_LEFT:
                        // Handle left arrow key press
                        break;
                    case SDLK_RIGHT:
                        // Handle right arrow key press
                        break;
                    // ...
                }
                break;
            case SDL_MOUSEBUTTONDOWN:
                // Handle mouse button press
                break;
            // ...
        }
    }
}
