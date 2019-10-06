
    void displaymenu(struct emp empp[],int ptr){
        int i,j,input,durham,peel,york,cauc,ncauc,nindeg,indeg,nafrica,nother,africam,others,sum,oshawa,nosh,whitby,nwhit,missis,nmiss,nbramp,brampton,maple,nmaple,nvan,vanghan,below;
        printf("\nNumber\t Income\t Family Size\t \tRace \tRegion \tTown\n");
        for( i=0;i<ptr;i++){

            printf("%d\t %d\t %d\t %d\t %d\t %d\n",i,empp[i].incom,empp[i].race,empp[i].region,empp[i].size,empp[i].town);
        }
        int flag=1;
        while(flag==1){
            printf("Enter your choice to display\n");
            printf("1. Households by region\n");
            printf("2. Households by race\n");
            printf("3. Average Households income\n");
            printf("4. Average Households income by town and region\n");
            printf("5. Average Households income by race\n");
            printf("6. Percentage of households below poverty\n");
            printf("7. Percentage of households below poverty by race\n");
            printf("8. Percentage of households below poverty by town and region\n");
            printf("0. Exit to previous menu.\n");
            scanf("%d",&input);
            switch(input){
        case 0:
            flag=0;
            break;
        case 1:
          durham=0;
                 peel= 0;
                 york = 0;
            for( i=0;i<ptr;i++){
                if(empp[i].region==0){
                    durham++;
                }
                else if(empp[i].region==1){
                    peel++;
                }
                else if(empp[i].region==2){
                    york++;
                }

            }
            printf("\nDurham: %d",durham);
            printf("\npeel: %d",peel);
            printf("\nYork: %d",york);

            break;
        case 2:
             cauc=0;
                 indeg= 0;
                 africam = 0;
                 others = 0;
            for( i=0;i<ptr;i++){
                if(empp[i].race==0){
                    cauc++;
                }
                else if(empp[i].race==1){
                    indeg++;
                }
                else if(empp[i].race==2){
                    africam++;
                }
                else if(empp[i].race==3){
                    others++;
                }

            }
            printf("\nCaucasians: %d",cauc);
            printf("\nIndigenous: %d",indeg);
            printf("\nAfrican American: %d",africam);
            printf("\nOthers: %d",others);
            break;
        case 3:
             sum=0;
            for( i =0;i<ptr;i++){
               sum+= empp[i].incom;
            }
            sum = sum/ptr;

            printf("Average household income is %d",sum);
            break;
        case 4:
             oshawa=0;
             nosh=0;
             whitby=0;
             nwhit=0;
             missis=0;
             nmiss=0;
             nbramp=0;
             brampton=0;
             maple=0;
             nmaple=0;
             nvan=0;
             vanghan=0;
            for( j=0;j<ptr;j++){
                if(empp[ptr].region == 0 && empp[ptr].town==0){
                    whitby++;
                    nwhit++;
                }
                else if(empp[ptr].region == 0 && empp[ptr].town==1){
                    oshawa++;
                    nosh++;
                }
                else if(empp[ptr].region == 1 && empp[ptr].town==0){
                    missis++;
                    nmiss++;
                }
                else if(empp[ptr].region == 1 && empp[ptr].town==1){
                    brampton++;
                    nbramp++;
                }
                else if(empp[ptr].region == 2 && empp[ptr].town==0){
                    maple++;
                    nmaple++;
                }
                if(empp[ptr].region == 2 && empp[ptr].town==1){
                    vanghan++;
                    nvan++;
                }
            }
            whitby=whitby/nwhit;
            oshawa=oshawa/nosh;
            missis=missis/missis;
            brampton=brampton/nbramp;
            maple=maple/nmaple;
            vanghan=vanghan/nvan;
            printf("\nDurham region:\n");
            printf("Average annual income of Oshawa:%d\n",oshawa);
            printf("Average annual income of Whitby:%d\n",whitby);
            printf("Peel region:\n");
            printf("Average annual income of Missisauga:%d\n",missis);
            printf("Average annual income of Brampton:%d\n",brampton);
            printf("York region:\n");
            printf("Average annual income of Maple:%d\n",maple);
            printf("Average annual income of Vaughan:%d\n",vanghan);
            break;
        case 5:
             cauc=0;
             ncauc=0;
                 indeg= 0;
                 nindeg=0;
                 africam = 0;
                 nafrica=0;
                 others = 0;
                 nother=0;
            for(int i=0;i<ptr;i++){
                if(empp[i].race==0){
                    cauc++;
                    ncauc+=empp[i].incom;
                }
                else if(empp[i].race==1){
                    indeg++;
                    nindeg+=empp[i].incom;
                }
                else if(empp[i].race==2){
                    africam++;
                    nafrica+=empp[i].incom;
                }
                else if(empp[i].race==3){
                    others++;
                    nother+=empp[i].incom;
                }

            }
            ncauc=ncauc/cauc;
            nindeg=nindeg/indeg;
            nafrica=nafrica/africam;
            nother=nother/others;
            printf("\nAverage income by race:");
            printf("\nCaucasians: %d",ncauc);
            printf("\nIndigenous: %d",nindeg);
            printf("\nAfrican American: %d",nafrica);
            printf("\nOthers: %d",nother);
        break;
        case 6:
             below =0;
            for( i=0;i<ptr;i++){
                if(empp[ptr].incom<44000){
                    below++;
                }
            }
            below = below/ptr;
            //below=below;
            printf("No of households below poverty line are: %d.00",below);

            break;

            case 7:

             cauc=0;
             ncauc=0;
                 indeg= 0;
                 nindeg=0;
                 africam = 0;
                 nafrica=0;
                 others = 0;
                 nother=0;
            for(int i=0;i<ptr;i++){
                    if(empp[ptr].incom<=44000){
                if(empp[i].race==0 ){
                    cauc++;
                    ncauc+=empp[i].incom;
                }
                else if(empp[i].race==1){
                    indeg++;
                    nindeg+=empp[i].incom;
                }
                else if(empp[i].race==2){
                    africam++;
                    nafrica+=empp[i].incom;
                }
                else if(empp[i].race==3){
                    others++;
                    nother+=empp[i].incom;
                }
            }
            }
            ncauc=100*ncauc/cauc;
            nindeg=100*nindeg/indeg;
            nafrica=100*nafrica/africam;
            nother=100*nother/others;
            printf("\nNo of households below poverty line by race race:");
            printf("\nCaucasians: %d.00",ncauc);
            printf("\nIndigenous: %d.00",nindeg);
            printf("\nAfrican American: %d.00",nafrica);
            printf("\nOthers: %d.00",nother);
            break;
            case 8:
                 oshawa=0;
             nosh=0;
             whitby=0;
             nwhit=0;
             missis=0;
             nmiss=0;
             nbramp=0;
             brampton=0;
             maple=0;
             nmaple=0;
             nvan=0;
             vanghan=0;

            for(int j=0;j<ptr;j++){
                if(empp[ptr].region == 0 && empp[ptr].town==0){
                    whitby++;
                    nwhit++;
                }
                else if(empp[ptr].region == 0 && empp[ptr].town==1){
                    oshawa++;
                    nosh++;
                }
                else if(empp[ptr].region == 1 && empp[ptr].town==0){
                    missis++;
                    nmiss++;
                }
                else if(empp[ptr].region == 1 && empp[ptr].town==1){
                    brampton++;
                    nbramp++;
                }
                else if(empp[ptr].region == 2 && empp[ptr].town==0){
                    maple++;
                    nmaple++;
                }
                if(empp[ptr].region == 2 && empp[ptr].town==1){
                    vanghan++;
                    nvan++;
                }
            }
            whitby=100*whitby/nwhit;
            oshawa=100*oshawa/nosh;
            missis=100*missis/missis;
            brampton=100*brampton/nbramp;
            maple=100*maple/nmaple;
            vanghan=100*vanghan/nvan;
            printf("\nDurham region:\n");
            printf("Average annual income of Oshawa:%d.00\n",oshawa);
            printf("Average annual income of Whitby:%d.00\n",whitby);
            printf("Peel region:\n");
            printf("Average annual income of Missisauga:%d.00\n",missis);
            printf("Average annual income of Brampton:%d.00\n",brampton);
            printf("York region:\n");
            printf("Average annual income of Maple:%d.00\n",maple);
            printf("Average annual income of Vaughan:%d.00\n",vanghan);
            break;
            default:
                printf("Please reenter a number between 0-8");
                break;
        }
    }
    }
