#include <avr/io.h>
#include <util/delay.h>

int main(void) {
    // PORTD5/7 outputs
    DDRD = 1 << 7 | 1 << 5;

    while (1) {

        PORTD = 1 << 7;
        _delay_ms(1000);

        PORTD = 1 << 5;
        _delay_ms(1000);
    }

    return 0;
}
