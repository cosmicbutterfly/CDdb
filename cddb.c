// Just a little personal project to create a program that
// keeps track of the CDs my roommate and I own. Can this 
// server handle Japanese? Who knows! But let's find out
//
// 11/8/2017

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "menu.h"
#include "add.h"
#include "rem.h"
#include "modify.h"
#include "view.h"

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
		rem();
		break;
	   case 'm':
	   case 'M':
		modify();
		break;
	   case 'v':
	   case 'V':
		view();
	   case 'x':
	   case 'X':
		printf("Goodbye!\n");
		break;
	   default:
		printf("Invalid input.\n");
	};
    };

    return 0;
};
