#include <stdio.h>
//#include "list.h"
#include "game.h"

int main()
{
    while (1)
    {
        int choose;
        printf("1.��Ա����\n");
        printf("2.���ݹ���\n");
        printf("3.��ס����\n");
        printf("4.��ʩ����\n");
        printf("5.�û�����\n");
        printf("6.�˳�\n");
        if (scanf("%d", &choose) == 0)
        {
            while(getchar() != '\n') continue;
            printf("��Ч�ַ�\n");
            continue;
        }
        switch (choose)
        {
        case 1:
            manage_vips();
            break;
        case 2:
            manage_houses();
            break;
        case 3:
            manage_lives();
            break;
        case 4:
            manage_facilities();
            break;
        case 5:
            manage_accounts();
            break;
        case 6:
            return 0;
        default:
            printf("��Ч�ַ�\n");
            break;
        }
    }
}