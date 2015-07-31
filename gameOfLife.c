#include <stdio.h>

#include "gameOfLifeUserAction.h"
#include "gameOfLifeRules.h"
char answer;
int mainMenu;
int main()
{

	GOL_mainMenu();
	mainMenu = GOL_userSelectionInt();
	printf("You have selected %d\n", mainMenu);
	
	switch (mainMenu)
	{
		case 1:
			
			GOL_readRules();
			printf("Would you like to go back to the main menu (Y/N)?\n");
			
			scanf(" %c", &answer);
			if(answer == 'y')
			{
				GOL_mainMenu();
				mainMenu = GOL_userSelectionInt();
			}
			else 
			{
				printf("not alo");
			}
			//printf("%c\n", GOL_userSelectionChar());
			

			return 0;
		case 2:
			printf("You have selected number 2");
			break;
		case 3:
			printf("You have selected number 3");
			break;
		case 4:
			printf("You have selected number 4");
			break;
		default:
			printf("You have selected an invalid option");
			break;
	}
	
	return 0;
}
