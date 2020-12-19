#include <iostream>
#include <unistd.h>
#include <windows.h>

using namespace std;


int main()
{
   int angka[50];
   int pilihan;
   string awal;
   do {
    cout << "\t\t\t\t Menu" << endl;
    cout << "\t\t\t\t 1. Input Array"<< endl;
    cout << "\t\t\t\t 2. Tampil Array"<< endl;
    cout << "\t\t\t\t 3. Cari Nilai minimum"<< endl;
    cout << "\t\t\t\t 4. Cari Nilai maksimum"<< endl;
    cout << "\t\t\t\t 5. Hitung Rata-rata"<< endl;
    cout << "\t\t\t\t 6. Mahasiswa"<< endl;
    cout << "\t\t\t\t Masukan Pilihan: ";
    cin >> pilihan;

    switch(pilihan)
    {
        case 1:
            system("cls");
            int i,n;
            cout << "\t\t\t\t Masukkan Jumlah array yang di inginkan : ";
            cin >> n;

            for (i=0; i<n; ++i)
            {
                cout << "\t\t\t\t Nilai array ke " << i << " = ";
                cin >> angka[i];
            }
            cout << endl;
            cout << "\t\t\t\t    Kembali ke menu awal ?" << endl;
            cout << "\t\t\t\t    Answer = " ; cin>>awal;
            system("cls");
            break;

        case 2:
            system("cls");
            cout << "\t\t\t\t  Menampilkan Nilai array" << endl;
            for (i=0; i<n; ++i)
            {
                cout << "\n\t\t\t\t Nilai Array ke-"<< i <<" = " <<angka[i]<<endl;
            }
            cout << endl;
            cout << "\t\t\t\t    Kembali ke menu awal ?" << endl;
            cout << "\t\t\t\t    Answer = " ; cin>>awal;
            system("cls");
            break;

        case 3:
            system("cls");
            int minimum, urutan;
            minimum = angka[0];
            for(i=0; i<n; ++i)
            {
                if (angka[i] < minimum)
                {
                    minimum = angka[i];
                    urutan = i;
                }
            }

            cout << endl;
            cout << "\t\t\t\t Nilai Minimum adalah " << minimum << endl;
            cout << "\t\t\t\t Terletak di urutan array ke " << urutan << endl;
            cout << endl;
            cout << "\t\t\t\t    Kembali ke menu awal ?" << endl;
            cout << "\t\t\t\t    Answer = " ; cin>>awal;
            system("cls");
            break;

        case 4:
            system("cls");
            int maksimum;
            maksimum = angka[0];
            for(i=0; i<n; ++i)
            {
                if (angka[i] > maksimum)
                {
                    maksimum = angka[i];
                    urutan = i;
                }
            }

            cout << endl;
            cout << "\t\t\t\t Nilai Maksimum adalah " << maksimum << endl;
            cout << "\t\t\t\t Terletak di urutan array ke " << urutan << endl;
            cout << endl;
            cout << "\t\t\t\t    Kembali ke menu awal ?" << endl;
            cout << "\t\t\t\t    Answer = " ; cin>>awal;
            system("cls");
            break;

        case 5:
            {system("cls");
            float total=0,rata;
            for (i=0; i<n; ++i)
            {
                total+=angka[i];
            }

            rata= total/n;
            cout << "\t\t\t\t Total Nilai adalah : " << total << endl;
            cout << "\t\t\t\t Rata-ratanya adalah : " << rata << endl;
            cout << endl;
            cout << "\t\t\t\t    Kembali ke menu awal ?" << endl;
            cout << "\t\t\t\t    Answer = " ; cin>>awal;
            system("cls");
            break;
            }

         case 6:
            system("cls");
            cout << "\t\t\t\t    Profile Mahasiswa" << endl;
            cout << "\t\t\t\t Nama    = Muh Alief Akbar"<< endl;
            cout << "\t\t\t\t Nim     = 20102290"<< endl;
            cout << "\t\t\t\t Jurusan = S1 Teknik Informatika"<< endl;
            cout << "\t\t\t\t Kelas   = S1 IF 08 H"<< endl;
            cout << endl;
            cout << "\t\t\t\t    Kembali ke menu awal ?" << endl;
            cout << "\t\t\t\t    Answer = " ; cin>>awal;
            system("cls");
            break;

    }
}while (pilihan !=7);

    return 0;

}
