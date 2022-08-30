#include <stdio.h>

int main() {
    char ch;
  //*97-122=a to z
  printf("enter the word\n");
  scanf("%c",&ch);
  if(ch<=122&&ch>=97)
  {
    printf("it is a lower case");
  }
  else {
    printf("it is not a lower case");
  }
    return 0;
}
  
