#include "test.h"
static vipList* viphead;
static houseList* houseHead;
static facilList* facilHead;
static workerList* workerHead;


//��ʼ��id��house=null

 void Vipinit(){
     vip x;
     x._id = 0;
     vipCreate(&viphead, &x);
 }

vip *createVip(){
    static int vipId = 1;
    vip v;
    v._id = vipId;
    vipPush(&viphead, &v);
    ++vipId;
    return &v;
}
//ͨ��id���ػ�Ա�ṹ���ַ
vip *searchVip(int id){
    return vipSearch(&viphead,id);
}
//ͨ��idɾ����Ա
void deleteVip(int id){
    vipDelete(&viphead,id); 
}
//��ʼ��house����Ϣ
void houseinit(){
    house t;
    t._id = 0;
    houseCreate(&houseHead, &t);
}

void createHouse(){
    static int houseId = 1;
    house x = {houseId, 0, 0, 0, NULL};
    housePush(&houseHead,&x);
    houseId++;
}
//ͨ������id���ط��ݵ�ַ �Ҳ�������NULL
house *searchHouse(int id){
    return houseSearch(&houseHead,id);
}
//���ķ�������Ϊ��ס״̬

//���ķ�������Ϊ����״̬

//���ķ�������Ϊ����״̬

//��ʼ��facil����Ϣ

 void facilinit(){
     facil x;
     x._id = 0;
     facilCreate(&facilHead, &x);
 }

void createFacil(){
     static int facilId = 1;
    facil f;
    f._id = facilId;
    vipPush(&facilHead, &f);
    ++facilId;
    return &f;
}
//��ʼ��worker����Ϣ
 void workerinit(){
     worker x;
     x._id = 0;
     workerCreate(&workerHead, &x);
 }

void createWorker(){
    static int workerId = 1;
    worker w;
    workerPush(&workerHead, &w);
    ++workerId;
    return &w;
}
//ͨ��id���ط�����Ա�ṹ���ַ �Ҳ�������NULL
worker *searchWorker(int id){}
//ͨ��idɾ��������Ա
void deletework(int id){}
//ͨ��������Աid������ס�˵�ַ �Ҳ�������NULL
user *searchworker(int id){}
//ͨ����ס��id������ס�˵�ַ �Ҳ�������NULL
user *searchuser(int id){}
//ͨ������id���أ�1�ɹ� 0�ȴ�
int is_queue_full(int id){

}
