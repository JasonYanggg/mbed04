#include "mbed.h"
#include "TextLCD.h"

DigitalOut led(LED_RED);
TextLCD lcd(D2, D3, D4, D5, D6, D7);

int main(void)
{
    int x = 30;
    lcd.printf("106061233\n");
    while (true) {
        if (x == -1) x = 30;
        led = !led;
        lcd.locate(5, 1);
        lcd.printf("%5i", x);
        wait(1);
        x--;
    }
}