// sfml lib->usr/local/lib include->usr/local/include
// extlibs(+Frameworks)->/library/Frameworks
// g++ -F /Library/Frameworks -c test1.cpp
// g++ test1.o -o t1 -framework sfml-graphics -framework sfml-window -framework sfml-system
// g++ test.cpp -I/usr/local/include -o t -L/usr/local/lib -lsfml-graphics -lsfml-window -lsfml-system

#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Network.hpp>

int main() {
  sf::RenderWindow window(sf::VideoMode(640, 480), "Game Incoming", sf::Style::Titlebar | sf::Style::Close);
  // double quotes for strings
  sf::Event ev;

  while (window.isOpen()) {
    while(window.pollEvent(ev)) {
      switch(ev.type)
      {
        case sf::Event::Closed:
          window.close();
          break;
        case sf::Event::KeyPressed:
          if (ev.key.code == sf::Keyboard::Escape)
            window.close();
          break;
        default:
          break;
      }
    }

    window.clear(sf::Color(255, 255, 255, 255));
    window.display();
  }

  return 0;
}
