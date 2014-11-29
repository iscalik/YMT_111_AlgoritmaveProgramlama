// 2 den itibaren ilk 30 asal sayıyı bulup ekrana yazan bir C programı yazınız
/*
 * proje1.c
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


int asalmi(int x){ //asalmi fonksiyonu x argumani ile, 1 ise asal, 0 ise asal degil degeri dondurur
	int i;
	if(x <= 1)
	{
		return 0;
	}
	else
	{
		int kok = x ^ 1/2;
		for(i=2; i < kok;i++)
		{
			if(x%i==0)
			{
				return 0;
			}
		}
		return 1;
		}
}
int main(int argc, char **argv)
{
	int gerekenasal = 30; // 2 den sonra kac asal sayi yazdirma limiti
	int i;
	int sayac = 0;
	while (1)
	{
		for (i = 2; sayac <= gerekenasal; i++)
		{
			if (asalmi(i) == 1)
			{
				printf("%d \n",i);
				sayac++;
			}
			
		}
		
	}
	return 0;
}

