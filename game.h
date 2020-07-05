#pragma once
#include "resourceManager.h";
#include "spriteRenderer.h";
#include "Vector2.h";
#include "gameObject.h";
#include <vector>;
#include <algorithm>;
#include <iostream>;

enum GameState {
	GAME_ACTIVE,
	GAME_MENU,
	GAME_WIN
};
class Game
{
public:
	std::vector<GameObject> objects;
	// game state
	GameState    State;
	bool         Keys[1024];
	unsigned int Width, Height;
	// constructor/destructor
	Game(unsigned int width, unsigned int height);
	~Game();
	// initialize game state (load all shaders/textures/levels)
	void Init();
	// game loop
	void ProcessInput(float dt);
	void Update(float dt);
	void Render();
};
