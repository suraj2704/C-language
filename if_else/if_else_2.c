#include <stdio.h>

int main() {
int phy,chem,math;
float total;
  printf("enter your marks of phy\n");
  scanf("%d",&phy);

  printf("enter your marks of chem\n");
  scanf("%d",&chem);

  printf("enter your marks of maths\n");
  scanf("%d",&math);

  total= (phy+chem+math)/3;
  if((total<40)||phy<33||chem<33){
    printf("your percentage is %f and you are fail",total);
  }
  else{
    printf("your percentage is %f and you are pass",total);
  }
    return 0;
}
  
