#include <iostream>
#include <cstdlib>
#include "playe.h"


struct Enemy{
int enemyChoice;
};

int main(){
//initialize Random
srand (time(NULL));

//create object
Player player;
Player* pointerPlayer = new Player;
pointerPlayer=&player;

//create Enemy object
Enemy enemy;


while(true){//Loop Fight
//display text
pointerPlayer->TextDisplay();
std::cin>>player.choice;
enemy.enemyChoice = rand() % 3+1; //enemy choice
pointerPlayer->ChoicePlayer(player.choice,enemy.enemyChoice);
}

//deallocate memory
pointerPlayer = NULL;
delete pointerPlayer;


return 0;
}