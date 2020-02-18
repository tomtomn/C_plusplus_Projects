#include <iostream>
int main() {
    // variables
    int ch1, ch2, ch3, guess, tries;


    //code

    std::cout << "\n\n\n\n ";
    std::cout << " ~/~/~/~/~/~/~/~/~/~/~/~/~/~/~/~/~/~/~/~/~/~/~/ \n ";
    std::cout << "         Tom's Choose Your 0wn Sunday\n ";
    std::cout << " ~/~/~/~/~/~/~/~/~/~/~/~/~/~/~/~/~/~/~/~/~/~/~/ \n\n ";
    //std::cout << " ~/~/~/~/~/~/~/~/~/~/~/~/~/~/~/~/~/~/~/~/~/~/~/ \n ";
    //std::cout << "   _____                    _                 _ \n ";
    //std::cout << "  / ____|                  | |               | |\n ";
    //std::cout << " | (___   _   _  _ __    __| |  __ _         | |\n ";
    //std::cout << "  \___ \ | | | || '_ \  / _` | / _` || | | | | |\n ";
    //std::cout << "  ____) || |_| || | | || (_| || (_| || |_| | |_|\n ";
    //std::cout << " |_____/  \__,_||_| |_| \__,_| \__,_| \__, | (_)\n ";
    //std::cout << "                                       __/ |    \n ";
    //std::cout << "                                      |___/     \n ";
    //std::cout << " ~/~/~/~/~/~/~/~/~/~/~/~/~/~/~/~/~/~/~/~/~/~/~/ \n\n ";

    std::cout << "It's 8 am.  What should we do first? \n\n";
    std::cout << "1)  Nothing, stay in bed!\n";
    std::cout << "2)  Lets rock! Time to get up\n";
    std::cin >> ch1;

    if (ch1 == 1){
        std::cout << "\n\n";
        std::cout << "So we're being a bum this morning, eh?\n";
        std::cout << "How long are we staying in bed?\n\n";
        std::cout << "1)  It hard to say\n";
        std::cout << "2)  Imma watch 1 show then attack the day.  I swear.\n";
        std::cin >> ch2;

        if (ch2 == 1){
            std::cout << "\n\n";
            std::cout << "Let's just try and guess how many hours...\n\n";
            tries = 1;
            std::cin >> guess;

            while ( guess != 4 && tries < 5){  //gives user 5 guesses
                std::cout << "Nope!  Guess again!\n";
                std::cin >> guess;
                tries++;
            }
                if (guess == 4){
                    std::cout << "\n\n";
                    std::cout << "Sadly, that's correct\n\n";
                }
                else{
                    std::cout << "\n\n";
                    std::cout << "You're out of tries\n";
                    std::cout << "Probably like 4 more hours.  Lazy Sunday!!\n\n\n";
                    return 0;
                }

            
        }
        else if (ch2 == 2){
            std::cout << "\n\n";
            std::cout << "Yea right!  More like 1 season!\n\n";
        }
    }
    else if (ch1 == 2){
        std::cout << "\n\n";
        std::cout << "Great!  What's up first?\n\n";
        std::cout << "1)  Lets make breakfast and mimosas!\n";
        std::cout << "2)  Gotta hit the grocery store!\n\n";
        std::cin >> ch3;

        if (ch3 == 1){
            std::cout << "\n\n";
            std::cout << "Pop and clink!  Time for drinks!\n\n";
        }
        else if (ch3 == 2){
            std::cout << "\n\n";
            std::cout << "Lets make a list!\n\n";
        }
        else {
            std::cout << "\n\n";
            std::cout << "Invalid input!\n\n";
        }
    }       
    else {
        std::cout << "\n\n";
        std::cout << "Invalid input!\n\n";
        }
    }
