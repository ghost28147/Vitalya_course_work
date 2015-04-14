#include "Tree.h"
#include "stdlib.h"

int main( void )
{
    Tree my_tree;
    tree_init( &my_tree );

    Data userdata1 = { "user1", "user1", 1 };
    Data userdata2 = { "user2", "user2", 2 };
    Data userdata3 = { "user3", "user3", 3 };
    Data userdata4 = { "user4", "user4", 4 };
    Data userdata5 = { "user5", "user5", 5 };

    tree_add_by_name( &my_tree, NULL, &userdata1 );
    tree_add_by_name( &my_tree, "user1", &userdata2 );
    tree_add_by_name( &my_tree, "user2", &userdata3 );
    tree_add_by_name( &my_tree, "user3", &userdata4 );
    tree_add_by_name( &my_tree, "user4", &userdata5 );

    tree_list( &my_tree );
    tree_delete_by_name( &my_tree, "user1" );
    tree_list( &my_tree );
    return 0;
}

/*
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 60
#ifdef _WIN32
#define CLEAR system("cls")
#else
#define CLEAR system("clear")
#endif



typedef struct tree
{
    Node *root;
    char Bag[MAX];
    char Beg[MAX];
    int TelNub;
    struct tree* son;
    struct tree* brother;
    struct tree* early;
} tree;


void choose(tree* ROOT, tree*root);

int main()
{
    tree* ROOT = NULL;
    tree*root = NULL;
    choose(ROOT, root);
    return 0;
}

tree*add(tree* POISK, tree*Ps)
{
    tree* tmp;
    char NAME[MAX]; char dol[MAX];
    int TelNub;
    printf("Input name: ");
    fflush(stdin);
    fgets(NAME, MAX, stdin );
    printf("Input dolzhnost: ");
    fgets(dol, MAX, stdin );
    printf("Input salary: ");
    scanf("%d", &TelNub);
    if (POISK == NULL)
    {
        Ps = (tree*)malloc(sizeof(tree));
        Ps->brother = NULL;
        Ps->son = NULL;
        Ps->early = NULL;
        Ps->TelNub = TelNub;
        strncpy( Ps->Bag, NAME, MAX);
        strncpy(Ps->Bag, NAME, MAX );
        strncpy(Ps->Beg, dol, MAX);
        return Ps;
    }
    tmp = POISK->son;//òìï-áóäóùèé áðàò äàëåå ââîäèìîãî ñûíà.
    POISK->son = (tree*)malloc(sizeof(tree));
    Ps = POISK->son;
    Ps->early = POISK;
    Ps->brother = tmp;
    Ps->son = NULL;
    Ps->TelNub = TelNub;
    strncpy(Ps->Bag, NAME, MAX );
    strncpy(Ps->Beg, dol, MAX );
    return Ps;
}

void PoiskAdd(tree*ROOT, char*name, tree**root)
{
    if (!ROOT) return;
    PoiskAdd(ROOT->son, name, root);
    if (strcmp((ROOT->Bag), name) == 0)
    {
        *root = ROOT;
        PoiskAdd(ROOT->brother, name, root);
    }
}

void PRINT(tree*ROOT)
{
    if (!ROOT) return;

    PRINT(ROOT->son);
    if (ROOT->Bag) printf("name: %s dolzhnost: %s  salary: %d \n", ROOT->Bag, ROOT->Beg, ROOT->TelNub);
    PRINT(ROOT->brother);
    getchar();
}

void poisk(tree*ROOT, char*name)
{
    if (!ROOT) return;
    poisk(ROOT->son, name);
    if (strcmp((ROOT->Bag), name) == 0)
        printf("name: %s dolzhnost: %s salary: %d\n ", ROOT->Bag, ROOT->Beg, ROOT->TelNub);
    poisk(ROOT->brother, name);
}

void find_bro(tree*ROOT, tree*udalit, tree**brat)
{
    if (!ROOT) return;
    find_bro(ROOT->son, udalit, brat);
    if ((ROOT->brother == udalit))*brat = ROOT;
    find_bro(ROOT->brother, udalit, brat);
}

tree*Delet(tree**udalit, tree*ROOT)
{
    tree*brat = ROOT;
    if (*udalit == ROOT)
        return NULL;
    if ((*udalit)->early->son == (*udalit))
        ((*udalit)->early->son) = ((*udalit)->brother);
    else
    {
        find_bro(ROOT, *udalit, &brat);
        brat->brother = (*udalit)->brother;
    }
    return ROOT;
}

void choose(tree* ROOT, tree*root)
{
    int n = 0;
    char NAME[MAX];
    while (1)
    {
        printf("1.Enter\n2.Delete.\n3.Search\n4.Print\n");
        scanf("%d", &n);
        getchar();
        switch (n)
        {
        case 1:
            if (ROOT == NULL) ROOT = add(NULL, NULL);
            else
            {
                printf("which element to add?\n");
                fgets(NAME, MAX, stdin );
                PoiskAdd(ROOT, NAME, &root);
                add(root, NULL);
            }
            CLEAR;
            break;
        case 2:
            printf("what do you want to delet?\n...");
            fgets(NAME, MAX, stdin );
            PoiskAdd(ROOT, NAME, &root);
            if (root == NULL)
            {
                printf("Jelaemiy element ne naiden=>udalyat' to i nechego");
                getchar();
                 CLEAR;
                break;
            }
            ROOT = Delet(&root, ROOT);
            root = NULL;
            break;
        case 3:
            printf("what do you need find??\n");
            fgets(NAME, MAX, stdin );
            poisk(ROOT, NAME);
            printf("click the enter");
            getchar();
            CLEAR;
            break;

        case 4:
            PRINT(ROOT);
            printf("click the enter");
            getchar();
            CLEAR;
            break;
        }
    }
}

*/
