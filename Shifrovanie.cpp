#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
	int i = 0;
	int n = 0;
	int k = 5;   //Ключ шифрования
	int d = 5;   //Ключ дешифрования
	char alf[] = "abcedfghijklmnopqrstuvwxyz0123456789#!@$%^&*-+=";
	char buf[] = "Hello world";                                         //Сюда вводить текст
	char decod[] = "Hiqqt 1twqd";                                       //Сюда вводить зашифрованный текст

	for (n = 0; n < 10; n++)
	{
		for (i = 0; i < 47; i++)
		{
			if (buf[n] == alf[i])
			{
				if (i >= 47)
					buf[n] = alf[i - 47];
				else
					buf[n] = alf[i + k];
				break;
			}
		}
	}
	printf("Vash shefr= %s\n", buf);
	for (n = 0; n < 10; n++)
	{
		for (i = 0; i < 47; i++)
		{
			if (decod[n] == alf[i])
			{
				if (i >= 47)
					decod[n] = alf[i - 47];
				else
					decod[n] = alf[i - d];
				break;
			}
		}
	}
	printf("Deshifrovka= ");
	puts(decod);
	_getch();
	return 0;
}