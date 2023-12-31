#include "stm32f4xx.h"                  // Device header

/**
  * @brief Check if the button is pressed.
  * @retval None
  */
 uint8_t IS_BTN_PRESSED(void)
{
	GPIO_PinState num = HAL_GPIO_ReadPin(GPIOD, GPIO_PIN_14);
	if (num == GPIO_PIN_RESET) {
		return 0;
	}
	else {
		return 1;
	}
}