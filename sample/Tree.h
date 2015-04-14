#include <stdbool.h>

typedef struct {
   char *name;
   char *surname;
   int age;
} Data;

typedef struct node {
    Data data;
    struct node *parent;
    struct node *brother;
    struct node *child;
} Node;

typedef struct {
   Node *root;
   int size;
} Tree;

// инициализация дерева
void tree_init( Tree *t );

// добавление данных в дерево к узлу с заданным именем
bool tree_add_by_name( Tree *t, const char *name, const Data *data );

// удаление данных из дерева по заданному имени
void tree_delete_by_name( Tree *t, const char *name );

// поиск элемента по имени
bool tree_search_by_name( Tree *t, const char *name, Data *out );

// отображение дерева
void tree_list( const Tree *t );

// сортировка дерева
void tree_sort( Tree *t );
