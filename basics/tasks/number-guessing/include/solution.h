#pragma once
#include <iostream>
#include <cstdlib>
#include <ctime>

class NumberGuessingGame {
    int numberToGuess = 1;

    void setNumberToGuess(int number) { // for testing purposes
        numberToGuess = number;
    }

public:
    NumberGuessingGame() {

        // Set numberToGuess here to random number between 1 and 100
        // numberToGuess = random number between 1 and 100
        // For that lookup how to generate random numbers in C++
    }

    void playGame() {
        // Write your solution here, assume that numberToGuees is already set
        // Below is incorrect solution, replace it with your solution
        int count=1;
        int guess;
        while(count<=10){
        std::cin >> guess;
        if (numberToGuess == guess) {
            std::cout << "Guess the number (between 1 and 100): Correct! You took "<<count<<" guesses."<< std::endl;
            break;
        } 
        else if(numberToGuess>guess){
            std::cout << "Guess the number (between 1 and 100): Too low!" << std::endl;
            count=count+1;
        }
        else if(numberToGuess<guess){
            std::cout<<"Guess the number (between 1 and 100): Too high!"<<std::endl;
            count=count+1;
        }
        else{
            std::cout <<"Error"<<std::endl;
        }
        }
    }

    friend class SolutionTest; // for testing purposes
};

