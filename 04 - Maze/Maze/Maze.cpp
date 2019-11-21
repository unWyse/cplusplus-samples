//Kyle Wyse
//3 Febuary 2018
//Maze Runner:
//Given a header file containing a 12 by 12 char array maze, a start point, and and end point, this 
//program will find a path to the exit by following the right wall.

//I chose to break the problem into two separate switch cases and a boolean function in order to 
//avoid repetion of code.

#include <iostream>

using namespace std;

bool visited(char maze[12][12], int row, int col)//hardcoded, will have to be adjusted for size of maze
//called after new position decided & before move is made
{
	if (maze[row][col] == '.')
		return false;
	else
		return true;
}

int main()
{
	#include "mazelayout1.h"//change to "mazelayout2.h" or "mazelayout3.h"
	//extern int startRow, startCol, endRow, endCol; //unneeded - dont mind the red...?
	//extern char maze[12][12];
	int facing = 0;//direction rat is facing. will always be 0 - 3.
	int row = startRow;
	int col = startCol;
	bool beenHere = false;
	//place rat at start
	maze[row][col] = '>';

	while (!(row == endRow && col == endCol))
		//loop until rat reaches end of maze
	{
		//print the maze, pause
		for (int i = 0; i < 12; i++)//hardcoded, will have to be adjusted for size of maze
		{
			for (int j = 0; j < 12; j++)//hardcoded, will have to be adjusted for size of maze
			{
				cout << maze[i][j];
			}
			cout << endl;
		}
		cout << endl;//space between maze iterations
		system("pause");
		//display appropriate path marker
		if (!beenHere)
			maze[row][col] = 'x';
		else
			maze[row][col] = '+';
		beenHere = false;

		switch (facing)
			//determine which direction to move based on which direction the rat is
			//currently facing and the available moves
		{
		case 0://facing East
			if (maze[row + 1][col] != '#')
				//can turn right
				facing = 1;
			else if (maze[row][col + 1] != '#')
				//can go forward
				facing = 0;//redundant
			else if(maze[row - 1][col] != '#')
				//can go left
				facing = 3;
			else
				//go back
				facing = 2;
			break;
		case 1://facing South
			if (maze[row][col-1] != '#')
				//can go right
				facing = 2;
			else if (maze[row+1][col] != '#')
				//can go forward
				facing = 1;//redundant
			else if (maze[row][col+1] != '#')
				//can go left
				facing = 0;
			else
				//go back
				facing = 3;
			break;
		case 2://facing West
			if (maze[row-1][col] != '#')
				//can go right
				facing = 3;
			else if (maze[row][col-1] != '#')
				//can go forward
				facing = 2;//redundant
			else if (maze[row+1][col] != '#')
				//can go left
				facing = 1;
			else
				//go back
				facing = 0;
			break;
		case 3://facing North
			if (maze[row][col+1] != '#')
				//can go right
				facing = 0;
			else if (maze[row - 1][col] != '#')
				//can go forward
				facing = 3;//redundant
			else if (maze[row][col-1] != '#') 
				//can go left
				facing = 2;
			else 
				//go back
				facing = 1;
			break;//not needed
		}

		switch (facing) {
			//move the rat to next position
		case 0:
				col++;
				beenHere = visited(maze, row, col);
				maze[row][col] = '>';
				break;
		case 1:
				row++;
				beenHere = visited(maze, row, col);
				maze[row][col] = 'v';
				break;
		case 2:
				col--;
				beenHere = visited(maze, row, col);
				maze[row][col] = '<';
				break;
		case 3:
				row--;
				beenHere = visited(maze, row, col);
				maze[row][col] = '^';
				break;
		}
	}//rat has reached exit
	//one final print of the maze & pause
	for (int i = 0; i < 12; i++)//hardcoded, will have to be adjusted for size of maze
	{
		for (int j = 0; j < 12; j++)//hardcoded, will have to be adjusted for size of maze
		{
			cout << maze[i][j];
		}
		cout << endl;
	}
	cout << endl;//space between maze iterations
	system("pause");
}