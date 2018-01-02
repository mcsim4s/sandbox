//
// Created by Maxim Gribov on 02.01.18.
//

#ifndef SANDBOX_APPLICATION_HPP
#define SANDBOX_APPLICATION_HPP

#include <SFML/Graphics.hpp>
#include <list>
#include "Car.hpp"
#include "Wall.hpp"


#define WINDOW_WIDTH 1600
#define WINDOW_HEIGHT 900

enum InputState {
    NONE, DRAG, DRAW
};

class Application {
public:
    void start();

private:
    InputState currentInputState = NONE;
    sf::RenderWindow* window = NULL;
    const sf::Color bgColor = sf::Color(167, 200, 209);
    sf::Event::MouseMoveEvent mousePos;
    std::list<std::list<sf::Shape*>*> walls;
    sf::ConvexShape* newWall = NULL;

    void processKeyPressed(sf::Event event);

    void processKeyReleased(sf::Event event);

    void processMouseKeyPressed(sf::Event event);

    void processMouseMoved(sf::Event event);

    void processMouseKeyReleased(sf::Event event);
};


#endif //SANDBOX_APPLICATION_HPP