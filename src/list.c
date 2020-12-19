#include "game.h"
INITFUNC(vip);
INITFUNC(user);
INITFUNC(house);
INITFUNC(facil);
INITFUNC(worker);

void queueCreate(queueList **wl, const queue *w)\
{\
    wl[0] = (queueList *)malloc(sizeof(queueList));\
    wl[0]->element = *w;\
    wl[0]->next = NULL;\
}\
queue* queuePush(queueList **wl, const queue *w)\
{\
    queueList *curr, *temp = wl[0];\
    queueCreate(&curr, w);\
    while (temp->next != NULL && (temp = temp->next))\
        continue;\
    temp->next = curr;\
    return curr;
}\
//���ܴ���ָ��null��ָ��,������ͷ�ڵ�
queue queuePop(queueList **wl){
    queue retn = wl[0]->element;
    queueList* curr = wl[0]->next;
    free(wl[0]);
    wl[0] = curr;
    return retn;
}
//�����õĺ���
queue * queueSearch(queueList **wl, int id){return NULL;}
//ͬ��������
void queueDelete(queueList **wl, int id){}

void queueFree(queueList **wl){\
    queueList* next;\
    while (wl[0] != NULL)\
    {\
        next = wl[0]->next;\
        free(wl[0]);\
        wl[0] = next;\
    }\
}
#undef INITFUNC