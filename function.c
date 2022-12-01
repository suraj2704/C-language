#include<stdio.h>
void change(int a,int b,int c);
int main(){
int a=1,b=2,c=3;
  printf("values before function %d %d %d\n",a,b,c);
  void change();
  printf("values after function %d %d %d\n",a,b,c);
  return 0;}
void change(int a,int b,int c){
  printf("the values are %d %d %d\n",a,b,c);
  
}
