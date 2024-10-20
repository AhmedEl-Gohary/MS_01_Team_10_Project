#include "drivers/positive_logic_led.h" "drivers/negative_logic_led.h"

#define RED_LED 0
#define GREEN_LED 1 
#define BLUE_LED 2

int main() {
    POSITIVE_LOGIC_LED_Init(RED_LED);
    POSITIVE_LOGIC_LED_Init(GREEN_LED);
    NEGATIVE_LOGIC_LED_Init(BLUE_LED);

    while (true) {
        POSITIVE_LOGIC_LED_Off(RED_LED);
        POSITIVE_LOGIC_LED_Off(GREEN_LED);
        NEGATIVE_LOGIC_LED_Off(BLUE_LED);
        sleep_ms(5000);
        POSITIVE_LOGIC_LED_On(RED_LED);
        sleep_ms(1000);
        POSITIVE_LOGIC_LED_Off(RED_LED);
        POSITIVE_LOGIC_LED_On(GREEN_LED);
        sleep_ms(1000);
        POSITIVE_LOGIC_LED_Off(GREEN_LED);
        NEGATIVE_LOGIC_LED_On(BLUE_LED);
        sleep_ms(1000);
        POSITIVE_LOGIC_LED_On(RED_LED);
        POSITIVE_LOGIC_LED_On(GREEN_LED);
        sleep_ms(2000);
    }
}
