#include <stdio.h>
#include <stdlib.h>
#include "input.h"
#include "display.h"

int main()
{
    struct emp empinf[100];
    int pointer=0;
    int flag=1;
    int input;
    while(flag==1){
            printf("\n ****************Census Beurau***************");
            printf("\nEnter (0-3)");
            printf("\n0. Exit");
            printf("\n1. Input Records");
            printf("\n2. Display\n");
        scanf("%d",&input);
    switch(input){
    case 0:
    flag=0;
    break;
    case 1:
        if(pointer>=99){
            printf("Records full");
        }else{

    pointer=inputRec(empinf,pointer);
    }
    break;
    case 2:
    if(pointer==0){
        printf("Please input records before Displaying!/n");
    }else{
        displaymenu(empinf,pointer);
    }
    break;
    }
    }
    return 0;
}
