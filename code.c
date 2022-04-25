#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct Node
{
    struct Node *next;
    int value;
} Spisok;

int main() {
  Spisok *create(int data)
  {
  // Выделение памяти под корень списка
  Spisok *tmp = (Spisok*)malloc(sizeof(Spisok));
  // Присваивание значения узлу
  tmp -> value = data;
  // Присваивание указателю на следующий элемент значения NULL
  tmp -> next = NULL;
  return(tmp);
  }
  // FILE *authors = fopen("authors.txt", "r");
  // FILE *vybor = fopen ("vybor.txt", "w");
  // char napr[100];
  // Author x;
  // struct author *p = &x;
  //
  // printf("%s", "Set needed napravlenye:\nMath\nPhysics\nProgramming\n");
  // scanf("%s", &napr);
  // printf("Your set: %s. Res of ur zapros enter to vybor.txt\n", napr);
  // while (!feof(authors)) {
  //   fscanf(authors, "%s", p->name);
  //   fscanf(authors, "%s", p->spec);
  //   fscanf(authors, "%s", p->year);
  //   fscanf(authors, "%s\n", p->pages);
  //   if (!strcmp(napr, p->spec)) {
  //     fprintf(vybor, "Name: %s", p->name);
  //     fprintf(vybor, "\tNapravlenye: %s", p->spec);
  //     fprintf(vybor, "\tYear: %s", p->year);
  //     fprintf(vybor, "\tPages: %s", p->pages);
  //     fprintf(vybor, "\n");
  //   }
  // }
  //
  // fclose(authors);
  // fclose(vybor);
  return 0;
}
