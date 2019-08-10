#include "../include/CSISTEMASOLAR.h"


SISTEMASOLAR::SISTEMASOLAR()
{
	capa = galaxia;
}

SISTEMASOLAR::~SISTEMASOLAR()
{
}

void SISTEMASOLAR::addPlanet(PLANETA * newPlanet)
{
	newPlanet->parent = this;
	childrens.push_back(newPlanet);
	planetas.push_back(newPlanet);
}

void SISTEMASOLAR::addFoco(FOCO *newfoco)
{
	newfoco->parent = this;
	childrens.push_back(newfoco);
	focos.push_back(newfoco);
}

void SISTEMASOLAR::onInit()
{
}

void SISTEMASOLAR::onUpdate()
{
}

void SISTEMASOLAR::onDelete()
{
	for (int i = 0; i < focos.size(); i++)
	{
		focos[i]->onDelete();
		delete focos[i];
	}
	for (int i = 0; i < planetas.size(); i++)
	{
		planetas[i]->onDelete();
		delete planetas[i];
	}
}

void SISTEMASOLAR::calcularCentroMasa()
{
}

float SISTEMASOLAR::calcularMasaTotal()
{
	float sum=0;
	for (int i = 0; i < focos.size(); i++)
	{
		sum += focos[i]->getMasa();
	}
	for (int i = 0; i < planetas.size(); i++)
	{
		sum += planetas[i]->getMasa();
	}
	return sum;
}

void SISTEMASOLAR::drawSistem(sf::RenderWindow &wnd)
{
	for (int i = 0; i < focos.size(); i++)
	{
		focos[i]->draw(wnd);
	}
	for (int i = 0; i < planetas.size(); i++)
	{

	}
}
