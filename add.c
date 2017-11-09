// add.c
// Add a new entry to the database

#include <stdio.h>
#include <stdlib.h>

#include "types.h"

int add()
{
    char choice;
    FILE *f;
    db new;  

    f = fopen("database.txt", "a+");

    if(f == NULL)
    {
	printf("ERROR OPENING FILE\n");
	return -1;
    }

    printf("==================================================\n");
    printf("**                 ADD NEW CDs                  **\n");
    printf("==================================================\n");

    while(choice != 'n' && choice != 'N')
    {
	printf("\t=> BAND NAME : ");
        scanf("%99[^\n]", new.band);
        fprintf(f, "%s\t", new.band);
	getchar();

	printf("\t=> CD TITLE : ");
	scanf("%99[^\n]", new.title);
        fprintf(f, "%s\t", new.title);
	getchar();

	printf("\t=> TYPE (A, B, First Press, etc.) : ");
	scanf("%99[^\n]", new.type);
        fprintf(f, "%s\t", new.type);	
	getchar();

	printf("\t=> RELEASE DATE (yyyy.mm.dd) : ");	
	scanf("%99[^\n]", new.date);
        fprintf(f, "%s\t", new.date);	
	getchar();

	printf("\t=> OWNER (Katie, Lisa, Both) : ");
	scanf("%99[^\n]", new.owner);
        fprintf(f, "%s\t", new.owner);
	getchar();

	printf("\t=> QUANTITY : ");
	scanf("%99[^\n]", new.qty);
        fprintf(f, "%s\t", new.qty);
	getchar();

	printf("\t=> DVD INCLUDED (y/n) : ");
	scanf("%99[^\n]", new.dvd);
        fprintf(f, "%s\t", new.dvd);
	getchar();

	printf("\t=> CATALOG NUMBER (ex BPRVD-111) : ");
	scanf("%99[^\n]", new.cat_num);
	fprintf(f, "%s\n", new.cat_num);
	getchar();

	printf("==========================================\n");

	printf("RECORD HAS BEEN SAVED\n");
	printf("ENTER ANOTHER CD? (y/n) : ");
		
	choice = getchar();
	getchar();
    };

    fclose(f);
    printf("==================================================\n");
    printf("**                   MAIN MENU                  **\n");
    printf("==================================================\n");

    return 1;
};
