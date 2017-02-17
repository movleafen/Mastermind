#include <iostream>
#include <string>
#include "mastermind.h"
using namespace std;

string fix_word(string);
int main()
{
	string winningColors[] = {"green", "orange", "purple", "yellow"};
	mastermind myGame(4, winningColors);
	string play[4];
	int determineGame, gold, silver;
	while(determineGame!= -1)
	{
		cout << "Turn:  " << myGame.getMoveIndex() << " Enter 4 colors: ";
		for (int i = 0; i < myGame.getNumberOfColumns(); i++)
		{
			cin >> play[i];
			play[i] = fix_word(play[i]);
		}
		
		determineGame = myGame.move(play, gold, silver); 
		cout << "GOLD   = " << gold << endl;
		cout << "SILVER = " << silver << endl;	
		
		if (determineGame == 0)
		{
			continue;
		}
		else if (determineGame == 1)
		{
			cout << "You won! ^_^" << endl;
			break;
		}
		else 
		{
			cout << "You lost! -3-" << endl;
		}
	}
	
}

string fix_word(string word)
{
	for (int i = 0; i < word.length(); i++)
	{
		word[i] = tolower(word[i]);
	}
	return word;
}