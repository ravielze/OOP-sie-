#include "WarungNasgor.hpp"

WarungNasgor::WarungNasgor(int uang, int nasi, int telur, int kecap) : WarungNasi(uang, nasi, telur)
{
    this->kecap = kecap;
}

bool WarungNasgor::masak(int pesanan)
{
    if (getNasi() >= pesanan && getTelur() >= pesanan && kecap >= pesanan)
    {
        setTelur(getTelur() - pesanan);
        setNasi(getNasi() - pesanan);
        kecap -= pesanan;
        setUang(getUang() + (pesanan * 15000));
        return true;
    }
    return false;
}