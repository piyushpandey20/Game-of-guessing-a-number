//Game of Guessing a Number
#include<stdio.h>//standard input and output 
#include<stdlib.h>//standard libray
#include<time.h>//for time input

int main(){
    int number, guess, nguesses=1;
    srand(time(0));//for giving a new number every time
    number= rand()%100 +1;//giving a number between 1 to 100
    do{//do while loops execute atleast once
        printf("Guess a number between 1 to 100:\n");//now guess a number
        scanf("%d",&guess);//giving ur input
        if (guess<number){//terms & conditions applied
            printf("Higher Number Please\n");
        }
        else if (guess>number){
            printf("Lower Number Please\n");
        }
        else{
            printf("You guess the right number in %d attempts:\n",nguesses);
        }
        nguesses++;//calculating ur guesses
    }while(guess!=number);//try again
    return 0;
}//Nice Game