#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node node_t;
typedef struct node *node_t_p;

node_t_p build_12()
{
    node_t_p head = malloc(sizeof(node_t));

    head->data = 1;
    head->next = malloc(sizeof(node_t));
    head->next->data = 2;
    head->next->next = NULL;

    return head;
}

node_t_p NewLinkedList(int val)
{
    node_t_p head = malloc(sizeof(node_t));
    head->data = val;
    head->next = NULL;
    return head;
}

int get_list_size(node_t_p list)
{
    int cnt = 0;
    while (list != NULL)
    {
        cnt++;
        list = list->next;
    }
    return cnt;
}

void print_list(node_t_p list)
{
    while (list != NULL)
    {
        printf("%d\n", list->data);
        list = list->next;
    }
}

void main()
{
    node_t_p list = build_12();
    node_t_p list2 = NewLinkedList(4);
    int len1 = get_list_size(list);
    int len2 = get_list_size(list2);
    printf("%d,%d\n", len1, len2);

    print_list(list);
    print_list(list2);
}

// void main()
// {
//       node_t_p list = build_12();
//       node_t_p list_t = list;
//       while(list_t != NULL)
//       {
//         printf("%d\n", list_t->data);
//         list_t = list_t->next;
//       }
// }

// void main()
// {
//     node_t_p list = NewLinkedList(1);
//     node_t_p list_t = list;
//     while (list_t != NULL)
//     {
//         printf("%d\n", list_t->data);
//         list_t = list_t->next;
//     }
// }