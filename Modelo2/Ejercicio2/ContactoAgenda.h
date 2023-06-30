#ifndef CONTACTOAGENDA_H_
#define CONTACTOAGENDA_H_

#include <string>
using std::string;

namespace ContactoAgenda
{
struct ContactoAgenda;
enum Formato{html, csv};
ContactoAgenda* CrearContacto(string nombre, string apellido, string telefono, string email);
string ObtenerRepresentacionContacto(ContactoAgenda* contacto, Formato formato);
void Destruir(ContactoAgenda* contacto);
}

#endif