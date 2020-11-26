#ifndef PLANET_H
#define PLANET_H

#include <iostream>
#include "Character.h"
#include "Item.h"

using namespace std;

class Planet
{
    private:
        string name;
        string description;
        int weather;
        int currentWeather;
        int numMonsters;
        Character inhabitants[10];
    public:
        Planet();
        Planet(string n, string f, int w, int nm);
        string getName();
        string getDescription();
        int getWeather();
        int getCurrentWeather();
        int getNumMonsters();
        Character getCharacter(int p);
        void setCurrentWeather(int n);
        void addCharacterAt(Character character1, int p);
        void loseCharacterAt(int p);
        void setName(string n);
        void setDescription(string f);
        void setWeather(int w);
        int setNumMonsters(int nm);
};

#endif


