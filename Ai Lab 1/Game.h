/// <summary>
/// author Pete Lowe May 2019
/// you need to change the above line or lose marks
/// </summary>
#ifndef GAME_HPP
#define GAME_HPP
/// <summary>
/// include guards used so we don't process this file twice
/// same as #pragma once
/// Don't forget the endif at the bottom
/// </summary>
#include <SFML/Graphics.hpp>
#include "Player.h"
#include "Enemy.h"
#include "Seek.h"
#include "Arrive.h"
#include "Pursue.h"
#include "Collision.h"

class Game
{
public:
	Game();
	~Game();
	/// <summary>
	/// main method for game
	/// </summary>
	void run();

private:
	Player myPlayer;
	Enemy myEnemy;
	Seek mySeek;
	Arrive myArrive;
	Pursue myPursue;

	void processEvents();
	void processKeys(sf::Event t_event);
	void update(sf::Time t_deltaTime);
	void render();
	void checkIfNumberKeysPressed();
	void collision();

	void setupFontAndText();

	bool isOnePressed;
	bool isTwoPressed;
	bool isThreePressed;
	bool isFourPressed;
	bool isFivePressed;

	sf::RenderWindow m_window; // main SFML window
	sf::Font m_ArialBlackfont; // font used by message
	sf::Text enemySpawnText;
	bool m_exitGame; // control exiting game

};

#endif // !GAME_HPP