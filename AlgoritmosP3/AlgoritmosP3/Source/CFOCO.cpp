#include "../include/CFOCO.h"

FOCO::FOCO()
{
}

FOCO::~FOCO()
{
}

void FOCO::onUpdate()
{
}

void FOCO::setShape()
{
  foco.setRadius(ratio);
  foco.setPosition(position.x, position.y);
  foco.setFillColor(focoColor);
}

void FOCO::setShapeColor(sf::Color color)
{
  focoColor = color;
}

void FOCO::draw(sf::RenderWindow & wnd)
{
  setShape();
  wnd.draw(foco);
}
