This program is one of my assignments I did in professor Jimi Vasko class (CS202 at UNLV)

The way this game is played is that one player initially chooses a set of colored pegs and place them on his/herside while not allowing the other player to see the sequence. Then the other player will attempt to guessthat sequence by placing colored pegs on his/her side of the board.  Then the other player places skinnierpegs beside the other player's side to denote how close they are to the solution.  Usually they will be twodierent colored skinnier pegs (which will be gold and silver, they usually are red and white but I'm usinggold and silver to avoid ambiguities),  gold pegs denote how many correct colors they have in the correctposition (with respect to the correct solution), and silver skinny pegs denote correct color in the incorrectposition.  Using these clues, you make another attempt, and the games ends either until the player guessesthe correct sequence or until  the number of attempts are up.

to run this game, you can run from following commands. (I'm using linux enviroment)
g++ -c mastermind.cpp
g++ -c main.cpp
g++ main.o mastermind.o
./a.out


