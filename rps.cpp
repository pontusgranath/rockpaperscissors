#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

using namespace std;

int main() {
  srand(time(NULL));

  while (true){
    
    int choice;

    // User
    cout << "Choose a Number:\n" << "1: Rock\n" << "2: Paper\n" << "3: Scissors\n";
    cin >> choice;
    cout << "You chose: ";
    switch (choice) {
      case 1:
        cout << "Rock\n";
        break;
      case 2:
        cout << "Paper\n";
        break;
      case 3:
        cout << "Scissors\n";
        break;
      default:
        cout << "Error\n";
        break;
    }

    int pc = rand() % 3;

    // PC
    cout << "Computer chose: ";
    switch (pc) {
      case 0:
        cout << "Rock\n";
        break;
      case 1:
        cout << "Paper\n";
        break;
      case 2:
        cout << "Scissors\n";
        break;
      default:
        cout << "Error\n";
    }
    
    // Converts choice so it has same value-system as pc
    int convert = (choice - 1);

    // Compares values and declares a winner
    if (convert == 0 && pc == 2) {
      cout << "You Win!\n";
    } else if (convert == 1 && pc == 0) {
      cout << "You Win!\n";
    } else if (convert == 2 && pc == 1) {
      cout << "You Win!\n";
    } else if (convert == pc){
      cout << "Draw!\n";
    } else {
      cout << "You Lose!\n";
    }
    
    Sleep(5000);
    system("CLS");
  }
}