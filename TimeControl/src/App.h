#pragma once
#include <SDL2/SDL.h>
#include <chrono>


class App
{
	SDL_WindowFlags window_flags;
	SDL_Window* window;
	SDL_GLContext gl_context;

public:
	bool Init();
	void Start();
	void Update(std::chrono::milliseconds delta_time);
	void Cleanup();
};
