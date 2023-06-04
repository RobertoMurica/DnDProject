/* diceroller.cpp
Created by: Roberto Murcia
*/
#include <iostream>
#include <ctime>
#include "playercharacter.h"
#include "expimpcharacter.h"

int getChosenDice(std::string response);
int getNumRolls(int numDice);
int main(){
    std::string userResponse;
    int rollMult = 0;
    int numDice = 0;
    int rolledNum = 0;
    int totalAmount = 0;
    srand(time(0));
    std::cout << "===========Welcome to the dice roller!===========\n";
    do{
        std::cout << "========Dice Options========\n>d4\n>d6\n>d8\n>d10\n>d12\n>d20\n>d100\n";
        std::cout << "Choose a dice to role: ";
        std::cin >> userResponse;
        rollMult = getChosenDice(userResponse);
    }while(rollMult == 0);
    std::cin.clear();
    std::cin.ignore(10000, '\n');
    do{
        std::cout << "Choose how many d" << rollMult << "s to roll (The max amount that can be rolled is 2147483647): ";
        std::cin >> numDice;
        numDice = getNumRolls(numDice);
    }while(numDice == 0);
    int natOnes = 0;
    int natTwenties = 0;
    for(int i = 1; i <= numDice; i++){
        rolledNum = rand() % rollMult + 1;
        totalAmount += rolledNum;
        if(rolledNum == 1){
            natOnes++;
        }
        if(rolledNum == rollMult){
            natTwenties++;
        }
        std::cout << "\nRoll " << i << " is: " << rolledNum;
    }
    std::cout <<"\n======DICE RESULTS======";
    std::cout <<"\nThe total of all your rolls is: " << totalAmount << ".\n";
    std::cout <<"The total number of natural ones you rolled is: " << natOnes << ".\n";
    std::cout <<"The total number of max rolls you rolled is: " << natTwenties << ".\n";
    std::cout <<"The average of your rolls is: " << (double)(totalAmount / numDice) << ".\n";
    return 0;
}

int getChosenDice(std::string response){
    if(!response.compare("d4")){
        std::cout << "You chose a d4.\n";
        return 4;
    }else if(!response.compare("d6")){
        std::cout << "You chose a d6.\n";
        return 6;
    }else if(!response.compare("d8")){
        std::cout << "You chose a d8.\n";
        return 8;
    }else if(!response.compare("d10")){
        std::cout << "You chose a d10.\n";
        return 10;
    }else if(!response.compare("d12")){
        std::cout << "You chose a d12.\n";
        return 12;
    }else if(!response.compare("d20")){
        std::cout << "You chose a d20.\n";
        return 20;
    }else if(!response.compare("d100")){
        std::cout << "You chose a d100.\n";
        return 100;
    }else{
        std::cout << "You chose an invalid selection.\n";
        std::cin.clear();
        std::cin.ignore(10000, '\n');
        return 0;
    }
}

int getNumRolls(int numDice){
    if(numDice > 0 && numDice <= 2147483647){
        std::cout << "Number of dice to be rolled is: " << numDice << ".\n";
        std::cout << "\n======DICE ROLLS======";
        return numDice;
    }
    else{
        std::cout << "Invalid input. Input must be an integer greater than or equal to 1, to a max of 2147483647.\n";
        std::cin.clear();
        std::cin.ignore(10000, '\n');
        return 0;
    }
}