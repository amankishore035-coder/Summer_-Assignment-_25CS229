#include <stdio.h>

int main() {
    int choice, score = 0;

    printf("Welcome to the Quiz!\n");
    printf("---------------------\n");

    printf("Q1: What is the capital of India?\n");
    printf("1. Delhi\n2. Mumbai\n3. Kolkata\n4. Chennai\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    if(choice == 1) {
        printf("Correct!\n");
        score++;
    } else {
        printf("Wrong!\n");
    }

    
    printf("\nQ2: Which language is used to write C programs?\n");
    printf("1. English\n2. C Language\n3. Hindi\n4. Java\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    if(choice == 2) {
        printf("Correct!\n");
        score++;
    } else {
        printf("Wrong!\n");
    }

   
    printf("\nQ3: Which planet is known as the Red Planet?\n");
    printf("1. Earth\n2. Mars\n3. Jupiter\n4. Venus\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    if(choice == 2) {
        printf("Correct!\n");
        score++;
    } else {
        printf("Wrong!\n");
    }

    printf("\nYour final score is: %d out of 3\n", score);

    return 0;
}
