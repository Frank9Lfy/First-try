#include <stdio.h>
#include <string.h>
#include <ctype.h>
void count(char a[], char w[][10], int n,int b[]);
int main()
{ char a[100]={}, w[10][10];int b[10]={0};
    char c[100];
    for(int i=0; i <= 1; i++)
    {
        scanf("%s", w[i]);
        strcat(a, w[i]);
        strcat(a," ");
    }
    gets(c);
    strcat(a, c);
    count(a, w, 2, b);
    for(int k=0; k <=1; k++)
    printf("%s:%d ", w[k], b[k]);
 return 0;
}

void count(char a[], char w[][10], int n,int b[])
{   /*char d[100][10];int f=0;
    for (int i=0,m=0; i < strlen(a); i++)
    {
        if (isalpha(a[i])&&m< 10)
        {   w[f][m]=a[i];
            m++;
        }
        else
        {   f++;
            m=0;
        }
    }*/
    for (int j=0; j < n; j++)
    {
        for (int k=0, i=0,flag=1; k < strlen(a); k++)
        {   if (isalpha(a[k])&&w[j][i]!=a[k])
                flag=0;
            if (w[j][i]==a[k]&&flag==1)
                i++;
            else
                i=0;
            if (i==strlen(w[j])){
                b[j]++;
                i=0;
            }
            if (!isalpha(a[k]))
                flag=1;
        }
    }

}
/* 13-4 */
/* ⑴ 编写函数void count(char a[], char w[][10], int n,int b[])。
 * 其功能是统计w指向的数组中的n个单词在a指向的字符串中各自出现的次数(将非字母字符看做单词分隔符)，
 * 并将统计结果依次保存在b指向的数组中。
⑵ 编写main()函数，从键盘输入字符串，将数据保存在数组中，
调用count()函数做统计，并在屏幕上打印统计结果（每个单词及其出现次数）。
输入一串字符串 this is a book,that is an apple
输出前两个单词出现的频率  this:1 is:2
*/

/* 13-3 */
/* 在所给的10个单词中找出不包含元音字母（a,e,i,o,u）的单词，将符合条件的单词的个数以及这些单词按照字典顺序输出。
⑴ 编写函数int FindNoVowel(char *str[],int num,char res[][20])，
str指向的指针数组中保存若干单词字符串的首地址，num保存单词的个数，res指向的数组保存找到的符合条件的单词字符串，
每行存放一个单词，要求将符合条件的单词按字典顺序存储，函数返回符合条件的单词个数。
⑵ 编写main()函数，从键盘输入数组，调用函数FindNoVowel，将符合条件的所有单词按字典顺序输出，单词之间用1个空格隔开。

输入10个单词  ftp  qq  msn  internet  web  google  bbs  mp3  blog  ibm
依此输出不包含元音字母的单词  bbs ftp mp3 msn qq
 */

