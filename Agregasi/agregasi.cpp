#include <iostream>
using namespace std;

#include "anak.h"
#include "ibu.h"

int main()
{
    //deklarasi dan pemberian nilai variabel pointer untuk objek dari class ibu dan anak
    ibu* varibu = new ibu("rani");
    ibu* varibu2 = new ibu("sari");
    anak* varAnak1 = new anak("tono");
    anak* varAnak2 = new anak("tiara");
    anak* varAnak3 = new anak("dini");