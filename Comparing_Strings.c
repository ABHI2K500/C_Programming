#include<stdio.h>
#include<string.h>

int main() {
    char str1[100];
    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);
    char str2[100];
    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);
    int cmp = strcmp(str1, str2);
    printf("%d\n", cmp);
    if(cmp == 0) {
        printf("The strings are equal\n");
    } else {
        printf("The strings are not equal\n");
    }
    printf("\nExecuted successfully\n");
    return 0;
}
