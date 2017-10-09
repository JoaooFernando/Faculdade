#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

void fim(int x, int *y);

int px = 0, py = 0;

int main(){
    int vez = 0;
    char jogada;
    char vet [5][5] = {32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32};
    int mat [5][5] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int j, i, x = 0;
    int cont = 0;


    while(jogada != 's'){
        system("cls");
//----------------------PONTUA��O-----------------------------------------------
        printf("\t\tPONTOS X: %d               PONTOS O: %d\n\n", px,py);
//----------------------CHECA FIM DO JOGO-----------------------------------------------
        if(x == 1){
            for(i = 0; i<5; i++){
                for(j = 0; j<5; j++){
                    mat[i][j] = 0;
                    vet[i][j] = 0;
                    x = 0;
                }
            }
        }
//----------------------DESENHA MATRIZ-----------------------------------------------
        for(i = 0; i<5; i++){
            vet[1][i] = 205;
            vet[i][1] = 186;
            vet[3][i] = 205;
            vet[i][3] = 186;
        }
        vet[1][1] = 206;
        vet[1][3] = 206;
        vet[3][1] = 206;
        vet[3][3] = 206;
//----------------------DESENHA NA TELA-----------------------------------------------
        for(i = 0; i<5; i++){
            printf("\n\t\t\t\t");
            for(j = 0; j<5; j++){
                if(mat[i][j] == 1){
                    vet[i][j] = 111;
                }
                if(mat[i][j] == 2){
                    vet[i][j] = 120;
                }
                printf("%c", vet[i][j]);
            }
        }
//-------------------------MATRIZ PRINCIPAL---------------------------------------
      /*printf("\n\n");
        for(i = 0; i<5; i++){
            printf("\n");
            for(j = 0; j<5; j++){
                printf("%d", mat[i][j]);
            }
        }*/
//----------------------CHECA A VEZ-----------------------------------------------
        if(vez == 1){
            printf("\n\n\n\t\t\t\tVez: O\n\n");
        }
        else{
            printf("\n\n\n\t\t\t\tVez: X\n\n");
        }

//----------------------CHECA LINHAS-----------------------------------------------
        if(mat[4][4] == 1 && mat[4][2] == 1 && mat[4][0] == 1){
            fim(1, &x);
        }
        if(mat[4][4] == 2 && mat[4][2] == 2 && mat[4][0] == 2){
            fim(2, &x);
        }
        if(mat[2][4] == 1 && mat[2][2] == 1 && mat[2][0] == 1){
            fim(1, &x);
        }
        if(mat[2][4] == 2 && mat[2][2] == 2 && mat[2][0] == 2){
            fim(2, &x);
        }
         if(mat[0][4] == 1 && mat[0][2] == 1 && mat[0][0] == 1){
            fim(1, &x);
        }
        if(mat[0][4] == 2 && mat[0][2] == 2 && mat[0][0] == 2){
            fim(2, &x);
        }
//----------------------CHECA COLUNAS-----------------------------------------------
        if(mat[0][4] == 1 && mat[2][4] == 1 && mat[4][4] == 1){
            fim(1, &x);
        }
        if(mat[0][4
] == 2 && mat[2][4] == 2 && mat[4][4] == 2){
            fim(2, &x);
        }
        if(mat[0][2] == 1 && mat[2][2] == 1 && mat[4][2] == 1){
            fim(1, &x);
        }
        if(mat[0][2] == 2 && mat[2][2] == 2 && mat[4][2] == 2){
            fim(2, &x);
        }
         if(mat[0][0] == 1 && mat[2][0] == 1 && mat[4][0] == 1){
            fim(1, &x);
        }
        if(mat[0][0] == 2 && mat[2][0] == 2 && mat[4][0] == 2){
            fim(2, &x);
        }
//----------------------CHECA DIAGONAIS-----------------------------------------------
         if(mat[0][0] == 1 && mat[2][2] == 1 && mat[4][4] == 1){
            fim(1, &x);
        }
        if(mat[0][0] == 2 && mat[2][2] == 2 && mat[4][4] == 2){
            fim(2, &x);
        }
         if(mat[4][0] == 1 && mat[2][2] == 1 && mat[0][4] == 1){
            fim(1, &x);
        }
        if(mat[4][0] == 2 && mat[2][2] == 2 && mat[0][4] == 2){
            fim(2, &x);
        }
//----------------------CHECA VELHA-----------------------------------------------
        if(cont == 5){
           fim(3, &x);
        }
//----------------------JOGADAS-----------------------------------------------
        jogada = getch();
        switch(jogada){
            case '7':
                if(vez == 1 && mat[0][0] == 0){
                    mat[0][0] = 1;
                    vez = !vez;
                }
                if(vez == 0 && mat[0][0] == 0){
                    mat[0][0] = 2;
                    vez = !vez;
                    cont++;
                }
                break;
            case '8':
                if(vez == 1 && mat[0][2] == 0){
                    mat[0][2] = 1;
                    vez = !vez;
                }
                if(vez == 0 && mat[0][2] == 0){
                    mat[0][2] = 2;
                    vez = !vez;
                    cont++;
                }
                break;
            case '9':
                if(vez == 1 && mat[0][4] == 0){
                    mat[0][4] = 1;
                    vez = !vez;
                }
                if(vez == 0 && mat[0][4] == 0){
                    mat[0][4] = 2;
                    vez = !vez;
                    cont++;
                }
                break;
            case '4':
                if(vez == 1 && mat[2][0] == 0){
                    mat[2][0] = 1;
                    vez = !vez;
                }
                if(vez == 0 && mat[2][0] == 0){
                    mat[2][0] = 2;
                    vez = !vez;
                    cont++;
                }
                break;
            case '5':
                if(vez == 1 && mat[2][2] == 0){
                    mat[2][2] = 1;
                    vez = !vez;
                }
                if(vez == 0 && mat[2][2] == 0){
                    mat[2][2] = 2;
                    vez = !vez;
                    cont++;
                }
                break;
            case '6':
                if(vez == 1 && mat[2][4] == 0){
                    mat[2][4] = 1;
                    vez = !vez;
                }
                if(vez == 0 && mat[2][4] == 0){
                    mat[2][4] = 2;
                    vez = !vez;
                    cont++;
                }
                break;
              case '1':
                if(vez == 1 && mat[4][0] == 0){
                    mat[4][0] = 1;
                    vez = !vez;
                }
                if(vez == 0 && mat[4][0] == 0){
                    mat[4][0] = 2;
                    vez = !vez;
                    cont++;
                }
                break;
            case '2':
                if(vez == 1 && mat[4][2] == 0){
                    mat[4][2] = 1;
                    vez = !vez;
                }
                if(vez == 0 && mat[4][2] == 0){
                    mat[4][2] = 2;
                    vez = !vez;
                    cont++;
                }
                break;
            case '3':
                if(vez == 1 && mat[4][4] == 0){
                    mat[4][4] = 1;
                    vez = !vez;
                }
                if(vez == 0 && mat[4][4] == 0){
                    mat[4][4] = 2;
                    vez = !vez;
                    cont++;
                }
                break;
        }
    }
    return 0;
}
//----------------------FIM DO JOGO-----------------------------------------------
void fim(int x, int *y){
    int i, j;
    char lixo = 0;
    system("cls");
    printf("\a");
    if(x == 1){
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\t\t\tO Jogador 'O' GANHOU!!!\n\n");
        py++;
        lixo = getch();
        main();
    }
    if(x == 2){
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\t\t\tO Jogador 'X' GANHOU!!!\n\n");
        px++;
        lixo = getch();
        main();
    }
    if(x == 3){
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t DEU VELHA!!\n\n");
        lixo = getch();
        main();
    }
    *y = 1;
}
