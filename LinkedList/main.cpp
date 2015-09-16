LIST.H

#ifndef LIST_H_INCLUDED
#define LIST_H_INCLUDED

#define info(p) (p)->info
#define next(p) (p)->next
#define awal(p) (l).awal;
using namespace std;
struct karyawan
{
    int idKar;
    char nama[100];
    char alm[100];
    char jk[100];
    int notlp;
};
typedef karyawan infotype;
typedef struct Elmlist *address;

struct Elmlist
{
    infotype info;
    address next;
};
struct list
{
    address awal;
};
address alokasi (infotype x);
void buat_baru(infotype *x);
void insertlast(list *l,address p);
void view (list l);
address cari(list l, infotype x);

#endif // LIST_H_INCLUDED



LIST.CPP

#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <windows.h>
#include "karyawan.h"
using namespace std;
address alokasi (infotype x)
{
    address p=(address)malloc(sizeof(Elmlist));
    info(p)=x;
    return p;
}
void buat_baru(infotype *x)
{
    cout<< "=============INSERT DATA KARYAWAN============= "<<endl;
    infotype k;
    cout<<"Masukkan ID Karyawan  : ";
    cin>>k.idKar;
    cout<<"Masukkan Nama  : ";
    cin>>k.nama;
    cout<<"Masukkan Alamat  : ";
    cin>>k.alm;
    cout<<"Masukkan Jenis Kelamin  : ";
    cin>>k.jk;
    cout<<"Masukkan No. Tlp  : ";
    cin>>k.notlp;
    *x=k;
}

void insertlast(list *l,address p)
{
    address Q;
    Q=(*l).awal;
    while(next(Q)!=NULL)
    {
        Q=next(Q);
    }
    next(p)=NULL;
    next(Q)=p;
}

void view(list l)
{
    address Q;
    Q=(l).awal;
    cout<< "=============DATA KARYAWAN============= "<<endl;
    if(Q==NULL)
        cout<<"Data Kosong"<<endl;
    while(Q!=NULL)
    {
        cout<<"ID Karyawan  : " <<info(Q).idKar <<endl;
        cout<<"Nama  : " <<info(Q).nama<<endl;
        cout<<"Alamat  : " <<info(Q).alm<<endl;
        cout<<"Jenis Kelamin  : " <<info(Q).jk<<endl;
        cout<<"No. Tlp  : " <<info(Q).notlp<<endl;
        Q=next(Q);
        cout<<endl<<endl;
    }

    getch();
}

MAIN.CPP

#include <iostream>
#include <conio.h>
#include<stdlib.h>
#include "list.h"
using namespace std;

int main()
{
    int mn,idk,ddk;

    list l;
    address c,s;
    infotype b;
    (l).awal=NULL;
    do
    {
        system("cls");
        cout << "~~~~~~~~~~~~~~~MENU~~~~~~~~~~~~~~~ " << endl;
        cout << "1. Insert First" <<endl;
        cout << "2. Insert After" <<endl;
        cout << "3. Insert Last" <<endl;
        cout << "4. Delete First" <<endl;
        cout << "5. Delete After" <<endl;
        cout << "6. Delete Last" <<endl;
        cout << "7. View Data" <<endl;
        cout << "8. Search Element" << endl;
        cout << "9. Exit" << endl;
        cout << "Masukkan no menu yang diinginkan : ";
        cin >> mn;
        switch (mn)
        {
        case 1:
            system("cls");
            
            break;

        case 2:
            system("cls");
            
            break;

        case 3:
            system("cls");
            buat_baru(&b);
            c=alokasi(b);
            insertlast(&l,c);
            break;

        case 4:
            system("cls");
            
            break;

        case 5:
            system("cls");
            
            break;
    
        case 6:
            system("cls");
            
            break;

        case 7:
            system("cls");
            view(l);
            break;
            
        case 8:
            system("cls");
            
            break;
    
    }
    while(mn<9);
    return 0;
}



