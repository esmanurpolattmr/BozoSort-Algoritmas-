# 🌀 BozoSort Algoritması

**BozoSort**, listedeki elemanları sıralamak için kullanılan son derece verimsiz ve rastgelelik temelli bir sıralama algoritmasıdır. Genellikle bir **“şaka algoritması”** olarak bilinir.

Amaç, listeyi rastgele eleman değişimleriyle sıralı hale getirmektir.

---

## 🧩 Kategori      
 - Sıralama Algoritması
## 🔍 Çözüm Yaklaşımı
 - Brute Force (Zorlayıcı / Rastgele Deneme)

---

## ❓ Ne Zaman Kullanılır?

- Gerçek problemler için **kullanılmaz**.
- Eğitim amaçlı, **algoritma verimliliğinin önemini vurgulamak** için.
- Algoritma tasarımına **mizahi bir bakış sunmak** için.
- Gerçek uygulamalarda **hiçbir zaman kullanılmaz**, çünkü çok verimsizdir.

---

## 🎯 Neden Kullanılır?

- **Rastgeleliğin algoritmalara etkisini göstermek** için.
- **Verimli sıralama algoritmalarının gerekliliğini kavratmak** için.
- “**Asla böyle bir algoritma yazmayın!**” mesajıyla, **optimizasyonun ve akıllı tasarımın önemini** vurgulamak için.

---

## 🧮 Algoritmanın Adımları

1. Giriş olarak bir sayı dizisi alınır.
2. Dizinin sıralı olup olmadığı kontrol edilir.
3. Eğer sıralı değilse:
   - Rastgele iki indeks seçilir.
   - Seçilen elemanların yerleri değiştirilir.
   - 2.adıma geri dönülür.
4. Dizi sıralı hale gelene kadar bu işlem tekrar edilir.
5. Sıralı dizi çıktı olarak verilir.

---

## 📊 Karmaşıklık Analizi

| **Durum**                       | **Zaman Karmaşıklığı** | **Karşılaştırma Sayısı** | **Swap (Yer Değiştirme) Sayısı** |
|--------------------------------|-------------------------|---------------------------|----------------------------------|
| En İyi Durum (dizi sıralıysa)  | Θ(n)                    | Θ(n)                      | Θ(1)                             |
| Ortalama Durum                 | Θ(n³ log n)             | Θ(n³ log n)               | Θ(n²)                            |
| En Kötü Durum                  | ∞ (sonsuz)              | ∞                         | ∞                                |

### 🧠 Uzay Karmaşıklığı

- **Θ(1)** (Ekstra bellek gerekmez)

---

## 📌 Kullanım Yerleri

- **Eğitim** ve **mizahi** amaçlarla.
- **Kod görselleştirme** uygulamalarında eğlenceli örnek olarak.
- **Verimsiz algoritmaların** ne kadar etkisiz olduğunu göstermek için.

---

## ✅ Avantajları

- Basit ve kolay anlaşılır.
- Rastgeleliğe dayalı algoritma yapısını öğretir.
- Eğlencelidir, algoritma animasyonlarında kullanılabilir.

---

## ❌ Dezavantajları

- Aşırı derecede **verimsizdir**.
- Pratikte **hiçbir kullanım alanı yoktur**.
- **Sonsuz döngü** riski taşır.
- **Büyük veri kümelerinde** tamamen işlevsiz hale gelir.

---

## 📚 Kaynakça

- [BozoSort - The Definitive C/C++/VB.NET/Java/PHP](https://www.coderslexicon.com/bozosort-definitive-c-c-vb-net-java-php/)
- [What is BozoSort? - Stack Overflow](https://www.google.com/search?q=https://stackoverflow.com/questions/232292/what-is-bozo-sort)
- [nayuki/Sorting-algorithms-demo - BozoSort.java](https://github.com/nayuki/Sorting-algorithms-demo/blob/master/src/io/nayuki/sortalgodemo/algo/BozoSort.java)
- [vinimdocarmo/node-bozosort - GitHub](https://github.com/vinimdocarmo/node-bozosort?tab=readme-ov-file)


## 👤 Hazırlayan

**Esmanur Polattimur**  
Konya Teknik Üniversitesi  
Yapay Zeka ve Makine Öğrenmesi  
Öğrenci No: **241230014**
