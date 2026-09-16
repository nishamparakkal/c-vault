#include <stdio.h>

int main()
{
    char s1[10] = "12";
    char s2[10] = "ABCD";
    char s3[20];
    int i = 0, j = 0, k = 0;

    for (; s1[i] != '\0' && s2[j] != '\0'; )
    {
        s3[k++] = s1[i++];
        s3[k++] = s2[j++];
    }

    for (; s1[i] != '\0'; )
        s3[k++] = s1[i++];

    for (; s2[j] != '\0'; )
        s3[k++] = s2[j++];

    s3[k] = '\0';

    printf("s3 = %s", s3);

    return 0;
}
