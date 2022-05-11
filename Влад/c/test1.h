#include "config.h"

typedef struct student { /*Структура*/
  struct student *next; /*Ссылка на следующий элемент*/
  char famil[50];
  char name[50];
  int year;
  int ozenka;
} t_list;

t_list *create_node(char *set_famil, char *set_name, int set_year, int set_ozenka) { /*Создание элемента*/
  t_list *node = (t_list *)malloc(sizeof(t_list));
  strcpy(node -> name, set_name);
  strcpy(node -> famil,set_famil);
  node -> year = set_year;
  node -> ozenka = set_ozenka;
  node -> next = NULL;  /*Следующий указатель будет нулевым*/
  return node;
}

void push_front(t_list **list, char *set_famil, char *set_name, int set_year, int set_ozenka) { /*Создание следующего элемента*/
  t_list *new_element = create_node(set_famil, set_name, set_year, set_ozenka);
  new_element -> next = *list;  /*Присваивания предыдущего указателя указателем на этот элемент*/
  *list = new_element;
}
