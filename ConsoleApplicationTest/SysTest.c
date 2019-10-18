#include <stdio.h>
#include "main.h"

void outputBasicTypeBytes(void)
{
	printf("Type int occupies %d bytes\n",sizeof(int));
	printf("Type long occupies %d bytes\n",sizeof(long));
	printf("Type char occupies %d bytes\n",sizeof(char));
	printf("Type float occupies %d bytes\n",sizeof(float));
	printf("Type double occupies %d bytes\n",sizeof(double));
}

void outputSunhyWord(void)
{
	uint8_t i = 33;
	uint8_t sun_ptr[] = "My name is sunhy, email me at sunhaoyu@tongyuauto.com";
	printf("Hello,World!\n");
	printf("%s\n",sun_ptr);
}

void TestRunTime(void)
{
	clock timer;
	timer.sec = getchar();
}

void PauseHere(void)
{
	uint8_t temp;
	uint8_t sun_ptr[] = "System is in pause state now, press any key to exit!";
	printf("%s\n",sun_ptr);
	temp = getchar();
}

void TestCPUEndian(void)
{
	union
	{
		uint32_t a;
		uint8_t b;
	}tempUnion;
	tempUnion.a = 0xff111100;
	if (tempUnion.b==0x00)
	{
		printf("Little-Endian Mode.\n");
	}
	else if (tempUnion.b==0xff)
	{
		printf("Big-Endian Mode.\n");
	}
	else
	{
		printf("Test Error.\n");
	}
}

void LetterCount(void)
{
	uint8_t i;
	uint8_t b[52] = {0};
	while( (i=getchar())!='\n')
	{
		if(i >= 'A' && i <= 'Z')
		{
			b[i-'A']++;
		}
		if(i >= 'a' && i <= 'z')
		{
			b[i-'a'+26]++;
		}
	}
	for(i = 0;i < 26;i++)
	{
		printf("%c = %d\n",i+'A',b[i]);
	}
	for(i = 26;i <52;i++)
	{
		printf("%c = %d\n",i+'a'-26,b[i]);
	}
}