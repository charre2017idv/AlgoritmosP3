#include "../include/CMANAGER.h"

MANAGER::MANAGER()
{
}

MANAGER::~MANAGER()
{
}

void MANAGER::onIniti()
{
	SISTEMASOLAR* sis1 = new SISTEMASOLAR;
  // Sun
	FOCO* sol = new FOCO;
  sis1->addFoco(sol);
	sol->setName("sol");
	sol->setRatio(25);
	sol->setPosition(sf::Vector2f(0,0));
  sol->setShapeColor(sf::Color::Yellow);
  // Mercury
  PLANETA* Mercurio = new PLANETA;
  sis1->addPlanet(Mercurio);
  Mercurio->setMasa(2);
  Mercurio->setName("Mercurio");
  Mercurio->setRatio(2);
  Mercurio->setDistToFoco(10, 20);
  Mercurio->setPosition(sf::Vector2f(70, 70));
  Mercurio->setShapeColor(sf::Color::Blue);
  // Venus
  PLANETA* Venus = new PLANETA;
  sis1->addPlanet(Venus);
  Venus->setMasa(4);
  Venus->setName("Venus");
  Venus->setRatio(4);
  Venus->setDistToFoco(30, 40);
  Venus->setPosition(sf::Vector2f(100, 100));
  Venus->setShapeColor(sf::Color(255, 153, 51));
  // Earth
	PLANETA* tierra = new PLANETA;
	sis1->addPlanet(tierra);
	tierra->setMasa(10);
	tierra->setName("tierra");
	tierra->setRatio(10);
	tierra->setDistToFoco(50, 60);
  tierra->setPosition(sf::Vector2f(150,150));
  tierra->setShapeColor(sf::Color::Green);
  // Mars
  PLANETA* Marte = new PLANETA;
  sis1->addPlanet(Marte);
  Marte->setMasa(6);
  Marte->setName("Marte");
  Marte->setRatio(6);
  Marte->setDistToFoco(70, 80);
  Marte->setPosition(sf::Vector2f(200, 200));
  Marte->setShapeColor(sf::Color::Red);
  // Jupiter
  PLANETA* Jupiter = new PLANETA;
  sis1->addPlanet(Jupiter);
  Jupiter->setMasa(14);
  Jupiter->setName("Jupiter");
  Jupiter->setRatio(14);
  Jupiter->setDistToFoco(90, 100);
  Jupiter->setPosition(sf::Vector2f(250, 250));
  Jupiter->setShapeColor(sf::Color(217, 179, 140));
  // Saturn
  PLANETA* Saturno = new PLANETA;
  sis1->addPlanet(Saturno);
  Saturno->setMasa(17);
  Saturno->setName("Saturno");
  Saturno->setRatio(17);
  Saturno->setDistToFoco(110, 120);
  Saturno->setPosition(sf::Vector2f(300, 300));
  Saturno->setShapeColor(sf::Color(255, 187, 51));
  // Uranus
  PLANETA* Urano = new PLANETA;
  sis1->addPlanet(Urano);
  Urano->setMasa(11);
  Urano->setName("Urano");
  Urano->setRatio(11);
  Urano->setDistToFoco(130, 140);
  Urano->setPosition(sf::Vector2f(400, 400));
  Urano->setShapeColor(sf::Color(204, 255, 255));
  // Neptune
  PLANETA* Neptuno = new PLANETA;
  sis1->addPlanet(Neptuno);
  Neptuno->setMasa(12);
  Neptuno->setName("Neptuno");
  Neptuno->setRatio(12);
  Neptuno->setDistToFoco(150, 160);
  Neptuno->setPosition(sf::Vector2f(500, 500));
  Neptuno->setShapeColor(sf::Color(0, 102, 255));
  galaxia = new GALAXIA;
  galaxia->addSistem(sis1);
  galaxia->onInit();


}

void MANAGER::onDelete()
{
	galaxia->onDelete();
	delete galaxia;
}

void MANAGER::onRender(sf::RenderWindow & Wnd)
{
  galaxia->drawGalaxi(Wnd);
}

CNODO * MANAGER::search(std::string name, CNODO * node)
{
	if (node->nombre != name)
	{
		for (int i = 0; i < node->childrens.size(); i++)
		{
			CNODO *NODE = search(name, node->childrens[i]);
			if (node!=nullptr)
			{
				return NODE;
			}
		}
	}
	else
	{
		return node;
	}
	return nullptr;
}

