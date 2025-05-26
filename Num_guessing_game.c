#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){

   int number = 0, guess = 0, nguesses = 1;

    srand(time(0));
    number = rand()%100 + 1;
    printf("guess a number between 1 and 100: \n");
    scanf("%d",&guess);

    do
    {
        if(guess > number){
            printf("lower number please!!!\n");
            scanf("%d",&guess);
        }
        else if(guess < number){
            printf("higher number please!!!\n");
            scanf("%d",&guess);
        }
        else{
            break;
        }
        nguesses+=1;
    } while (guess != number);
    printf("You guessed it right!! in %d guesses\n",nguesses);
    printf("Press Enter to exit...");
    getchar(); 
    getchar(); 


    return 0;
}
