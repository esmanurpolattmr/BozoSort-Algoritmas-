#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

//fonksiyon prototipleri
void BozoSort(int[],int); //bozoSort Algoritmas�
bool isSorted(int[],int); //Dizinin s�ral� olup olmad���n� kontrol eder


int main(){
    // test etmek i�in �rnek bir dizi olu�turuluyor
    int testDizi[]={1,20,9,55};
    int boyut=sizeof(testDizi)/sizeof(testDizi[0]); //dizinin eleman say�s�

    //Orijinal diziyi ekrana yazd�r
    cout<<"Orijinal dizi: [";
    for(int i=0;i<boyut;i++){
        cout<<testDizi[i];
        if(i<boyut-1)cout<<", ";
    }
    cout<<"]"<<endl;

    //diziyi bozoSort algaritmas�yla s�rala
    BozoSort(testDizi,boyut);

    //S�ralanm�� diziyi ekrana yazd�r
    cout<<"Siralanmis Dizi: [";
    for(int i=0;i<boyut;i++){
        cout<<testDizi[i];
        if(i<boyut-1)cout<<", ";
    }

    cout<<"]"<<endl;

    return 0;

}

//bozosSort algoritmas�: s�ral� olana kadar rastgele iki eleman� yer de�i�tirir
void BozoSort(int dizi[],int boyut){
    srand(time(0)); //rastgelelik i�in ba�lang�� de�eri ayarlan�r
    int deneme = 0; //ka� deneme yap�ld���n� tutan saya�


    while(!isSorted(dizi,boyut)){
        int i=rand()%boyut; //rastgele bir indeks se�
        int j=rand()%boyut; //ba�ka bir rastgele indeks se�

        //elemanlar� yer de�i�tir
        int temp =dizi[i];
        dizi[i]=dizi[j];
        dizi[j]=temp;

        deneme++; //deneme say�s�n� art�r

    }
    //toplam deneme say�s�n� ekrana yazd�r
    cout<<"Toplam deneme sayisi:"<< deneme << endl;
}

//dizinin s�ral� olup olmad���n� kontrol eder k���kten b�y��e dogru
bool isSorted(int dizi[],int boyut){
    for (int i=0;i<boyut-1;i++){
        if(dizi[i]>dizi[i+1]){
            return false;//e�er bir eleman kendisinden sonraki elemandan b�y�kse s�ral� de�ildir
        }
    }
    return true; //t�m elemanlar s�ral�ysa true d�ner
}






