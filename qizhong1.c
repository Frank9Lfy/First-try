
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
int isvalidnum(char* a);
int main()
{  int count=0,n;
    scanf("%d",&n);
    for (int i=0;i<n;i++)
    {
        char a[100];
        scanf("%s",a);
        if (isvalidnum(a))
        {
            count++;
        }
    }
    printf("%d",count);
    return 0;
}
int isvalidnum(char* a)
{   if (strlen(a)!=9||a[0]!='2'||a[1]!='5')
    return 0;
    else
    {
        for (int i=0;i<9;i++)
            if (!isdigit(a[i]))
                return 0;
    }
    return 1;
}