#ifndef ITEM_H
#define ITEM_H

#include <iostream>

using namespace std;

class Item
{
    private:
        string name;
        string description;
        int damage;
    public:
        Item();
        Item(string n, string f, int d);
        string getName();
        string getDescription();
        int getDamage();
        void setName(string n);
        void setDescription(string f);
        void setDamage(int d);
};

#endif


