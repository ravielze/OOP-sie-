#include "WarungSaltedEgg.hpp"

WarungSaltedEgg::WarungSaltedEgg(int uang, int nasi, int telur, int telurAsin, int ayam) : WarungNasi(uang, nasi, telur)
{
    this->telurAsin = telurAsin;
    this->ayam = ayam;
}

bool WarungSaltedEgg::masak(int pesanan)
{
    if (getNasi() >= pesanan && getTelur() >= pesanan && telurAsin >= (pesanan * 3) && ayam >= pesanan)
    {
        setNasi(getNasi() - pesanan);
        setTelur(getTelur() - pesanan);
        telurAsin -= (pesanan * 3);
        ayam -= pesanan;
        setUang(getUang() + (30000 * pesanan));
        return true;
    }
    return false;
}
