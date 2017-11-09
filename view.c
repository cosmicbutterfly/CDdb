// view.c
// Receiving input for viewing parts of the database.
//
// 11/8/2017

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "view_k.h"
#include "view_l.h"
#include "view_band.h"
#include "view_all.h"
#include "search.h"
#include "viewmenu.h"
#include "view_year.h"

void view()
{
    char c;

    printf("==================================================\n");
    printf("**             THE MASTER DATABASE              **\n");
    printf("==================================================\n");

    while(c != 'x' || c != 'X')
    {
	viewmenu();
	c = getchar();

	switch(c)
	{
	   case 'a':
	   case 'A':
		view_all();
		break;
	   case 's':
	   case 'S':
		search();
		break;
	   case 'b':
	   case 'B':
		view_band();
		break;
	   case 'y':
	   case 'Y':
		view_year();
	   case 'l':
	   case 'L':
		view_l();
		break;
	   case 'k':
	   case 'K':
		view_k();
	   case 'x':
	   case 'X':
		break;
	   default:
		printf("Invalid input.\n");
	};
    };
};
