#include "Board.h"

Board::Board(int size, float square)
    : boardSize(size), squareSize(square)
{
}

void Board::draw(sf::RenderWindow& window)
{
    for (int row = 0; row < boardSize; row++)
    {
        for (int col = 0; col < boardSize; col++)
        {
            sf::RectangleShape square;

            square.setSize({
                squareSize,
                squareSize
            });

            square.setPosition({
                col * squareSize,
                row * squareSize
            });

            if ((row + col) % 2 == 0)
            {
                square.setFillColor(sf::Color::White);
            }
            else
            {
                square.setFillColor(sf::Color::Black);
            }

            window.draw(square);
        }
    }
}