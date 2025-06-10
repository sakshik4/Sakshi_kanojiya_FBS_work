#include<stdio.h>
void main()
{
	int no1,no2,result;
	char operator;
	printf("Enter 2 numbers");
	scanf("%d %d",&no1,&no2);
	printf("Press 1 to for '+';\n");
    printf("Press 2 to for '-' \n");
    printf("Press 3 to for '*' \n");
    printf("Press 4 to for '/'\n");
    printf("Press 5 to for '%%'\n");
	printf("Enter operator");
	fflush(stdin);
    scanf("%c",&operator);
    if(operator=='1')
	{
	result=no1+no2;
}
    else if(operator=='2'){
    result=no1-no2;
}
    else if(operator=='3'){
    result=no1*no2;
}
    else if(operator=='4'){
    result=no1/no2;
}
    else if(operator=='3'){
    result=no1%no2;
}
    else{
    printf("Invaild choice");
}
 printf("result = %d\n", result);
	
}