#ifndef BUTTON_H
#define BUTTON_H

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <sstream>

#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Network.hpp>

enum button_states{
	BTN_IDLE = 0, BTN_HOVER, BTN_ACTIVE
};

class Button
{
private:
	short unsigned buttonState;

	sf::RectangleShape shape;
	sf::Font* font;
	sf::Text text;

	sf::Color textIdleColor;
	sf::Color textHoverColor;
	sf::Color textActiveColor;

	sf::Color idleColor;
	sf::Color hoverColor;
	sf::Color activeColor;


public:
	Button(float x, float y, float width, float height, 
		sf::Font* font, std::string text, unsigned charecter_size,
		sf::Color text_idle_color, sf::Color text_hover_color, sf::Color text_active_color,
		sf::Color idle_olor, sf::Color hover_color, sf::Color active_volor);
	~Button();

	//Accessors
	const bool isPressed() const;

	//Functions
	void update(sf::Vector2f mousePos);
	void render(sf::RenderTarget* target);
};

#endif // !BUTTON_H

