#ifndef _TEST_H
#define _TEST_H
#include "game.h"
void init();
//��ʼ��id��house=null
vip *createVip();
//ͨ��id���ػ�Ա�ṹ���ַ
vip *searchVip(int id);
//ͨ��idɾ����Ա
void deleteVip(int id);
//��ʼ��house����Ϣ
void createHouse();
//ͨ������id���ط��ݵ�ַ �Ҳ�������NULL
house *searchHouse(int id);
//��ʼ��facil����Ϣ
void createFacil();
//��ʼ��worker����Ϣ
void createWorker();
//ͨ��id���ط�����Ա�ṹ���ַ �Ҳ�������NULL
worker *searchWorker(int id);
//ͨ��idɾ��������Ա
void deletework(int id);
//ͨ��������Աid������ס�˵�ַ �Ҳ�������NULL
user *searchworker(int id);
//ͨ����ס��id������ס�˵�ַ �Ҳ�������NULL
user *searchuser(int id);
//ͨ������id���أ�1�ɹ� 0�ȴ�
int is_queue_full(int id);
#endif