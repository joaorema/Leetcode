#include <stdio.h>
#include <string.h>

int lengthOfLongestSubstring(char* s) 
{
    int ascii[256] = {0};
    int l = 0;
    int r = 0;
    int result = 0;
    int lenc = strlen(s);

    while(r < lenc)
    {
        ascii[(unsigned char)s[r]]++;   

        while(ascii[(unsigned char)s[r]] > 1)
        {
            ascii[(unsigned char)s[l]]--;
            l++;
        }
        if(r - l + 1 > result)
            result = r - l + 1;
        r++;
    }
    return result;
}

int main()
{
    char *teste = "pwwkew";
    int i = 0;

    i = lengthOfLongestSubstring(teste);
    printf("%d\n", i);

}