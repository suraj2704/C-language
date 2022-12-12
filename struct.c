#include <stdio.h>
#include<string.h>
struct bank{
int accountnumber;
int accountbalance;
char name[10];
char gender[5];
};
int main() {
   struct bank b1;
  b1.accountnumber=123456789;
  b1.accountbalance=45000;
  strcpy(b1.name,"mahi");
  strcpy(b1.gender,"F");
printf("\n");
  printf("the acc.no is %d\n",b1.accountnumber);
  printf("the acc.bal is %d\n",b1.accountbalance);
  printf("the name is %s\n",b1.name);
  printf("the gender is %s\n",b1.gender);
    return 0;
}
  
