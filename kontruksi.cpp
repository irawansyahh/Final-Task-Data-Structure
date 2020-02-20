#include "header.h"

/**============================================================UKM===================================================*/
void createListUKM (ListUKM &L){
    firstUKM(L) = Nil;
    lastUKM(L) = Nil;
}

addressUKM alokasiListUKM (info_elmUKM X){
    addressUKM P = new elmlistUKM;
    infoUKM(P).namaUKM = X.namaUKM;
    infoUKM(P).IdUKM = X.IdUKM;
    infoUKM(P).ruangan = X.ruangan;
    infoUKM(P).jenisUKM = X.jenisUKM;
    nextUKM(P) = Nil;
    prevUKM(P) = Nil;
    firstRelasi(P) = Nil;
    return P;
}


bool isEmpty(ListUKM L){
    bool hasil;
    hasil = false;
    if (firstUKM(L) == Nil){
        hasil = true;
        return hasil;
    }else{
        return hasil;
    }
}


addressUKM findElmUKM (ListUKM &L, info_elmUKM UKM){
    addressUKM P;
    if (isEmpty(L) == true){
        cout<<"list kosong";
    } else {
        P = firstUKM(L);
        while (P!=Nil){
            if (infoUKM(P).IdUKM == UKM.IdUKM){
                return P;
            } else{
                P = nextUKM(P);
            }
        }
        return P;
    }
}

void insertlast (ListUKM &L, addressUKM P){
    if(isEmpty(L) == true){
        firstUKM(L) = P;
        lastUKM(L) = P;
    }else{
        nextUKM(lastUKM(L)) = P;
        prevUKM(P) = lastUKM(L);
        lastUKM(L) = P;
    }
}

void insertdataukm (ListUKM &L, addressUKM P){
    info_elmUKM UKM;
    cout<<"Masukkan Nama UKM \t: ";
    cin>>UKM.namaUKM;
    cout<<"Masukkan Id UKM \t: ";
    cin>>UKM.IdUKM;
    cout<<"Masukkan Ruangan \t: ";
    cin>>UKM.ruangan;
    cout<<"Masukkan Jenis UKM \t: ";
    cin>>UKM.jenisUKM;
    system("cls");
    //while ((UKM.namaUKM != ".")&&(UKM.IdUKM != ".")&&(UKM.ruangan != ".")&&(UKM.jenisUKM != ".")){
        insertlast(L,alokasiListUKM(UKM));
        /*cout<<"Masukkan Nama UKM \t: ";
        cin>>UKM.namaUKM;
        cout<<"Masukkan Id UKM \t: ";
        cin>>UKM.IdUKM;
        cout<<"Masukkan Ruangan \t: ";
        cin>>UKM.ruangan;
        cout<<"Masukkan Jenis UKM \t: ";
        cin>>UKM.jenisUKM;
        system("cls");
    }*/
}


void deletedataukm (ListUKM &L, addressUKM P){
    info_elmUKM UKM;
    cout<<"Masukkan ID UKM yang ingin dihapus : ";
    cin>>UKM.IdUKM;
    P = findElmUKM(L,UKM);
    addressUKM Q;
    if (nextUKM(P) == Nil) {
        lastUKM(L)= prevUKM(P);
        nextUKM(lastUKM(L)) = Nil;
        prevUKM(P) =  Nil;
    } else if (prevUKM(P) == Nil){
        firstUKM(L) = nextUKM(firstUKM(L));
        prevUKM(firstUKM(L)) = Nil;
        nextUKM(P) = Nil;
    } else {
        Q = prevUKM(P);
        nextUKM(Q) = nextUKM(P);
        prevUKM(nextUKM(P)) = Q;
        prevUKM(P) = Nil;
        nextUKM(P) = Nil;
    }
    cout<<"\n DATA BERHASIL DIHAPUS\n";
}

void viewdataUKM (ListUKM &L, addressUKM &P){
    if (isEmpty(L) == true){
        cout<<"DAFTAR UKM KOSONG";
    }else{
        P = firstUKM(L);
        cout<<setiosflags(ios::left)<<setw(25)<<"Nama UKM";
        cout<<setiosflags(ios::left)<<setw(25)<<"ID UKM";
        cout<<setiosflags(ios::left)<<setw(25)<<"Ruangan";
        cout<<setiosflags(ios::left)<<setw(25)<<"Jenis";
        cout<<"\n-----------------------------------------------------------";
        cout<<endl;
        while(P != Nil){
            cout<<setiosflags(ios::left)<<setw(25)<<infoUKM(P).namaUKM;
            cout<<setiosflags(ios::left)<<setw(25)<<infoUKM(P).IdUKM;
            cout<<setiosflags(ios::left)<<setw(25)<<infoUKM(P).ruangan;
            cout<<setiosflags(ios::left)<<setw(25)<<infoUKM(P).jenisUKM;
            cout<<endl;
            P = nextUKM(P);
        }
    }
}

void UpdateDataUKM (ListUKM &L, info_elmUKM UKM){
    cout<<"Masukkan ID UKM : ";
    cin>>UKM.IdUKM;
    addressUKM U = findElmUKM(L,UKM);
    cout<<"Masukkan Ruangan Baru: ";
    cin>>U->infoUKM.ruangan;
    cout<<"BERHASIL MEN-UPDATE RUANGAN UKM\n";
}
/**============================================================MAHASISWA===================================================*/

void createListMhs (ListMhs &L2){
    firstMhs(L2) = NULL;
    lastMhs(L2) = NULL;
}

addressMhs alokasiListMhs (info_elmMhs X){
    addressMhs P = new elmlistMhs;
    infoMhs(P).namaMhs = X.namaMhs;
    infoMhs(P).nimMhs = X.nimMhs;
    nextMhs(P) = NULL;
    prevMhs(P) = NULL;
    return P;
}


bool isEmpty(ListMhs L2){
    bool hasil;
    hasil = false;
    if (firstMhs(L2) == NULL){
        hasil = true;
        return hasil;
    }else{
        return hasil;
    }
}


addressMhs findElmMhs (ListMhs &L2, info_elmMhs MHS){
    addressMhs P;
    if (isEmpty(L2) == true){
        cout<<"list kosong";
    } else {
        P = firstMhs(L2);
        while (P!=NULL){
            if (infoMhs(P).nimMhs == MHS.nimMhs){
                return P;
            } else{
                P = nextMhs(P);
            }
        }
        return P;
    }
}

void insertlastMhs(ListMhs &L2, addressMhs P){
    if(isEmpty(L2) == true){
        firstMhs(L2) = P;
        lastMhs(L2) = P;
    }else{
        nextMhs(lastMhs(L2)) = P;
        prevMhs(P) = lastMhs(L2);
        lastMhs(L2) = P;
    }
}

void insertdataMhs (ListMhs &L2, addressMhs P){
    info_elmMhs Mhs;
    cout<<"Masukkan Nama Mahasiwa \t: ";
    cin>>Mhs.namaMhs;
    cout<<"Masukkan NIM Mahasiswa \t: ";
    cin>>Mhs.nimMhs;
    system("cls");
    //while ((Mhs.namaMhs != ".")&&(Mhs.nimMhs != ".")){
        insertlastMhs(L2,alokasiListMhs(Mhs));
        /*cout<<"Masukkan Nama Mhs \t: ";
        cin>>Mhs.namaMhs;
        cout<<"Masukkan Nim Mhs \t: ";
        cin>>Mhs.nimMhs;
        system("cls");
    }*/
}

void deletedataMhs (ListMhs &L2, addressMhs P){
    info_elmMhs MHS;
    cout<<"Masukkan NIM Mahasiswa yang ingin dihapus : ";
    cin>>MHS.nimMhs;
    P = findElmMhs(L2,MHS);
    addressMhs Q;
    if (nextMhs(P) == NULL) {
        lastMhs(L2)= prevMhs(P);
        nextMhs(lastMhs(L2)) = NULL;
        prevMhs(P) =  NULL;
    } else if (prevMhs(P) == NULL){
        firstMhs(L2) = nextMhs(firstMhs(L2));
        prevMhs(firstMhs(L2)) = NULL;
        nextMhs(P) = NULL;
    } else {
        Q = prevMhs(P);
        nextMhs(Q) = nextMhs(P);
        prevMhs(nextMhs(P)) = Q;
        prevMhs(P) = NULL;
        nextMhs(P) = NULL;
    }
    cout<<"\n DATA BERHASIL DIHAPUS\n";
}

void viewdataMhs (ListMhs &L2, addressMhs &P){
    if (isEmpty(L2) == true){
        cout<<"DAFTAR MAHASISWA KOSONG";
    }else{
        P = firstMhs(L2);
        cout<<setiosflags(ios::left)<<setw(25)<<"Nama Mahasiswa";
        cout<<setiosflags(ios::left)<<setw(25)<<"NIM Mahasiswa";
        cout<<"\n----------------------------------------------";
        cout<<endl;
        while(P != NULL){
            cout<<setiosflags(ios::left)<<setw(25)<<infoMhs(P).namaMhs;
            cout<<setiosflags(ios::left)<<setw(25)<<infoMhs(P).nimMhs;
            cout<<endl;
            P = nextMhs(P);
        }
    }
}
/**============================================================RELASI===================================================*/

addressRelasi alokasiListRelasi (addressMhs X){
    addressRelasi R = new elmlistRelasi;
    infoRelasi(R) = X;
    nextRelasi(R) = Nil;
    return R;
}

void BuatRelasi (ListUKM L, ListMhs L2){
    info_elmUKM UKM;
    info_elmMhs MHS;
    if(firstUKM(L) == Nil){
        cout<<" ";
    }else{
        cout<<"Masukkan ID UKM : ";
        cin>>UKM.IdUKM;
        addressUKM U = findElmUKM(L,UKM);
        if(U != Nil){
            cout<<"Masukkan NIM Mahasiswa : ";
            cin>>MHS.nimMhs;
            addressMhs Q = findElmMhs(L2,MHS);
            if(Q != Nil){
                addressRelasi R = firstRelasi(U);
                while((R != Nil)&&(infoRelasi(R)!=Q)){
                    R = nextRelasi(R);
                }
                if(R != Nil){
                    cout<<"MAHASIWA SUDAH TERDAFTAR DI UKM "<<infoUKM(U).namaUKM;
                }else{
                    addressRelasi S = alokasiListRelasi(Q);
                    insertfirstRelasi(U,S);
                }
            }
        }
    }
}

void RelasiNIMMhs (ListUKM &L, addressRelasi R, ListMhs &L2){
    info_elmMhs MHS;
    cout<<"Masukan Nim MHS : ";
    cin>>MHS.nimMhs;
    addressMhs M = findElmMhs(L2,MHS);
    addressUKM U = firstUKM(L);
    cout<<"Mahasiswa Bernama "<<M->infoMhs.namaMhs<<" dengan Nim "<<M->infoMhs.nimMhs<<endl;
    cout<<"--------Mengikuti UKM--------"<<endl;
    while(U != Nil){
        R = firstRelasi(U);
        while(R != Nil){
            if(infoRelasi(R) == M){
                cout<<"\tNama UKM : "<<infoUKM(U).namaUKM<<endl;
                cout<<"\tID UKM : "<<infoUKM(U).IdUKM<<endl;
                cout<<endl;
            }
            R = nextRelasi(R);
        }
        U = nextUKM(U);
    }
}

void RelasiIDUKM (ListUKM &L, addressRelasi R,ListMhs &L2){
    info_elmUKM UKM;
    cout<<"Masukan ID UKM : ";
    cin>>UKM.IdUKM;
    addressUKM U = findElmUKM(L,UKM);
    cout<<"UKM Bernama "<<U->infoUKM.namaUKM<<" dengan ID "<<U->infoUKM.IdUKM<<endl;
    cout<<"--------diikuti oleh mahasiswa--------"<<endl;
    while(U != Nil){
        R = firstRelasi(U);
        while(R != Nil){
            cout<<"\tNama MHS : "<<infoRelasi(R)->infoMhs.namaMhs<<endl;
            cout<<"\tNim MHS : "<<infoRelasi(R)->infoMhs.nimMhs<<endl;
            cout<<endl;
            R = nextRelasi(R);
        }
        U = nextUKM(U);
    }
}
void insertfirstRelasi(addressUKM U, addressRelasi R){
    if(firstRelasi(U) == Nil){
        firstRelasi(U) = R;
    }else{
        nextRelasi(R) = firstRelasi(U);
        firstRelasi(U) = R;
    }
}

void HapusRelasi (ListUKM &L, addressRelasi R,ListMhs &L2){
    info_elmUKM UKM;
    info_elmMhs Mhs;
    cout<<"Masukan ID UKM : ";
    cin>>UKM.IdUKM;
    addressUKM U = findElmUKM(L,UKM);
    cout<<"Masukan Nim MHS : ";
    cin>>Mhs.nimMhs;
    addressMhs M = findElmMhs(L2,Mhs);
    R = firstRelasi(U);
    addressRelasi S = firstRelasi(U);
    while (infoRelasi(R) != M){
        R = nextRelasi(R);
    }
    if((S == R) && (nextRelasi(R) == Nil)){
        nextRelasi(R) = Nil;
        infoRelasi(R) = Nil;
        firstRelasi(U) = Nil;
        delete R;
    }else{
        while(nextRelasi(S) != R){
            S = nextRelasi(S);
        }
        nextRelasi(S) = nextRelasi(R);
        nextRelasi(R) = Nil;
        infoRelasi(R) = Nil;
        delete R;
    }
}

void TampilRelasi (ListUKM &L, addressRelasi &R){
    addressUKM U = firstUKM(L);
    while(U != Nil){
        R = firstRelasi(U);
        if(firstRelasi(U) != Nil){
            cout<<"-------------------UNIT KEGIATAN MANUSIA---------------------\n";
            cout<<"Nama UKM \t: "<<infoUKM(U).namaUKM<<" "<<endl;
            cout<<"ID UKM  \t: "<<infoUKM(U).IdUKM<<" "<<endl;
            cout<<"Ruangan \t: "<<infoUKM(U).ruangan<<" "<<endl;
            cout<<"Jenis  \t\t: "<<infoUKM(U).jenisUKM<<" "<<endl;
            cout<<endl;
            cout<<"-------------------ANGGOTA---------------------\n";
        }
        while(R != Nil){
            cout<<"Nama Mahasiwa \t: "<<infoRelasi(R)->infoMhs.namaMhs<<" "<<endl;
            cout<<"Nama NIM \t: "<<infoRelasi(R)->infoMhs.nimMhs<<" "<<endl;
            R = nextRelasi(R);
            cout<<endl;
        }
    U = nextUKM(U);
    }
}

/**==============================================MENU==========================================*/

void Menu(ListUKM &L, ListMhs &L2){

    int pilihanMenu;
    char Kembali;
    addressUKM U;
    addressMhs M;
    addressRelasi R;
    info_elmUKM UKM;

    cout<<endl;
    cout<<"\t\t\tSELAMAT DATANG DI PROGRAM MANAJEMEN UKM MAHASISWA\n";
    cout<<"\t\tsilahkan pilih menu yang anda inginkan sesuai dengan kebutuhan\n";
    cout<<endl;

    cout<<"\t\t\t========================MENU=====================\n";
    cout<<"\t\t\t| 1. Tambah UKM\t\t\t\t\t|\n";
    cout<<"\t\t\t| 2. Lihat Daftar UKM\t\t\t\t|\n";
    cout<<"\t\t\t| 3. Hapus UKM\t\t\t\t\t|\n";
    cout<<"\t\t\t| 4. Tambah Mahasiswa\t\t\t\t|\n";
    cout<<"\t\t\t| 5. Hapus Mahasiswa\t\t\t\t|\n";
    cout<<"\t\t\t| 6. Daftar Mahasiswa\t\t\t\t|\n";
    cout<<"\t\t\t| 7. Daftarkan Mahasiswa ke UKM\t\t\t|\n";
    cout<<"\t\t\t| 8. Lihat Daftar Anngota UKM\t\t\t|\n";
    cout<<"\t\t\t| 9. Hapus Relasi\t\t\t\t|\n";
    cout<<"\t\t\t| 10. Lihat Daftar UKM yang diikuti Mahasiswa \t|\n";
    cout<<"\t\t\t| 11. Lihat Daftar Mahasiswa yang mengikuti UKM\t|\n";
    cout<<"\t\t\t| 12. Update ruangan UKM\t\t\t|\n";
    cout<<"\t\t\t=================================================\n";

    cout<<"Masukkan Pilihan : ";
    cin>>pilihanMenu;
    cout<<endl;
    system("cls");
    while(pilihanMenu!=100){
        if(pilihanMenu==1){
            insertdataukm(L,U);
            cout<<"\nTekan 'y' untuk kembali ke Menu Utama : ";
            cin>>Kembali;
            if(Kembali=='y'){
                system("cls");
                Menu(L,L2);
            }
        }else if(pilihanMenu==2){
            viewdataUKM(L,U);
            cout<<"\nTekan 'y' untuk kembali ke Menu Utama : ";
            cin>>Kembali;
            if(Kembali=='y'){
                system("cls");
                Menu(L,L2);
            }
        }else if(pilihanMenu==3){
            deletedataukm(L,U);
            cout<<"\nTekan 'y' untuk kembali ke Menu Utama : ";
            cin>>Kembali;
            if(Kembali=='y'){
                system("cls");
                Menu(L,L2);
            }
        }else if(pilihanMenu==4){
            insertdataMhs(L2,M);
            cout<<"\nTekan 'y' untuk kembali ke Menu Utama : ";
            cin>>Kembali;
            if(Kembali=='y'){
                system("cls");
                Menu(L,L2);
            }
        }else if(pilihanMenu==5){
            deletedataMhs(L2,M);
            cout<<"\nTekan 'y' untuk kembali ke Menu Utama : ";
            cin>>Kembali;
            if(Kembali=='y'){
                system("cls");
                Menu(L,L2);
            }
        }else if(pilihanMenu==6){
            viewdataMhs(L2,M);
            cout<<"\nTekan 'y' untuk kembali ke Menu Utama : ";
            cin>>Kembali;
            if(Kembali=='y'){
                system("cls");
                Menu(L,L2);
            }
        }else if(pilihanMenu==7){
            BuatRelasi(L,L2);
            cout<<"\nTekan 'y' untuk kembali ke Menu Utama : ";
            cin>>Kembali;
            if(Kembali=='y'){
                system("cls");
                Menu(L,L2);
            }
        }else if(pilihanMenu==8){
            TampilRelasi(L,R);
            cout<<"\nTekan 'y' untuk kembali ke Menu Utama : ";
            cin>>Kembali;
            if(Kembali=='y'){
                system("cls");
                Menu(L,L2);
            }
        }else if(pilihanMenu==9){
            HapusRelasi(L,R,L2);
            cout<<"\nTekan 'y' untuk kembali ke Menu Utama : ";
            cin>>Kembali;
            if(Kembali=='y'){
                system("cls");
                Menu(L,L2);
            }
        }else if(pilihanMenu==10){
            RelasiNIMMhs(L,R,L2);
            cout<<"\nTekan 'y' untuk kembali ke Menu Utama : ";
            cin>>Kembali;
            if(Kembali=='y'){
                system("cls");
                Menu(L,L2);
            }
        }else if(pilihanMenu==11){
            RelasiIDUKM(L,R,L2);
            cout<<"\nTekan 'y' untuk kembali ke Menu Utama : ";
            cin>>Kembali;
            if(Kembali=='y'){
                system("cls");
                Menu(L,L2);
            }
        }else if(pilihanMenu==12){
            UpdateDataUKM(L,UKM);
            cout<<"\nTekan 'y' untuk kembali ke Menu Utama : ";
            cin>>Kembali;
            if(Kembali=='y'){
                system("cls");
                Menu(L,L2);
            }
        }
    }
    system("cls");
    cout<<endl;
    cout<<endl;
    cout<<"Daftarkan Anggota\n";
    cout<<endl;
    cout<<endl;
}

/**=========================================================LOADING===============================================*/

void loading(){
    cout<<"\n\n\n\t\t\t\tSilahkan tunggu BOSS\n\n";
    char a=177, b=219;
    cout<<"\t\t\t\t";
    for (int i=0;i<=15;i++)
        cout<<a;
        cout<<"\r";
        cout<<"\t\t\t\t";
    for (int i=0;i<=15;i++){
        cout<<b;
    for (int j=0;j<=1e8;j++);
    }
    cout<<endl;
    cout<<"\t\t\t\tPRESS ENTER";

    getch();
    system("cls");
}
