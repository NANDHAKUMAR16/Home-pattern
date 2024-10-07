#include <stdio.h>
int main()
{
    int n,a =1;
    printf("Enter An Number : ");
    scanf("%d",&n);
    int i,j,k,space=(n/2)-1,star =1,q=(n/2)+n;
    int s=1,e =n,count=1,f,c;
    for(i=1;i<=n;i++)
    {
        printf("\t\t");
        if(i<=n/2){
            for(j=1;j<=space;j++){
                printf(" ");
            }
            for(j=1;j<=star;j++){
                if(j == 1 || j == star || i == n/2){
                    printf(" *");
                }
                else{
                    printf("  ");
                }
            }
            if((i == 1 || i == n/2) && i<=n/2){
                if(i == 1){
                    for(k=1;k<=n;k++){
                        printf(" *");
                    }
                }
                else{
                    for(k=1;k<=n;k++){
                        printf(" *");
                    }
                }
                }
                for(j =1;j<=n;j++){
                    if(j == n)
                        printf("* ");
                    else
                        printf("  ");
                }
            space--;
            star++;
            if(i<n/2){
                printf("\n");
            }
        }
        else{
            printf("\n");
            printf("\t\t");
            if(count == 1){
                s=1;
                count =0;
            }
            for(j=1;j<=n/2;j++)
            {
                if(j == 1 || j == n/2 || i == n || j == s || j == e ){
                    if(j>n/2){
                        for(k=1;k<=n;k++){
                            if(j == n)
                                printf("* ");
                            else
                                printf("  ");
                        }
                    }
                    else{
                        printf("* ");
                    }
                }
                else{
                    printf("  ");
                }
            }
            for(j=1;j<=n;j++){
                    if(j == n)
                        printf(" *");
                    else if(i == n)
                        printf("* ");
                    else
                        printf("  ");
                }
        }
        q++;
        s++;
        e--;
    }
    return 0;
}


