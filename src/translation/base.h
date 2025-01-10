#ifndef _TRANSLATION_BASE
#define _TRANSLATION_BASE

// WARNING -- DO NOT DIRECTLY EDIT `translation/base.h` -- WARNING
// ===============================================================
// The `base.h` header file is auto-generated based
// on `base.ht` and `en-us.h` by the `json2h.py` script.

typedef enum _language_idx_t { // these are based on IETF codes for the translation
    language_idx_en_us,
    language_idx_pl_pl,
    language_idx_bs_latn_ba,
    language_idx_it_it,
    // language_idx_zh_cmn_cn,

    
    COUNT_OF_LANGUAGE_IDX, // leave this as the final enum value
} language_idx_t;

enum T_translations{
    T_ON=0,
    T_OFF,
    T_GND,
    T_INPUT,
    T_OUTPUT,
    T_EXIT,
    T_LOADED,
    T_SAVED,
    T_HZ,
    T_KHZ,
    T_MHZ,
    T_SPEED,
    T_WARN_VOUT_VREF_LOW,
    T_USE_PREVIOUS_SETTINGS,
    T_MODE_ERROR_NO_EFFECT,
    T_MODE_ERROR_NO_EFFECT_HIZ,
    T_MODE_NO_HELP_AVAILABLE,
    T_PRESS_ANY_KEY_TO_EXIT,
    T_PRESS_ANY_KEY,
    T_PRESS_BUTTON,
    T_PRESS_X_TO_EXIT,
    T_MODE_MODE_SELECTION,
    T_MODE_MODE,
    T_MODE_NUMBER_DISPLAY_FORMAT,
    T_MODE_INVALID_OPTION,
    T_MODE_CHOOSE_AVAILABLE_PIN,
    T_MODE_ALL_PINS_IN_USE,
    T_MODE_PULLUP_RESISTORS,
    T_MODE_POWER_SUPPLY,
    T_MODE_DISABLED,
    T_MODE_DISPLAY,
    T_MODE_DISPLAY_SELECTION,
    T_MODE_ENABLED,
    T_MODE_BITORDER,
    T_MODE_BITORDER_MSB,
    T_MODE_BITORDER_LSB,
    T_MODE_DELAY,
    T_MODE_US,
    T_MODE_MS,
    T_MODE_ADC_VOLTAGE,
    T_MODE_ERROR_PARSING_MACRO,
    T_MODE_ERROR_NO_MACROS_AVAILABLE,
    T_MODE_ERROR_MACRO_NOT_DEFINED,
    T_MODE_TICK_CLOCK,
    T_MODE_SET_CLK,
    T_MODE_SET_DAT,
    T_MODE_READ_DAT,
    T_MODE_NO_VOUT_VREF_ERROR,
    T_MODE_NO_VOUT_VREF_HINT,
    T_MODE_NO_PULLUP_ERROR,
    T_MODE_NO_PULLUP_HINT,
    T_MODE_PWM_GENERATE_FREQUENCY,
    T_MODE_FREQ_MEASURE_FREQUENCY,
    T_MODE_FREQ_FREQUENCY,
    T_MODE_FREQ_DUTY_CYCLE,
    T_PSU_DAC_ERROR,
    T_PSU_CURRENT_LIMIT_ERROR,
    T_PSU_SHORT_ERROR,
    T_PSU_ALREADY_DISABLED_ERROR,
    T_SYNTAX_EXCEEDS_MAX_SLOTS,
    T_HWSPI_SPEED_MENU,
    T_HWSPI_SPEED_MENU_1,
    T_HWSPI_SPEED_PROMPT,
    T_HWSPI_BITS_MENU,
    T_HWSPI_BITS_MENU_1,
    T_HWSPI_BITS_PROMPT,
    T_HWSPI_CLOCK_POLARITY_MENU,
    T_HWSPI_CLOCK_POLARITY_MENU_1,
    T_HWSPI_CLOCK_POLARITY_MENU_2,
    T_HWSPI_CLOCK_POLARITY_PROMPT,
    T_HWSPI_CLOCK_PHASE_MENU,
    T_HWSPI_CLOCK_PHASE_MENU_1,
    T_HWSPI_CLOCK_PHASE_MENU_2,
    T_HWSPI_CLOCK_PHASE_PROMPT,
    T_HWSPI_CS_IDLE_MENU,
    T_HWSPI_CS_IDLE_MENU_1,
    T_HWSPI_CS_IDLE_MENU_2,
    T_HWSPI_CS_IDLE_PROMPT,
    T_HWSPI_ACTUAL_SPEED_KHZ,
    T_HWSPI_CS_SELECT,
    T_HWSPI_CS_DESELECT,
    T_UART_SPEED_MENU,
    T_UART_SPEED_MENU_1,
    T_UART_SPEED_PROMPT,
    T_UART_PARITY_MENU,
    T_UART_PARITY_MENU_1,
    T_UART_PARITY_MENU_2,
    T_UART_PARITY_MENU_3,
    T_UART_PARITY_PROMPT,
    T_UART_DATA_BITS_MENU,
    T_UART_DATA_BITS_MENU_1,
    T_UART_DATA_BITS_PROMPT,
    T_UART_STOP_BITS_MENU,
    T_UART_STOP_BITS_MENU_1,
    T_UART_STOP_BITS_MENU_2,
    T_UART_STOP_BITS_PROMPT,
    T_UART_BLOCKING_MENU,
    T_UART_BLOCKING_MENU_1,
    T_UART_BLOCKING_MENU_2,
    T_UART_BLOCKING_PROMPT,
    T_UART_FLOW_CONTROL_MENU,
    T_UART_FLOW_CONTROL_MENU_1,
    T_UART_FLOW_CONTROL_MENU_2,
    T_UART_FLOW_CONTROL_PROMPT,
    T_UART_INVERT_MENU,
    T_UART_INVERT_MENU_1,
    T_UART_INVERT_MENU_2,
    T_UART_INVERT_PROMPT,
    T_UART_GLITCH_TRG_MENU,
    T_UART_GLITCH_TRG_MENU_1,
    T_UART_GLITCH_TRG_PROMPT,
    T_UART_GLITCH_DLY_MENU,
    T_UART_GLITCH_DLY_MENU_1,
    T_UART_GLITCH_DLY_PROMPT,
    T_UART_GLITCH_VRY_MENU,
    T_UART_GLITCH_VRY_MENU_1,
    T_UART_GLITCH_VRY_PROMPT,
    T_UART_GLITCH_LNG_MENU,
    T_UART_GLITCH_LNG_MENU_1,
    T_UART_GLITCH_LNG_PROMPT,
    T_UART_GLITCH_CYC_MENU,
    T_UART_GLITCH_CYC_MENU_1,
    T_UART_GLITCH_CYC_PROMPT,
    T_UART_GLITCH_FAIL_MENU,
    T_UART_GLITCH_FAIL_MENU_1,
    T_UART_GLITCH_FAIL_PROMPT,
    T_UART_GLITCH_CNT_MENU,
    T_UART_GLITCH_CNT_MENU_1,
    T_UART_GLITCH_CNT_PROMPT,
    T_UART_GLITCH_NORDY_MENU,
    T_UART_GLITCH_NORDY_MENU_1,
    T_UART_GLITCH_NORDY_PROMPT,
    T_UART_GLITCH_NORDY_DISABLED,
    T_UART_GLITCH_NORDY_ENABLED,
    T_UART_GLITCH_GLITCHED,
    T_UART_GLITCH_CANCELLED,
    T_UART_GLITCH_DONE,
    T_UART_TOOL_TIMEOUT,
    T_UART_GLITCH_UNKNOWN,
    T_UART_GLITCH_SETUP_ERR,
    T_UART_ACTUAL_SPEED_BAUD,
    T_UART_BAUD,
    T_UART_OPEN,
    T_UART_OPEN_WITH_READ,
    T_UART_CLOSE,
    T_UART_NO_DATA_READ,
    T_UART_NO_DATA_TIMEOUT,
    T_HWI2C_SPEED_MENU,
    T_HWI2C_SPEED_MENU_1,
    T_HWI2C_SPEED_PROMPT,
    T_HWI2C_DATA_BITS_MENU,
    T_HWI2C_DATA_BITS_MENU_1,
    T_HWI2C_DATA_BITS_MENU_2,
    T_HWI2C_DATA_BITS_PROMPT,
    T_HWI2C_CLOCK_STRETCH_MENU,
    T_HWI2C_CLOCK_STRETCH_PROMPT,
    T_HWI2C_START,
    T_HWI2C_REPEATED_START,
    T_HWI2C_STOP,
    T_HWI2C_ACK,
    T_HWI2C_NACK,
    T_HWI2C_NO_PULLUP_DETECTED,
    T_HWI2C_NO_VOUT_DETECTED,
    T_HWI2C_TIMEOUT,
    T_HWI2C_I2C_ERROR,
    T_HW2WIRE_SPEED_MENU,
    T_HW2WIRE_RST_LOW,
    T_HW2WIRE_RST_HIGH,
    T_HW3WIRE_SPEED_MENU_1,
    T_HWLED_DEVICE_MENU,
    T_HWLED_DEVICE_MENU_1,
    T_HWLED_DEVICE_MENU_2,
    T_HWLED_DEVICE_MENU_3,
    T_HWLED_DEVICE_PROMPT,
    T_HWLED_NUM_LEDS_MENU,
    T_HWLED_NUM_LEDS_MENU_1,
    T_HWLED_NUM_LEDS_PROMPT,
    T_HWLED_RESET,
    T_HWLED_FRAME_START,
    T_HWLED_FRAME_STOP,
    T_HW1WIRE_RESET,
    T_HW1WIRE_PRESENCE_DETECT,
    T_HW1WIRE_NO_DEVICE,
    T_IR_RX_SENSOR_MENU,
    T_IR_RX_SENSOR_MENU_LEARNER,
    T_IR_RX_SENSOR_MENU_BARRIER,
    T_IR_RX_SENSOR_MENU_38K_DEMOD,
    T_IR_RX_SENSOR_MENU_56K_DEMOD,
    T_IR_TX_SPEED_MENU,
    T_IR_TX_SPEED_MENU_1,
    T_IR_TX_SPEED_PROMPT,
    T_IR_PROTOCOL_MENU,
    T_IR_PROTOCOL_MENU_RC5,
    T_IR_PROTOCOL_MENU_NEC,
    T_CMDLN_INVALID_COMMAND,
    T_CMDLN_NO_HELP,
    T_CMDLN_LS,
    T_CMDLN_CD,
    T_CMDLN_MKDIR,
    T_CMDLN_RM,
    T_CMDLN_CAT,
    T_CMDLN_MODE,
    T_CMDLN_PSU_EN,
    T_CMDLN_RESET,
    T_CMDLN_BOOTLOAD,
    T_CMDLN_INT_FORMAT,
    T_CMDLN_INT_INVERSE,
    T_CMDLN_HELP,
    T_CMDLN_CONFIG_MENU,
    T_CMDLN_FREQ_ONE,
    T_CMDLN_FREQ_CONT,
    T_CMDLN_PWM_CONFIG,
    T_CMDLN_PWM_DIS,
    T_CMDLN_HELP_MODE,
    T_CMDLN_HELP_DISPLAY,
    T_CMDLN_INFO,
    T_CMDLN_BITORDER_MSB,
    T_CMDLN_BITORDER_LSB,
    T_CMDLN_DISPLAY_FORMAT,
    T_CMDLN_PULLUPS_EN,
    T_CMDLN_PULLUPS_DIS,
    T_CMDLN_PSU_DIS,
    T_CMDLN_ADC_CONT,
    T_CMDLN_ADC_ONE,
    T_CMDLN_SELFTEST,
    T_CMDLN_AUX_IN,
    T_CMDLN_AUX_LOW,
    T_CMDLN_AUX_HIGH,
    T_CMDLN_DUMP,
    T_CMDLN_LOAD,
    T_CMDLN_DISPLAY,
    T_CMDLN_LOGIC,
    T_CMDLN_HEX,
    T_HELP_TITLE,
    T_HELP_GENERAL_COMMANDS,
    T_HELP_BUS_SYNTAX,
    T_HELP_DISK_COMMANDS,
    T_HELP_BLANK,
    T_HELP_SECTION_IO,
    T_HELP_SECTION_CAPTURE,
    T_HELP_SECTION_CONFIGURE,
    T_HELP_SECTION_SYSTEM,
    T_HELP_SECTION_FILES,
    T_HELP_SECTION_PROGRAMS,
    T_HELP_SECTION_MODE,
    T_HELP_SECTION_SYNTAX,
    T_HELP_SECTION_HELP,
    T_HELP_GREATER_THAN,
    T_HELP_SYNTAX_ADC,
    T_HELP_CMD_LS,
    T_HELP_CMD_CD,
    T_HELP_CMD_MKDIR,
    T_HELP_CMD_RM,
    T_HELP_CMD_PAUSE,
    T_HELP_CMD_FORMAT,
    T_HELP_CMD_CAT,
    T_HELP_CMD_HEX,
    T_HELP_CAPTURE_SCOPE,
    T_HELP_CAPTURE_LA,
    T_HELP_CMD_FLASH,
    T_HELP_CMD_LABEL,
    T_HELP_CMD_IMAGE,
    T_HELP_CMD_DUMP,
    T_HELP_1_2,
    T_HELP_1_3,
    T_HELP_1_4,
    T_HELP_1_5,
    T_HELP_1_6,
    T_HELP_1_7,
    T_HELP_COMMAND_AUX,
    T_HELP_COMMAND_DISPLAY,
    T_HELP_1_9,
    T_HELP_1_22,
    T_HELP_1_10,
    T_HELP_1_11,
    T_HELP_1_23,
    T_HELP_1_12,
    T_HELP_HELP_GENERAL,
    T_HELP_HELP_DISPLAY,
    T_HELP_HELP_COMMAND,
    T_HELP_1_14,
    T_HELP_1_15,
    T_HELP_1_16,
    T_HELP_1_17,
    T_HELP_1_18,
    T_HELP_1_19,
    T_HELP_1_20,
    T_HELP_1_21,
    T_HELP_2_1,
    T_HELP_2_3,
    T_HELP_2_4,
    T_HELP_2_7,
    T_HELP_2_8,
    T_HELP_2_9,
    T_HELP_2_10,
    T_HELP_2_11,
    T_HELP_SYN_CLOCK_HIGH,
    T_HELP_SYN_CLOCK_LOW,
    T_HELP_SYN_CLOCK_TICK,
    T_HELP_SYN_DATA_HIGH,
    T_HELP_SYN_DATA_LOW,
    T_HELP_SYN_DATA_READ,
    T_HELP_2_18,
    T_HELP_2_19,
    T_HELP_2_20,
    T_HELP_2_21,
    T_HELP_2_22,
    T_HELP_HINT,
    T_HELP_FLASH,
    T_HELP_FLASH_ERASE,
    T_HELP_FLASH_WRITE,
    T_HELP_FLASH_READ,
    T_HELP_FLASH_VERIFY,
    T_HELP_FLASH_TEST,
    T_HELP_FLASH_PROBE,
    T_HELP_FLASH_INIT,
    T_HELP_FLASH_FILE_FLAG,
    T_HELP_FLASH_ERASE_FLAG,
    T_HELP_FLASH_VERIFY_FLAG,
    T_INFO_FIRMWARE,
    T_INFO_BOOTLOADER,
    T_INFO_WITH,
    T_INFO_RAM,
    T_INFO_FLASH,
    T_INFO_SN,
    T_INFO_WEBSITE,
    T_INFO_TF_CARD,
    T_INFO_FILE_SYSTEM,
    T_NOT_DETECTED,
    T_INFO_AVAILABLE_MODES,
    T_INFO_CURRENT_MODE,
    T_INFO_POWER_SUPPLY,
    T_INFO_CURRENT_LIMIT,
    T_INFO_PULLUP_RESISTORS,
    T_INFO_FREQUENCY_GENERATORS,
    T_INFO_DISPLAY_FORMAT,
    T_INFO_DATA_FORMAT,
    T_INFO_BITS,
    T_INFO_BITORDER,
    T_CONFIG_FILE,
    T_CONFIG_CONFIGURATION_OPTIONS,
    T_CONFIG_LANGUAGE,
    T_CONFIG_ANSI_COLOR_MODE,
    T_CONFIG_ANSI_COLOR_FULLCOLOR,
    T_CONFIG_ANSI_COLOR_256,
    T_CONFIG_ANSI_TOOLBAR_MODE,
    T_CONFIG_LANGUAGE_ENGLISH,
    T_CONFIG_LANGUAGE_CHINESE,
    T_CONFIG_LANGUAGE_POLISH,
    T_CONFIG_LANGUAGE_BOSNIAN,
    T_CONFIG_LANGUAGE_ITALIAN,
    T_CONFIG_DISABLE,
    T_CONFIG_ENABLE,
    T_CONFIG_SCREENSAVER,
    T_CONFIG_SCREENSAVER_5,
    T_CONFIG_SCREENSAVER_10,
    T_CONFIG_SCREENSAVER_15,
    T_CONFIG_LEDS_EFFECT,
    T_CONFIG_LEDS_EFFECT_SOLID,
    T_CONFIG_LEDS_EFFECT_ANGLEWIPE,
    T_CONFIG_LEDS_EFFECT_CENTERWIPE,
    T_CONFIG_LEDS_EFFECT_CLOCKWISEWIPE,
    T_CONFIG_LEDS_EFFECT_TOPDOWNWIPE,
    T_CONFIG_LEDS_EFFECT_SCANNER,
    T_CONFIG_LEDS_EFFECT_GENTLE_GLOW,
    T_CONFIG_LEDS_EFFECT_CYCLE,
    T_CONFIG_LEDS_COLOR,
    T_CONFIG_LEDS_COLOR_RAINBOW,
    T_CONFIG_LEDS_COLOR_RED,
    T_CONFIG_LEDS_COLOR_ORANGE,
    T_CONFIG_LEDS_COLOR_YELLOW,
    T_CONFIG_LEDS_COLOR_GREEN,
    T_CONFIG_LEDS_COLOR_BLUE,
    T_CONFIG_LEDS_COLOR_PURPLE,
    T_CONFIG_LEDS_COLOR_PINK,
    T_CONFIG_LEDS_COLOR_WHITE,
    T_CONFIG_LEDS_BRIGHTNESS,
    T_CONFIG_LEDS_BRIGHTNESS_10,
    T_CONFIG_LEDS_BRIGHTNESS_20,
    T_CONFIG_LEDS_BRIGHTNESS_30,
    T_CONFIG_LEDS_BRIGHTNESS_40,
    T_CONFIG_LEDS_BRIGHTNESS_50,
    T_CONFIG_LEDS_BRIGHTNESS_100,
    T_CONFIG_BINMODE_SELECT,
    T_HELP_DUMMY_COMMANDS,
    T_HELP_DUMMY_INIT,
    T_HELP_DUMMY_TEST,
    T_HELP_DUMMY_FLAGS,
    T_HELP_DUMMY_B_FLAG,
    T_HELP_DUMMY_I_FLAG,
    T_HELP_DUMMY_FILE_FLAG,
    T_HELP_SLE4442,
    T_HELP_SLE4442_INIT,
    T_HELP_SLE4442_DUMP,
    T_HELP_SLE4442_UNLOCK,
    T_HELP_SLE4442_WRITE,
    T_HELP_SLE4442_ERASE,
    T_HELP_SLE4442_PSC,
    T_HELP_SLE4442_ADDRESS_FLAG,
    T_HELP_SLE4442_VALUE_FLAG,
    T_HELP_SLE4442_CURRENT_PSC_FLAG,
    T_HELP_SLE4442_NEW_PSC_FLAG,
    T_HELP_SLE4442_FILE_FLAG,
    T_HELP_GCMD_W,
    T_HELP_GCMD_W_DISABLE,
    T_HELP_GCMD_W_ENABLE,
    T_HELP_GCMD_W_VOLTS,
    T_HELP_GCMD_W_CURRENT_LIMIT,
    T_HELP_GCMD_P,
    T_HELP_HELP,
    T_HELP_SYS_COMMAND,
    T_HELP_SYS_DISPLAY,
    T_HELP_SYS_MODE,
    T_HELP_SYS_HELP,
    T_HELP_GCMD_SELFTEST,
    T_HELP_GCMD_SELFTEST_CMD,
    T_HELP_GCMD_SELFTEST_H_FLAG,
    T_HELP_AUXIO,
    T_HELP_AUXIO_LOW,
    T_HELP_AUXIO_HIGH,
    T_HELP_AUXIO_INPUT,
    T_HELP_AUXIO_IO,
    T_HELP_DISK_HEX,
    T_HELP_DISK_HEX_FILE,
    T_HELP_DISK_HEX_ADDR,
    T_HELP_DISK_HEX_ASCII,
    T_HELP_DISK_HEX_SIZE,
    T_HELP_DISK_HEX_OFF,
    T_HELP_DISK_HEX_PAGER_OFF,
    T_HELP_DISK_CAT,
    T_HELP_DISK_CAT_FILE,
    T_HELP_DISK_MKDIR,
    T_HELP_DISK_MKDIR_DIR,
    T_HELP_DISK_CD,
    T_HELP_DISK_CD_DIR,
    T_HELP_DISK_RM,
    T_HELP_DISK_RM_FILE,
    T_HELP_DISK_RM_DIR,
    T_HELP_DISK_LS,
    T_HELP_DISK_LS_DIR,
    T_HELP_DISK_FORMAT,
    T_HELP_DISK_FORMAT_CMD,
    T_HELP_DISK_LABEL,
    T_HELP_DISK_LABEL_GET,
    T_HELP_DISK_LABEL_SET,
    T_HELP_VADC,
    T_HELP_VADC_SINGLE,
    T_HELP_VADC_CONTINUOUS,
    T_HELP_VADC_IO,
    T_HELP_I2C_SCAN,
    T_HELP_I2C_SCAN_VERBOSE,
    T_HELP_FLAG,
    T_HELP_I2C_SI7021,
    T_HELP_I2C_MS5611,
    T_HELP_I2C_TSL2561,
    T_HELP_1WIRE_SCAN,
    T_HELP_1WIRE_DS18B20,
    T_HELP_UART_BRIDGE,
    T_HELP_UART_BRIDGE_EXIT,
    T_HELP_UART_BRIDGE_TOOLBAR,
    T_HELP_UART_BRIDGE_SUPPRESS_LOCAL_ECHO,
    T_HELP_UART_NMEA,
    T_HELP_UART_GLITCH_EXIT,
    T_HELP_SECTION_SCRIPT,
    T_HELP_CMD_SCRIPT,
    T_HELP_CMD_BUTTON,
    T_HELP_CMD_MACRO,
    T_HELP_CMD_TUTORIAL,
    T_HELP_CMD_PAUSE_KEY,
    T_HELP_CMD_PAUSE_BUTTON,
    T_HELP_CMD_PAUSE_EXIT,
    T_HELP_BUTTON,
    T_HELP_BUTTON_SHORT,
    T_HELP_BUTTON_LONG,
    T_HELP_BUTTON_FILE,
    T_HELP_BUTTON_HIDE,
    T_HELP_BUTTON_EXIT,
    T_HELP_LOGIC,
    T_HELP_LOGIC_START,
    T_HELP_LOGIC_STOP,
    T_HELP_LOGIC_HIDE,
    T_HELP_LOGIC_SHOW,
    T_HELP_LOGIC_NAV,
    T_HELP_LOGIC_INFO,
    T_HELP_LOGIC_FREQUENCY,
    T_HELP_LOGIC_OVERSAMPLE,
    T_HELP_LOGIC_DEBUG,
    T_HELP_LOGIC_SAMPLES,
    T_HELP_LOGIC_TRIGGER_PIN,
    T_HELP_LOGIC_TRIGGER_LEVEL,
    T_HELP_LOGIC_LOW_CHAR,
    T_HELP_LOGIC_HIGH_CHAR,
    T_HELP_CMD_CLS,
    T_HELP_SECTION_TOOLS,
    T_HELP_CMD_LOGIC,
    T_HELP_CMD_SMPS,
    T_INFRARED_CMD_TEST,
    T_UART_CMD_TEST,
    T_SPI_CMD_SNIFF,
    T_HELP_UART_GLITCH,
    T_HELP_UART_GLITCH_CONFIG,

	T_LAST_ITEM_ALWAYS_AT_THE_END //LEAVE THIS ITEM AT THE END!!! It helps the compiler report errors if there are missing translations
};

const char * GET_T(enum T_translations index);
void translation_init(void);
void translation_set(language_idx_t language);
const char* get_current_language_name(void);
language_idx_t get_current_language_idx(void);
const char* get_language_name(language_idx_t language_idx);

#endif