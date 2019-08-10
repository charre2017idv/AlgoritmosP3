#pragma once
#include <string>
#include <SFML/Graphics.hpp>
#include "CNODO.h"
class SATELITE :public CNODO
{
public:
	SATELITE();
	~SATELITE();
	void setName(std::string name) { nombre = name; };
	std::string getName() { return nombre; };

	void setRatio(float rat) { ratio = rat; };
	float getRatio() { return ratio; };

	void setPosition(sf::Vector2f pos) { position = pos; };
	sf::Vector2f getPosition(sf::Vector2f pos) { return position; };

	void setMasa(float ms) { masa = ms; };
	float getMasa() { return masa; };

	void setSpeeds(float max, float min) { speedAfelio = max; speedgHepielio = min; };
	
	void distToPlanet(float max, float min) { Afelio = max; hepielio = min; };

	void onInit() {};
	void onUpdate();
	void onDelete() {};

private:
	float ratio;
	float Afelio;
	float hepielio;
	float speedAfelio;
	float speedgHepielio;
	float masa;
	sf::Vector2f centroDeMasa;
	//sf::Vector2f position;
	//std::string nombre;
	sf::CircleShape luna;
};

