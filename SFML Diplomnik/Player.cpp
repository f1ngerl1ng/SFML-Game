#include "Player.h"

//Initializer functions

void Player::initVariables()
{
	
}

void Player::initComponent()
{
	
}

Player::Player(float x, float y, sf::Texture& texture_sheet) 
{
	this->initVariables();
	this->initComponent();

	this->setTexture(texture_sheet);
	this->setPosition(x, y);

	this->createMovementComponent(300.f, 15.f, 5.f);
	this->createAnimationComponent(this->sprite, texture_sheet);

	this->animationComponent->addAnimation("IDLE_FEFT", 100.f, 1, 1, 14, 1, 192, 192);
}

Player::~Player()
{

}
