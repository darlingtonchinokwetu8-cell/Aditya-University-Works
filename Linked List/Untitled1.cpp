#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t); // number of test cases

    while (t--) {
        int n;
        scanf("%d", &n);

        int mod[4] = {0}; // Counts for numbers % 4 == 0, 1, 2, 3

        // Count how many numbers fall into each mod class
        for (int i = 0; i < n; i++) {
            mod[i % 4]++;
        }

        // Form pairs: (0,3) and (1,2)
        int pair03 = (mod[0] < mod[3]) ? mod[0] : mod[3];
        int pair12 = (mod[1] < mod[2]) ? mod[1] : mod[2];

        // Remove used numbers
        mod[0] -= pair03;
        mod[3] -= pair03;
        mod[1] -= pair12;
        mod[2] -= pair12;

        int unpaired = mod[0] + mod[1] + mod[2] + mod[3];

        if (unpaired % 2 == 1)
            printf("Alice\n");
        else
            printf("Bob\n");
    }

    return 0;
}

