#include "RLEList.h"
#include "malloc.h"
#include "stdio.h"
#include "stdlib.h"

struct RLEList_t{
    char data;
    struct node *next;
};

void RLEListDestroy(RLEList list)
{
    //Node node1= (Node)malloc(sizeof(*node1));
    //node1->data= NULL;
    //node1->next=list;
    while(list!= NULL)
    {
        free(*(list->data));
        list->next=list->next+1;
    }
    return;
}

int RLEListSize(RLEList list)
{
    if(list == NULL)
    {
        return -1;
    }
    Node temp= malloc(sizeof(*temp));
    temp->data= list-> data;
    temp-> next = list-> next;
    int size =0;
    while(temp)
    {
        size++;
        temp->data= list->next;
    }
    free(temp);
    return size;
}

char RLEListGet(RLEList list, int index, RLEListResult *result)
{
    if(list==NULL)
    {
        *result = RLE_LIST_NULL_ARGUMENT;
        return 0;
    }
    Node temp= malloc(sizeof(*temp));
    temp->data= list-> data;
    temp-> next = list-> next;
    while(*temp){
        if(i ==index)
        {
            *result =LIST_SUCCESS;
            return temp->data;
        }
        i++;
        temp->data= list->next;
    } 
    free(temp);
    *result = RLE_LIST_INDEX_OUT_OF_BOUNDS;
    return 0;
}


char* RLEListExportToString(RLEList list, RLEListResult* result);
{
    if(list == NULL)
    {
        *result = RLE_LIST_NULL_ARGUMENT;
        return NULL;
    }
    char character;
    char* string = Null;
    int count_character=0;
    int count_appear =0;
    int sum_len =0;
     Node temp= malloc(sizeof(*temp));
    temp->data= list-> data;
    temp-> next = list-> next;
    while(*temp){
        character = temp->data;
        string =character;
        count_characters++;
        while((*temp)&&temp->data == character)
        {
            count_appear++;
            temp->data= list->next;
        }
        sum_len+=count_appear;
        string + sumlen = count_appear;
        string +sumlen +1 = \n;
        count_appear =0;
        temp->data= list->next;
    }
    free(temp);
    *result =LIST_SUCCESS;
    return string;
}

//implement the functions here
RLEList_t RLEListCreate(){
    RLEList_t ptr = malloc(sizeof(*ptr));
    if(!ptr) {
        return NULL;
    }
        ptr->data = NULL;
        ptr->next = NULL;
        return ptr;
};

RLEListResult RLEListAppend(RLEList list, char value){node
    if (value==NULL){
       return RLE_LIST_NULL_ARGUMENT;
    }
    if(list==NULL){
        return RLE_LIST_OUT_OF_MEMORY;
    }
while (list!= NULL){
list = list->next;
}
RLEList_t newHead = RLEListCreate(value);
list->next=newhead;
    newhead->data = value;
    newhead->next = NULL;
    return RLE_LIST_SUCCESS;
}

RLEListResult RLEListRemove(RLEList list, int index){
    if(index==NULL){
        return RLE_LIST_NULL_ARGUMENT;
    }
    int length_of_list=0;
    while(list){
        length_of_list++;
    }
    if(length_of_list<index){
        return RLE_LIST_INDEX_OUT_OF_BOUNDS;
    }
if(list*+(index)->next==NULL) {
    list * +(index-1)->next == NULL;
}
else(
        list*+(index-1)->next=list*+(index-1);
        )
return RLE_LIST_SUCCESS;
}

RLEListResult RLEListMap(RLEList list, MapFunction map_function){
while(list != NULL){
    if(list->data==NULL){
        return RLE_LIST_NULL_ARGUMENT;
    }
    if(list->data=='c'){
        list->data==map_function(c);
    }
    list=list->next;
}
return LIST_SUCCESS;
}
