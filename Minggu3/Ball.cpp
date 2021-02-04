#include "Ball.hpp"
using namespace std;

Ball::Ball()
{
    this->radius = 1;
}

Ball::Ball(int radius)
{
    this->radius = radius;
}

Ball::Ball(const Ball &b)
{
    this->radius = b.radius;
}

Ball::~Ball() {}

void Ball::bounce()
{
    cout << "bo";
    for (int i = 0; i < this->radius; i++)
    {
        cout << "i";
    }
    cout << "ng" << endl;
}