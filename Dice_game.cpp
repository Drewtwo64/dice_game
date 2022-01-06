//This programs plays a dice game for two where both players roll two dice. They score points by rolling doubles. The first one to 50+ points is the winner, and is awarded STARS!
//Author: Drew Wates
//CS 102-03 Dice Game Fifty Code
//Last updated: 10/17/2018
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void starbar(void)
{
int i;
for (i = 0; i < 20; i++)
{
printf("*");
}
}
int main(void)
{
//Variables needed for program to function properly.
time_t t;
int n;
int i;
char ch = '\n';
int player1_die1;
int player1_die2;
int player2_die1;
int player2_die2;
int player1_result = 0;
int player2_result = 0;
int total = 0;
char quit;
char start;
char player1_key = NULL;
char player2_key = NULL;
char dummy;
srand((unsigned(time(&t))));
//Introductory message explaining the rules of Fifty with some puns. Sorry, not sorry.
printf("Welcome to Fifty. The game where it's do or die! (Heh heh. Get it?).\n" "Anyway, as the title suggests, the goal of this game is to roll the dice and be the first to reach 50 points total to \n"
"win.\n" 
"To make this happen, you can only score with doubles. This is where things get dicey. (Man, I'm on a roll. HOW DO I KEEP \n"
"MAKING THESE PUNS?).\n"
"Doubles of 1, 2, 4, or 5 will reward you 5 points. However, doubles of 6 award you 25 points. TWENTY. FIVE.\n"
"Don't get too comfortable, though. If doubles of 3 are rolled, well you messed up, because you bring your score\n"
"total all the way down to 0.\n"
"Finally, non-double rolls get you no points. None. When player 1 is done playing or wants be a big baby about rolling double 3s,\n"
"they can press the q key to quit. Be warned. If this is done, player 2 wins by default.\n"
"The s key is pressed once, then enter, and one player rolls the dice.\n"
"Enough talk. Mash that enter button and ROLL!\n");
printf("Player 1, Press the s key to start the game."); //Player 1 starts the game with the enter key
scanf("%c", &start);
dummy = getchar();
if (start == 's'); //S executes the loop
{
while (player1_result < 50 && player2_result < 50)
//Players roll the dice so long as none of them have 50 or more points by the end.
{
printf("Player 1, press r to roll the dice. Press q to end the game."); //R rolls the dice. Only player 1 is able to give up in the middle of the game. If for some reason R is inputted and the dice are not rolled, player 1 just inputs 'rr.'
scanf("%c", &quit);
dummy = getchar();
if (quit == 'r') //An 'r' input rolls the dice. Here's a secret for player 1. If he/she inputs 'rr' then enter, both players will roll their dice.
{
printf("Player 1's Roll.\n"); //Here's where the srand functions come into play.
player1_die1 = rand() % 6 + 1;
printf("Player 1's first die is a %d\n", player1_die1);
player1_die2 = rand() % 6 + 1;
printf("Player 1's second die is a %d\n", player1_die2);
//total == (player1_die1 + player1_die2);
if (player1_die1 == player1_die2) //The doubles values for player 1
{
if (player1_die1 == 6)
//Both dice must be 6 to earn 25 points
{
player1_result =
player1_result + 25;
printf("LUCKY\n");
}
else if (player1_die1 == 3)
//Both dice must be 3 to lose all points
{
player1_result =
0;
printf("Aw, too bad. You rolled double 3s. Your score has fallen down to zero.\n");
}
else //Any other doubles will award the player with 5 points
{
player1_result =
player1_result + 5;
}
}
printf("Player 1's score is %d.\n\n",
player1_result); //Here we have the program saying what player 1's score is.
}
if (quit == 'q')
{
printf("Congratulations Player 2! Player 1 is a coward!\n");
starbar();
printf("\n\n");
starbar();
printf("\n\n");
starbar();
printf("\n\n");
starbar();
printf("\n\n");
starbar();
printf("\n\n");
starbar();
printf("\n\n");
starbar();
printf("\n\n");
starbar();
printf("\n\n");
starbar();
printf("\n\n");
starbar();
printf("\n\n");
printf("Press s to play again. Press enter to close the game.\n");
scanf("%c", &start);
while (start == 's')
{
main();
}
break;
}
if (player1_result <= 50)
{
printf("Player 2, press r to roll the dice."); //Now, it's player 2's turn.
dummy = getchar();
scanf("%c", &quit);
if (quit == 'r');
{
printf("Player 2's Roll\n");
//Player 2's srand functions
player2_die1 = rand() % 6 +
1;
printf("Player 2's first die is a %d\n", player2_die1);
player2_die2 = rand() % 6 +
1;
printf("Player 2's second die is a %d\n", player2_die2);
//total = (player2_die1 + player2_die2);
if (player2_die1 ==
player2_die2) //Doubles values for player 2
{
if (player2_die1
== 6) //Double 6s
{
player2_result = player2_result + 25;
printf("LUCKY\n");
}
else if
(player2_die1 == 3) //Double 3s
{
player2_result = 0;
printf("Aw, too bad. You rolled double 3s. Your score has fallen down to zero.\n");
}
else //Any doubles
{
player2_result = player2_result + 5;
}
}
printf("Player 2's score is %d.\n\n", player2_result); //Player 2's current score
}
}
else
{
printf("Congratulations, player 1! YOU WON! Player 2 loses.\n");//Player 1 is the winner if they earn 50+ points total.
//The winner is awarded with 200 stars
starbar();
printf("\n\n");
starbar();
printf("\n\n");
starbar();
printf("\n\n");
starbar();
printf("\n\n");
starbar();
printf("\n\n");
starbar();
printf("\n\n");
starbar();
printf("\n\n");
starbar();
printf("\n\n");
starbar();
printf("\n\n");
starbar();
printf("\n\n");
printf("Press s to play again. Press enter to close the game.\n");
scanf("%c", &start);
while (start == 's')
{
main();
}
break;
}
if (player2_result >= 50)
{
printf("Congratulations, player 2! YOU WON! Player 1 loses.\n"); //The message for if player 2 gets to 50+ points before player 1.
{
//Player 2's starbars
starbar();
printf("\n\n");
starbar();
printf("\n\n");
starbar();
printf("\n\n");
starbar();
printf("\n\n");
starbar();
printf("\n\n");
starbar();
printf("\n\n");
starbar();
printf("\n\n");
starbar();
printf("\n\n");
starbar();
printf("\n\n");
starbar();
printf("\n\n");
printf("Press s to play again. Press enter to close the game.\n");
scanf("%c", &start);
while (start == 's')
{
main();
}
break;
}
}
}
}
 return 0;
}