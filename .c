#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
    int random, guess;
    int no_of_guess = 0;
    srand(time(NULL));
    
    printf("welcome to the world of Guessing Numbers\n");
    random = rand() % 100 + 1;
    
    do{
      printf("\nPlease enter your Guess between(1 to 100): ");
      scanf("%d", &guess);
      no_of_guess++;
      
      if (guess < random) {
          printf("Guess the larger number. \n");
      } else if (guess > random){
          printf("Guess the smaller number. \n");
      }else{
          printf("Congratulations !!! You have successfully guessed the Number in %d attempts.", no_of_guess);
      }
      
    }while(guess != random);
    
    printf("\n Bye Bye, Thanks for Playing.");
    printf("\n Developed by: YS");
    

}
