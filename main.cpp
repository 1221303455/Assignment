// ********************************************************* 
// Course: TCP1101 PROGRAMMING FUNDAMENTALS 
// Year: Trimester 1, 2022/23 (T2215) 
// Lab: TT4L 
// Names: YONG RUI CHEN | AFIQ BIN FAIDZ
// IDs: 1221303408 | 1221303455
// Emails: 1221303408@student.mmu.edu.my | 1221303455@student.mmu.edu.my 
// Phones: 0193531134 | 0135383499  
// ********************************************************* 

#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <iostream>
#include "GameBoard.h"
#include "GameBoard.cpp"

using namespace std;

void BoardSettings();
void Commands();
void InsAlien();
void comm();
void GameStart();

void GameStart()
{
int Row = 3;
int Column = 3;
int Zombie = 1;
char Ans;
char y, n;

 cout << "Default Game Settings\n-----------------------" << endl;
 cout << "Board Rows      : " << Row << endl; 
 cout << "Board Columns   : " << Column << endl;
 cout << "Zombie Count    : " << Zombie << endl;

 cout << "Do you wish to change the game settings (y/n)? => ";
 cin >> Ans;
  if(Ans == 'y')
  {
   BoardSettings();
  }
  else if(Ans == 'n')
  {
    InsAlien();
    comm();
  }
}

void BoardSettings()
{
    int kColumns, kRows, kZombies;
    int correctInput = 0;

    cout << "Board Settings\n-----------------------" << endl;
    
    while (correctInput == 0)
    {
        cout << "Enter Rows => "; 
        cin >> kRows;
        kRows = kRows % 2;
        if (kRows == 1)
        {
          break;
        }
        else
        {
            cout << "Your input must be an odd number!" << endl;
            kRows = 0;
        }
    }
    while (correctInput == 0)
    {
        cout << "Enter Columns => "; 
        cin >> kColumns;
        kColumns = kColumns % 2;
        if (kColumns == 1)
        {
          break;
        }
        else
        {
            cout << "Your input must be an odd number!" << endl;
            kColumns = 0;
        }
    }
    cout << endl;
    cout << "Zombie Settings\n-----------------------" << endl;
    cout << "Enter number of zombies => ";
    cin >> kZombies;

    cout << "Settings Updated." << endl;
    system("pause");

  InsAlien();
  comm();
}

void comm()
{
  string comms;
  cout << "Commands => ";
  cin >> comms;

  if(comms == "help")
  {
    Commands();
    cout << endl;
  }
  else
  {
    cout << "Invalid Command\nTry other commands like: 'help'\n";
    cout << endl;
    comm();
  }
}

void Commands()
{
   cout << "\nCommands" << endl;
   cout << "1. up       - Move up." << endl;
   cout << "2. down     - Move down." << endl;
   cout << "3. left     - Move left." << endl;
   cout << "4. right    - Move right." << endl;
   cout << "5. arrow    - Change the direction of an arrow." << endl;
   cout << "6. help     - Display these user commands." << endl;
   cout << "7. save     - Save the game." << endl;
   cout << "8. load     - Load a game." << endl;
   cout << "9. quit     - Quit the game." << endl;
   cout << endl;
   system("pause");
   comm();
}


int main()
{
  GameStart();
}