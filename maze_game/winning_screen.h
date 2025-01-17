#pragma once

#include "game_state.h"

class winning_screen : public tiny_state
{
public:
	winning_screen();
	void Initialize(sf::RenderWindow* window);
	void Update(sf::RenderWindow* window);
	void Render(sf::RenderWindow* window);
	void Destroy(sf::RenderWindow* window);
private:
	sf::Font font;
	sf::Text winner;
	sf::View cam_win;
	sf::Music winm;
	sf::Texture bback, cake;
	sf::Sprite bg, win_cake;
};