#include "swap.h"

void Swap(char *left, char *right)
{
    char temp = *left;   // Сохраняем значение, на которое указывает left
    *left = *right;      // Присваиваем left значение right
    *right = temp;       // Присваиваем right сохраненное значение
}