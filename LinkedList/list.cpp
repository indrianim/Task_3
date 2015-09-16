#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <windows.h>
#include "list.h"
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

void insertafter(list *l, address p, address s)
{
    address Q;
    Q=(*l).awal;
    while (info(Q).idKar!=info(s).idKar)
    {
        Q=next(Q);
    }
    next(p)=NULL;
    next(p)=next(Q);
    next(Q)=p;

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
void cariid(infotype *x)
{
    cout<< "=============CARI DATA KARYAWAN============= "<<endl;
    cout<<"Masukkan ID Karyawan yang dicari : ";
    cin>>(*x).idKar;
}
address cari(list l,infotype x)
{
    address Q;
    Q=(l).awal;
    while(Q!=NULL)
    {
        if(info(Q).idKar==x.idKar)
            return Q;
        else
            Q=next(Q);
    }
    return NULL;
}
void deletelast(list *l,address *p)
{
    address Q;
    Q=(*l).awal;
    while(next(next(Q))!=NULL)
    {
        Q=next(Q);
    }
    *p=next(Q);
    next(Q)=NULL;
    delete p;

}
void deleteafter(list *l, address *p, address s)
{
    address Q,P;
    P=(*l).awal;
    while(info(P).idKar!=info(s).idKar)
    {
        P=next(P);
    }
    Q=next(P);
    next(P)=next(Q);
    next(Q)=NULL;
    delete Q;

}
