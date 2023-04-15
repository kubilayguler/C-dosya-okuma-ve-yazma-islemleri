#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
	FILE *fp1,*fp2;
	int kontrol,i,j,sayi;
	fp1 = fopen("sayilar.txt","r");
	if(fp1==NULL){
		printf("Dosya Acilamadi!");
		getch();
		return 0;
	}
	fp2 = fopen("sayilar2.txt","w");
			if(fp2==NULL){
			printf("Dosya Acilamadi!");
			getch();
			return 0;
	}
		while(!feof(fp1)){
		fscanf(fp1, "%d", &sayi);
		kontrol=0;
		for(j=2 ; j<sayi ; j++)
		{
			if(sayi%j==0 || sayi<2)
			{
				kontrol=1;
				break;
			}
		}
		if(kontrol==0)
		{
			
			fprintf(fp2, "%d\n",sayi);
		}
		}
	fclose(fp1);
	fclose(fp2);
	getch();
	return 0;
}
