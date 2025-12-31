#include <stdio.h>

int main() {
    //Rahul kumar_11081
    int num, originalNum, reversedNum = 0, remainder;

    // Read the number from the user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Store the original number
    originalNum = num;

    // Reverse the number
    while (num != 0) {
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num = num / 10;
    }

    // Check if the number is a palindrome
    if (originalNum == reversedNum) {
        printf("The number is a palindrome.\n");
    } else {
        printf("The number is not a palindrome.\n");
    }

    return 0;
}
//Enter a number: 9787
//The number is not a palindrome.