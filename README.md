## Penjelasan Program

Program ini dibuat menggunakan bahasa **C++** untuk menghitung berbagai nilai geometri dari sebuah lingkaran berdasarkan dua titik koordinat:
- Titik pusat lingkaran `(x1, y1)`
- Titik sembarang pada keliling `(x2, y2)`

### Fungsi-fungsi dalam Program

1. **`jarak(double x1, double y1, double x2, double y2)`**  
   Menghitung jarak antara dua titik dengan rumus:  
   \[
   \text{jarak} = \sqrt{(x2 - x1)^2 + (y2 - y1)^2}
   \]

2. **`radius(double x1, double y1, double x2, double y2)`**  
   Mengembalikan nilai jari-jari lingkaran dengan memanggil fungsi `jarak()`.

3. **`keliling(double r)`**  
   Menghitung keliling lingkaran dengan rumus:  
   \[
   K = 2 \pi r
   \]

4. **`luas(double r)`**  
   Menghitung luas lingkaran dengan rumus:  
   \[
   L = \pi r^2
   \]

### Alur Program Utama (`main()`)

1. Pengguna memasukkan dua titik koordinat: pusat `(x1, y1)` dan titik keliling `(x2, y2)`.  
2. Program menghitung jari-jari menggunakan fungsi `radius()`.  
3. Berdasarkan jari-jari tersebut, program menghitung:
   - Diameter = 2 × r  
   - Keliling dengan `keliling(r)`  
   - Luas dengan `luas(r)`  
4. Semua hasil ditampilkan ke layar dengan format rapi.

---

### 🧠 Ringkasan
Program ini menerapkan **konsep modularisasi fungsi** untuk memudahkan pengelolaan dan pembacaan kode, serta memperjelas hubungan antarproses perhitungan dalam menentukan properti lingkaran.
