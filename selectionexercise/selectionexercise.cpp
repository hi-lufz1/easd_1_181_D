#include <iostream>
using namespace std;

// 1.  Algoritma dibutuhkan untuk menyelesaikan suatu masalah karena algoritma adalah serangkaian langkah-langkah logis
// yang terdefinisi dengan baik yang dapat diikuti untuk menyelesaikan suatu masalah atau mencapai suatu tujuan.
// 2. Data struktur dapat diklasifikasikan menjadi dua jenis yaitu static (seperti array) dan dynamic (seperti linked list).
// 3. Faktor-faktor yang mempengaruhi efisiensi suatu program algoritma meliputi kompleksitas algoritma, 
// kecepatan prosesor komputer, ukuran input data dan jenis data
// 4. Algoritma yang paling efisien untuk mengurutkan data yang ukurannya kecil adalah insertion sort.
// Karena insertion sort memiliki kompleksitas waktu O(n^2) yang lebih baik daripada algoritma bubble sort atau selection sort pada ukuran data kecil.
// 5. Algoritma yang termasuk dalam Quadratic adalah bubble sort, insertion sort, shell sort dan selection sort. 
// Sedangkan algoritma yang termasuk dalam Loglinear adalah quicksort, dan mergesort

int latif[101];
int n;

void input() {  
    while (true)
    {
        cout << "Maksimal data array adalah 101";
        cout << "\nMasukkan Jumlah Data pada Array : "; 
        cin >> n;                                                      
        

        if (n <= 101) {                                                 
            break;
        }
        else
        {
            cout << "\nArray yang anda masukkan maksimal 101 elemen. \n";   
        }
    }
    cout << endl;                                                      
    cout << "======================" << endl;                           
    cout << "Masukkan Element Array" << endl;
    cout << "======================" << endl;


    for (int i = 0; i < n; i++)   
    {
        cout << "Data ke-" << (i + 1) << ":"; 
        cin >> latif[i];
    }
}

void selectionsort() {

    int i, lf, min_idx;

    for (lf = 0; lf < n - 1; lf++) {
        min_idx = lf;

        for (i = lf + 1; i < n; i++) {                              
            if (latif[i] < latif [min_idx] ) {                            
                min_idx = i;
            }
        }             
         swap(latif[min_idx], latif[lf]);        

    }
}




int main()
{
    input();
}