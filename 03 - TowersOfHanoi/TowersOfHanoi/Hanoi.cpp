//Kyle Wyse
//2 Febuary 2018
//Fig 6.38 (Towers of Hanoi)
#include <iostream>

using namespace std;

int move(int disks, int startPeg, int endPeg, int tempPeg)
//called by main, assumes number of disks >= 1
//prints moves for towers of hanoi
//returns total moves required
{
	int moves = 0;
	if (disks == 1)
	{
		cout << "Disk " << disks << ":" << "Peg " << startPeg << " --> " << "Peg " << endPeg << endl;
		return (moves + 1);
	}
	else
	{
		moves += move(disks - 1, startPeg, tempPeg, endPeg);
		cout << "Disk " << disks << ":" << "Peg " << startPeg << " --> " << "Peg " << endPeg << endl;
		moves += move(disks - 1, tempPeg, endPeg, startPeg);
		return (moves + 1);
	}
}

int main()
//calls the recursive function move
{
	int peg1=1, peg2=2, peg3=3;
	int numDisks;
	int numMoves;
	//get user data
	cout << "Enter the number of disks to use: ";
	cin >> numDisks;
	//call move()
	numMoves = move(numDisks, peg1, peg3, peg2);
	//outout the results
	cout << "Minimum required moves: " << numMoves << endl;
	system("pause");
}