#include <stdio.h>
#include "pico/stdlib.h"

#define LED_GREEN 11
#define LED_BLUE 12
#define LED_RED 13
#define BUZZER 21
#define BUTTON 5

void init_gpio(void) {
    gpio_init(LED_GREEN);
    gpio_set_dir(LED_GREEN, GPIO_OUT);
    gpio_put(LED_GREEN, 0);

    gpio_init(LED_BLUE);
    gpio_set_dir(LED_BLUE, GPIO_OUT);
    gpio_put(LED_BLUE, 0);

    gpio_init(LED_RED);
    gpio_set_dir(LED_RED, GPIO_OUT);
    gpio_put(LED_RED, 0);

    gpio_init(BUZZER);
    gpio_set_dir(BUZZER, GPIO_OUT);
    gpio_put(BUZZER, 0);

    gpio_init(BUTTON);
    gpio_set_dir(BUTTON, GPIO_IN);
    gpio_pull_up(BUTTON);
}

void turn_off_leds() {
    gpio_put(LED_GREEN, 0);
    gpio_put(LED_BLUE, 0);
    gpio_put(LED_RED, 0);

void activate_buzzer() {
    gpio_put(BUZZER, 1);
    sleep_ms(2000);
    gpio_put(BUZZER, 0);
}

int main()
{
    init_gpio();
    int state = 0;

    while (true) {
        if (gpio_get(BUTTON) == 0) {
            state = (state + 1) % 6;
            sleep_ms(300);
        }

        turn_off_leds();
        switch (state) {
            case 0: gpio_put(LED_GREEN, 1); break;
            case 1: gpio_put(LED_BLUE, 1); break;
            case 2: gpio_put(LED_RED, 1); break;
            case 3: gpio_put(LED_GREEN, 1); gpio_put(LED_BLUE, 1); gpio_put(LED_RED, 1); break;
            case 4: break;  // All LEDs off
            case 5: activate_buzzer(); break;
        }
        sleep_ms(100);
    }

    return 0;
}
