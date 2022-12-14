
#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>

class Enemy
{

public:
	void init();
	void draw(sf::RenderWindow& window);
	void update(sf::Time deltaTime);
	void movement(sf::Time deltaTime);
	void spawn();
	sf::Sprite getVisionCone();
	sf::Sprite visionConeSprite;

private:
	sf::Texture enemyTexture;
	sf::Sprite enemySprite;
	sf::Font wanderFont;
	sf::Text wanderText;

	sf::Texture visionConeTexture;
	int speed = 3;
	float rotation = 0;
	sf::Vector2f randPos = { 0.0f,0.0f };
	sf::Vector2f velocity = { 0.0f,0.0f };
	float randPosX;
	float randPosY;
	float xMovement = 0;
	float yMovement = 0;
	int enemyRotateTimer = 0;
	bool rotateLeft;
	bool rotateRight;

	sf::CircleShape visionCone;
};



