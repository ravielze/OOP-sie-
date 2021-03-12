// Class Property
// File: Property.h

#ifndef PROPERTY_H
#define PROPERTY_H

#include <string>
using namespace std;
#define CURRENT_YEAR 2021

class Property
{
protected:
  // Atribut
  string name;
  string type; //hotel; hostels; villas; cottages
  int openYear;

public:
  // User-defined constructor: set nilai atribut berdasarkan nilai
  // parameter masukan
  Property(string name, string type, int openYear);

  // Default constructor: set nilai atribut sbb:
  // name = "noname"; openYear = 1900; type = "none"
  Property();

  // Copy constructor
  // TIDAK PERLU CCTOR, bitwise copy sudah cukup

  // Destructor
  // TIDAK PERLU DESTRUCTOR, tidak ada pointer pada field class ini

  // Operator Assignment
  Property &operator=(const Property &);

  // ... set_name(...)
  void set_name(string);

  // ... get_name()
  string get_name() const;

  // ... set_type(...)
  void set_type(string);

  // ... get_type()
  string get_type() const;

  // ... get_age(), asumsikan tahun saat ini dapat diakses dengan
  // makro CURRENT_YEAR
  int get_age() const;

  // ... displayInfo(): Mencetak nama, umur, type, dan rate Property
  void displayInfo() const;

  // ... rate(): menghitung biaya property sesuai dengan umur dan
  // tergantung type property
  virtual float rate() const = 0;
  // Pure virtual biar saja anak classnya yang implementasi
};
// Catatan:
// const method digunakan agar tidak mengubah field dari class untuk method-method tertentu
#endif // PROPERTY_H
