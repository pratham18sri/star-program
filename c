#include <stdio.h>

void printpattern(int nstar);

int main(void) {
    int nstar;
    printf("Enter the number of stars: ");
    scanf("%d", &nstar);
    printpattern(nstar);
    return 0;
}

void printpattern(int nstar) {
    if (nstar == 1) {
        printf("*\n");      
        return;
    }

    printpattern(nstar - 1);
    for (int i = 0; i < 2* nstar - 1; i++)
        printf("*");
    
    printf("\n");
}
