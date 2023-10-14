#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{


                // the Author is Amr Muhammad Bayoumi
                // academic num 200461

                // 13-Oct-2023
                //  create a Register ,login system Authentication in C languge







       char username [20];
        char password [20];

    int counter =0;
        do{

        
        printf("\n Enter your  username :");
        scanf("%s",&username);
         printf("\n Enter your  password :");
        scanf("%s",&password);

        if(strcmp(username,"Amr")==0&&strcmp(password,"123")==0 )
            {
            printf("  Success LOGIN..:) \n ");
            break;

        }else {
           printf("password is Not true ... try again. \n ");

        }
            counter++;


        }while(counter<3);



     //  printf("username an password are incorrect.\n");

        if (counter>=3){
            printf("Please .. try agian with 5 Minutes.\n");

        }
            else{
                printf("username and password are correct.\n");
            }


    return 0;

}
