//Giovanni Ibarra
//5/2/2020
//Dr.T @ TCCD
//COSC- 1437 Programming Fundamentals II
//Program:  Towers of Hanoi by Recursion
#include <iostream>
using namespace std;


void moveDisk (int, int, int, int);

int main() 
{
  const int NUM_DISCS = 3;
  const int FROM_POLE = 1;
  const int TO_POLE = 3;
  const int TEMP_POLE = 2;
  cout << "MOVING DISK:\n";
  moveDisk (NUM_DISCS, FROM_POLE, TO_POLE, TEMP_POLE);
  cout << "ALL DISKS MOVED";

 return 0;
}

void moveDisk (int towerHight, int fromPole, int toPole, int tempPole)
{
  if (towerHight > 0)
  {
    moveDisk(towerHight-1, fromPole, tempPole, toPole);
    cout << "pole " << fromPole << " to pole " << toPole << endl;
    moveDisk(towerHight-1, tempPole, toPole, fromPole);
  } 
}

//Recursion is when in order to solve a complex problem, a function calls on itself to simplify the probelm.
//This is referred to as a recursive function. 
//It works by calling the function until a base case that solves the problem is reached and then the recursion ends.
 