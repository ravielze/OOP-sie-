#ifndef _LAMPU_HPP_
#define _LAMPU_HPP_
class Lampu
{
private:
    bool nyala;
    int id;
    static int nomor;

public:
    Lampu(); /* ctor: membuat Lampu */
    //Lampu(int id, bool nyala); /* ctor: membuat Lampu dengan identitas nomor dan status nyala lampu */
    //Lampu(const Lampu &);            /* cctor */
    //Lampu &operator=(const Lampu &); /* operator assignment */
    //~Lampu();                        /* dtor */
    void set_nyala(int pilihan); /* Mengeset nilai true untuk status nyala lampu sesuai nomor lampu */
    void set_mati(int pilihan);  /* Mengeset nilai false untuk status nyala lampu sesuai nomor lampu */
    //bool get_info(int id); /* Memperoleh info status nyala lampu saat ini sesuai nomor lampu */
    bool get_info() const; /* Memperoleh info status nyala lampu pada objek ini */
};
#endif