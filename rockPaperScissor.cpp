#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

char getComputerOption();
char getUserOption();
void conditions(char person, char computer);

int main() {
    char person = getUserOption(); //Getting User Input
    char computer = getComputerOption(); //Getting Comp Input
    system("CLS"); //Clearing Screen
    cout<<"Person Choice :: "<<person<<" Computer Choice :: "<<computer<<endl<<endl;
    conditions(person,computer); //Chossing Winner
}

char getUserOption() {
    string input;
    char pChoice;
    do {
    cout<<"-----------------"<<endl<<
          "-----r-Rock------"<<endl<<
          "---s-Scissor-----"<<endl<<
          "----p-Paper------"<<endl<<
          "-----------------"<<endl;
    cout<<"Enter your choice :: ";
    cin>>input;
    system("CLS");
    if(input.length() == 1 ) {
        pChoice = input[0];
    }
    else {
        cout << "Error: Please enter only a single character ('r', 's', or 'p')." << endl;
        pChoice = '\0';  // Set an invalid value to repeat the loop
    }
    }
    while(pChoice != 'r' && pChoice != 's' && pChoice != 'p');
    return pChoice;
}

char getComputerOption() {
    char cChoice;
    srand(time(0));

    int randomInt = rand() % 3;

    if (randomInt == 0) cChoice = 'p';
    if (randomInt == 1) cChoice = 'r';
    if (randomInt == 2) cChoice = 's';

    return cChoice;
}

void conditions(char person, char computer) {

    if (person == 'r' && computer == 'p') {
        cout << "Computer Wins! Paper wraps Rock."<< endl;
    }
    else if (person == 'p' && computer == 's') {
        cout << "Computer Wins! Scissors cut Paper."<< endl;
        
    }
    else if (person == 's' && computer == 'r') {
        cout << "Computer Wins! Rock smashes Scissors."<< endl;
        
    }
    else if (person == 'r' && computer == 's') {
        cout << "You Win! Paper wraps Rock."<< endl;
        
    }
    else if (person == 'p' && computer == 'r') {
        cout << "You Win! Paper wraps Rock."<< endl << endl;
        
    }
    else if (person == 's' && computer == 'p') {
        cout << "You Win! Scissors cut Paper."<< endl << endl;
    }
    else{
        cout << "Tie. Play again win the Game." << endl << endl;
    }
    
}



