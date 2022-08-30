#include <stdio.h>

int main() {
  int i=0;
  do{
    printf("the numbers are  %d\n",i+1);
    i++;
    if(i==6){
      break;
    }
  }while(i<11);
    return 0;
}
  
