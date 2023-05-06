#include <stdio.h>

int main() {
    int current_state = 0;
    char input;

    printf("Enter a string: ");

    while ((input = getchar()) != EOF && input != '\n') {
        switch (current_state) {
            case 0: // Initial state
                if (input == 'a') {
                    current_state = 1;
                } else {
                    current_state = 3;
                }
                break;
            case 1: // State after first "a"
                if (input == 'a') {
                    current_state = 2;
                } else if (input != '\n') {
                    current_state = 3;
                }
                break;
            case 2: // Accepting state (string ends with "a")
                if (input != '\n') {
                    current_state = 3;
                }
                break;
            case 3: // Dead state
                break;
        }

        if (current_state == 3) {
            printf("String not accepted\n");
            return 0;
        }
    }

    if (current_state == 2) {
        printf("String accepted\n");
    } else {
        printf("String not accepted\n");
    }

    return 0;
}

