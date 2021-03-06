#ifndef CROSSHAIR_H
#define CROSSHAIR_H

#include <SFML/Graphics.hpp>

class Master_Renderer;

class Crosshair
{
    public:
        Crosshair();

        void draw(Master_Renderer& renderer);

        void showMiningTexture();
        void showRegularTexture();

    private:
        void loadTextures();

        sf::Texture     m_crossTexture;
        sf::Texture     m_miningTexture;

        sf::RectangleShape  m_quad;

        constexpr static int SIZE = 15;
};

#endif // CROSSHAIR_H
