//forma estandar del compilador para que no redefina 2 veces termina con #endif
#ifndef _SUMA
#define _SUMA

#include "operacion.h"

class suma : public operacion {

public:
    void operar(); 
};

#endif
