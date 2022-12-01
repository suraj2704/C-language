#include<stdio.h>
void sumandavg(int a,int b,int*sum,float *avg){
*sum=a+b; 
*avg=(float)(*sum)/2;
  }
int main(){
  int i,j,sum;
  float avg;
  i=6;
  j=7;
  sumandavg(i,j,&sum,&avg);
  printf("the sum of i and j is %d\n",sum);
  printf("the average of i and j is %f\n",avg);
  return 0;
}
  

  
