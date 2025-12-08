#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<unistd.h>
#include<dirent.h>

/*Inspired by AEGIS|DomainOS's "named directory" feature*/

//#include<stdarg.h>

char default_directory = '~';
char* directory = "/tmp/nd-location";
	//^Start the default directories varible

int main(int argc, char const *argv[])//if a valid directory was inputted
{

	char* switchDir;
	void* readBuff = "";
	char* tmpStr;

	// struct dirent *;

	FILE *locFile;
	DIR *locDir;

	//locFile = fopen(directory, "w+");
	//Arguement check.
	if (argc > 2)
	{
		printf("too many arguements.");
		return 1;
	}
	//see if the recomended spot exists
	if (locFile == NULL)
	{
		printf("This file location could not be acessed…");
		return 1;
	}

	// strlen(argv[])
	if ( argc > 0 )//if anything was inputed after "nd"
	{
		//just print loaded directory location
		if (strcmp(argv[1], "-s") ) //crash location Dec 4 2025
		{
			fgets(readBuff,225,locFile);
			printf("%p", readBuff);
			return 0;
		}

		//overide with home default
		else if (strcmp(argv[1], "-c") ) //crash here too Dec 6 2025
		{
			//tmpStr = strdup(directory);
			locFile = fopen(directory, "w");
			fprintf(locFile, "%c", default_directory);
		}
		
		//given user input
		else
		{
			//scanf("%s", switchDir);
			locDir = opendir(argv[2]);
			if (locDir)
			{
				directory = strdup(argv[1]);
				locFile = fopen(directory,"w");
				printf("%s", argv[2]);
				fprintf(locFile, "%s", argv[2]);
			}

			else
			{
				printf("Invalid directory");
				fclose(locFile);
				//return 1;
			}
		}
		
	}
	
	else //no directory was inputted
	{
		locFile = fopen(directory,"r");

		if(locFile != NULL)
		{
			fgets(readBuff,225,locFile);
			//tmpStr = strdup(locFile);
			chdir(readBuff);
		}
	}
	fclose(locFile);
	
	return 0;
}
