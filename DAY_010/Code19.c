// Check whether the given string is a palindrome using two-pointer comparison.

#include <stdio.h>
#include <string.h>

int main()
{
    char s[1000];
    printf("Enter the string: ");
    scanf("%s", s);

    int left = 0;
    int right = strlen(s) - 1;
    int flag = 1;

    while(left < right)
    {
        if(s[left] != s[right])
        {
            flag = 0;
            break;
        }
        left++;
        right--;
    }

    if(flag)
        printf("YES");
    else
        printf("NO");

    return 0;
}