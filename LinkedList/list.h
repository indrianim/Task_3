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
void cariid(infotype *x);
void insertafter(list *l, address p, address s);
void insertlast(list *l,address p);
void deletelast(list *l,address *p);
void deleteafter(list *l, address *p, address s);
address cari(list l, infotype x);
void view (list l);

#endif // LIST_H_INCLUDED
