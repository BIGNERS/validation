#include"ritwik.h"
#include<stdlib.h>
void check(char a[]);
main()
{
    char a[100];
    printf("Enter your password that should satisfy the following criteria\n1. password should contain atleast one capital letter\n2. should have one digit from(o-9)\n3. atleast one special charecter($,*,#,&)\n4. length should be atleast 6\n");
    scanf("%s",a);
    check(a);


}
