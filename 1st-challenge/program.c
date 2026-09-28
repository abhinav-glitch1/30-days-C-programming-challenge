#include <stdio.h>
int main(){
int m1,m2,m3,m4,m5;
float total,average,percentage;
printf("enter the marks for 5marks:");
scanf("%d %d %d %d %d",&m1, &m2, &m3, &m4, &m5);
total=m1+m2+m3+m4+m5;
average=total/5;
percentage=(total/500)*100;
printf("total marks=%f\n",total);
printf("average marks=%f\n",average);
printf("percentage=%f\n",percentage);
return 0;
}
