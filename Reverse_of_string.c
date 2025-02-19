#include<stdio.h>

int main() {
    char str1[100];
    printf("Enter the string: ");
    fgets(str1, sizeof(str1), stdin);
    int i=0;
    int len = 0;
    while (str1[len] != '\0') {
        len++;
    }
    printf("Length of the string: %d\n", len-1);
    char str2[len + 1];
    int len2 = len - 1;
    for (int i = 0; i < len; i++) {
        str2[i] = str1[len2];
        len2--;
    }
    str2[len] = '\0';
    printf("Reversed string: %s", str2);
    return 0;
}
