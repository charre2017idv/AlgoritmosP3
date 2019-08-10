#include<SFML/Window.hpp>
#include <SFML/Graphics.hpp>

int main()
{
	sf::RenderWindow window(sf::VideoMode(1920, 1080),"win");
	sf::Event even;

	while (window.isOpen())
	{
		while (window.pollEvent(even))
		{
			// "close requested" event: we close the window
			if (even.type == sf::Event::Closed)
			{
				window.close();
			}
		}
	}
	return 0;
}