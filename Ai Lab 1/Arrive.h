#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include "Player.h"

class Arrive
{
public:
	void init();
	void draw(sf::RenderWindow& window, bool canSlowArriveBeDrawn, bool canFastArriveBeDrawn);
	void update(sf::Time deltaTime, Player t_player);
	void arriveMovement(sf::Time deltaTime, Player t_player);
	void spawnSlow();
	void spawnFast();
	const static int MAX_ARRIVE_ENEMIES = 2;
	sf::Sprite getVisionConeSlow();
	sf::Sprite getVisionConeFast();
	sf::Sprite visionConeSprite[MAX_ARRIVE_ENEMIES];

private:

	sf::Texture arriveTexture;
	sf::Sprite arriveSprite[MAX_ARRIVE_ENEMIES];
	sf::Font arriveFont;
	sf::Text arriveText[MAX_ARRIVE_ENEMIES];

	sf::Texture visionConeTexture;

	sf::Vector2f playerPosition;
	sf::Vector2f position;
	sf::Vector2f velocity;
	const float PI = 3.141592;
	const int MAX_SPEED_SLOW = 2;
	const int MAX_SPEED_FAST = 5;
	float rotation;
	float radius = 200;
	float smallRadius = 50;

};

