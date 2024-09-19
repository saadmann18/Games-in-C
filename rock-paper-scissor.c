// C program to play Rock Paper and Scissor
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Gameplay function
int play(char player, char computer)
{
	// If player and computer choose the same thing
	if (player == computer)
		return -1;

	// If player choose rock and computer choose paper
	if (player == 'r' && computer == 'p')
		return 0;

	// If player choose paper and computer choose rock
	else if (player == 'p' && computer == 'r') 
		return 1;

	// If player choose rock and computer choose scissor
	if (player == 'r' && computer == 's')
		return 1;

	// If player choose scissor and computer choose rock
	else if (player == 's' && computer == 'r')
		return 0;

	// If player choose paper and computer choose scissor
	if (player == 'p' && computer == 's')
		return 0;

	// If player choose scissor and computer choose paper
	else if (player == 's' && computer == 'p')
		return 1;
}


int main()
{
	// Stores the random number
	int n;

	char player, computer, result;

	// Chooses the random number every time
	srand(time(NULL));

	// Make the random number less than 100, divided it by 100
	n = rand() % 100;

	// Probabilistically divide 100 among rock, paper, and scissor
	if (n < 33)

		// r is denoting rock
		computer = 'r';

	else if (n > 33 && n < 66)

		// p is denoting Paper
		computer = 'p';

	// s is denoting Scissor
	else
		computer = 's';

	printf("Enter r for rock, p for PAPER and s for SCISSOR\n");

	// take input from the player
	scanf_s("%c", &player);

	// Function Call with player and computer inputs to play the game
	result = play(player, computer);

	if (result == -1) {
		printf("It's a Draw!\n");
	}
	else if (result == 1) {
		printf("Wow! player won!\n");
	}
	else { 
		printf("player lost!\n");
	}
		printf("player choose : %c and Computer choose : %c\n", player, computer);

	return 0;
}
