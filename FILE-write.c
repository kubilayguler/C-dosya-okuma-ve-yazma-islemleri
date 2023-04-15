#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

int main() 
{
	FILE *fp;
	int i,sayi;
	srand(time(NULL));
	
	fp = fopen("sayilar.txt","w");
	
	if(fp == NULL) {
		printf("Dosya acilamadi!");
		getch();
		return 0;
	}
	
	for(i=0;i<100;i++) {
		sayi = rand() %1000;
        fprintf(fp, "%d\n",sayi);
	}
	
	fclose(fp);
	getch();	
	return 0;
}
