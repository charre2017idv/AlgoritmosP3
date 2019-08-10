#pragma once
#include <SFML/Graphics.hpp>
#include <string>
#include "CNODO.h"
class FOCO :public CNODO
{
public:
	FOCO();
	~FOCO();
	void setName(std::string name) { nombre = name; };
	std::string getName() { return nombre; };
	
	void setRatio(float rat) { ratio = rat; };
	float getRatio() { return ratio; };
	
	void setPosition(sf::Vector2f pos) { position = pos; };
	sf::Vector2f getPosition(sf::Vector2f pos) { return position; };

	void setMasa(float ms) { masa = ms; };
	float getMasa() { return masa; };

	void onInit() {};
	void onUpdate();
	void onDelete() {};
	void draw(sf::RenderWindow& wnd);

private:
	float ratio;
	float masa;
	sf::Vector2f centroDeMasa;
	//sf::Vector2f position;
	//std::string nombre;
	sf::CircleShape foco;
};
