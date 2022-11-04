#include <stdio.h>
#include <stdlib.h>

int main(void){

    for(int i=0; i<=10; i++)
    {
        if(i%2!=0)
            printf("\n\t%d", i);
        else
            printf("\n%d", i);
    }
}
