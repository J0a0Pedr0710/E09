#include <avr/io.h>
#include <util/delay.h>

#define PINO_VERDE    PD2
#define PINO_AMARELO  PD3
#define PINO_VERMELHO PD4

#define TEMPO_VERDE    12000
#define TEMPO_AMARELO  3000
#define TEMPO_VERMELHO 15000


typedef enum {
    VERDE,
    AMARELO,
    VERMELHO
} Estado;

int main(void) {
  
    DDRD |= (1 << PINO_VERDE) | (1 << PINO_AMARELO) | (1 << PINO_VERMELHO);

    Estado estadoAtual = VERDE;

    while (1) {
        switch (estadoAtual) {
            case VERDE:
                PORTD |=  (1 << PINO_VERDE);
                PORTD &= ~(1 << PINO_AMARELO);
                PORTD &= ~(1 << PINO_VERMELHO);
                _delay_ms(TEMPO_VERDE);
                estadoAtual = AMARELO;
                break;

            case AMARELO:
                PORTD &= ~(1 << PINO_VERDE);
                PORTD |=  (1 << PINO_AMARELO);
                PORTD &= ~(1 << PINO_VERMELHO);
                _delay_ms(TEMPO_AMARELO);
                estadoAtual = VERMELHO;
                break;

            case VERMELHO:
                PORTD &= ~(1 << PINO_VERDE);
                PORTD &= ~(1 << PINO_AMARELO);
                PORTD |=  (1 << PINO_VERMELHO);
                _delay_ms(TEMPO_VERMELHO);
                estadoAtual = VERDE;
                break;
        }
    }
}
