#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<unistd.h>
#include<dirent.h>

/*Inspired by AEGIS|DomainOS's "named directory" feature*/

//#include<stdarg.h>

char default_directory = '~';
char* directory ="/tmp/nd-location";
	//^Start the directories varible

int main(int argc, char const *argv[])//if a valid directory was inputted
{
	char* switchDir;
	char* readBuff;
	char* tmpStr;

	FILE* locFile = fopen(directory, "wb+");
	DIR* locDir;
	//see if the recomended spot exists
	if (locFile == NULL)
	{
		printf("This file location could not be acessed…");
		fclose(locFile);
		return 1;
	}

	if ( strlen(argv[1])>0 )//if anything was inputed after "nd"
	{
		//just print loaded directory location
		if (strcmp(argv[1], "-s") )
		{
			tmpStr = locFile;
			printf("%s", locFile);
			return 0;
		}

		//overide with home default
		else if (strcmp(argv[1], "-c") )
		{
			tmpStr = 
			fprintf(directory, default_directory);
		}
		
		//given user input
		else
		{
			locDir = opendir(argv[1]);
			if (locDir)
			{
				directory = argv[1];
				//locFile = fopen(directory,"rw");
				fprintf(locFile, argv[1]);
			}
			else
			{
				printf("Invalid directory");
				fclose(locFile);
				return 1;
			}
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
