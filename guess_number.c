#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {
    srand(time(NULL));
    int magic_number = rand() % 1000;
    while (1) {
        int user_input;
        puts("Please put a number here: ");
        scanf("%d", &user_input);
        if (user_input > magic_number) {
            puts("Your number is bigger!");
        } else if (user_input < magic_number) {
            puts("Your number is smaller!");
        } else {
            puts("You got it!");
            break;
        }
    }

}