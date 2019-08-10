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
	PLANETA* tierra = new PLANETA;
	tierra->setMasa(10);
	tierra->setName("tierra");
	tierra->setRatio(10);
	tierra->setDistToFoco(500, 400);
	FOCO* sol = new FOCO;
	sol->setName("sol");
	sol->setRatio(25);
	sol->setPosition(sf::Vector2f(0,0));
	sis1->addPlanet(tierra);
	galaxia = new GALAXIA;

}

void MANAGER::onDelete()
{
	galaxia->onDelete();
	delete galaxia;
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

