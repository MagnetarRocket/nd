#include<stdlib.h>
#include<stdio.h>
#include <string.h>

//#include<stdarg.h>

char default_directory = '~';

int startbuff (void)
{

}

int delbuff (void)
{
	
}

int main(char *argsv)
{
	char * directory ="~";
	//^Start the directory varible
	
	//see if the recomended spot exists
	if (directory != NULL)
	{
		/* code */
		return 0;
	}
	//just print loaded directory location
	else if (argsv == 's')
	{
		printf("%s", directory);
		return 0;
	}

	//purge clipboard from memory
	else if (argsv == 'd')
	{
		/* code */
	}
	

	//given user input
	else if (argsv > 1)
	{
		directory = argsv;
	}
	
	//if recomended spot does not exist
	else if ( directory == NULL)
	{
		/* code */
		printf("Directory may have been moved or deleted, reseting to your home path.");
		char * directory[]="";
		return 1;
	}
	else //in case of error
	{
		/* code */
		return 1;
	}
	
	
	//char * directory[]="";
}
