#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	system("cls");
	system("color 5f");
	int a,c,d,e,f;
	int num;
	char *passw;
	int status;
	char b[30];
	printf("Enter the game password:");
	gets(passw);
	if(strcmp(passw,"akash") == 0)
	{
		printf("correct");
	}
	printf("Select 0 to exit and 1 to continue..");
	scanf("%d",&num);
	if(num == 0)
	{
		exit(status);
	}
	if(num == 1)
	{
	printf("This Game Tell about Your Aim!!");
	printf("\nEnter Your Name:");
	scanf("%s",&b);
	printf("WELCOME %s!",b);
	printf("\n1 = Green \n2 = Red \n3 = Blue \n4 = White");
	printf("\nPlease Select a Colour:");
	scanf("%d",&c);
	switch(c)
	{
	case 1:
	{
		system("color 2f");
		printf("You Selected Green Colour!");
		printf("\n1 \n3 \n5 \n7");
		printf("\nPlease Select a Number:");
		scanf("%d",&a);
		if(a == 1)
			printf("Your Future is Robotic Engineer!!");
		if(a == 3)
			printf("Your Future is Civil Engineer~!");                                                                                                                                                                                                                                                                                                                    
		if(a == 5)
			printf("Your Future is Mechanical Engineer``");
		if(a == 7)
			printf("Your Future is Software Engineer!!");
		break;
	}
	case 2:
	{
		system("color 4f");
		printf("You Selected Red Colour!");
		printf("\n2 \n4 \n6 \n8");
		printf("\nPlease Select a Number:");
		scanf("%d",&d);
		if(d == 2)
			printf("Your Future is Chief Minister#!");
		if(d == 4)
			printf("Your Future is Prime Minister!!");
		if(d == 6)
			printf("Your Future is president$!");
		if(d == 8)
			printf("Your Future is Collector!!");
		break;

	}
	case 3:
	{
		system("color 1f");
		printf("You Selected Blue Colour!");
		printf("\n3 \n6 \n9 \n7");
		printf("\nPlease Select a Number:");
		scanf("%d",&e);
		if(e == 3)
			printf("Your Future is Dcotor$$");
		if(e == 6)
			printf("Your Future is Marine Engineer~~");
		if(e == 9)
			printf("Your Future is Scientist!!");
		if(e == 7)
			printf("Your Future is Professor^^");
		break;

	}
	case 4:
	{
		system("color 7f");
		printf("You Selected White Colour!");
		printf("\n1 \n5 \n8 \n3");
		printf("\nPlease Select a Number:");
		scanf("%d",&f);
		if(f == 1)
			printf("Your Future is Indian Police Service!!");
		if(f == 5)
			printf("Your Future is Indian Administrative Service~~");
		if(f == 8)
			printf("Your Future is Police``");
		if(f == 3)
			printf("Your Future is Military$$");
		break;

	}
}
}
	return 0;
}
