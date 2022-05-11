#include "config.h"
void menu() { /*Вывод меню*/
  printf("test!\n");
  printf("select:\n\n");
  printf("1. instruct;\n");
  printf("2. start!\n");
  printf("3. exit\n");
  printf("Punct: ");
}
int get_variant (int count) { // Считывание варианта, который укажет пользователь. Без проверки на криворукость
  int variant;
  scanf("%d", &variant);
  return variant;
}
