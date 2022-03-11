// g++ test1.cpp -I/usr/local/include -o t1 -L/usr/local/lib -lsfml-graphics -lsfml-window -lsfml-system

#include <SFML/Graphics.hpp>

int main() {
  sf::RenderWindow window(sf::VideoMode(800, 600), "My Window");

  while (window.isOpen()) {
    sf::Event event;
    while (window.pollEvent(event)) {
      if (event.type == sf::Event::Closed)
        window.close();
    }
    window.clear(sf::Color(255,255,255,255));
    window.display();
  }
  return 0;
}
