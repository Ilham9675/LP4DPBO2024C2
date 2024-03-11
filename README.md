# LP4DPBO2024C2
## janji
Saya ilham akbar NIM [2201017] mengerjakan Latihan Praktikum 4 dalam mata kuliah DPBO untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.

## Deskripsi Program
Program ini adalah implementasi dari Pemrograman Berorientasi Objek (OOP) yang menggunakan bahasa pemrograman C++ dan Python. Program ini merancang struktur kelas yang mencakup Car, Garage, Motorcycle, Parkinglot, dan Vehicle. Dalam struktur ini, konsep-konsep utama OOP seperti inheritance (warisan), composition (komposisi), dan array of object (array dari objek) diaplikasikan. Dengan pendekatan ini, program ini menciptakan hubungan yang logis dan efisien antara berbagai entitas, memungkinkan interaksi yang lebih kompleks dan realistis antara objek-objek tersebut.

## Desain Program
![Untitled Diagram-Page-2 drawio](https://github.com/Ilham9675/LP2DPBO2024C2/assets/117561201/d31f8628-0114-40b0-a017-c30b645f92f3)

## Penjelasan Desain Program
Program ini dirancang dengan pendekatan Pemrograman Berorientasi Objek (OOP) dan terdiri dari enam kelas utama: Vehicle, Car, Motorcycle, Garage, Parkinglot, dan Tampilan. Berikut adalah penjelasan lebih lanjut tentang masing-masing kelas:

1. Kelas Vehicle: Ini adalah kelas induk untuk Car dan Motorcycle, mencerminkan fakta bahwa kedua jenis kendaraan tersebut memiliki atribut umum seperti nama, merk, warna, dan tahun pembuatan. Kelas ini menggunakan metode setter dan getter untuk mengatur dan mengambil nilai atribut, dan metode ini diatur sebagai private untuk menjaga integritas data.

2. Kelas Car: Kelas ini adalah turunan dari Vehicle, yang berarti ia mewarisi semua atribut dan metode dari kelas Vehicle. Namun, Car juga memiliki atribut khusus sendiri yang mencerminkan karakteristik unik dari mobil. Ini termasuk jenis mobil, jumlah kursi, dan jumlah pintu. Seperti Vehicle, kelas ini juga menggunakan metode setter dan getter untuk mengatur dan mengambil nilai atribut ini. Ini memungkinkan kita untuk mengendalikan akses ke data ini dan memastikan bahwa mereka hanya dapat diubah dengan cara yang tepat.

3. Kelas Motorcycle: Kelas ini juga merupakan turunan dari Vehicle, dan oleh karena itu mewarisi semua atribut dan metode dari kelas tersebut. Namun, Motorcycle juga memiliki atribut khusus sendiri, seperti jenis motor dan kapasitas tangki. Ini mencerminkan fakta bahwa motor memiliki beberapa karakteristik yang berbeda dari mobil, dan oleh karena itu memerlukan beberapa atribut tambahan.

4. Kelas Garage: Kelas ini mewakili konsep garasi, yang adalah tempat di mana mobil biasanya disimpan. Sebagai hasilnya, ia memiliki atribut seperti nama garasi, jumlah mobil, dan luas garasi. Kelas ini juga menunjukkan bagaimana kita dapat menggunakan array of object dalam OOP, dengan memiliki array dari objek Car. Jumlah mobil dalam garasi diperbarui secara otomatis setiap kali mobil baru ditambahkan ke dalam list.

5. Kelas Parkinglot: Kelas ini mewakili konsep tempat parkir, yang bisa digunakan untuk parkir baik mobil maupun motor. Oleh karena itu, ia memiliki array of object untuk kedua Car dan Motorcycle. Kelas ini juga memiliki atribut lain seperti nama, kapasitas motor, kapasitas mobil, jumlah motor, dan jumlah mobil. Jumlah motor dan mobil diperbarui secara otomatis, mencerminkan fakta bahwa kapasitas tempat parkir dapat berubah seiring waktu.

6. Kelas Tampilan: Kelas ini bertugas untuk menampilkan semua atribut dari kelas lain. Kelas ini memiliki atribut kolom yang digunakan untuk mengatur panjang kolom yang akan ditampilkan.

## Dokumentasi Program
![Screenshot (653)](https://github.com/Ilham9675/LP2DPBO2024C2/assets/117561201/838c1ce3-5499-46a1-b166-b32265a020c7)
![Screenshot (648)](https://github.com/Ilham9675/LP2DPBO2024C2/assets/117561201/1f08ac40-5eb3-4292-9db4-0bd94edc2afd)