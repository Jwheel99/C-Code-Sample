#include <stdio.h>
#include <conio.h>

// Create 3x3 Array to house each possible move on the TTT board, numbered 1-9
char square[3][3] = {'1', '2', '3', '4', '5', '6', '7', '8', '9' };

int checkwin();
void printboard();

//Function alternates turns, takes integer input 1-9, and matches it to its respective array value
//REspective array value is then replaced with char X or O depending on the turn

int main()
{
    int player = 1, i, choice;

    char mark;
    do
    {
        printboard();
        player = (player % 2) ? 1 : 2;

        printf("Player %d, enter a number:  ", player);
        scanf("%d", &choice);

        mark = (player == 1) ? 'X' : 'O';

    if(choice==1 && square[0][0]=='1')
   {
   square[0][0]=mark;
   }
    else if(choice==2 && square[0][1]=='2')
   {
   square[0][1]=mark;
   }
    else if(choice==3 && square[0][2]=='3')
   {
   square[0][2]=mark;
   }
    else if(choice==4 && square[1][0]=='4')
   {
   square[1][0] = mark;
   }
    else if(choice==5 && square[1][1]=='5')
  {
  square[1][1]=mark;
  }
    else if(choice==6 && square[1][2]=='6')
   {
   square[1][2]=mark;
   }
    else if(choice==7 && square[2][0]=='7')
   {
   square[2][0]=mark;
   }
    else if(choice==8 && square[2][1]=='8')
   {
   square[2][1]=mark;
   }
    else if(choice==9 && square[2][2]=='9')
   {
   square[2][2]=mark;
   }
    else
    {
            printf("Please enter a Valid Move ");

            player--;
            getch();
        }
        i = checkwin();

        player++;

    }
    
    //Checking game status for 1,0,-1
    //Meaning of each is outlined below
    while (i == -1);
    
    printboard();
    
    if (i == 1)
        printf("==>\aPlayer %d win ", --player);
    else
        printf("==>\aGame is a Draw");

    getch();

    return 0;
}


//There are 8 possible winning combinations, outline each using array values
//If the board is full and no winning combinations then it is a draw
//Otherwise the came continues
//Win returns 1
//Draw returns 0
//Otherwsise and continue returns -1
int checkwin()
{
    if (square[0][0] == square[0][1] && square[0][1] == square[0][2])
        return 1;
        
    else if (square[1][0] == square[1][1] && square[1][1] == square[1][2])
        return 1;
        
    else if (square[2][0] == square[2][1] && square[2][1] == square[2][2])
        return 1;
        
    else if (square[0][0] == square[1][0] && square[1][0] == square[2][0])
        return 1;
        
    else if (square[0][2] == square[1][1] && square[1][1] == square[2][1])
        return 1;
        
    else if (square[0][2] == square[1][2] && square[1][2] == square[2][2])
        return 1;
        
    else if (square[0][0] == square[1][1] && square[1][1] == square[2][2])
        return 1;
        
    else if (square[0][2] == square[1][1] && square[1][1] == square[2][0])
        return 1;
        
    else if (square[0][0] != '1' && square[0][1] != '2' && square[0][2] != '3' &&
        square[1][0] != '4' && square[1][1] != '5' && square[1][2] != '6' && square[2][0] 
        != '7' && square[2][1] != '8' && square[2][2] != '9')

        return 0;
    else
        return  - 1;
}


// Funtion to print board with iterated move values
void printboard()
{
    
    printf("\n\n\tWelcome to Tic Tac Toe\n\n");

    printf("Player 1 (X)  -  Player 2 (O)\n\n\n");

    printf(" ________________________\n");
    printf("|       |       |       |\n");
    printf("|   %c   |   %c   |   %c   |\n", square[0][0], square[0][1], square[0][2]);

    printf("|_______|_______|_______|\n");
    printf("|       |       |       |\n");

    printf("|   %c   |   %c   |   %c   |\n", square[1][0], square[1][1], square[1][2]);

    printf("|_______|_______|_______|\n");
    printf("|       |       |       |\n");

    printf("|   %c   |   %c   |   %c   |\n", square[2][0], square[2][1], square[2][2]);

    printf("|_______|_______|_______|\n");
  
}

