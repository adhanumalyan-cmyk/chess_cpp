#pragma once

#include<SFML/Graphics.hpp>

class Board{
    private :
      int boardSize;
      float squareSize;

    public:
       Board(int size, float square);

       void draw(sf::Renderwindow& window);
};