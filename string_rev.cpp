#include <stdio.h>


int main()
{
    char ch[5]="BUBT";
    char ch_1[5];
    int counter = 0 ;
    for(int i = 4 ; i >= 0 ; --i )
    {
        ch_1[counter] = ch[i];
        ++counter ;
    }
    for(int i = 0 ; i < 5 ;++i)
        printf("%c", ch_1[i]);

    return(0);
}
