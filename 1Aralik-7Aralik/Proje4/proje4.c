//Girilen Bir kelimeyi tersten yazan bir C programı yazınız.
/*
 * proje4.c
 * 
 * Copyright 2014 Ismet Said Calik <ismetsaid.calik@gmail.com>
 * 
 * This program is free software; you can redikelimeibute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is dikelimeibuted in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin kelimeeet, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */


#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
	char kelime[50];
    char tkelime[50];
    int i=-1,j=0;

    printf("Kelime >> : ");
    scanf("%s",kelime);
   
    while(kelime[++i]!='\0');

    while(i>=0)
     tkelime[j++] = kelime[--i];

    tkelime[j]='\0';
  
    printf("Tersi >> : %s",tkelime);
  
	return 0;
}

