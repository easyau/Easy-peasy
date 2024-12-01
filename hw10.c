#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct city
{
    char name[50];
    char country[50];
    int population;
};

void remove_line(char str[])
{
    int len = strlen(str);
    if (str[len - 1] == '\n')
        str[len - 1] = '\0'; 
}

int main(void)
{
    int i;
    struct city arr[3];

    printf("Input three cities: \n");
    for (i = 0; i < 3; i++)
    {
        printf("Name> ");
        fgets(arr[i].name, sizeof(arr[i].name), stdin);
        remove_line(arr[i].name); 
        printf("Country> ");
        fgets(arr[i].country, sizeof(arr[i].country), stdin);
        remove_line(arr[i].country);  
        printf("Population> ");
        scanf("%d", &arr[i].population);  
        getchar();  
    }
    printf("\n");

    printf("Printing the three cities: \n");
    for (i = 0; i < 3; i++)
        printf("%d. %s in %s with a population of %d people\n", i + 1, arr[i].name, arr[i].country, arr[i].population);
    return 0;
}
