#include <stdio.h>
//#include "list.h"
#include "game.h"

int main(){
    while(1){
        int choose;
        printf("1.��Ա����\n");
        printf("2.���ݹ���\n");
        printf("3.��ס����\n");
        printf("4.��ʩ����\n");
        printf("5.�û�����\n");
        scanf("%d",&choose);
        
        switch(choose){
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
        default:
            break;
        }
    }   

    return 0;
}