#ifndef IMOVELVELHO_H
#define IMOVELVELHO_H

#include "Imovel.h"

class ImovelVelho: public Imovel
{
    
public:

    ImovelVelho(string, double);

    void setPreco();
    double getPreco();

};

#endif