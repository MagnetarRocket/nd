#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<unistd.h>
#include<dirent.h>
#include<stdarg.h>
/*Inspired by AEGIS|DomainOS's "named directory" feature*/

char default_directory = '~';
char* directory = "/tmp/nd-location";
	//^Start the default directories varible
//int bee = 0;

int main(int argc, char const *argv[])//if a valid directory was inputted
{
	FILE *WorkingFileLoc;
	char* temp_directory;


	if ( (WorkingFileLoc = fopen(directory, "r") ) == NULL)
    {
		printf("File not acessable");
        exit(1);
    }
	
    for(int bee = 0; bee < argc; bee++) //debug, remove or find a way to have it give debugger-only output
    {
        printf("%d %s \n", bee, argv[bee]);
    }


    if (argc > 1 ) 
    {
        printf("There is a entry here\n");
        
        if (argc > 2)
        {
            printf("Too many arguements");
            return 1;
        }
        
        else if (strcmp(argv[2], "-p") )
        {
            printf("%s\n", argv[2]);


			return 0;
        }
        else if (strcmp(argv[2], "-c")) 
        {
            

			return 0;
        }        
		else 
		{
			temp_directory = argv[2];
		}
    }



        //return 0;

    else
    {
        printf("there is no entry here");
        //return 0;
    }
    if(WorkingFileLoc != NULL)
    {    
        fclose(WorkingFileLoc);
    }
    printf("flew over code block somehow");
    return(0);
}
