#include <SFML/Graphics.hpp>
#include "settings.hpp"

int main()
{
    srand(time(0));

    // Create the main window
    sf::RenderWindow app(sf::VideoMode(winSize[0], winSize[1]), gameTitle);
    app.setFramerateLimit(fps);

    // Load a sprite to display
    int backgroundId = rand() % backgroundsCount;

    sf::Texture tBackground;
    if (!tBackground.loadFromFile(backgrounds[backgroundId]))
        return EXIT_FAILURE;
    sf::Sprite sBackground(tBackground);

    sf::Texture tBlock;
    if (!tBlock.loadFromFile(blocks[0]))
        return EXIT_FAILURE;
    sf::Sprite sBlock[1000];
    // (tBlock);

    int n = 0;
    for(int i=1; i<10; i++)
        for(int j=1; j<10; j++)
        {
            sBlock[n].setTexture(tBlock);
            sBlock[n].setPosition(i * 43, j * 20);
            n++;
        }

    sf::Texture tBall;
    if (!tBall.loadFromFile(ball))
        return EXIT_FAILURE;
    sf::Sprite sBall(tBall);
    sBall.setPosition(300, 300);

    sf::Texture tPaddle;
    if (!tPaddle.loadFromFile(paddle))
        return EXIT_FAILURE;
    sf::Sprite sPaddle(tPaddle);
    sPaddle.setPosition(300, 440);

	// Start the game loop
    while (app.isOpen())
    {
        // Process events
        sf::Event event;
        while (app.pollEvent(event))
        {
            // Close window : exit
            if (event.type == sf::Event::Closed ||
                (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Escape))
                app.close();
        }

        // Clear screen
        app.clear();

        // Draw the sprite
        app.draw(sBackground);
        app.draw(sPaddle);
        app.draw(sBall);

        for(int i=0; i<n; i++)
        {
            app.draw(sBlock[i]);
        }

            // Update the window
            app.display();
    }

    return EXIT_SUCCESS;
}
