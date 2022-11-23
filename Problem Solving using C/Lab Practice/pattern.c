#include<stdio.h>

int main()
{
    int col_len;
    int row_len;    
    char string[]="NISCHAL";
    int len=sizeof(string)-1;
    if (len/2!=0)
    {
        col_len=len;
        row_len=len;
        len++;
    }
    
    else
    {
         col_len=len-2;
         row_len=len-1;
    }

    int j=0;
    int counter=0;

    for(int i=1;i<=col_len;i++)
    {
        while (j<row_len)
        {
            if (counter>j)
            {
                printf(" \t");
                j++;
            }
            
           else
           {
             printf("%c\t",string[j]);
             j++;
           }
        }
        printf("\n\n");
        if (i<len/2)
        {
            counter++;
            row_len--;
            j=0;
            /* printf("col : %d Row : %d counter: %d\n",i,row_len,counter); */
        }
        else
        {
            counter--;
            row_len++;
            j=0;
            /* printf("col : %d Row : %d counter: %d\n",i,row_len,counter); */
        }
        
        
    }
    return 0;
}