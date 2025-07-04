#include <stdio.h>

int func1(char string[]) {
    if (string[0] != 'H') {
        printf("Better luck next time!\n");
        return 0;
    }
    if (string[1] != 'T') {
        printf("Better luck next time!\n");
        return 0;
    }
    if (string[2] != 'U') {
        printf("Better luck next time!\n");
        return 0;
    }
    if (string[3] != '{') {
        printf("Better luck next time!\n");
        return 0;
    }
    if (string[4] != 'b') {
        printf("Better luck next time!\n");
        return 0;
    }
    return 1;
}

int func2(char string[]) {
    if (string[5] != '0') {
        printf("Better luck next time!\n");
        return 0;
    }
    if (string[6] != 'u') {
        printf("Better luck next time!\n");
        return 0;
    }
    if (string[7] != 'n') {
        printf("Better luck next time!\n");
        return 0;
    }
    if (string[8] != 'c') {
        printf("Better luck next time!\n");
        return 0;
    }
    if (string[9] != '1') {
        printf("Better luck next time!\n");
        return 0;
    }
    return 1;
}

int func3(char string[]) {
    if (string[10] != 'n') {
        printf("Better luck next time!\n");
        return 0;
    }
    if (string[11] != 'g') {
        printf("Better luck next time!\n");
        return 0;
    }
    if (string[12] != '_') {
        printf("Better luck next time!\n");
        return 0;
    }
    if (string[13] != '4') {
        printf("Better luck next time!\n");
        return 0;
    }
    if (string[14] != 'r') {
        printf("Better luck next time!\n");
        return 0;
    }
    return 1;
}

int func4(char string[]) {
    if (string[15] != '0') {
        printf("Better luck next time!\n");
        return 0;
    }
    if (string[16] != 'u') {
        printf("Better luck next time!\n");
        return 0;
    }
    if (string[17] != 'n') {
        printf("Better luck next time!\n");
        return 0;
    }
    if (string[18] != 'd') {
        printf("Better luck next time!\n");
        return 0;
    }
    if (string[19] != '_') {
        printf("Better luck next time!\n");
        return 0;
    }
    return 1;
}

int func5(char string[]) {
    if (string[20] != 'f') {
        printf("Better luck next time!\n");
        return 0;
    }
    if (string[21] != 'u') {
        printf("Better luck next time!\n");
        return 0;
    }
    if (string[22] != 'n') {
        printf("Better luck next time!\n");
        return 0;
    }
    if (string[23] != 'c') {
        printf("Better luck next time!\n");
        return 0;
    }
    if (string[24] != 't') {
        printf("Better luck next time!\n");
        return 0;
    }
    return 1;
}

int func6(char string[]) {
    if (string[25] != '1') {
        printf("Better luck next time!\n");
        return 0;
    }
    if (string[26] != '0') {
        printf("Better luck next time!\n");
        return 0;
    }
    if (string[27] != 'n') {
        printf("Better luck next time!\n");
        return 0;
    }
    if (string[28] != 's') {
        printf("Better luck next time!\n");
        return 0;
    }
    if (string[29] != '}') {
        printf("Better luck next time!\n");
        return 0;
    }
    return 1;
}

int func7(char string[]) {
    if (string[30] != 'n') {
        printf("Better luck next time!\n");
        return 0;
    }
    if (string[31] != 's') {
        printf("Better luck next time!\n");
        return 0;
    }
    if (string[32] != '}') {
        printf("Better luck next time!\n");
        return 0;
    }
    return 1;
}

int main() {
    char input[40];
    printf("Take a guess smart boy: ");
    scanf("%s", input);

    if (func1(input) && func2(input) && func3(input) && func4(input) && func5(input) && func6(input) && func7(input)) {
        printf("You guessed it!\n");
    } else {
        printf("Be smarter dummy...\n");
    }

    return 0;
}