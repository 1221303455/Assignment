#include <iostream>
#include <string>
#include <vector>
#include <cstdlib> 
#include <ctime>   
#include <iomanip> 
#include <time.h>
#include "GameBoard.h"
using namespace std;

class AlienZom
{
private:
   int dimX_, dimY_, zombies_;
    vector<vector<char>> map_;       
public:
  AlienZom(int dimX = 19, int dimY = 3, int zombies = 2);
  void init(int dimX, int dimY, int zombies);
  void display() const;
    int getDimX() const;
  int getDimY() const;
  int getZombies() const;
  void setObject(int x, int y, char ch);
  void setObject1(int x , int y, int k);
};

AlienZom::AlienZom(int dimX, int dimY, int zombies)
{
  init(dimX, dimY, zombies);
}

void AlienZom::init(int dimX, int dimY, int zombies)
{
  dimX_ = dimX;
  dimY_ = dimY;
  zombies_ = zombies;
  char objects[] = {' ', ' ', ' ', 'h', 'p', 'r', '<','>','^','v'};
  int noOfObjects = 10; 
                        
  map_.resize(dimY_);   
  for (int i = 0; i < dimY_; ++i)
  {
    map_[i].resize(dimX_); 
  }
  for (int i = 0; i < dimY_; ++i)
  {
    for (int j = 0; j < dimX_; ++j)
    {
      int objNo = rand() % noOfObjects;
      map_[i][j] = objects[objNo];
    }
  }
 
}

void AlienZom::display() const
{
  cout << " \t .: Alien vs Zombie :." << endl;
  for (int i = 0; i < dimY_; ++i)
  {
    cout << "  ";
    for (int j = 0; j < dimX_; ++j)
    {
      cout << "+-";
    }
    cout << "+" << endl;
    cout << setw(2) << (dimY_ - i);
    for (int j = 0; j < dimX_; ++j)
    {
      cout << "|" << map_[i][j];
    }
    cout << "|" << endl;
  }
  cout << "  ";
  for (int j = 0; j < dimX_; ++j)
  {
    cout << "+-";
  }
  cout << "+" << endl;
  cout << "  ";
  for (int j = 0; j < dimX_; ++j)
  {
    int digit = (j + 1) / 10;
    cout << " ";
    if (digit == 0)
      cout << " ";
    else
      cout << digit;
  }
  cout << endl;
  cout << "  ";
  for (int j = 0; j < dimX_; ++j)
  {
    cout << " " << (j + 1) % 10;
  }
  cout << endl
       << endl;

}

int AlienZom::getDimX() const
{
    return dimX_;
}

int AlienZom::getDimY() const
{
    return dimY_;
}

int AlienZom::getZombies() const
{
    return zombies_;
}
void AlienZom::setObject(int x,int y, char ch)
{
    map_[x][y] = ch;
}

void AlienZom::setObject1(int x, int y, int k)
{
    map_[x][y] = k;
}
void InsAlien()
{
    AlienZom alienZom;

    int x1 = alienZom.getDimY()/2 + 0.5;
    int y1 = alienZom.getDimX()/2 + 0.5;
    char ch = 'A';
    
    alienZom.setObject(x1,y1,ch);
  
    alienZom.display();
    
    
}
