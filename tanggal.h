/**
    KELAS     : IF 40-02
    KELOMPOK  : 10
    NAMA(NIM) : [Ranggha Adytia][1301164017] , [Javiar Fasyah][1301164477] , [Rani Sari Murti][1301160544]
                [Dianita Yustika Sari][1301164349] , [Try Arie Rahmat Insani][1301164513]
**/

#ifndef TANGGAL_H_INCLUDED
#define TANGGAL_H_INCLUDED

#include <string>
#include <iostream>

using namespace std;

struct tanggal {
   int dd;
   int mm;
   int yy;
};

tanggal create_tanggal(int dd,int mm,int yy);
bool cek_tanggal(tanggal tgl);
void tampil_tanggal(tanggal tgl);
int selisih_hari(tanggal tgl1, tanggal tgl2);

#endif // TANGGAL_H_INCLUDED
