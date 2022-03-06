#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char yn;
    printf("This script will allow you to change your terminal\n");
    printf("Would you like to continue? y\\n : ");
    scanf("%c", &yn);
    fgetc(stdin);
    
    if (yn == 'y' || yn == 'Y')
    {
        system("echo 'alias='''");
        char inpt[100];
        printf("Removing current prompt... \n");
        system("sed -i '/PS1=/d' ./.bashrc");
        printf("Removed current profile prompt...\n");
        fget:
        printf("Enter the terminal prompt : ");
        fgets(inpt, 100, stdin);
        if (inpt != "" || inpt != " ")
        {          
            inpt[strlen(inpt) -1] = '\0';
            char cmd[100];
            char endof[] = "\"' >> .bashrc";
            strcpy (cmd, "echo 'PS1=\"");
            strcat (cmd, inpt);
            strcat (cmd, endof);
            printf("Success!");
            system(cmd);
        }
        else {
            printf("NULL is not valid.\n");
            goto fget;
        }
        
    }
    else if (yn == 'n' || yn == 'N') {
        printf("Aborted.\n");
    }
    else {
        printf("This is not recognized. Aborting.\n");
    }
    
}
