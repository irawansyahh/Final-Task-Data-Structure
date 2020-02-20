#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED


#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <iomanip>
#include <conio.h>
#include <windows.h>
#include <dos.h>

#define Nil NULL
#define infoUKM(P) P->infoUKM
#define nextUKM(P) P->nextUKM
#define prevUKM(P) P->prevUKM
#define firstRelasi(P) P->firstRelasi
#define firstUKM(L) L.firstUKM
#define lastUKM(L) L.lastUKM

/**===============================Relasi====================================*/

#define nextRelasi(R) R->nextRelasi
#define infoRelasi(R) R->infoRelasi

/**===============================Mahasiswa====================================*/
#define nextMhs(P) P->nextMhs
#define prevMhs(P) P->prevMhs
#define infoMhs(P) P->infoMhs
#define firstMhs(P) L2.firstMhs
#define lastMhs(P) L2.lastMhs

using namespace std;


typedef struct elmlistUKM *addressUKM;
typedef struct elmlistMhs *addressMhs;
typedef struct elmlistRelasi *addressRelasi;

typedef struct info_elmUKM{
    string namaUKM,IdUKM,ruangan,jenisUKM;
};

struct elmlistUKM{
    info_elmUKM infoUKM;
    addressUKM nextUKM;
    addressUKM prevUKM;
    addressRelasi firstRelasi;
};

struct ListUKM{
    addressUKM firstUKM;
    addressUKM lastUKM;
};

void createListUKM (ListUKM &L);
addressUKM alokasiListUKM (info_elmUKM UKM);
bool isEmpty (ListUKM L);
addressUKM findElmUKM (ListUKM &L, info_elmUKM UKM);
void insertlast (ListUKM &L, addressUKM P);
void insertdataukm (ListUKM &L, addressUKM P);
void deletedataukm (ListUKM &L, addressUKM P);
void viewdataUKM (ListUKM &L, addressUKM &P);
void UpdateDataUKM (ListUKM &L, info_elmUKM UKM);

/**===============================Mahasiswa====================================*/

typedef struct info_elmMhs{
    string namaMhs,nimMhs;
};

struct elmlistMhs{
    info_elmMhs infoMhs;
    addressMhs nextMhs;
    addressMhs prevMhs;
};

struct ListMhs{
    addressMhs firstMhs;
    addressMhs lastMhs;
};

void createListMhs (ListMhs &L2);
addressMhs alokasiListMhs (info_elmMhs X);
bool isEmpty (ListMhs L2);
addressMhs findElmMhs (ListMhs &L2, info_elmMhs MHS);
void insertlastMhs (ListMhs &L2, addressMhs P);
void insertdataMhs (ListMhs &L2, addressMhs P);
void deletedataMhs (ListMhs &L2, addressMhs P);
void viewdataMhs (ListMhs &L2, addressMhs &P);


/**===============================Relasi====================================*/


typedef struct info_elmRealasi{
    addressMhs MHS;
};

struct elmlistRelasi{
    addressMhs infoRelasi;
    addressRelasi nextRelasi;
};

addressRelasi alokasiListRelasi (addressMhs X);
void BuatRelasi (ListUKM L, ListMhs L2);
void RelasiNIMMhs (ListUKM &L, addressRelasi R,ListMhs &L2);
void RelasiIDUKM (ListUKM &L, addressRelasi R);
void insertfirstRelasi(addressUKM U, addressRelasi R);
void HapusRelasi (ListUKM &L, addressRelasi R);
void TampilRelasi (ListUKM &L, addressRelasi &R);

/**=====================================MENU==========================================*/

void Menu(ListUKM &L, ListMhs &L2);
void loading();

#endif // HEADER_H_INCLUDED
