#include "hashcode.h"

unsigned int GenerateHashCode(const char* input) {
    // Simple hash function stub
    unsigned int hash = 0;
    while (*input) {
        hash = (hash * 31) + (unsigned char)(*input++);
    }
    return hash;
}