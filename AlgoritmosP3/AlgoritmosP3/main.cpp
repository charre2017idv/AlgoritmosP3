#include<SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include "../include/CMANAGER.h"
#include <chrono>

int main()
{
  MANAGER g_manager;
	sf::RenderWindow window(sf::VideoMode(1920, 1080),"win");
	sf::Event even;
  g_manager.onIniti();

	while (window.isOpen())
	{
		while (window.pollEvent(even))
		{
			// "close requested" event: we close the window
			if (even.type == sf::Event::Closed)
			{
				window.close();
			}
      if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Escape))
      {
        exit(1);
      }
		}
    window.clear(sf::Color(0, 0, 0));
    g_manager.onRender(window);
    window.display();
	}
	return 0;
}