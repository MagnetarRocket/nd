#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<unistd.h>

/*Inspired by AEGIS|DomainOS's "named directory" feature*/

//#include<stdarg.h>

char default_directory = '~';

int startbuff (void)
{

}

int delbuff (void)
{
	
}

int main(int argc, char const *argv[])//if a valid directory was inputted
{
	char* directory ="/tmp/nd-location";
	//^Start the directory varible

	FILE* locFile;
	

	if (strlen(argv[1]>0) )//
	{
			/* code */
		
		//see if the recomended spot exists
		if (directory != NULL)
		{

			/* code */
			return 0;
		}
		//just print loaded directory location
		else if (argv[1] == "-s")
		{
			printf("%s", directory);
			return 0;
		}

		//purge clipboard from memory
		else if (argv[1] == "-d")
		{
			/* code */
		}
		

		//given user input
		else if (argv[1] > 1)
		{
			directory = argv[1];
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
		fclose();
	}
	else //no directory was inputted
	{
		if (/* condition */)
		{
			/* code */
		}
		
	}
	return 0;
	//char * directory[]="";
}
