    #include <stdio.h>
    int count = 0 ;
    int xs,ys,xe,ye ;
    int x[1000],y[1000];
    int isSafe(int r,int c,int matrix[r][c],int i,int j){
        return ((i>=1&&i<=r)&&(j>=1&&j<=c)&&(matrix[i][j]));
    }

    int printsolution(){
        int i,j ;
        printf("\nYES \n%d \n",count);
        for(i=0;i<count;i++){
            printf("%d,%d\n",x[i],y[i]);
        }

    }

    int findpath(int r,int c,int matrix[r][c],int i,int j){
        if(i==xe&&j==ye){
                x[count] = i ;
                y[count] = j ;
                count++ ;
                return 1;
        }
            //case 1 go right
            if(isSafe(r,c,matrix,i,j+1)){
                    x[count] = i ;
                    y[count] = j ;
                    count++ ;
                    //printf("\n%d,%d",i,j);
                if(findpath(r,c,matrix,i,j+1))
                    return 1;

                count-- ;
            }
            //case 2 go down
            if(isSafe(r,c,matrix,i+1,j)){
                    x[count] = i ;
                    y[count] = j ;
                    count++ ;
                    //printf("\n%d,%d",i,j);
                if(findpath(r,c,matrix,i+1,j))
                    return 1;

                count-- ;
            }
            //case 3 move left
          if(isSafe(r,c,matrix,i-1,j)){
                    x[count] = i ;
                    y[count] = j ;
                    count++ ;
                    //printf("\n%d,%d",i,j);
                if(findpath(r,c,matrix,i-1,j))
                    return 1;

                count-- ;
            }
            //case 4 move up
            if(isSafe(r,c,matrix,i,j-1)){
                    x[count] = i ;
                    y[count] = j ;
                    count++ ;
                   // printf("\n%d,%d",i,j);
                if(findpath(r,c,matrix,i,j-1))
                    return 1;

                count--;
            }
        return 0;
    }

    int main()
    {
       int r,c;

            //printf("enter the no of rows");
           scanf("%d",&r);
            //printf("enter the no of column");
           scanf("%d",&c);
           int matrix[r][c];
           int i,j;
           for(i=1;i<=r;i++){
               for(j=1;j<=c;j++){
                   //printf("enter the value for %d row and %d column",i,j);
                   scanf("%d",&matrix[i][j]);
               }
           }

           scanf("%d",&xs);
           scanf("%d",&ys);
           scanf("%d",&xe);
           scanf("%d",&ye);


           if(findpath(r,c,matrix,xs,ys)){
                printsolution();
           }else
                printf("NOT POSSIBLE\n");


        return 0;
    }
