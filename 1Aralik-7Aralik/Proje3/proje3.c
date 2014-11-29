//Girilen Bir kelimenin kaç tane harften oluştuğunu bulan bir fonksiyon yazınız.
/*
 * proje3.c
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
int kacharf(char kelime[]){
	
	int i;
	//printf("%s", kelime);
	for(i=0; kelime[i]!='\0'; ++i);
	return i;
	}
int main(int argc, char **argv)
{
	char kelime[100];
	gets(kelime);
	printf("Kelime harf sayisi >> %d", kacharf(kelime));
	return 0;
}

