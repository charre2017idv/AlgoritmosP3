#include "../include/CPLANETA.h"
PLANETA::PLANETA()
{
}

PLANETA::~PLANETA()
{
}

void PLANETA::addSatelite(SATELITE * newSatelite)
{
	lunas.push_back(newSatelite);
}

void PLANETA::onInit()
{
}

void PLANETA::onUpdate()
{
}

void PLANETA::onDelete()
{
	for (int i = 0; i < lunas.size(); i++)
	{
		lunas[i]->onDelete();
		delete lunas[i];
	}
}

void PLANETA::draw(sf::RenderWindow & wnd)
{
}
