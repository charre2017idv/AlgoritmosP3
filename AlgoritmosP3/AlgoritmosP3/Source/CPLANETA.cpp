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
  if (position.x <= -(Afelio - 0.5f))
  {
    m_direction_X = 1;
  }
  else if (position.x >= (perihelio - 0.5f))
  {
    m_direction_X = -1;
  }
  position.x += speedAfelio * (abs(position.y + 0.1f) / ratio) * m_direction_X;
  if (position.x > 0.0f)
  {
    position.y = sqrt(abs(1 - (pow(position.x, 2) / pow(perihelio, 2)))) * ratio * m_direction_X;
  }
  else
  {
    position.y = sqrt(abs(1 - (pow(position.x, 2) / pow(Afelio, 2)))) * ratio * m_direction_X;
  }

  
//position.x += speedAfelio * time;
  //position.x += time;
  //float v = sqrt((6.673) * (masa) / ratio) * time;
  //T.rotate(1.0, { position.x / 2.f, position.y / 2.f });
  planeta.setPosition(position.x  * time, position.y  );
}

void PLANETA::onDelete()
{
	for (int i = 0; i < lunas.size(); i++)
	{
		lunas[i]->onDelete();
		delete lunas[i];
	}
}

void PLANETA::setShape()
{
  planeta.setRadius(ratio);
  planeta.setPosition(position.x, position.y);
  planeta.setFillColor(planetColor);
}

void PLANETA::setShapeColor(sf::Color color)
{
  planetColor = color;
}

void PLANETA::draw(sf::RenderWindow & wnd)
{
  //setShape();
  //onUpdate();
  time += .2;
  wnd.draw(planeta);
}
