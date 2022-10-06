#include<stdio.h>
#include<stdlib.h>

int main()
{
	printf("*********        ***           *           *     \n");
	printf("*       *      *     *        ***         * *    \n");
	printf("*       *     *       *      *****       *   *   \n");
	printf("*       *     *       *        *        *     *  \n");
	printf("*       *     *       *        *       *       * \n");
	printf("*       *     *       *        *        *     *  \n");
	printf("*       *     *       *        *         *   *   \n");
	printf("*       *      *     *         *          * *    \n");
	printf("*********        ***           *           *     \n\n\n");



	int num[3];
	int _register;

	float Hight, Weight, BMI;
	float data[5];
	float money_perday;



	printf("please input the first number:");
	scanf_s("%d", &num[0]);
	printf("please input the second number:");
	scanf_s("%d", &num[1]);
	printf("please input the third number:");
	scanf_s("%d", &num[2]);

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			if (num[j] < num[j + 1])
			{
				_register = num[j];
				num[j] = num[j + 1];
				num[j + 1] = _register;
			}
		}
	}
	printf("Max:%d\n", num[0]);
	printf("min:%d\n\n\n", num[2]);





	printf("please input a number:");
	scanf_s("%d", &num[0]);
	(num[0] % 2 == 0 ? printf("it is Even\n\n\n"): printf("it is Odd\n\n\n"));





	printf("PPPPPPPPP\n");
	printf("    P   P\n");
	printf("    P   P\n");
	printf("    P   P\n");
	printf("     P P\n");
	printf("\n");
	printf("  JJ\n");
	printf(" J\n");
	printf("J\n");
	printf(" J\n");
	printf("  JJJJJJJ\n");
	printf("\n");
	printf("DDDDDDDDD\n");
	printf("D       D\n");
	printf("D       D\n");
	printf(" D     D\n");
	printf("  DDDDD\n\n\n");





	printf("please input the frist number:");
	scanf_s("%d", &num[0]);
	printf("please input the sceond number:");
	scanf_s("%d", &num[1]);
	printf("%d", num[1]);
	(num[0] % num[1] == 0 ? printf(" is a foctor of ") : printf(" is NOT a foctor of "));
	printf("%d\n\n\n", num[0]);





	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < (4 - i); j++)
			printf(" ");

		for (int j = 0; j < (1 + i * 2); j++)
			printf("*");

		printf("\n");
	}
	printf("\n\n");

	

	

	printf("number\ttsquar\ttcube\n");
	for (int i = 0; i < 11; i++)
	{
		printf("%d\t", i);
		_register =i*i;
		printf("%d\t", _register);
		_register =i*i*i;
		printf("%d\n", _register);
	}
	printf("\n\n\n");

	
	

	
	printf("plase enter your hight(m) and weight(KG):\n");
	scanf_s("%f%f", &Hight, &Weight);
	BMI = Weight / (Hight * Hight);
	printf("\nyour BMI value: %f\n\n",BMI);

	printf("Underweight:\tless than 18.5\n");
	printf("Normal:\t\tbetween 18.5 and 24.9\n");
	printf("Overweight:\tbetween 25 and 29.9\n");
	printf("Obese:\t\t30 to greater\n\n\n");


	


	printf("plase enter the information \n(1)Total miles driven per day\n(2)Cost per gallon of gasoline\n");
	printf("(3)Average miles per gallon\n(4)Parking fees per day\n(5)Tolls per day\n");
	scanf_s("%f%f%f%f%f", &data[0], &data[1], &data[2], &data[3], &data[4]);

	money_perday = (data[0] / data[2]) * data[1] + data[3] + data[4];

	printf("\nyou spend about %.2f $ on transport perday\n\n", money_perday);

	printf("formula:((1)/(3))*(2)+(4)+(5)\n");



	system("\npause");
	return 0;
}