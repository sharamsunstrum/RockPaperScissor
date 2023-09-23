#include <iostream>
#include "playe.h"

//ec = ennemy choice , c = playerchoice , number = choice
void Player::Choice(int c,int ec, int number){
(ec == number )? std::cout<<"You Loose !"<<std::endl:std::cout<<"You Win !"<<std::endl;//win or loose
 if(c==ec){std::cout<<"Draw !"<<std::endl;}//draw
}

//choice Function
void Player::ChoicePlayer(int choice,int enemyChoose){
switch(choice){
case 1://rock
 Choice(choice,enemyChoose,2);
break;
case 2://paper
 Choice(choice,enemyChoose,3);
break;
case 3://scissor
 Choice(choice,enemyChoose,1);
break;
}
}

//Text Display

void Player::TextDisplay(){
std::cout<<"Choice between : " <<std::endl;
std::cout<<"(1) ROCK: " <<std::endl;
std::cout<<"(2) PAPER: " <<std::endl;
std::cout<<"(3) SCISSOR: " <<std::endl;
}
