#ifndef SETTINGS_HPP_INCLUDED
#define SETTINGS_HPP_INCLUDED

#include <SFML/Graphics.hpp>

sf::String gameTitle = "Rerkanoid";
int winSize[2] = {800, 600};

const int M = 450;
const int N = 520;
// int boxPosition[2] = {28, 18};
int boxSize[2] = {N, M};
// int pointSize[2] = {18, 18};
int fps = 60;

int backgroundsCount = 10;
sf::String backgrounds[10] = {
    "res/background/1.png",
    "res/background/2.png",
    "res/background/3.png",
    "res/background/4.png",
    "res/background/5.png",
    "res/background/6.png",
    "res/background/7.png",
    "res/background/8.png",
    "res/background/9.png",
    "res/background/10.png",
};

sf::String blocks[5] = {
    "res/block01.png",
    "res/block02.png",
    "res/block03.png",
    "res/block04.png",
    "res/block05.png",
};

sf::String ball = "res/ball.png";
sf::String paddle = "res/paddle.png";

// sf::String interface = "res/frame.png";

#endif // SETTINGS_HPP_INCLUDED
