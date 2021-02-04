#include "Bottle.hpp"
using namespace std;

int Bottle::numOfBottle = 0;

Bottle::Bottle() : id(numOfBottle + 1)
{
    this->waterHeight = 0.0f;
    this->height = 10.00f;
    this->radius = 10.00f;
    numOfBottle++;
}

Bottle::Bottle(float height, float radius) : id(numOfBottle + 1)
{
    this->waterHeight = 0.0f;
    this->height = height;
    this->radius = radius;
    numOfBottle++;
}

Bottle::Bottle(const Bottle &bottle) : id(bottle.getId())
{
    this->waterHeight = bottle.waterHeight;
    this->height = bottle.height;
    this->radius = bottle.radius;
}

Bottle::~Bottle()
{
}

int Bottle::getId() const
{
    return this->id;
}

float Bottle::getWaterVolume() const
{
    return PI * radius * radius * waterHeight;
}

float Bottle::getBottleVolume() const
{
    return PI * radius * radius * height;
}

void Bottle::setHeight(float height)
{
    this->height = height;
    this->waterHeight = (this->waterHeight > this->height) ? this->height : this->waterHeight;
}

void Bottle::addWater(float waterVolume)
{
    float dWaterHeight = getWaterHeightIfVolume(waterVolume);
    this->waterHeight += dWaterHeight;
    this->waterHeight = (waterHeight > height) ? height : waterHeight;
}

void Bottle::substractWater(float waterVolume)
{
    float dWaterHeight = getWaterHeightIfVolume(waterVolume);
    this->waterHeight -= dWaterHeight;
    this->waterHeight = (waterHeight > 0) ? waterHeight : 0.0f;
}

float Bottle::getWaterHeightIfVolume(float waterVolume) const
{
    return waterVolume / (PI * radius * radius);
}

void Bottle::pourWaterTo(Bottle &other)
{
    float dV = other.getBottleVolume() - other.getWaterVolume();
    float water = this->getWaterVolume();
    float pindah = (dV < water) ? dV : water;
    this->substractWater(pindah);
    other.addWater(pindah);
}