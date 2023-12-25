#include <SFML/Graphics.hpp>
// change
//other changes
int main()
{
    sf::RenderWindow window(sf::VideoMode(800, 600), "My window", sf::Style::Default);
    sf::RectangleShape volodya(sf::Vector2f(100.f, 100.f));
    float x = 100;
    float y = 100;
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();

            if (event.type == sf::Event::KeyReleased)
            {
                if (event.key.code == sf::Keyboard::A)
                {
                    volodya.move(sf::Vector2f(1.f, 1.f));
                }
            }
            x += 10; // Increase the size by 10 in each iteration
            y += 10; // Increase the size by 10 in each iteration 
        }

        volodya.setSize(sf::Vector2f(x, y));
        window.clear();
        window.draw(volodya);
        window.display();
    }

    return 0;
}
