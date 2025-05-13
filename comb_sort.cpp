// Comb Sort Algoritması Uygulaması
#include <iostream>
#include <vector>
using namespace std;

// Comb Sort fonksiyonu - diziyi sıralar
void combSort(vector<int> &arr) {
    // Dizinin boyutunu alıyoruz
    int n = arr.size();
        
    // Başlangıç aralığı olarak dizi boyutunu belirleriz
    int gap = n;
    
    // Küçülme faktörü (shrink factor)
    // Bu değer genellikle 1.3 olarak kullanılır
    float shrink = 1.3;
    
    // Sıralama tamamlanana kadar devam et
    bool swapped = true;
    
    // Ana döngü: Aralık 1'e eşit veya daha küçük olana ve hiç takas yapılmayana kadar devam eder
    while (gap > 1 || swapped) {
        // Aralığı küçültme faktörüne göre güncelliyoruz
        gap = int(gap / shrink);
        
        // Minimum aralık 1 olmalıdır
        if (gap < 1) gap = 1;
        
        swapped = false;
        
        // Mevcut aralığa göre elemanları karşılaştırıyoruz
        for (int i = 0; i < n - gap; i++) {
            // Eğer sol eleman sağ elemandan büyükse yer değiştiriyoruz
            if (arr[i] > arr[i + gap]) {
                swap(arr[i], arr[i + gap]);
                swapped = true; // Takas işlemi yapıldığını işaretliyoruz
            }
        }
    }
}

// Diziyi ekrana yazdıran yardımcı fonksiyon
void printArray(const vector<int> &arr) {
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
}

// Ana fonksiyon - test kodu
int main() {
    int n, element;
    vector<int> arr;
    
    cout << "Comb Sort Algoritması Test Programı" << endl;
    cout << "-----------------------------------" << endl;
    
    // Kullanıcıdan dizinin eleman sayısını alıyoruz
    cout << "Dizinin eleman sayısını giriniz: ";
    cin >> n;
    
    // Kullanıcıdan diziyi alıyoruz
    cout << "Diziyi giriniz:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Eleman " << (i+1) << ": ";
        cin >> element;
        arr.push_back(element);
    }
    
    // Sıralamadan önceki diziyi gösteriyoruz
    cout << "\nSıralamadan önce dizi: ";
    printArray(arr);
    
    // Diziyi Comb Sort ile sıralıyoruz
    combSort(arr);
    
    // Sıralamadan sonraki diziyi gösteriyoruz
    cout << "Sıralamadan sonra dizi: ";
    printArray(arr);
    
    return 0;
}