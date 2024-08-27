#include <iostream>

using namespace std;

int main()
{


    //const int max_size = 100;
    //int M,N;
    //cout << "Birinci massivin index yazin (max " << max_size << "): ";
    //cin >> M;
    //int array1[max_size];

    //cout << "Birinci massivin ededlerin yazin:\n";
    //for (int i = 0; i < M; ++i) {
    //    cin >> array1[i];
    //}

    //cout << "İkinci massivin index yazin (max " << max_size << "): ";
    //cin >> N;
    //int array2[max_size];

    //cout << "İkinci massivin ededlerin yazin:\n";
    //for (int i = 0; i < N; ++i) {
    //    cin >> array2[i];
    //}

    //int common[max_size];
    //int commonSize = 0;

    //for (int i = 0; i < M; ++i) {
    //    for (int j = 0; j < N; ++j) {
    //        if (array1[i] == array2[j]) {
    //            bool found = false;
    //            for (int k = 0; k < commonSize; ++k) {
    //                if (common[k] == array1[i]) {
    //                    found = true;
    //                    break;
    //                }
    //            }
    //            if (!found) {
    //                common[commonSize++] = array1[i];
    //            }
    //            break;
    //        }
    //    }
    //}

    //cout << "Ortaq massivler: "<< ' ';
    //for (int i = 0; i < commonSize; ++i) {
    //    cout << common[i] << " ";
    //}

    //return 0;





    //int M, N;
    //const int max = 100;
    //cout << "Birinci massivin index yazin (max " << max << "): ";
    //cin >> M;
    //int array1[max];

    //cout << "Birinci massivin ededlerin yazin:\n";
    //for (int i = 0; i < M; ++i) {
    //    cin >> array1[i];
    //}

    //cout << "İkinci massivin index yazin (max " << max << "): ";
    //cin >> N;
    //int array2[max];

    //cout << "İkinci massivin ededlerin yazin:\n";
    //for (int i = 0; i < N; ++i) {
    //    cin >> array2[i];
    //}

    //int unique[max];
    //int uniq_size = 0;

    //for (int i = 0; i < M; ++i) {
    //    bool isinsecondArray = false;
    //    for (int j = 0; j < N; ++j) {
    //        if (array1[i] == array2[j]) {
    //            isinsecondArray = true;
    //            break;
    //        }
    //    }
    //    if (!isinsecondArray) {
    //        bool alreadyAdded = false;
    //        for (int k = 0; k < uniq_size; ++k) {
    //            if (unique[k] == array1[i]) {
    //                alreadyAdded = true;
    //                break;
    //            }
    //        }
    //        if (!alreadyAdded) {
    //            unique[uniq_size++] = array1[i];
    //        }
    //    }
    //}

    //cout << "Birinci massivde olub ikincide olmayan:\n";
    //for (int i = 0; i < uniq_size; ++i) {
    //    cout << unique[i] << " ";
    //}

    //return 0;




    //int max_val = { };
    //int min_val = { };
    //const int size = 20;
    //int ededler[size] = { };


    //for (int i = 0; i < size; ++i) {
    //    cout << "Eded daxil edin: ";
    //    cin >> ededler[i];
    //}

    //cout << "Massiv: ";
    //for (int i = 0; i < size; ++i) {
    //    cout << ededler[i] << " ";
    //}
    //cout << endl;

    //int uzun_start = 0, uzun_uzunluq = 0;
    //int cari_start = -1, cari_uzunluq = 0;

    //for (int i = 0; i < size; ++i) {
    //    if (ededler[i] > 0) {
    //        if (cari_uzunluq == 0) cari_start = i;
    //        ++cari_uzunluq;
    //    }
    //    else {
    //        if (cari_uzunluq > uzun_uzunluq) {
    //            uzun_start = cari_start;
    //            uzun_uzunluq = cari_uzunluq;
    //        }
    //        cari_uzunluq = 0;
    //    }
    //}

    //if (cari_uzunluq > uzun_uzunluq) {
    //    uzun_start = cari_start;
    //    uzun_uzunluq = cari_uzunluq;
    //}

    //if (uzun_uzunluq > 0) {
    //    cout << "En uzun musbet ardicilliq: ";
    //    for (int i = uzun_start; i < uzun_start + uzun_uzunluq; ++i) {
    //        cout << ededler[i] << " ";
    //    }
    //    cout << endl;
    //}
    //else {
    //    cout << "Musbet ardicilliq tapilmadi " << endl;
    //}

    //return 0;


    //const int size = 10;
    //int maximum = { };
    //int minimum = { };
    //int array[size];


    //for (int i = 0; i < size; ++i) {
    //    cout << "Eded daxil edin: ";
    //    cin >> array[i];
    //}

    //cout << "Original massiv: ";
    //for (int i = 0; i < size; ++i) 
    //{
    //    cout << array[i] << " ";
    //}
    //cout << endl;

    //int temp[size];
    //int musIndex = 0;
    //int menIndex = size - 1;

    //for (int i = 0; i < size; ++i) {
    //    if (array[i] >= 0) {
    //        temp[musIndex++] = array[i];
    //    }
    //    else {
    //        temp[menIndex--] = array[i];
    //    }
    //}

    //cout << "Sirali massiv: ";
    //for (int i = 0; i < size; ++i) {
    //    cout << temp[i] << " ";
    //}
    //cout << endl;
    //return 0;


    //const int size = 10;
    //const int MIN = -20;
    //const int MAX = 20;

    //srand(time(0));

    //int massiv[size];

    //cout << "Evvelki massiv: ";
    //for (int i = 0; i < size; ++i) {
    //    massiv[i] = MIN + rand() % (MAX - MIN + 1);
    //    cout << massiv[i] << " ";
    //}
    //cout << endl;

    //for (int i = 0; i < size; ++i) {
    //    if (massiv[i] < 0) {
    //        massiv[i] = -massiv[i];
    //    }
    //}

    //cout << "Modul ile deyisdirilmis massiv: ";
    //for (int i = 0; i < size; ++i) {
    //    cout << massiv[i] << " ";
    //}
    //cout << endl;

    //return 0;
}
