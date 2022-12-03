#include<stdio.h>
#include<stdlib.h>
#include"Sinhvien.h"

void nhapSV(SV *d)
{
	fflush(stdin);
	printf("Nhap ma sinh vien:");gets(d->masv);
	printf("Nhap ho ten sinh vien:");gets(d->hoten);
	do{
		printf("Nhap gioi tinh (0-nu/1-nam/2-khac)"); scanf("%d",&d->gt);
		if(d->gt<0||d->gt>2) printf("Gia tri khong  hop le,hay nhap lai \n");
	}while(d->gt<0||d->gt>2)
	inputDate(%d->ms);
	fflush(stdin);
	printf("Nhap noi sinh:"); get(d->noisinh);
	printf("Nhap lop:"); get(d->lop);
}
void inSV(SV d)
{
	printf("\nMa sinh vien:%s",d.masv);
	printf("\nHo ten:%s",d.hoten);
	printf("\nGioi tinh:%s",(d.gt==0?"Nu":(d.gt==0\1?"Nam":(d.gt==2?"Khac":)));
}
