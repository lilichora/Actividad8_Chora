// factorial.cpp
#include <iostream>

extern "C" {
    int factorial(int n) {
        if (n == 0 || n == 1) {
            return 1;
        } else {
            return n * factorial(n - 1);
        }
    }
}

int main() {
    // No es necesario realizar ninguna acción aquí en el contexto de Emscripten
    return 0;
}

