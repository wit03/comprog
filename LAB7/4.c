//65070503408 Jarukit Jintanasathirakul
#include <stdio.h>

void simpleSort(double num1, double num2, double num3, double num4)
{
    double arr[4]={num1,num2,num3,num4};
    for (int i=0;i<4;i++){
        for (int j=i+1; j<4; j++){
            if(arr[i]<arr[j]){
                double temp = arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("%lf %lf %lf %lf\n",arr[0],arr[1],arr[2],arr[3]);
}

int main ()
{
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    simpleSort(a,b,c,d);    
    return 0;
}