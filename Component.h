#pragma once
#include "Entity.h";
class Component
{
public:
	GameObject* parent = nullptr;
	Component(GameObject* parent);
	Component();
	~Component();
	virtual void Update(float dt) {};
};

