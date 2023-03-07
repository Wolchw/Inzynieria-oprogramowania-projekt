#include "SFML/Graphics.hpp"
int main()
{
	sf::RenderWindow window(sf::VideoMode(800, 800), "test");
	sf::Event e;
	sf::RectangleShape rs(sf::Vector2f(100, 100));
	rs.setPosition(400, 400);
	while (window.isOpen())
	{
		window.clear(sf::Color::Black);
		window.draw(rs);
		window.display();
		while (window.pollEvent(e))
		{
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
			{
				rs.move(-10.f,0);
			}
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
			{
				rs.move(10.f, 0);
			}
			if (e.type == sf::Event::Closed)
				window.close();
		}
	}
}