#include <gen_board_conf.h>
#include <stm32.h>

struct uart_conf uarts[] = {
	[1] = {
		.status = DISABLED,
		.name = "USART1",
		.dev = {
			.name = "USART1",
			.irqs = {
				VAL("", 37),
			},
			.pins = {
				PIN("TX", PB, PIN_6, AF7),
				PIN("RX", PB, PIN_7, AF7),
			},
			.clocks = {
				VAL("TX",   CLK_GPIOB),
				VAL("RX",   CLK_GPIOB),
				VAL("UART", CLK_USART1),
			}
		},
		.baudrate = 115200,
	},
	[2] = {
		.status = DISABLED,
		.name = "USART2",
		.dev = {
			.name = "USART2",
			.irqs = {
				VAL("", 38),
			},
			.pins = {
				PIN("TX", PA, PIN_2, AF7),
				PIN("RX", PA, PIN_3, AF7),
			},
			.clocks = {
				VAL("TX",   CLK_GPIOA),
				VAL("RX",   CLK_GPIOA),
				VAL("UART", CLK_USART2),
			}
		},
		.baudrate = 115200,
	},
	[3] = {
		.status = DISABLED,
		.name = "USART3",
		.dev = {
			.name = "USART3",
			.irqs = {
				VAL("", 39),
			},
			.pins = {
				PIN("TX", PC, PIN_10, AF7),
				PIN("RX", PC, PIN_11, AF7),
			},
			.clocks = {
				VAL("TX",   CLK_GPIOC),
				VAL("RX",   CLK_GPIOC),
				VAL("UART", CLK_USART3),
			}
		},
		.baudrate = 115200,
	},
	[4] = {
		.status = DISABLED,
		.name = "UART4",
		.dev = {
			.name = "UART4",
			.irqs = {
				VAL("", 52),
			},
			.pins = {
				PIN("TX", PA, PIN_0, AF8),
				PIN("RX", PA, PIN_1, AF8),
			},
			.clocks = {
				VAL("TX",   CLK_GPIOA),
				VAL("RX",   CLK_GPIOA),
				VAL("UART", CLK_UART4),
			}
		},
		.baudrate = 115200,
	},
	[5] = {
		.status = DISABLED,
		.name = "UART5",
		.dev = {
			.name = "UART5",
			.irqs = {
				VAL("", 53),
			},
			.pins = {
				PIN("TX", PC, PIN_12, AF8),
				PIN("RX", PD, PIN_2, AF8),
			},
			.clocks = {
				VAL("TX",   CLK_GPIOC),
				VAL("RX",   CLK_GPIOD),
				VAL("UART", CLK_UART5),
			}
		},
		.baudrate = 115200,
	},
	[6] = {
		.status = DISABLED,
		.name = "USART6",
		.dev = {
			.name = "USART6",
			.irqs = {
				VAL("", 71),
			},
			.pins = {
				PIN("TX", PC, PIN_6, AF8),
				PIN("RX", PC, PIN_7, AF8),
			},
			.clocks = {
				VAL("TX",   CLK_GPIOC),
				VAL("RX",   CLK_GPIOC),
				VAL("UART", CLK_USART6),
			}
		},
		.baudrate = 115200,
	},
};

struct spi_conf spis[] = {
	[1] = {
		.status = DISABLED,
		.name = "SPI1",
		.dev = {
			.name = "SPI1",
			.pins = {
				PIN("SCK",  PA, PIN_5, AF5),
				PIN("MISO", PA, PIN_6, AF5),
				PIN("MOSI", PA, PIN_7, AF5),
				PIN("CS",   PC, PIN_13, NOAF),
			},
			.clocks = {
				VAL("SCK",  CLK_GPIOA),
				VAL("MISO", CLK_GPIOA),
				VAL("MOSI", CLK_GPIOA),
				VAL("CS",   CLK_GPIC),
				VAL("SPI",  CLK_SPI1),
			}
		},
	},
	[2] = {
		.status = DISABLED,
		.name = "SPI2",
		.dev = {
			.name = "SPI2",
			.pins = {
				PIN("SCK",  PB, PIN_13, AF5),
				PIN("MISO", PB, PIN_14, AF5),
				PIN("MOSI", PB, PIN_15, AF5),
				PIN("CS",   PC, PIN_14, NOAF),
			},
			.clocks = {
				VAL("SCK",  CLK_GPIOB),
				VAL("MISO", CLK_GPIOB),
				VAL("MOSI", CLK_GPIOB),
				VAL("CS",   CLK_GPIOC),
				VAL("SPI",  CLK_SPI2),
			}
		},
	},
};

struct i2c_conf i2cs[] = {
	[1] = {
		.status = DISABLED,
		.name = "I2C1",
		.dev = {
			.name = "I2C1",
			.irqs = {
				VAL("EVENT_IRQ", 31),
				VAL("ERROR_IRQ", 32),
			},
			.pins = {
				PIN("SCL", GPIO_PORT_B, PIN_8, AF4),
				PIN("SDA", GPIO_PORT_B, PIN_9, AF4),
			},
			.clocks = {
				VAL("SCL", CLK_GPIOB),
				VAL("SDA", CLK_GPIOB),
				VAL("I2C", CLK_I2C1),
			}
		},
	},
	[2] = {
		.status = DISABLED,
		.name = "I2C2",
		.dev = {
			.name = "I2C2",
			.irqs = {
				VAL("EVENT_IRQ", 33),
				VAL("ERROR_IRQ", 34),
			},
			.pins = {
				PIN("SCL", GPIO_PORT_F, PIN_0, AF4),
				PIN("SDA", GPIO_PORT_F, PIN_1, AF4),
			},
			.clocks = {
				VAL("SCL", CLK_GPIOF),
				VAL("SDA", CLK_GPIOF),
				VAL("I2C", CLK_I2C2),
			}
		},
	},
	[3] = {
		.status = DISABLED,
		.name = "I2C3",
		.dev = {
			.name = "I2C3",
			.irqs = {
				VAL("EVENT_IRQ", 72),
				VAL("ERROR_IRQ", 73),
			},
			.pins = {
				PIN("SCL", GPIO_PORT_H, PIN_4, AF4),
				PIN("SDA", GPIO_PORT_H, PIN_5, AF4),
			},
			.clocks = {
				VAL("SCL", CLK_GPIOH),
				VAL("SDA", CLK_GPIOH),
				VAL("I2C", CLK_I2C3),
			}
		},
	},

};

EXPORT_CONFIG(UART(uarts), SPI(spis), I2C(i2cs))
