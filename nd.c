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

	FILE* locFile;
	

	if (strlen(argv[1]>0) )//
	{
		
		//see if the recomended spot exists
		if (directory != NULL)
		{

			/* code */
			return 0;
		}
		//just print loaded directory location
		else if (strcmp(argv[1], "-s") )
		{
			printf("%s", directory);
			return 0;
		}
		
		//given user input
		else
		{
			directory = argv[1];
		}
		
	}
	else //no directory was inputted
	{
		if ()
		{
			/* code */
		}
		
	}
	fclose(locFile);
	return 0;
	//char * directory[]="";
}
