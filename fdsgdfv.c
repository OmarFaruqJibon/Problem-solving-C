#include<stdio.h>
#include<conio.h>
#define UP 72
#define DOWN 80
#define LEFT 75
#define RIGHT 77

int main()
{
	unsigned char c;
	c = getch();
	if(c==224 || c==0){
		c=getch();
		switch(c)
		{
		case UP:
			printf("UP key is pressed!\n");
			break;
		case DOWN:
			printf("DOWN key is pressed!\n");
			break;
		case LEFT:
			printf("LEFT key is pressed!\n");
			break;
		case RIGHT:
			printf("RIGHT key is pressed!\n");
			break;
		}

	}
	else{
		switch(c)
		{
		case 'a':
            printf("A key is pressed!\n");
            break;
		case 'w':
            printf("W key is pressed!\n");
            break;
		case 's':
            printf("S key is pressed!\n");
            break;
		case 'd':
            printf("D key is pressed!\n");
            break;

		}
	}
}
