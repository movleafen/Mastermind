#include "mastermind.h"
#include <string>
using namespace std;

/*--------------------------------------------------------------
CONSTRUCTOR 
PARAMETERS: int size
RETURN: no return; 
--------------------------------------------------------------*/
mastermind::mastermind(int size) : MAX_MOVES(10)							
{
	moves = 0;
	cols = size;
}

/*--------------------------------------------------------------
CONSTRUCTOR
PARAMETERS: int size, and string initial[]
RETURN: no return;
--------------------------------------------------------------*/
mastermind::mastermind(int size, string initial[]): MAX_MOVES(10) 			// store winning colors 
{
	cols = size;
	moves = 0;
	for (int i = 0; i < cols; i++)
	{
		pegs[i] = initial[i];
	}
	
}

/*--------------------------------------------------------------
FUNCTION NAME: int move()
PARAMETERS:	string playerMo[], int& gold, and int& silver
RETURN: return an integer number
--------------------------------------------------------------*/
int mastermind::move(string playerMove[], int& gold, int& silver)		
{
	gold = 0;
	silver = 0;
	bool correct[10] = {false};
	bool attempt[10] = {false};
	for(int i = 0; i < cols; i++)
	{
		if (pegs[i] == playerMove[i])
		{
			gold++;	
			correct[i] = true;
			attempt[i] = true;
		}
	}
	for(int i = 0; i < cols; i++)
	{
		if (attempt[i] == false)
			for(int j=0; j < cols; j++)
			{
				if(correct[j] == false)
				{
					if (pegs[j] == playerMove[i])
					{
						silver++;
					}
				}
			}
	}
	
	moves++;
	if (gold == cols)
	{
		return 1;
	}
	else 
	{
		if(moves == MAX_MOVES)
		{
			return -1;
		}
		return 0;
	}
	
}	

/*--------------------------------------------------------------
FUNCTION NAME: int getMoveIndex()
PARAMETERS: none 
RETURN: return move+1
--------------------------------------------------------------*/
int mastermind::getMoveIndex()
{
	return moves +1;
}

/*--------------------------------------------------------------
FUNCTION NAME: int getNumberOfColumns()
PARAMETERS: none
RETURN: return cols
--------------------------------------------------------------*/
int mastermind::getNumberOfColumns()
{
	return cols;
}