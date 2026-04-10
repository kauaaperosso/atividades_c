#include <stdio.h>
#define ROW 4
#define COL 6

int main(){
    char prod[ROW][40]={"Televisão","Geladeira","Fogão","Ar"};
    char mes[COL][4]={"Jan","Fev","Mar","Abr","Mai","Jun"};
    int vprod[ROW][COL]={{500,350,134,320,98,100},{},{},{}};
    int row,col;

    for (row=0;row<ROW;row++){
        printf("%s: \n",prod[row]);
        
        

        printf("   mes: %s  qauntidade:  %d\n",mes[col],vprod[row][col]);


    }
    return 0;

    //fazer funcionar!!!!!!
}