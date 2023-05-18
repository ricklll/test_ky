#include "vector.h"

ElementType search(vector* v,int i){
    if(i<1 || i>v->length+1){
        printf("input illegal");
        return;
    }
    return v->head[i-1];
}