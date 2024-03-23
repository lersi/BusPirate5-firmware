void hwspi_init(void);
void hwspi_select(void);
void hwspi_deselect(void);
void hwspi_write(uint32_t data);
void hwspi_write_n(uint8_t *data, uint8_t count);
void hwspi_write_32(const uint32_t data, uint8_t count);
uint32_t hwspi_read(void);
void hwspi_read_n(uint8_t *data, uint8_t count);