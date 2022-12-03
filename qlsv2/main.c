#include <stdio.h>
#include <stdlib.h>
#include "Date.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int chon,n;
	SV ds[100];
	do{
		system("cls");
		printf("\n-----Menu-----");
		printf("\n 1.Nhap thong tin hoc vien");
		printf("\n 2.Hien thi thong tin hoc vien");
		printf("\n 3.Tim thong tin hoc vien theo ma hoc vien");
		printf("\n 0.thoat");
		printf("\n----------");
		printf("\n Ban hay chon mot cong viec:"); scanf("%d",&chon);
		switch (chon)
		{
			case 1:
				system("cls");
				printf("\n1. Nhap thong tin hoc vien");
				nhapDSSV(ds,&n);
				getch();
				break;
			case 2:
				system("cls");
				printf("\n2. Hien thi thong tin hoc vien");
				inDSSV(ds,n);
				getch();
				break;
			case 3:
				system("cls");
				printf("\n3. Tim thong tin hoc vien theo ma hoc vien");
				timDSSV(ds,n);
				getch();
				break;
		}
	}while (chon!=0);
	
	return 0;
}
