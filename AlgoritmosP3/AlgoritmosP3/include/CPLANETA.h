#pragma once
#include "CSATELITE.h"
#include "SFML/Graphics.hpp"
#include "CNODO.h"
class PLANETA :public CNODO
{
public:
	PLANETA();
	~PLANETA();
	void addSatelite(SATELITE*);

	void setName(std::string name) { nombre = name; };
	std::string getName() { return nombre; };
	
	void setRatio(float rat) { ratio = rat; };
	float getRatio() { return ratio; };
	
	void setPosition(sf::Vector2f pos) { position = pos; };
	sf::Vector2f getPosition(sf::Vector2f pos) { return position; };
	
	int getNumLunas() { return lunas.size(); };

	void setMasa(float ms) { masa = ms; };
	float getMasa() { return masa; };

	void setSpeeds(float max, float min) { speedAfelio = max; speedgHepielio = min; };

	void setDistToFoco(float max, float min) { Afelio = max; hepielio = min; };

	void onInit();
	void onUpdate();
	void onDelete();

	void draw(sf::RenderWindow & wnd);

	void calcularCentroMasa();
	float calcularMasaTotal();

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
	sf::CircleShape planeta;
	std::vector<SATELITE*> lunas;

};

