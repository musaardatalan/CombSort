# CombSort
## İçindekiler
- [Algoritma Hakkında]
- [Algoritmanın Çalışma Mantığı]
- [Zaman Karmaşıklığı]
- [Algoritmanın Avantajları ve Dezavantajları]
- [Programın Kullanımı]
- [Kaynakça]

## Algoritma Hakkında

Comb Sort, 1980 yılında Włodzimierz Dobosiewicz tarafından tasarlanan ve daha sonra Stephen Lacey ve Richard Box tarafından geliştirilen bir sıralama algoritmasıdır. Bubble Sort'un geliştirilmiş bir versiyonu olarak düşünülebilir ve onun en büyük dezavantajı olan "kaplumbağa sorunu"nu (küçük değerlerin dizinin sonundan başına doğru yavaş hareket etmesi) çözmeyi amaçlar.

## Algoritmanın Çalışma Mantığı

Comb Sort, Bubble Sort'ta olduğu gibi komşu elemanları karşılaştırır, ancak birbirini takip eden elemanları değil, belirli bir "gap" (aralık) ile ayrılmış elemanları karşılaştırır:

1. Başlangıçta gap değeri dizinin boyutu olarak ayarlanır.
2. Her iterasyonda gap değeri bir küçülme faktörüne (genellikle 1.3) bölünür.
3. Gap değeri 1'e ulaştığında, algoritma Bubble Sort gibi davranır.
4. Hiçbir swap işlemi yapılmadan ve gap değeri 1 olduğunda bir geçiş tamamlandığında, dizi tamamen sıralanmış demektir.

## Zaman Karmaşıklığı

- **En İyi Durum**: O(n log n)
- **Ortalama Durum**: O(n²/2^p) (burada p küçülme faktörüne bağlı bir değerdir)
- **En Kötü Durum**: O(n²)

Genel olarak Comb Sort, Bubble Sort'tan daha etkili ve Quick Sort ile karşılaştırılabilir bir performansa sahiptir.

## Algoritmanın Avantajları ve Dezavantajları

### Avantajları
- Bubble Sort'a göre daha hızlıdır
- Uygulaması kolaydır
- Büyük dizilerde bile iyi performans gösterebilir
- Ekstra bellek gerektirmez (in-place bir algoritmadır)

### Dezavantajları
- Quick Sort veya Merge Sort gibi daha gelişmiş algoritmalardan daha yavaştır
- Kararlı (stable) bir sıralama algoritması değildir (aynı değere sahip elemanların sırası değişebilir)


## Programın Kullanımı

Programı derleyip çalıştırdığınızda:

1. Size dizinin eleman sayısını sorulacak
2. Her eleman için bir değer girmeniz istenecek
3. Program girdiğiniz diziyi ekranda gösterecek
4. Comb Sort algoritması ile sıralama yapılacak
5. Sıralanmış dizi ekranda gösterilecek

Örnek kullanım:
```
Comb Sort Algoritması Test Programı
-----------------------------------
Dizinin eleman sayısını giriniz: 5
Diziyi giriniz:
Eleman 1: 64
Eleman 2: 34
Eleman 3: 25
Eleman 4: 12
Eleman 5: 22

Sıralamadan önce dizi: 64 34 25 12 22
Sıralamadan sonra dizi: 12 22 25 34 64
```

## Kaynakça

1. **Şeker, Ş. E.** (2012, Mayıs 27). *Tarak Sıralaması (Comb Sort)*. Bilgisayar Kavramları.  
   [https://bilgisayarkavramlari.com/2012/05/27/tarak-siralamasi-comb-sort/](https://bilgisayarkavramlari.com/2012/05/27/tarak-siralamasi-comb-sort/)

2. **Dedeç, İ.** (2023, Ocak 15). *Comb Sort (Tarak Sıralama)*. Medium.  
   [https://ddcihsan.medium.com/comb-sort-tarak-s%C4%B1ralama-4923d7931017](https://ddcihsan.medium.com/comb-sort-tarak-s%C4%B1ralama-4923d7931017)

3. **Başoğlu, İ.** (2014, Temmuz 10). *Comb Sort (Tarak Sıralama) Algoritması*. İsmail Başoğlu.  
   [https://www.ismailbasoglu.com.tr/algoritmalar/comb-sort-tarak-siralama-algoritmasi.html](https://www.ismailbasoglu.com.tr/algoritmalar/comb-sort-tarak-siralama-algoritmasi.html)
