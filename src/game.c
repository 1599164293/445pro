#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "game.h"
//��ʼ��id��house=null
vip *createVip(){};
//ͨ��id���ػ�Ա�ṹ���ַ
vip *searchVip(int id){};
//ͨ��idɾ����Ա
void deleteVip(int id){};
//��ʼ��house����Ϣ
house *createHouse(){};
//ͨ������id���ط��ݵ�ַ
house *searchHouse(int id){};
//ͨ����ס��id���ط��ݵ�ַ
house *searchhouse(int id){};
//���ķ�������Ϊ��ס״̬
void ��ס(){};
//���ķ�������Ϊ����״̬
void ����(){};
//���ķ�������Ϊ����״̬
void ����(){};
//��ʼ��facil����Ϣ
facil *createFacil(){};
//��ʼ��worker����Ϣ
worker *createWorker(){};
//ͨ��id���ط�����Ա�ṹ���ַ
worker *searchWorker(int id){};
//ͨ��idɾ��������Ա
void deletework(int id){};
//ͨ��������Աid������ס�˵�ַ
user *searchworker(int id){};
//ͨ����ס��id������ס�˵�ַ
user *searchuser(int id){};
//ͨ������id���أ�1�ɹ� 0�ȴ�
int queue(int id);
void ������(){
    printf("�����빺���ӵ�id\n");
    int id;
    scanf("%d",&id);
    house *new = searchhouse(id);
    vip_* house = new;
    printf("�޸����\n");
};

void �½���Ա()
{
    printf("������������:\n");
    vip *curr = createVip();

    //�������ô��
    scanf("%s", curr->_name);

    printf("�����ɹ�\n");
    ������();
};
void ��ѯ��Ա()
{
    printf("���������id\n");
    int id;
    scanf("%d", &id);
    vip *pre = searchVip(id);
};

void �޸Ļ�Ա()
{
    printf("����������id\n");
    int id;
    scanf("%d", &id);

    vip *curr = searchVip(id);
    char name[NAME_MAX + 1], a[NAME_MAX + 1];
    printf("������������:\n");
    scanf("%s", name);
    printf("���ٴ�����:\n");
    scanf("%s", a);
    if (strcmp(name, a) == 0)
        strcpy(curr->_name, name);
    else
        printf("�������������\n");
};

void ɾ����Ա()
{
    printf("����������id\n");
    int id;
    scanf("%d", &id);
    deleteVip(id);
    printf("ɾ���ɹ�\n");
};

void �½�����()
{
    house *createHouse();
};

void �鿴����()
{
    printf("�����뷿��id\n");
    int id;
    scanf("%d", &id);
    house *searchHouse(id);
};

void �½�������ʩ()
{
    facil *createFacil();
};

void ����������ʩ()
{
    printf("�����볡��id\n");
    int id;
    scanf("%d",&id);
    int queue(id);
    if (queue == 1)
    printf("����ɹ�\n");
    if (queue == 0)
    printf("�ȴ���\n");
};
void ����������Ա()
{
    worker *createWorker();
};

void �޸ķ�����Ա()
{
    printf("����������id\n");
    int id;
    scanf("%d", &id);
    worker *curr = searchWorker(id);
    char name[NAME_MAX + 1], a[NAME_MAX + 1];
    printf("������������:\n");
    scanf("%s", name);
    printf("���ٴ�����:\n");
    scanf("%s", a);
    if (strcmp(name, a) == 0)
        strcpy(curr->_name, name);
    else
        printf("�������������\n");
};
void ɾ��������Ա()
{
    printf("����������id\n");
    int id;
    scanf("%d", &id);
    deleteVip(id);
    printf("ɾ���ɹ�\n");
};
void �鿴�������()
{
    printf("����������id\n");
    int id;
    scanf("%d", &id);
    user *searchworker(id);
    printf("�鿴�ɹ�\n");
};
void ���÷������()
{
    printf("�����������Ա��id\n");
    int id;
    scanf("%d", &id);
    user *pre = searchworker(id);
    printf("�������������id\n");
    int id2;
    scanf("%d", &id2);
    user *curr = searchuser(id);
    pre = curr;
    printf("���óɹ�\n");
};
void manage_vips()
{
    while (1)
    {
        printf("1.�½���Ա\n");
        printf("2.��ѯ��Ա\n");
        printf("3.�޸Ļ�Ա\n");
        printf("4.ɾ����Ա\n");
        printf("5.����\n");
        int choose;
        if (scanf("%d", &choose) == 0)
        {
            while (getchar() != '\n')
                continue;
            printf("��Ч�ַ�\n");
            continue;
        }

        switch (choose)
        {
        case 1:
            �½���Ա();
            break;
        case 2:
            ��ѯ��Ա();
            break;
        case 3:
            �޸Ļ�Ա();
            break;
        case 4:
            ɾ����Ա();
            break;
        case 5:
            return;
        default:
            printf("��Ч�ַ�\n");
        }
    }
}
void manage_houses()
{
    printf("1.�½�����\n");
    printf("2.�鿴����\n");
    printf("3.����\n");
    int choose;
    scanf("%d", &choose);
    switch (choose)
    {
    case 1:
        �½�����();
    case 2:
        �鿴����();
    case 3:
        return;
    default:
        printf("��Ч�ַ�\n");
    }
}
void manage_lives()
{
    printf("ѡ����ס��\n");
    int id;
    scanf("%d", &id);
    house *searchhouse(id);
    printf("1.������\n");
    printf("2.����������ʩ\n");
    printf("3.����\n");
    int choose;
    scanf("%d", &choose);
    switch (choose)
    {
    case 1:
    {
        printf("1.��ס\n");
        printf("2.����\n");
        printf("3.����\n");
        printf("4.����\n");
        int choose2;
        scanf("%d", &choose2);
        switch (choose2)
        {
        case 1:
            ��ס();
        case 2:
            ����();
        case 3:
            ����();
        case 4:
            return;
        default:
            printf("��Ч�ַ�\n");
        }
    }
    case 2:
    ����������ʩ();
    case 3:
        return;
    default:
        printf("��Ч�ַ�\n");
    }
}
void manage_facilities()
{
    printf("1.�½�������ʩ\n");
    printf("2.����\n");
    int choose;
    scanf("%d", &choose);
    switch (choose)
    {
    case 1:
        �½�������ʩ();
    case 2:
        return;
    default:
        printf("��Ч�ַ�\n");
    }
}
void manage_accounts()
{
    printf("1.����������Ա\n");
    printf("2.������Ա\n");
    printf("3.����\n");
    int choose1;
    scanf("%d", &choose1);
    switch (choose1)
    {
    case 1:
        ����������Ա();
    case 2:
        printf("1.�޸ķ�����Ա\n");
        printf("2.ɾ��������Ա\n");
        printf("3.�鿴�������\n");
        printf("4.���÷������\n");
        printf("5.����\n");
        int choose2;
        scanf("%d", &choose2);
        switch (choose2)
        {
        case 1:
            �޸ķ�����Ա();
        case 2:
            ɾ��������Ա();
        case 3:
            �鿴�������();
        case 4:
            ���÷������();
        case 5:
            return;
        default:
            printf("��Ч�ַ�\n");
        }
    case 3:
        return;
    default:
        printf("��Ч�ַ�\n");
    }
}