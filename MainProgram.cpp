#include <iostream>
#include <cstdlib>
#include "Planet.h"

using namespace std;


int findWeather(Planet planet1)
{
    srand(time(NULL));
    int weather=planet1.getWeather();
    int currentWeather=weather-10+(rand()%21);
    return currentWeather;
}

bool hit(int currentWeather,int hc)
{
    int total=currentWeather+hc;
    int hit = rand()%201;
    if(total<hit)
    {
        return false;
    }
    else
    {
        return true;
    }
}

int main()
{
    srand(time(NULL));
    Character main("player","eric",100,95);
    
    Item famas("Fire Lizard Famas","items.txt",20);
    Item ar("Fire Ant AR","items.txt",15);
    Item sniper("Space Inavder Sniper","items.txt",35);
    Item snw("Space Inavder Smith & Wesson","items.txt",20);
    Item jet("Kardashian JacuzziJet","items.txt",15);
    Item teeth("gnarly teeth","items.txt",40);
    Item paws("massive paws","items.txt",45);
    Item wns("Space Inavder Wesson & Smith","items.txt",25);
    Item bigUzi("Big Uzi","items.txt",49);

    Planet Mercury("Mercury","planets.txt",70,1);
    Character lizard("monster","hostile fire lizard", 75, 85);
    lizard.pickUpItem(famas);
    Mercury.addCharacterAt(lizard, 1);
    
    Mercury.setCurrentWeather(findWeather(Mercury));
    if(hit(Mercury.getCurrentWeather(),lizard.getHitChance()))
    {
        cout<<"ur hit"<<endl;
    }
    else
    {
        cout<<"missed"<<endl;
    }
    cout<<Mercury.getCurrentWeather()<<endl;
    
    Planet Venus("Venus","planets.txt",50,7);
    Character ant1("monster","hostile mutant fire ant", 20, 70);
    Venus.addCharacterAt(ant1, 1);
    Character ant2("monster","hostile mutant fire ant", 20, 70);
    Venus.addCharacterAt(ant2, 2);
    Character ant3("monster","hostile mutant fire ant", 20, 70);
    Venus.addCharacterAt(ant3, 3);
    Character ant4("monster","hostile mutant fire ant", 20, 70);
    Venus.addCharacterAt(ant4, 4);
    Character ant5("monster","hostile mutant fire ant", 20, 70);
    Venus.addCharacterAt(ant5, 5);
    Character ant6("monster","hostile mutant fire ant", 20, 70);
    Venus.addCharacterAt(ant6, 6);
    Character ant7("monster","hostile mutant fire ant", 20, 70);
    Venus.addCharacterAt(ant7, 7);
    for(int i=1;i<8;i++)
    {
        Venus.getCharacter(i).pickUpItem(ar);
    }
    
    Planet Earth("Earth","planets.txt",10,2);
    Character SI1("monster","Space Invader soldier",120,80);
    Earth.addCharacterAt(SI1,1);
    Character SI2("monster","Space Invader soldier",120,80);
    Earth.addCharacterAt(SI2,2);
    for(int i=1;i<3;i++)
    {
        Earth.getCharacter(i).pickUpItem(sniper);
    }
    
    Planet Mars("Mars","planets.txt",30,3);
    Character SI3("monster","Space Invader soldier",120,80);
    Mars.addCharacterAt(SI3,1);
    Character SI4("monster","Space Invader soldier",120,80);
    Mars.addCharacterAt(SI4,2);
    Character SI5("monster","Space Invader soldier",120,80);
    Mars.addCharacterAt(SI5,3);
    for(int i=1;i<4;i++)
    {
        Mars.getCharacter(i).pickUpItem(snw);
    }
    
    Planet Jupiter("Jupiter","planets.txt",75,1);
    Character Kardashian1("monster","hostile Kardashian",200,50);
    Jupiter.addCharacterAt(Kardashian1,1);
    Character Kardashian2("monster","hostile Kardashian",200,50);
    Jupiter.addCharacterAt(Kardashian2,2);
    Character Kardashian3("monster","hostile Kardashian",200,50);
    Jupiter.addCharacterAt(Kardashian3,3);
    for(int i=1;i<4;i++)
    {
        Jupiter.getCharacter(i).pickUpItem(jet);
    }
    
    Planet Saturn("Saturn","planets.txt",85,1);
    Character Dolfinbat1("monster","hostile Dolfinbat",25,80);
    Saturn.addCharacterAt(Dolfinbat1,1);
    Character Dolfinbat2("monster","hostile Dolfinbat",25,80);
    Saturn.addCharacterAt(Dolfinbat2,2);
    Character Dolfinbat3("monster","hostile Dolfinbat",25,80);
    Saturn.addCharacterAt(Dolfinbat3,3);
    Character Dolfinbat4("monster","hostile Dolfinbat",25,80);
    Saturn.addCharacterAt(Dolfinbat4,4);
    Character Dolfinbat5("monster","hostile Dolfinbat",25,80);
    Saturn.addCharacterAt(Dolfinbat5,5);
    for(int i=1;i<6;i++)
    {
        Saturn.getCharacter(i).pickUpItem(teeth);
    }
    
    Planet Uranus("Uranus","planets.txt",90,1);
    Character Icee1("monster","hostile Icee Bear",250,30);
    Uranus.addCharacterAt(Icee1,1);
    Character Icee2("monster","hostile Icee Bear",250,30);
    Uranus.addCharacterAt(Icee2,2);
    for(int i=1;i<3;i++)
    {
        Uranus.getCharacter(i).pickUpItem(paws);
    }
    
    Planet Neptune("Neptune","planets.txt",60,1);
    Character SI6("monster","Space Invader soldier",120,80);
    Neptune.addCharacterAt(SI6,1);
    Character SI7("monster","Space Invader soldier",120,80);
    Neptune.addCharacterAt(SI7,2);
    Character SI8("monster","Space Invader soldier",120,80);
    Neptune.addCharacterAt(SI8,3);
    Character SI9("monster","Space Invader soldier",120,80);
    Neptune.addCharacterAt(SI9,4);
    Character SI10("monster","Space Invader soldier",120,80);
    Neptune.addCharacterAt(SI10,5);
    for(int i=1;i<6;i++)
    {
        Neptune.getCharacter(i).pickUpItem(wns);
    }
    
    Planet Pluto("Pluto","planets.txt",10,1);
    Character Uzi("boss","Lil Uzi Vert in the flesh",500,100);
    Pluto.addCharacterAt(Uzi,1);
    Uzi.pickUpItem(bigUzi);
    
    
    
    
    
}
#include <iostream>
#include <cstdlib>
#include "Planet.h"

using namespace std;


int findWeather(Planet planet1)
{
    srand(time(NULL));
    int weather=planet1.getWeather();
    int currentWeather=weather-10+(rand()%21);
    return currentWeather;
}

bool hit(int currentWeather,int hc)
{
    int total=currentWeather+hc;
    int hit = rand()%201;
    if(total<hit)
    {
        return false;
    }
    else
    {
        return true;
    }
}

int main()
{
    srand(time(NULL));
    Character main("player","eric",100,95);
    
    Item famas("Fire Lizard Famas","items.txt",20);
    Item ar("Fire Ant AR","items.txt",15);
    Item sniper("Space Inavder Sniper","items.txt",35);
    Item snw("Space Inavder Smith & Wesson","items.txt",20);
    Item jet("Kardashian JacuzziJet","items.txt",15);
    Item teeth("gnarly teeth","items.txt",40);
    Item paws("massive paws","items.txt",45);
    Item wns("Space Inavder Wesson & Smith","items.txt",25);
    Item bigUzi("Big Uzi","items.txt",49);

    Planet Mercury("Mercury","planets.txt",70,1);
    Character lizard("monster","hostile fire lizard", 75, 85);
    lizard.pickUpItem(famas);
    Mercury.addCharacterAt(lizard, 1);
    
    Mercury.setCurrentWeather(findWeather(Mercury));
    if(hit(Mercury.getCurrentWeather(),lizard.getHitChance()))
    {
        cout<<"ur hit"<<endl;
    }
    else
    {
        cout<<"missed"<<endl;
    }
    cout<<Mercury.getCurrentWeather()<<endl;
    
    Planet Venus("Venus","planets.txt",50,7);
    Character ant1("monster","hostile mutant fire ant", 20, 70);
    Venus.addCharacterAt(ant1, 1);
    Character ant2("monster","hostile mutant fire ant", 20, 70);
    Venus.addCharacterAt(ant2, 2);
    Character ant3("monster","hostile mutant fire ant", 20, 70);
    Venus.addCharacterAt(ant3, 3);
    Character ant4("monster","hostile mutant fire ant", 20, 70);
    Venus.addCharacterAt(ant4, 4);
    Character ant5("monster","hostile mutant fire ant", 20, 70);
    Venus.addCharacterAt(ant5, 5);
    Character ant6("monster","hostile mutant fire ant", 20, 70);
    Venus.addCharacterAt(ant6, 6);
    Character ant7("monster","hostile mutant fire ant", 20, 70);
    Venus.addCharacterAt(ant7, 7);
    for(int i=1;i<8;i++)
    {
        Venus.getCharacter(i).pickUpItem(ar);
    }
    
    Planet Earth("Earth","planets.txt",10,2);
    Character SI1("monster","Space Invader soldier",120,80);
    Earth.addCharacterAt(SI1,1);
    Character SI2("monster","Space Invader soldier",120,80);
    Earth.addCharacterAt(SI2,2);
    for(int i=1;i<3;i++)
    {
        Earth.getCharacter(i).pickUpItem(sniper);
    }
    
    Planet Mars("Mars","planets.txt",30,3);
    Character SI3("monster","Space Invader soldier",120,80);
    Mars.addCharacterAt(SI3,1);
    Character SI4("monster","Space Invader soldier",120,80);
    Mars.addCharacterAt(SI4,2);
    Character SI5("monster","Space Invader soldier",120,80);
    Mars.addCharacterAt(SI5,3);
    for(int i=1;i<4;i++)
    {
        Mars.getCharacter(i).pickUpItem(snw);
    }
    
    Planet Jupiter("Jupiter","planets.txt",75,1);
    Character Kardashian1("monster","hostile Kardashian",200,50);
    Jupiter.addCharacterAt(Kardashian1,1);
    Character Kardashian2("monster","hostile Kardashian",200,50);
    Jupiter.addCharacterAt(Kardashian2,2);
    Character Kardashian3("monster","hostile Kardashian",200,50);
    Jupiter.addCharacterAt(Kardashian3,3);
    for(int i=1;i<4;i++)
    {
        Jupiter.getCharacter(i).pickUpItem(jet);
    }
    
    Planet Saturn("Saturn","planets.txt",85,1);
    Character Dolfinbat1("monster","hostile Dolfinbat",25,80);
    Saturn.addCharacterAt(Dolfinbat1,1);
    Character Dolfinbat2("monster","hostile Dolfinbat",25,80);
    Saturn.addCharacterAt(Dolfinbat2,2);
    Character Dolfinbat3("monster","hostile Dolfinbat",25,80);
    Saturn.addCharacterAt(Dolfinbat3,3);
    Character Dolfinbat4("monster","hostile Dolfinbat",25,80);
    Saturn.addCharacterAt(Dolfinbat4,4);
    Character Dolfinbat5("monster","hostile Dolfinbat",25,80);
    Saturn.addCharacterAt(Dolfinbat5,5);
    for(int i=1;i<6;i++)
    {
        Saturn.getCharacter(i).pickUpItem(teeth);
    }
    
    Planet Uranus("Uranus","planets.txt",90,1);
    Character Icee1("monster","hostile Icee Bear",250,30);
    Uranus.addCharacterAt(Icee1,1);
    Character Icee2("monster","hostile Icee Bear",250,30);
    Uranus.addCharacterAt(Icee2,2);
    for(int i=1;i<3;i++)
    {
        Uranus.getCharacter(i).pickUpItem(paws);
    }
    
    Planet Neptune("Neptune","planets.txt",60,1);
    Character SI6("monster","Space Invader soldier",120,80);
    Neptune.addCharacterAt(SI6,1);
    Character SI7("monster","Space Invader soldier",120,80);
    Neptune.addCharacterAt(SI7,2);
    Character SI8("monster","Space Invader soldier",120,80);
    Neptune.addCharacterAt(SI8,3);
    Character SI9("monster","Space Invader soldier",120,80);
    Neptune.addCharacterAt(SI9,4);
    Character SI10("monster","Space Invader soldier",120,80);
    Neptune.addCharacterAt(SI10,5);
    for(int i=1;i<6;i++)
    {
        Neptune.getCharacter(i).pickUpItem(wns);
    }
    
    Planet Pluto("Pluto","planets.txt",10,1);
    Character Uzi("boss","Lil Uzi Vert in the flesh",500,100);
    Pluto.addCharacterAt(Uzi,1);
    Uzi.pickUpItem(bigUzi);
    
    
    
    
    
}


