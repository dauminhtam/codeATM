#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int sodu = 100000000;
int user =123;
int pass = 456;

int main(int argc, char *argv[]) {
	char luachon;
	int user, pass, num, id, tienck, x;
	int op;
	if (login (user, pass) == 1) {
		printf ("Ban da login thanh cong!\n");
		printf ("Chao mung ban da den ngan hang VNPT!\n");
		printf ("Cac chuc nang cua ngan hang: \n");
		printf ("1. Rut tien!\n");
		printf ("2. Chuyen khoan!\n");
		printf ("3. Xem so du!\n");
		printf ("4. Thoat!\n");
		do {
			printf ("Moi ban chon chuc nang: ");
			scanf ("%d", &op);
			switch (op){
				case 1: 
					ruttien (num);
					break;
				case 2:
					chuyenkhoan (id, tienck);
					break;
				case 3: 
					xemsodu (x);
					break;
				case 4:
					return 0;
					break;
			}
			printf ("Ban co muon tiep tuc lua chon chuc nang khong (Y/N)?");
			fflush (stdin);
			scanf ("%c", &luachon);
		}
		while (luachon == 'Y'|| luachon == 'y');
	}
	else
	 return 0;
	}
	login (int user,int pass){
		char luachon1;
		int i = 0;
		do {
			printf ("Moi ban nhap user: \n");
			scanf ("%d", &user);
			printf ("Moi ban nhap pass: \n");
			scanf ("%d", &pass);
			if (user == 123 && pass == 456){
				return 1;
			}
			else {
				i +=1;
				printf ("ban da nhap sai user hoac pass lan %d!\n", i);
				if (i == 3){
					printf ("Tai khoan cua ban da bi khoa do nhap sai 3 lan!\n");
					return 0;
				}
			}
			printf ("Ban co muon tiep tuc rut tien khong (Y/N)?");
			fflush (stdin);
			scanf ("%c", &luachon1);
		}
		while (luachon1 == 'Y'||luachon1 == 'y');
	}
	ruttien (int num){
		char luachon2;
		do {
			printf ("Ban da chon chuc nang rut tien!\n");
			printf ("Moi ban nhap so tien can rut (la boi so 50, nho hon 3.000.000 VND, nho hon so du hien co!): \n");
			scanf ("%d", &num);
			if (num%50000 == 0 && num <= sodu - 50000 && num <=3000000){
				sodu = sodu - num;
				printf ("Moi ban nhan tien!\n");
				printf ("So du con lai cua tai khoan la: %d\n", sodu);
			}
			else if (num%50000 !=0){
				printf ("So tien ban nhap kong phai la boi so cua 50.000 VND!\n");
			}
			else if (num >= sodu - 50000){
				printf ("So tien ban nhap lon hon so du tai khoan theo quy dinh cua ngan hang!\n");
			}
			else if (num > 3000000){
				printf ("So tien ban nhap vuot qua quy dinh cua ngan hang la: 3.000.000 VND!\n");
			}
			printf ("Ban co muon tiep tuc rut tien khong (Y/N?)\n");
			fflush (stdin);
			scanf ("%c", &luachon2);
		}
		while (luachon2 == 'Y'|| luachon2 == 'y');
	}
	chuyenkhoan (int id, int num){
		char luachon3;
		do {
			
			printf ("Moi ban nhap so tai khoan muon chuyen: ");
			scanf ("%d", &id);
			printf ("Moi ban nhap so tien muon chuyen: ");
			scanf ("%d", &num);
			if (num >= sodu - 50000){
				printf ("So tien muon chuyen vuot qua so du theo quy dinh cua ngan hang!\n");
			}
			else {
				sodu = sodu - num;
				printf ("Ban da chuyen khoan thanh cong so tien %d cho tai khoan %d!\n", num, id);
			}
			printf ("Ban co muon tiep tuc chuyen khoan khong (Y/N)?\n");
			fflush (stdin);
			scanf ("%c", &luachon3);
		}
		while (luachon3 == 'Y'|| luachon3 =='y');
	}
	xemsodu (num){
		printf ("Ban da chon chuc nang xem so su tai khoan!\n");
		printf ("So du tai khoan cua ban la: %d\n", sodu);
	}
	
