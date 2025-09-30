#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<unistd.h>

/*Inspired by AEGIS|DomainOS's "named directory" feature*/

//#include<stdarg.h>

char default_directory = '~';

int main(int argc, char const *argv[])//if a valid directory was inputted
{
	char* directory ="/tmp/nd-location";
	//^Start the directory varible

	FILE* locFile = fopen(directory, "wb+");
	//see if the recomended spot exists
	if ()
	{

		return 0;
	}

	if ( strlen(argv[1]>0) )//
	{

		//just print loaded directory location
		if (strcmp(argv[1], "s") )
		{
			locFile = fopen(directory,"r");
			printf("%s", directory);
			return 0;
		}

		//overide with home default
		else if (strcmp(argv[1], "~") )
		{

		}
		
		//given user input
		else
		{
			if (access() )
			{
				return 0;
			}
			else
			{
				return 1;
			}
			
			directory = argv[1];
			//locFile = fopen(directory,"rw");
			fprintf(locFile, argv[1]);
		}
		
	}
	else //no directory was inputted
	{
		//locFile = fopen(directory,"r");

		if(locFile != NULL)
		{
			chdir(locFile);
		}
	}
	fclose(locFile);
	return 0;
}
