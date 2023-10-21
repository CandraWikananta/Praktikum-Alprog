#include <stdio.h>
#include <stdlib.h>

void menu(){
    system("cls");
    printf("==================================================================\n");
    printf("============== PROGRAM MENGHITUNG LUAS DAN KELILING ==============\n");
    printf("==================================================================\n");
    printf("=\t\t\t 1. Segitiga Sembarang\t\t\t =\n");
    printf("=\t\t\t 2. Belah Ketupat\t\t\t =\n");
    printf("=\t\t\t 3. Jajar Genjang\t\t\t =\n");
    printf("=\t\t\t 4. Trapesium\t\t\t\t =\n");
    printf("=\t\t\t 5. Lingkaran\t\t\t\t =\n");
    printf("=\t\t\t 6. keluar\t\t\t\t =\n");
    printf("==================================================================\n");
    printf("==================================================================\n");
}

void segitigasembarang(){
    int alas, tinggi, sisi1, sisi2, sisi3;
    int luas, keliling;
    system("cls");
    printf("==================================================================\n");
    printf("============== PROGRAM MENGHITUNG LUAS DAN KELILING ==============\n");
    printf("==============          SEGITIGA SEMBARANG          ==============\n");
    printf("==================================================================\n");
    printf("\n\t\t\tMasukkan sisi 1: ");
    scanf("%d", &sisi1);
    printf("\t\t\tMasukkan sisi 2: ");
    scanf("%d", &sisi2);
    printf("\t\t\tMasukkan sisi 3: ");
    scanf("%d", &sisi3);
    printf("\t\t\tMasukkan alas: ");
    scanf("%d", &alas);
    printf("\t\t\tMasukkan tinggi: ");
    scanf("%d", &tinggi);

    luas = (alas * tinggi)/2;
    keliling = sisi1 + sisi2 + sisi3;

    system("cls");
    printf("=================================================================\n");
    printf("\t\t  Keliling segitiga sembarang: %d \n", keliling);
    printf("\t\t  Luas segitiga sembarang: %d \n", luas);
    printf("=================================================================\n");
}

void belahketupat(){
    int d1, d2, sisi;
    int luas, keliling;
    system("cls");
    printf("==================================================================\n");
    printf("============== PROGRAM MENGHITUNG LUAS DAN KELILING ==============\n");
    printf("==============             BELAH KETUPAT            ==============\n");
    printf("==================================================================\n");
    printf("\n\t\t\tMasukkan sisi: ");
    scanf("%d", &sisi);
    printf("\t\t\tMasukkan diagonal 1: ");
    scanf("%d", &d1);
    printf("\t\t\tMasukkan diagonal 2: ");
    scanf("%d", &d2);

    luas = (d1*d2)/2;
    keliling = sisi *4;

    system("cls");
    printf("=================================================================\n");
    printf("\t\t     Keliling belah ketupat: %d \n", keliling);
    printf("\t\t     Luas belah ketupat: %d \n", luas);
    printf("=================================================================\n");
}


void jajargenjang(){
    int tinggi, sisimiring, alas;
    int luas, keliling;
    system("cls");
    printf("==================================================================\n");
    printf("============== PROGRAM MENGHITUNG LUAS DAN KELILING ==============\n");
    printf("==============             JAJAR GENJANG            ==============\n");
    printf("==================================================================\n");
    printf("\n\t\t\tMasukkan alas: ");
    scanf("%d", &alas);
    printf("\t\t\tMasukkan tinggi: ");
    scanf("%d", &tinggi);
    printf("\t\t\tMasukkan sisi miring: ");
    scanf("%d", &sisimiring);

    luas = alas * tinggi;
    keliling = 2 * (alas * sisimiring);

    system("cls");
    printf("=================================================================\n");
    printf("\t\t     Keliling jajar genjang: %d \n", keliling);
    printf("\t\t     Luas jajar genjang: %d \n", luas);
    printf("=================================================================\n");
}

void trapesium(){
    int tinggi, sisiAtas, sisiBawah, sisiMiring1, sisiMiring2;
    int luas, keliling;
    system("cls");
    printf("==================================================================\n");
    printf("============== PROGRAM MENGHITUNG LUAS DAN KELILING ==============\n");
    printf("==============               TRAPESIUM              ==============\n");
    printf("==================================================================\n");
    printf("\n\t\t\tMasukkan sisi atas: ");
    scanf("%d", &sisiAtas);
    printf("\t\t\tMasukkan sisi bawah: ");
    scanf("%d", &sisiBawah);
    printf("\t\t\tMasukkan sisi miring 1: ");
    scanf("%d", &sisiMiring1);
    printf("\t\t\tMasukkan sisi miring 2: ");
    scanf("%d", &sisiMiring2);
    printf("\t\t\tMasukkan tinggi: ");
    scanf("%d", &tinggi);

    luas = (sisiAtas + sisiBawah) * tinggi / 2;
    keliling = sisiAtas + sisiBawah + sisiMiring1 + sisiMiring2;

    system("cls");
    printf("=================================================================\n");
    printf("\t\t     Keliling trapesium: %d \n", keliling);
    printf("\t\t     Luas trapesium: %d \n", luas);
    printf("=================================================================\n");
}

void lingkaran(){
    int jarijari;
    int luas, keliling;
    system("cls");
    printf("==================================================================\n");
    printf("============== PROGRAM MENGHITUNG LUAS DAN KELILING ==============\n");
    printf("==============               LINGKARAN              ==============\n");
    printf("==================================================================\n");
    printf("\n\t\tMasukkan jari jari lingkaran: ");
    scanf("%d", &jarijari);

    luas = 3.14 * jarijari * jarijari;
    keliling = 3.14 * 2 * jarijari;

    system("cls");
    printf("=================================================================\n");
    printf("\t\t     Keliling lingkaran: %d \n", keliling);
    printf("\t\t     Luas lingkaran: %d \n", luas);
    printf("=================================================================\n");
    
}

void ulang(){
    int ulang;
    printf("\n\t\t\tapakah anda ingin ulang?\n");
    printf("\t\t\t1. Ya\n");
    printf("\t\t\t2. Tidak\n");
    printf("\t\t\tPilihan anda: ");
    scanf("%d", &ulang);
    if(ulang==1){
        return main();
    }
    else{
        terimakasih();
    }
}

void terimakasih(){
    system("cls");
    printf("===============================\n");
    printf("!!!!!!!!! TERIMAKASIH !!!!!!!!!\n");
    printf("===============================");
}

int main(){
    menu();
    int menu;
    printf("silahkan pilih bangun datar\n");
    printf("pilih angka saja\n");
    printf("pilihan anda: ");
    scanf("%d", &menu);
    if(menu==1){
        segitigasembarang();
        ulang();
    }
    else if(menu==2){
        belahketupat();
        ulang();
    }
    else if(menu==3){
        jajargenjang();
        ulang();
    }
    else if(menu==4){
        trapesium();
        ulang();
    }
    else if(menu==5){
        lingkaran();
        ulang();
    }
    else if(menu==6){
        terimakasih();
    }
    else{
        system("cls");
        printf("\t\t\tMasukkan anda salah\n");
        ulang();
    }
    return 0;
}