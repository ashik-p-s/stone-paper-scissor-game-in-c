#include<stdio.h>
#include<stdlib.h>
#include <time.h>


/*
1=stone 
2=scissors 
3=paper
*/

//choose function 
void choose(int a,int b){
    if(a==b){
        if(a==1){
            printf("you and computer choose stone draw................\n");
        }
        else if(a==2){
            printf("you and computer choose scissors draw................\n");
        }
        else{
            printf("you and computer choose paper draw................\n");
        }
    }
    else{
        if(a==1 && b==3){
        printf("Computer choose paper and you choose scissors yay u win :)\n");
        }
        else if(a==3 && b==1){
        printf("Computer choose scissors and you choose paper sorry you loose:(\n");
        }
        else if(a==1 && b==2){
        printf("Computer choose scissors and you choose stone yay u win :)\n");
        }
        else if(a==2 && b==1){
        printf("Computer choose stone and you choose scissors sorry you loose:(\n");
        }
        else if(a==3 && b==2){
        printf("Computer choose scissors and you choose paper sorry you loose:(\n");
        }
        else if(a==2 && b==3){
        printf("Computer choose paper and you choose scissor yay u win :)\n");
        }

    }
}



void main(){
    int gameOption; 
    printf("ROCK PAPER SCISSOR\n");
    int d = 1;
    srand(time(0));
    while(d==1){
        printf("Enter 1  to start Game & 0 to exit \n");
        scanf("%d",&gameOption);
        if(gameOption ==1 ){
            printf("Enter 1 for stone         2 for scissor       3 for paper \n");
            int userChoice;
            scanf("%d",&userChoice);
            if(userChoice<0 || userChoice>3){
                printf("Enter valid option\n");
                continue;
            }
           
            int randomNumber  = rand()%3+1;
            
            choose(userChoice,randomNumber);
            printf("Enter 1 to play again or 0 to exit \n");
            int playAgain;
            scanf("%d",&playAgain);
            if(playAgain==1){
                printf("Restarting .......\n");
            }
            else{
                d =0;
                printf("Exiting...............\n");
            }

        }
        else{
            d=0;
            printf("Exiting...............................\n");
        }
    }
}
