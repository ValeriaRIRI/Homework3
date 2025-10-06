#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>


int main(){
	setlocale(LC_ALL, "RUS");
	int quantity;
	float price_unit, price;

	printf("Введите количество товара: ");
	scanf("%d", &quantity);

	printf("Введите стоимость товара за единицу: ");
	scanf("%f", &price_unit);

	price = quantity * price_unit;

	printf("Общая стоимость покупки: %.2f", price);
}