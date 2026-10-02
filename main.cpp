#include<SFML/Graphics.hpp>

int main(){
    sf::RenderWindow window(sf::VideoMode({800,800}),"Chess Game");

    while (window.isOpen()){
        while(auto event = window.pollEvent()){
            if (event ->is<sf::Event::Closed>())
            {
                window.close();

            }
        }
        window.clear();
        for(int row = 0 ; row < 8 ; row++){
            for(int col =0 ; col<8;col++){
                sf::RectangleShape square;

                square.setSize({100.f,100.f});


                square.setPosition({
                    col *100.f,
                    row *100.f
                });
                if ((row+col)%2 ==0){
                    square.setFillColor(sf::Color::White);
                }
                else
                {
                    square.setFillcolor(sf::Color::Black);
                }
                window.draw(square);
            }
        }
        window.display();
    }
    return 0;
}