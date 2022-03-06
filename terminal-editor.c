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
        char c[100];
        printf("Removing current prompt... \n");
        system("sed -i '/PS1=/d' ./.bashrc");
        printf("Removed current profile prompt...\n");
        printf("Enter the terminal prompt : ");
        fgets(c, 100, stdin);
        c[strlen(c) -1] = '\0';
        char sus[100];
        char endof[] = "\"' >> .bashrc";
        strcpy (sus, "echo 'PS1=\"");
        strcat (sus, c);
        strcat (sus, endof);
        printf("%s\n", sus);
        system(sus);
        
    }
    else if (yn == 'n' || yn == 'N') {
        printf("Aborted.\n");
    }
    else {
        printf("This is not recognized. Aborting.\n");
    }
    
}
