// Dışarıdan alınan 20 sayı arasındaki en büyük sayıyı bulup ekrana yazan bir C programı yazınız.
/*
 * proje6.c
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
 * 
 * 
 */


#include <stdio.h>

int main(int argc, char **argv)
{
	int sayi[20];
	int i,maxsayi;
	for (i = 0; i < 20; i++)
	{
		printf("%d . giriniz >> ",i+1);
		scanf("%d", &sayi[i]);
	}
	
	maxsayi = sayi[1];
	
	for (i = 0; i < 20; i++)
	{
		if (sayi[i] > maxsayi)
		{
			maxsayi = sayi[i];
		}
		
	}
	printf("enbuyuk >> %d",maxsayi);
	return 0;
}

