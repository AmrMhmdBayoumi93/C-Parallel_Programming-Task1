#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
                // the Author is Amr Muhammad Bayoumi
                // 13-Oct-2023
                //  create a Register ,login system Authentication in C languge


                do {
                          char username []="Amr";
                     char password []="12345";
        char user_input [10];

        printf("\n Enter your  password :");
        scanf("%s",&user_input);
        if(!strcmp(user_input,password))    {
            printf("Succes LOGIN..:) \n ");
            break;

        }else {
           printf("password is Not true ... try again. \n ");

        }


                }while(1);














    return 0;

}
