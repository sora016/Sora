#include <SFML/Graphics.hpp>

int main()
{
    sf::RenderWindow window(sf::VideoMode(800, 600), "SFML works!");
    sf::RectangleShape rectangle(sf::Vector2f(128.0f,128.0f)); 
    
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

    //Drawing here;
    window.clear();
    rectangle.setFillColor(sf::Color::Red); 
    rectangle.setPosition(320,240);
    window.draw(rectangle);
    window.display();
    }
    return 0;
}
