#include <stdio.h>
#include <string.h>
#include "game.h"
//��ʼ��id��house=null
vip *createVip();
//ͨ��id���ػ�Ա�ṹ���ַ
vip *searchVip(int);
//ͨ��idɾ����Ա
void deleteVip(int);
//��ʼ��house����Ϣ
house *createHouse();
//ͨ������id���ط��ݵ�ַ
house *searchHouse(int);

void ������(){

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
    printf("ɾ���ɹ�");
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
    scanf("")
    
}
void manage_facilities()
{
}
void manage_accounts()
{
}