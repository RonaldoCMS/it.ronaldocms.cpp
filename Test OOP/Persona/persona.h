#ifndef PERSONA_H_INCLUDED
#define PERSONA_H_INCLUDED

#include <string.h>

using namespace std;

    class Persona {
        

        public:
            string nome;
            string cognome;
            Persona(string nome, string cognome);
            void hello();
    };


#endif