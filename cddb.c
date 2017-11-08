// Just a little personal project to create a program that
// keeps track of the CDs my roommate and I own. Can this 
// server handle Japanese? Who knows! But let's find out
//
// 11/8/2017

#include <stdlib>
#include <stdio>
#include <string.h>

#include "menu.h"
#include "add.h"
#include "remove.h"
#include "modify.h"

int main()
{
    char choice;

    printf("==================================================\n");
    printf("**    WELCOME TO KATIE & LISA'S CD DATABASE!!   **\n");
    printf("==================================================\n");

    while(choice != 'x' || choice != 'X')
    {
	menu();
	choice = getchar();

	switch(choice)
	{
	   case 'a':
	   case 'A':
		add();
		break;
	   case 'r':
	   case 'R':
		remove();
		break;
	   case 'm':
	   case 'M':
		modify():
		break;
	   case 'x':
	   case 'X':
		printf("Goodbye!\n");
		break;
	   default:
		printf("Invalid input.\n");
	}
    };

    return 0:
};
