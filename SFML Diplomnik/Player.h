#ifndef PLAYER_H
#define PLAYER_H

#include "Entity.h"

class Player :
	public Entity
{
private:
	//Variables


	//Initializer functions
	void initVariables();
	void initComponent();

public:
	Player(float x, float, sf::Texture& texture_sheet);
	virtual ~Player();

	//Functions

};

#endif // !PLAYER_H
