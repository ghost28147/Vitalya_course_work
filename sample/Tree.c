#include "Tree.h"
#include <stdlib.h>
#include <stdbool.h>

static Node *node_search( Tree *t, const char *name )
{
    return NULL;
}

static void node_add( Node *what, Node *where )
{
}

static void node_to_delete( Node *what )
{

}

void tree_init( Tree *t )
{
    t->root = NULL;
    t->size = 0;
}

bool tree_add_by_name( Tree *t, const char *name, const Data *data )
{
    Node *parent_node;

    // если элемент добавляется не в корень дерева
    if ( t->size > 0 ) {
        parent_node = node_search( t, name );
        // в дереве нет элемента с таким именем
        if ( parent_node == NULL ) return false;
    }

    // инициализировать новый узел
    Node *new_node = malloc( sizeof( Node ) );
    new_node->brother = new_node->child = new_node->parent = NULL;
    new_node->data = *data;

    // если элемент добавлятся в корень дерева
    if ( t->size == 0 ) {
        t->root = new_node;
    }
    else {
        node_add( new_node, parent_node );
    }
    ++t->size;
    return true;
}

void tree_delete_by_name(Tree *t, const char *name)
{
    Node *node_to_delete = node_search( t, name );
    if ( node_to_delete == NULL ) return;

    node_delete( node_to_delete );
}
