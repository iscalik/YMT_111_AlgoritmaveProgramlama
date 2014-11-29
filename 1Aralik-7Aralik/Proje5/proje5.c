// Çarpma operatörü kullanmadan dışarıdan alınan A ve B değerleri ile çarpma işlemi yapan bir C programı yazınız. 
//Not: C kodu içerisinde  Sonuc=A*B; şeklinde bir işlem yapılmayacaktır.
/*
 * proje5.c
 * 
 * Copyright 2014 Ismet Said Calik <ismetsaid.calik@gmail.com>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 5 * 7
 * 5 + 5 + 5
 */


#include <stdio.h>

int main(int argc, char **argv)
{
	int i,sayi1,sayi2, carpim = 0;
	printf("1. Sayi Gir >> ");
	scanf("%d",&sayi1);
	printf("2. Sayi Gir >> ");
	scanf("%d", &sayi2);
	for (i = 1; i <= sayi2; i++)
	{
		carpim = carpim + sayi1;
	}
	printf("* olmadan carpim sonucu >> %d", carpim);
	return 0;
}

