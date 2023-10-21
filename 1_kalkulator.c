#include <stdio.h>
#include <stdlib.h>

int main(){
    float num1, num2;
    float hasil;
    int operator;
    int ulang;

    system("cls");
    printf("====================================================\n");
    printf("================ PROGRAM KALKULATOR ================\n");
    printf("====================================================\n");
    printf("=\t\t 1. Pertambahan\t\t\t   =\n");
    printf("=\t\t 2. Pengurangan\t\t\t   =\n");
    printf("=\t\t 3. Perkalian\t\t\t   =\n");
    printf("=\t\t 4. Pembagian\t\t\t   =\n");
    printf("=\t\t 5. Modulus\t\t\t   =\n");
    printf("=\t\t 6. keluar\t\t\t   =\n");
    printf("====================================================\n");
    printf("====================================================\n");
    
    printf("\tsilahkan pilih operasi hitung\n");
    printf("\tpilih angka saja\n");
    printf("\tpilihan anda: ");
    scanf("%d", &operator);

    if(operator==1){
        system("cls");
        printf("====================================================\n");
        printf("================= MENU PERTAMBAHAN =================\n");
        printf("====================================================\n");
        printf("\n\t Masukkan angka pertama: ");
        scanf("%f", &num1);
        printf("\t Masukkan angka kedua: ");
        scanf("%f", &num2);

        hasil = num1 + num2;

        printf("\n====================================================\n");
        printf("\t Hasil dari kalkulasi: %.2f\n", hasil);
        printf("====================================================\n");
        printf("Apakah anda ingin ulang?\n");
        printf("1. Ya\n");
        printf("2. Tidak\n");
        printf("Jawab: ");
        scanf("%d", &ulang);
        if(ulang==1){
            return main();
        }
        else{
            system("cls");
            printf("Terimakasih");    
        }
    }   
    else if(operator==2){
        system("cls");
        printf("====================================================\n");
        printf("================= MENU PENGURANGAN =================\n");
        printf("====================================================\n");
        printf("\n\t Masukkan angka pertama: ");
        scanf("%f", &num1);
        printf("\t Masukkan angka kedua: ");
        scanf("%f", &num2);

        hasil = num1 - num2;

        printf("\n====================================================\n");
        printf("\t Hasil dari kalkulasi: %.2f\n", hasil);
        printf("====================================================\n");
        printf("Apakah anda ingin ulang?\n");
        printf("1. Ya\n");
        printf("2. Tidak\n");
        printf("Jawab: ");
        scanf("%d", &ulang);
        if(ulang==1){
            return main();
        }
        else{
            system("cls");
            printf("Terimakasih");   
        }
    }
    else if(operator==3){
        system("cls");
        printf("====================================================\n");
        printf("================== MENU PERKALIAN ==================\n");
        printf("====================================================\n");
        printf("\n\t Masukkan angka pertama: ");
        scanf("%f", &num1);
        printf("\t Masukkan angka kedua: ");
        scanf("%f", &num2);

        hasil = num1 * num2;

        printf("\n====================================================\n");
        printf("\t Hasil dari kalkulasi: %.2f\n", hasil);
        printf("====================================================\n");
        printf("Apakah anda ingin ulang?\n");
        printf("1. Ya\n");
        printf("2. Tidak\n");
        printf("Jawab: ");
        scanf("%d", &ulang);
        if(ulang==1){
            return main();
        }
        else{
            system("cls");
            printf("Terimakasih");    
        }
    }
    else if(operator==4){
        system("cls");
        printf("====================================================\n");
        printf("================== MENU PEMBAGIAN ==================\n");
        printf("====================================================\n");
        printf("\n\t Masukkan angka pertama: ");
        scanf("%f", &num1);
        printf("\t Masukkan angka kedua: ");
        scanf("%f", &num2);

        hasil = num1 / num2;

        printf("\n====================================================\n");
        printf("\t Hasil dari kalkulasi: %.2f\n", hasil);
        printf("====================================================\n");
        printf("Apakah anda ingin ulang?\n");
        printf("1. Ya\n");
        printf("2. Tidak\n");
        printf("Jawab: ");
        scanf("%d", &ulang);
        if(ulang==1){
            return main();
        }
        else{
            system("cls");
            printf("Terimakasih");    
        }
    }
    else if(operator==5){
        system("cls");
        printf("====================================================\n");
        printf("=================== MENU MODULUS ===================\n");
        printf("====================================================\n");
        printf("\n\t Masukkan angka pertama: ");
        scanf("%f", &num1);
        printf("\t Masukkan angka kedua: ");
        scanf("%f", &num2);

        hasil = (int)num1 % (int)num2;

        printf("\n====================================================\n");
        printf("\t Hasil dari kalkulasi: %.f\n", hasil);
        printf("====================================================\n");
        printf("Apakah anda ingin ulang?\n");
        printf("1. Ya\n");
        printf("2. Tidak\n");
        printf("Jawab: ");
        scanf("%d", &ulang);
        if(ulang==1){
            return main();
        }
        else{
            system("cls");
            printf("Terimakasih");
        }
    }
    else if(operator==6){
        system("cls");
        printf("Terimakasih");
    }
    else{
        system("cls");
        printf("Pilihan anda salah\n");
        printf("Apakah anda ingin ulang?\n");
        printf("1. Ya\n");
        printf("2. Tidak\n");
        printf("Jawab: ");
        scanf("%d", &ulang);
        if(ulang==1){
            return main();
        }
        else{
            system("cls");
            printf("Terimakasih");
        }
    }
    return 0;
}