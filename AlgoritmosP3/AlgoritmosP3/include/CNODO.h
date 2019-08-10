#pragma once
#include <vector>
#include <SFML/Graphics.hpp>
#include <string>
enum CAPAS
{
	planeta = 0,
	sistema,
	galaxia,
	mundial
};
class CNODO
{
public:
	CNODO();
	~CNODO();
	CNODO* parent=nullptr;
	std::vector<CNODO*>childrens;
	sf::Vector2f position;
	CAPAS capa;
	std::string nombre="ñ";

private:

};

