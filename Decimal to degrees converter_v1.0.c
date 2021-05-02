#include <stdio.h>
#include <math.h>

int main(){
	float c,cd,cm1,cm2,cs;
	char n;
	printf("Decimal to degrees converter ===v1.0===\n\n");
	printf("\n\nPlease choose which convertion would you like to proceed.\nDecimal ---> Degrees type 1\nDegrees [ddmm.mm] ---> Decimal type 2\nDegrees [ddmmss.ss] ---> Decimal type 3\nOr type another key to quit.\n\nOption: ");
	scanf("%c",&n);
	
	while(n=='1'||n=='2'||n=='3')
	{
	if(n=='1')
	{
	printf("\n\nPlease type the decimal number to be converted: ");
	scanf("%f",&c);
	system("cls");
	if(c<0)
	{c=c*(-1);}
	cd=floor(c);
	cm1=(c-floor(c))*60;
	cm2=floor(cm1);
	cs=(cm1-floor(cm1))*60;
	system("cls");
	printf("\nThe answer is %f = %.0f degrees %f' = %.0f deg. %.0f' %.2f''\n\n\n",c,cd,cm1,cd,cm2,cs);
	printf("Would you like more convertions?\n\nDecimal ---> Degrees type 1\nDegrees [ddmm.mm] ---> Decimal type 2\nDegrees [ddmmss.ss] ---> Decimal type 3\nOr type another key to quit.\n\nOption: ");
	getchar();
	scanf("%c",&n);
	}
	if(n=='2')
	{
	printf("\n\nPlease type the integrer degree number to be converted: ");
	scanf("%f",&cd);
	printf("\n\nPlease type the minutes with decimal number to be converted: ");
	scanf("%f",&cm1);
	system("cls");
	if(cd<0)
	{cd=cd*(-1);}
	if(cm1<0)
	{cm1=cm1*(-1);}
	cd=floor(cd);
	c=cd+cm1/60;
	printf("\nThe answer is %.0f deg. %.2f' = %f\n\n\n",cd,cm1,c);
	printf("Would you like more convertions?\n\nDecimal ---> Degrees type 1\nDegrees [ddmm.mm] ---> Decimal type 2\nDegrees [ddmmss.ss] ---> Decimal type 3\nOr type another key to quit.\n\nOption: ");
	getchar();
	scanf("%c",&n);
	}
	if(n=='3')
	{
	printf("\n\nPlease type the integrer degree number to be converted: ");
	scanf("%f",&cd);
	printf("\n\nPlease type the integrer minutes number to be converted: ");
	scanf("%f",&cm2);
	printf("\n\nPlease type the seconds with decimal number to be converted: ");
	scanf("%f",&cs);
	system("cls");
	if(cd<0)
	{cd=cd*(-1);}
	if(cm2<0)
	{cm2=cm2*(-1);}
	if(cd<0)
	{cs=cs*(-1);}
	cd=floor(cd);
	cm2=floor(cm2);
	c=cd+cm2/60+cs/3600;
	printf("\nThe answer is %.0f deg. %.0f' %.2f''= %f\n\n\n",cd,cm2,cs,c);
	printf("Would you like more convertions?\n\nDecimal ---> Degrees type 1\nDegrees [ddmm.mm] ---> Decimal type 2\nDegrees [ddmmss.ss] ---> Decimal type 3\nOr type another key to quit.\n\nOption: ");
	getchar();
	scanf("%c",&n);
	}
	}
	system("cls");
	printf("\nQuiting now!\n\nThank you for using this program!\n\n\t\t\t\tHave a AWESOME day!\n\n");
	return 0;
	}
