#include "numeros_neopixel.h"
#include "LabNeoPixel/neopixel_driver.h" // ajuste conforme o caminho real

static void mostrar_numero(const uint8_t indices[], uint tamanho, uint8_t r, uint8_t g, uint8_t b) {
    npClear();
    for (uint i = 0; i < tamanho; i++) {
        npSetLED(indices[i], r, g, b);
    }
    npWrite();
}

void mostrar_numero_0() {
    uint8_t indices[] = {0, 1, 2, 3, 4, 5, 9, 10, 14, 15, 19, 20, 21, 22, 23, 24};
    mostrar_numero(indices, sizeof(indices)/sizeof(indices[0]), COR_0_R, COR_0_G, COR_0_B);
}

void mostrar_numero_1() {
    uint8_t indices[] = {22, 16, 17, 12, 7, 1, 2, 3};
    mostrar_numero(indices, sizeof(indices)/sizeof(indices[0]), COR_1_R, COR_1_G, COR_1_B);
}

void mostrar_numero_2() {
    uint8_t indices[] = {21, 22, 23, 18, 13, 12, 11, 6, 1, 2, 3};
    mostrar_numero(indices, sizeof(indices)/sizeof(indices[0]), COR_2_R, COR_2_G, COR_2_B);
}

void mostrar_numero_3() {
    uint8_t indices[] = {21, 22, 23, 18, 8, 13, 12, 11, 1, 2, 3};
    mostrar_numero(indices, sizeof(indices)/sizeof(indices[0]), COR_3_R, COR_3_G, COR_3_B);
}

void mostrar_numero_4() {
    uint8_t indices[] = {23, 21, 16, 18, 13, 12, 11, 10, 8, 1};
    mostrar_numero(indices, sizeof(indices)/sizeof(indices[0]), COR_4_R, COR_4_G, COR_4_B);
}

void mostrar_numero_5() {
    uint8_t indices[] = {21, 22, 23, 16, 13, 12, 11, 8, 1, 2, 3};
    mostrar_numero(indices, sizeof(indices)/sizeof(indices[0]), COR_5_R, COR_5_G, COR_5_B);
}

void mostrar_numero_6() {
    uint8_t indices[] = {21, 22, 23, 16, 13, 12, 11, 8, 6, 1, 2, 3};
    mostrar_numero(indices, sizeof(indices)/sizeof(indices[0]), COR_6_R, COR_6_G, COR_6_B);
}

void mostrar_numero_7() {
    uint8_t indices[] = {21, 22, 23, 18, 13, 8, 3};
    mostrar_numero(indices, sizeof(indices)/sizeof(indices[0]), COR_7_R, COR_7_G, COR_7_B);
}

void mostrar_numero_8() {
    uint8_t indices[] = {1, 2, 3, 6, 8, 11, 13, 16, 18, 21, 22, 23};
    mostrar_numero(indices, sizeof(indices)/sizeof(indices[0]), COR_8_R, COR_8_G, COR_8_B);
}

void mostrar_numero_9() {
    uint8_t indices[] = {1, 2, 3, 6, 8, 11, 13, 16, 18, 21, 22, 23};
    mostrar_numero(indices, sizeof(indices)/sizeof(indices[0]), COR_9_R, COR_9_G, COR_9_B);
}
