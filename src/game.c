#include <stdio.h>
#include "game.h"

void createVip(){};
void searchVip(){};
void deleteVip(){};
void modifyVip(){};

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
        scanf("%d", &choose);
        switch (choose)
        {
        case 1:
            createVip();
            break;
        case 2:
            searchVip();
            break;
        case 3:
            modifyVip();
            break;
        case 4:
            deleteVip();
            break;
        case 5:
            return;
        }
    }
}
void manage_houses()
{
}
void manage_lives()
{
}
void manage_facilities()
{
}
void manage_accounts()
{
}