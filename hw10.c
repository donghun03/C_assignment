#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct {
    char Name[20], Country[20];
    int Population;
}City;

int main() {
    City city[3];
    printf("Input three cities: \n");
    for (int i = 0; i < 3; i++) {
        printf("Name> "); scanf("%s", city[i].Name);
        printf("Country> "); scanf("%s", city[i].Country);
        printf("Population> "); scanf("%d", &city[i].Population);
    }
    printf("Printing the three cities: \n");
    for (int j = 0; j < 3; j++) {
        printf("%d. %s in %s with a population of %d people\n",j+1, city[j].Name, city[j].Country, city[j].Population);
    }
    return 0;
}
