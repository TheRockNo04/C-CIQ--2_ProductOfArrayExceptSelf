#include<stdio.h>
#include<conio.h>

int main(){
int soa;
scanf("%d",&soa);
int array[soa],new_array[soa],i,j,a=1;

    //array[soa]=(1,2,3,4,5);
    for(i=0;i<soa;i++){array[i]=i+1;}
    for(i=0;i<soa;i++){printf("%d",array[i]);}

    for(i=0;i<soa;i++){
        for(j=0,a=1;j<soa;j++){
            if(j!=i){a*=array[j];}
        }
        new_array[i]=a;
    }

    for(i=0;i<soa;i++){
        printf("%d ",new_array[i]);
    }
return 0;
}
