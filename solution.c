#include <stdio.h>

char mostLikelyEyeColor(char parent1, char parent2) {
    if (parent1 == 'B' || parent2 == 'B') {
        return 'B';
    } else if (parent1 == 'G' && parent2 == 'R') {
        return 'B';
    } else if (parent1 == 'R' && parent2 == 'G') {
        return 'B';
    } else {
        return 'R';
    }
}

int main() {
    char parent1, parent2;
    scanf("%c %c", &parent1, &parent2);

    char childEyeColor = mostLikelyEyeColor(parent1, parent2);
    printf("%c\n", childEyeColor);

    return 0;
}
