#include "header.h"

using namespace std;

int main()
{
    loading();
    ListUKM L;
    ListMhs L2;
    createListUKM(L);
    createListMhs(L2);

    info_elmMhs M;
    info_elmUKM U;

    M.namaMhs = "IRAWANSYAH";
    M.nimMhs = "1301174689";
    insertlastMhs(L2,alokasiListMhs(M));
    M.namaMhs = "MUHAMMAD SHABRI";
    M.nimMhs = "1301172742";
    insertlastMhs(L2,alokasiListMhs(M));
    M.namaMhs = "MUHAMMAD GIATAMA";
    M.nimMhs = "1301172739";
    insertlastMhs(L2,alokasiListMhs(M));
    M.namaMhs = "KAMILA HANUM";
    M.nimMhs = "1301174661";
    insertlastMhs(L2,alokasiListMhs(M));
    M.namaMhs = "GUNTORO";
    M.nimMhs = "1301174660";
    insertlastMhs(L2,alokasiListMhs(M));
    M.namaMhs = "AZIZ NURUL IMAN";
    M.nimMhs = "1301174661";
    insertlastMhs(L2,alokasiListMhs(M));
    M.namaMhs = "AFIF LUKMANSYACH";
    M.nimMhs = "1301174662";
    insertlastMhs(L2,alokasiListMhs(M));
    M.namaMhs = "FIVO MARCELL ANDREA";
    M.nimMhs = "1301174663";
    insertlastMhs(L2,alokasiListMhs(M));
    M.namaMhs = "IFDHAL HADI";
    M.nimMhs = "1301174664";
    insertlastMhs(L2,alokasiListMhs(M));
    M.namaMhs = "IRSYAD";
    M.nimMhs = "1301174665";
    insertlastMhs(L2,alokasiListMhs(M));
    M.namaMhs = "PRIGUSTI";
    M.nimMhs = "1301174666";
    insertlastMhs(L2,alokasiListMhs(M));
    M.namaMhs = "GUGUN";
    M.nimMhs = "1301174667";
    insertlastMhs(L2,alokasiListMhs(M));
    M.namaMhs = "NADHIA";
    M.nimMhs = "1301174668";
    insertlastMhs(L2,alokasiListMhs(M));
    M.namaMhs = "DIAN";
    M.nimMhs = "1301174669";
    insertlastMhs(L2,alokasiListMhs(M));
    M.namaMhs = "SAVIRA";
    M.nimMhs = "1301174670";
    insertlastMhs(L2,alokasiListMhs(M));
    M.namaMhs = "FIVO MARCELL ANDREA";
    M.nimMhs = "1301174671";
    insertlastMhs(L2,alokasiListMhs(M));

    //

    U.namaUKM = "KBMS";
    U.IdUKM = "10B";
    U.ruangan = "KU1-01-03";
    U.jenisUKM = "DAERAH";
    insertlast(L,alokasiListUKM(U));
    U.namaUKM = "CCI";
    U.IdUKM = "50S";
    U.ruangan = "KU2-01-03";
    U.jenisUKM = "PENALARAN";
    insertlast(L,alokasiListUKM(U));
    U.namaUKM = "SES";
    U.IdUKM = "60C";
    U.ruangan = "KU1-01-02";
    U.jenisUKM = "PENALARAN";
    insertlast(L,alokasiListUKM(U));

    U.namaUKM = "PERMALA";
    U.IdUKM = "10A";
    U.ruangan = "KU1-01-04";
    U.jenisUKM = "DAERAH";
    insertlast(L,alokasiListUKM(U));
    U.namaUKM = "RUMAH GADANG";
    U.IdUKM = "10C";
    U.ruangan = "KU1-01-05";
    U.jenisUKM = "DAERAH";
    insertlast(L,alokasiListUKM(U));
    U.namaUKM = "HIPMI";
    U.IdUKM = "10D";
    U.ruangan = "KU1-01-06";
    U.jenisUKM = "PENGUSAHA";
    insertlast(L,alokasiListUKM(U));
    U.namaUKM = "FORCY";
    U.IdUKM = "10E";
    U.ruangan = "KU1-01-07";
    U.jenisUKM = "DAERAH";
    insertlast(L,alokasiListUKM(U));
    U.namaUKM = "FUTSAL";
    U.IdUKM = "10F";
    U.ruangan = "KU1-01-08";
    U.jenisUKM = "OLAHRAGA";
    insertlast(L,alokasiListUKM(U));
    U.namaUKM = "BENGKEL SENI EMBUN";
    U.IdUKM = "10G";
    U.ruangan = "SEKRE";
    U.jenisUKM = "SENI";
    insertlast(L,alokasiListUKM(U));
    U.namaUKM = "BAND";
    U.IdUKM = "10H";
    U.ruangan = "SEKRE";
    U.jenisUKM = "MUSIC";
    insertlast(L,alokasiListUKM(U));
    U.namaUKM = "IWAK MAS";
    U.IdUKM = "10I";
    U.ruangan = "SEKRE";
    U.jenisUKM = "DAERAH";
    insertlast(L,alokasiListUKM(U));
    U.namaUKM = "KBSU";
    U.IdUKM = "10J";
    U.ruangan = "SEKRE";
    U.jenisUKM = "DAERAH";
    insertlast(L,alokasiListUKM(U));
    U.namaUKM = "PERMIB";
    U.IdUKM = "10K";
    U.ruangan = "SEKRE";
    U.jenisUKM = "DAERAH";
    insertlast(L,alokasiListUKM(U));
    U.namaUKM = "MERPATI PUTIH";
    U.IdUKM = "10L";
    U.ruangan = "SEKRE";
    U.jenisUKM = "BELA DIIR";
    insertlast(L,alokasiListUKM(U));
    U.namaUKM = "KARATE";
    U.IdUKM = "10M";
    U.ruangan = "SEKRE";
    U.jenisUKM = "BELA DIRI";
    insertlast(L,alokasiListUKM(U));

    //

    info_elmUKM UKM1;
    info_elmMhs MHS1;
    MHS1.nimMhs = "1301172742";
    UKM1.IdUKM = "10B";
    addressUKM Ua = findElmUKM(L,UKM1);
    addressMhs Ma = findElmMhs(L2,MHS1);
    addressRelasi R1 = alokasiListRelasi(Ma);
    insertfirstRelasi(Ua,R1);

    info_elmUKM UKM2;
    info_elmMhs MHS2;
    MHS2.nimMhs = "1301172739";
    UKM2.IdUKM = "60C";
    addressUKM Ub = findElmUKM(L,UKM2);
    addressMhs Mb = findElmMhs(L2,MHS2);
    addressRelasi R2 = alokasiListRelasi(Mb);
    insertfirstRelasi(Ub,R2);

    info_elmUKM UKM3;
    info_elmMhs MHS3;
    MHS3.nimMhs = "1301172739";
    UKM3.IdUKM = "10B";
    addressUKM Uc = findElmUKM(L,UKM3);
    addressMhs Mc = findElmMhs(L2,MHS3);
    addressRelasi R3 = alokasiListRelasi(Mc);
    insertfirstRelasi(Uc,R3);

    info_elmUKM UKM4;
    info_elmMhs MHS4;
    MHS4.nimMhs = "1301174689";
    UKM4.IdUKM = "50S";
    addressUKM Ud = findElmUKM(L,UKM4);
    addressMhs Md = findElmMhs(L2,MHS4);
    addressRelasi R4 = alokasiListRelasi(Md);
    insertfirstRelasi(Ud,R4);

    //

    info_elmUKM UKM11;
    info_elmMhs MHS11;
    MHS11.nimMhs = "1301174665";
    UKM11.IdUKM = "10G";
    addressUKM Uk = findElmUKM(L,UKM11);
    addressMhs Mk = findElmMhs(L2,MHS11);
    addressRelasi R11 = alokasiListRelasi(Mk);
    insertfirstRelasi(Uk,R11);

    info_elmUKM UKM12;
    info_elmMhs MHS12;
    MHS12.nimMhs = "1301174668";
    UKM12.IdUKM = "10E";
    addressUKM Ul = findElmUKM(L,UKM12);
    addressMhs Ml = findElmMhs(L2,MHS12);
    addressRelasi R12 = alokasiListRelasi(Ml);
    insertfirstRelasi(Ul,R12);

    info_elmUKM UKM13;
    info_elmMhs MHS13;
    MHS13.nimMhs = "1301174661";
    UKM13.IdUKM = "10F";
    addressUKM Um = findElmUKM(L,UKM13);
    addressMhs Mm = findElmMhs(L2,MHS13);
    addressRelasi R13 = alokasiListRelasi(Mm);
    insertfirstRelasi(Um,R13);

    info_elmUKM UKM14;
    info_elmMhs MHS14;
    MHS14.nimMhs = "1301174671";
    UKM14.IdUKM = "10M";
    addressUKM Un = findElmUKM(L,UKM14);
    addressMhs Mn = findElmMhs(L2,MHS14);
    addressRelasi R14 = alokasiListRelasi(Mn);
    insertfirstRelasi(Un,R14);

    info_elmUKM UKM15;
    info_elmMhs MHS15;
    MHS15.nimMhs = "1301174667";
    UKM15.IdUKM = "10I";
    addressUKM Uo = findElmUKM(L,UKM15);
    addressMhs Mo = findElmMhs(L2,MHS15);
    addressRelasi R15 = alokasiListRelasi(Mo);
    insertfirstRelasi(Uo,R15);

    Menu(L,L2);

    return 0;
}
