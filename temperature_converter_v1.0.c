#include <stdio.h>

int main(){
	float c,f;
	char n;
	
	printf("Temperature converter ===v1.0===\n\n");
	printf("\n\nPlease choose which convertion would you like to proceed.\nFahrenheit ---> Celsius type 1\nCelsius ---> Fahrenheit type 2\nOr type another key to quit.\n\nOption: ");
	scanf("%c",&n);
	
	while(n=='1'||n=='2')
	{
	if(n=='1')
	{
	printf("\n\nPlease type the desired Fahreheit temperature to be converted\nF = ");
	scanf("%f", &f);
	c=(f-32)/1.8;
	system("cls");
	printf("\nThe temperature is %.2f F = %.2f C\n\n\n",f,c);
	printf("Would you like more convertions?\n\nFahrenheit ---> Celsius type 1\nCelsius ---> Fahrenheit type 2\nOr type another key to quit.\n\nOption: ");
	getchar();
	scanf("%c",&n);
	}
	if(n=='2')
	{
	printf("\n\nPlease type the desired Celsius temperature to be converted\nC = ");
	scanf("%f", &c);
	f=c*1.8+32;
	system("cls");
	printf("\nThe temperature is %.2f C = %.2f F\n\n\n",c,f);
	printf("Would you like more convertions?\n\nFahrenheit ---> Celsius type 1\nCelsius ---> Fahrenheit type 2\nOr type another key to quit.\n\nOption: ");
	getchar();
	scanf("%c",&n);
	}
	}
	system("cls");
	printf("\nQuiting now!\n\nThank you for using this program!\n\n\t\t\t\tHave a AWESOME day!\n\n");
	return 0;
}

