# UAS_STRUKTURDATA
projek untuk UAS SDA

# KelolaLaundry

## Implementasi Array, Queue Berbasis Linked List, dan Stack dengan Advanced Sorting dalam Sistem Manajemen dan Riwayat Data Laundry

### Deskripsi Proyek

**KelolaLaundry** adalah aplikasi manajemen laundry yang dirancang untuk membantu proses pengelolaan data pelanggan, antrian cucian, riwayat transaksi, dan pencarian data secara efisien. Proyek ini mengimplementasikan beberapa struktur data dan algoritma yang dipelajari dalam mata kuliah Struktur Data, yaitu:

* Array
* Queue berbasis Linked List
* Stack
* Advanced Sorting

Dengan memanfaatkan struktur data tersebut, sistem mampu mengelola proses laundry secara lebih terorganisir dan efisien.

---

## Tujuan Proyek

1. Menerapkan konsep struktur data dalam kasus nyata sistem laundry.
2. Mengelola antrian pelanggan menggunakan Queue berbasis Linked List.
3. Menyimpan riwayat transaksi menggunakan Stack.
4. Mengelola data pelanggan dan pesanan menggunakan Array.
5. Mengurutkan data menggunakan algoritma sorting tingkat lanjut.
6. Meningkatkan efisiensi pengelolaan data laundry.

---

## Fitur Utama

### 1. Manajemen Data Pelanggan

* Menambah data pelanggan.
* Mengubah data pelanggan.
* Menghapus data pelanggan.
* Menampilkan daftar pelanggan.

### 2. Manajemen Pesanan Laundry

* Input pesanan laundry.
* Menampilkan detail pesanan.
* Mengubah status pesanan.

### 3. Sistem Antrian Laundry (Queue Linked List)

* Menambahkan pelanggan ke antrian.
* Memproses pelanggan berdasarkan prinsip FIFO (First In First Out).
* Menampilkan seluruh antrian laundry.

### 4. Riwayat Transaksi (Stack)

* Menyimpan transaksi yang telah selesai.
* Menampilkan riwayat transaksi terbaru.
* Mengakses transaksi terakhir menggunakan prinsip LIFO (Last In First Out).

### 5. Advanced Sorting

Mengurutkan data berdasarkan:

* Nama pelanggan
* Tanggal transaksi
* Berat cucian
* Total harga

Algoritma yang dapat digunakan:

* Merge Sort
* Quick Sort
* Shell Sort
  
### 6. Pencarian Data

* Cari pelanggan berdasarkan nama.
* Cari transaksi berdasarkan ID transaksi.

---

## Struktur Data yang Digunakan

| Struktur Data       | Fungsi                                      |
| ------------------- | ------------------------------------------- |
| Array               | Menyimpan data pelanggan dan data transaksi |
| Queue (Linked List) | Mengelola antrian laundry                   |
| Stack               | Menyimpan riwayat transaksi selesai         |
| Sorting Algorithm   | Mengurutkan data transaksi dan pelanggan    |

---

## Alur Sistem

1. Pelanggan melakukan pemesanan laundry.
2. Data pesanan disimpan ke dalam sistem.
3. Pesanan masuk ke antrian menggunakan Queue Linked List.
4. Laundry diproses sesuai urutan antrian.
5. Setelah selesai, data transaksi dipindahkan ke Stack sebagai riwayat.
6. Pengguna dapat melihat atau mengurutkan data berdasarkan kebutuhan.

---

## Struktur Folder

```text
KelolaLaundry/
│
├── src/
│   ├── models/
│   ├── queue/
│   ├── stack/
│   ├── sorting/
│   ├── services/
│   └── main.*
│
├── docs/
│
├── README.md
│
└── LICENSE
```

---

## Teknologi yang Digunakan

* Bahasa Pemrograman: C
* Struktur Data:

  * Array
  * Linked List
  * Queue berbasis Linked list
  * Stack Berbasis Array
  
* Algoritma:

  * Merge Sort
  * Quick Sort
  * Shell Sort

---

## Contoh Skenario

### Menambah Antrian

```text
Pelanggan: Budi
Berat Cucian: 5 Kg

Status:
Masuk ke Antrian Laundry
```

### Memproses Antrian

```text
Antrian Pertama Diproses:
Budi

Status:
Sedang Dicuci
```

### Menyimpan Riwayat

```text
Laundry Selesai

Data Transaksi:
ID: TRX001
Nama: Budi
Total: Rp50.000

Masuk ke Stack Riwayat
```

---

## Anggota Tim

| No | Nama                     | Peran                    |
| -- | --------------           | ------------------------ |
| 1  | Abrar Muda               | Bussines Process Analyst |
| 2  | Arinal Haq               | Algorythm Analist        |
| 3  | Kayla Adila Farija Atika | System Designer          |
| 4  | Syella Zikra Arifa       | Future Planner           |

---

## Hasil yang Diharapkan

* Sistem laundry yang terorganisir.
* Implementasi nyata struktur data dan algoritma.
* Pengelolaan antrian dan riwayat transaksi yang efisien.
* Pengurutan data yang cepat dan akurat.

---

