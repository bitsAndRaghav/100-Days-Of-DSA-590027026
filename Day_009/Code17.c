// Reverse the given lowercase string to display its mirror format

#include <stdio.h>
#include <string.h>

int main()
{
    char str[1000];
    printf("Enter the code name: ");
    scanf("%s", str);

    int left = 0;
    int right = strlen(str) - 1;

    while(left < right)
    {
        char temp = str[left];
        str[left] = str[right];
        str[right] = temp;

        left++;
        right--;
    }

    printf("Mirror format is:\n");
    printf("%s", str);

    return 0;
}