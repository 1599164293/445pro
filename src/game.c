#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "game.h"
#include "test.h"

#define ID_GET(id)                \
    if (scanf("%d", &id) == 0)    \
    {                             \
        while (getchar() != '\n') \
            continue;             \
        printf("��Ч�ַ�\n");     \
        continue;                 \
    }

//���ķ�������Ϊ��ס״̬
void ��ס();
//���ķ�������Ϊ����״̬
void ����();
//���ķ�������Ϊ����״̬
void ����();

void ������()
{
    while (1)
    {
        printf("������Ҫ����ķ��ӵ�id\n");
        int id;
        ID_GET(id);
        house *new = searchhouse(id);
        if (new == NULL)
        {
            printf("û�������ķ��ݻ����ѱ�ռ��\n");
            continue;
        }
        printf("�޸����\n");
        break;
    }
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
    while (1)
    {
        printf("���������id\n");
        int id;
        ID_GET(id);
        vip *pre = searchVip(id);
        break;
    }
};

void �޸Ļ�Ա()
{
    while (1)
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
        break;
    }
};

void ɾ����Ա()
{
    while (1)
    {
        printf("����������id\n");
        int id;
        ID_GET(id);
        printf("�����Ҫɾ����?[Y/n]\n");
        char ch;
        if ((ch = getchar()) == 'y' || ch == 'Y')
        {
            deleteVip(id);
            printf("ɾ���ɹ�\n");
        }
        else
            printf("δɾ��\n");
        while (getchar() != '\n')
            continue;
        break;
    }
};

void �½�����()
{
    createHouse();
};

void �鿴����()
{
    while (1)
    {
        printf("�����뷿��id\n");
        int id;
        ID_GET(id);
        house *searchHouse(id);
        break;
    }
};

void �½�������ʩ()
{
    createFacil();
};

void ����������ʩ()
{
    while (1)
    {
        printf("�����볡��id\n");
        int id;
        ID_GET(id);
        int queue(id);
        if (queue == 1)
            printf("����ɹ�\n");
        if (queue == 0)
            printf("�ȴ���\n");
        break;
    }
};
void ����������Ա()
{
    createWorker();
};

void �޸ķ�����Ա()
{
    while (1)
    {
        printf("����������id\n");
        int id;
        ID_GET(id);
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
        break;
    }
};
void ɾ��������Ա()
{
    while (1)
    {
        printf("����������id\n");
        int id;
        ID_GET(id);
        deleteVip(id);
        printf("ɾ���ɹ�\n");
        break;
    }
};
void �鿴�������()
{
    while (1)
    {
        printf("����������id\n");
        int id;
        ID_GET(id);
        user *searchworker(id);
        printf("�鿴�ɹ�\n");
        break;
    }
};
void ���÷������()
{
    while (1)
    {
        printf("�����������Ա��id\n");
        int id;
        ID_GET(id);
        user *pre = searchworker(id);
        printf("�������������id\n");
        int id2;
        ID_GET(id2);
        user *curr = searchuser(id);
        pre = curr;
        printf("���óɹ�\n");
        break;
    }
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
    while (1)
    {
        printf("1.�½�����\n");
        printf("2.�鿴����\n");
        printf("3.����\n");
        int choose;
        ID_GET(choose);
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
}
void manage_lives()
{
    while (1)
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
}
void manage_facilities()
{
    while (1)
    {
        printf("1.�½�������ʩ\n");
        printf("2.����\n");
        int choose;
        ID_GET(choose);
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
}
void ������Ա()
{
    while (1)
    {
        printf("1.�޸ķ�����Ա\n");
        printf("2.ɾ��������Ա\n");
        printf("3.�鿴�������\n");
        printf("4.���÷������\n");
        printf("5.����\n");
        int choose;
        ID_GET(choose);
        switch (choose)
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
    }
}
void manage_accounts()
{
    while (1)
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
            ������Ա();
        case 3:
            return;
        default:
            printf("��Ч�ַ�\n");
        }
    }
}