#include <stdio.h>
#include <stdlib.h>
struct emp{
    int region;
    int town;
    int race;
    int size;
    int incom;};
int inputRec(struct emp recs[],int ptr){

    int region;
    int town;
    int race;
    int size;
    int incom;
       printf("\nInput Records");
            printf("\nEnter appropriate number for region");
            printf("\n0. Durham");
            printf("\n1. Peel");
            printf("\n2. York");
            scanf("%d",&region);
            while(region>3){
                printf("Invalid data. You should enter a number between 0-2");
                scanf("%d",&region);
            }
            printf("\nEnter appropriate number for town");
            if(region==0){
            printf("\n0. Whitby");
            printf("\n1. Oshawa");
            }
            else if(region==1){
            printf("\n0. Mississauga");
            printf("\n1. Brampton");
            }
            else if(region==2){
            printf("\n0. Maple");
            printf("\n1. Vaughan");
            }

             scanf("%d",&town);
             while(town>2){
                printf("Invalid data. You should enter a number between 0-1");
                scanf("%d",&town);
            }
             printf("\nEnter appropriate number for race");
            printf("\n0 . Caucasian \n 1.Indigenous \n2.African American \n3. Others");
        scanf("%d",&race);
        while(race>3){
                printf("Invalid data. You should enter a number between 0-3");
                scanf("%d",&race);
            }
        printf("\nEnter family(house hold size)");
        scanf("%d",&size);
        while(size<0){
                printf("Invalid data. You should enter a number greater than 0.");
                scanf("%d",&size);
            }
        printf("\nEnter total annual income of the family.");
        scanf("%d",&incom);
        recs[ptr].region= region;
        recs[ptr].town= town;
        recs[ptr].race= race;
        recs[ptr].size= size;
        recs[ptr].incom= incom;
        ptr++;
        printf("\nRecords were written successfully.");

    return ptr;
    }

