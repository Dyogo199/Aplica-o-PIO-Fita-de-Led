#include <stdio.h>
#include "pico/stdlib.h"
#include "neopixel_driver.h"
#include "testes_cores.h"
#include "efeitos.h"
#include "efeito_curva_ar.h"
#include "numeros_neopixel.h"
#include <stdlib.h>
#include "hardware/gpio.h"
#include "pico/time.h"

#define BOTAO_A 5

volatile bool botao_pressionado = false;

void callback_botao(uint gpio, uint32_t eventos) {
    if (gpio == BOTAO_A && (eventos & GPIO_IRQ_EDGE_FALL)) {
        botao_pressionado = true;
    }
}

void setup() {
    stdio_init_all();
    sleep_ms(1000);
    npInit(LED_PIN);
    srand(time_us_32());

    gpio_init(BOTAO_A);
    gpio_set_dir(BOTAO_A, GPIO_IN);
    gpio_pull_up(BOTAO_A);
    gpio_set_irq_enabled_with_callback(BOTAO_A, GPIO_IRQ_EDGE_FALL, true, &callback_botao);
}

int sorteia_entre(int min, int max) {
    return rand() % (max - min + 1) + min;
}

void mostrar_numero_sorteado(int numero) {
    switch (numero) {
        case 0: mostrar_numero_0(); break;
        case 1: mostrar_numero_1(); break;
        case 2: mostrar_numero_2(); break;
        case 3: mostrar_numero_3(); break;
        case 4: mostrar_numero_4(); break;
        case 5: mostrar_numero_5(); break;
        case 6: mostrar_numero_6(); break;
        case 7: mostrar_numero_7(); break;
        case 8: mostrar_numero_8(); break;
        case 9: mostrar_numero_9(); break;
    }
}

int main() {
    setup();
    printf("Pressione o botão A para sortear um número.\n");

    while (true) {
        if (botao_pressionado) {
            botao_pressionado = false;

            int numero = sorteia_entre(0, 9);
            printf("Número sorteado: %d\n", numero);
            mostrar_numero_sorteado(numero);
            sleep_ms(1000);  // Evita rebote excessivo
        }
        tight_loop_contents();
    }
}