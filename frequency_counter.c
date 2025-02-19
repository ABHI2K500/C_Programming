#include<stdio.h>
#include<string.h>
int main() {
    char str[100];
    printf("Enter the string: ");
    fgets(str, sizeof(str), stdin);
    int len = strlen(str);
    len=len-1;
    for(int i=0;i<len;i++) {
        int count = 0;
        int alreadyCounted = 0;
        for (int k=0;k<i;k++) {
            if (str[i]==str[k]) {
                alreadyCounted=1;
                break;
            }
        }
        if (!alreadyCounted) {
            for (int j=0;j<len;j++) {
                if (str[i]==str[j]) {
                    count++;
                }
            }
            printf("Number of '%c' = %d\n", str[i], count);
        }
    }
    return 0;
}
