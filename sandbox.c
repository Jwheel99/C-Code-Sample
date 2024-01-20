#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>

#include "lib/mileagecalc.h"
#include "lib/square.h"
#include "lib/loopy.h"
#include "lib/ttt.h"
#include "lib/craps.h"
//#include "lib/buster.h"

//void clearInput(void);
void ttt(void);
void square(void);
void loopy(void);
void mpg(void);
//void BlockBuster(void);
//void placement(void);
void craps(void);

int main(void) {
    int choice = 0;
   // placement();

    do {
        system("clear");
        puts("Welcome to the Sandbox, please: \n");
        puts("(1) Loopy");
        puts("(2) MPG Calculator");
        puts("(3) TTT");
        puts("(4) Print Squares");
        puts("(5) Play Craps");
       // puts("(6) BlockBuster Inventory Management System");
        printf("%s","Selection (-1 to exit): ");
        scanf("%d", &choice);

        switch (choice)
        { 
            case 1:
                //system("clear");
                loopy();
                break;

            case 2:
                mpg();
                break;

            case 3:
               // system("clear");
                ttt();
                break;

            case 4:
                square();
                break;

            case 5:
                craps();
                break;

        //    case 6:
              //  BlockBuster();
               // break;
               
            case -1:
                system("clear");
                puts("Come back soon, ya hear!");
                break;
            default:
                puts("\nInvalid input entered.\n");
        }
          
    } while (choice != -1);

}
