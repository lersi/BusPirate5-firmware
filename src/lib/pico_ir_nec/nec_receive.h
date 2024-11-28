/**
 * Copyright (c) 2021 mjcross
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#include "pico/stdlib.h"
#include "hardware/pio.h"

// enum to define return codes from nec_get_frame()
typedef enum {
    NEC_RX_NO_FRAME = 0,
    NEC_RX_FRAME_OK,
    NEC_RX_FRAME_ERROR
} nec_rx_status_t;

// public API
int nec_rx_init(uint pin);
void nec_rx_deinit(void);
bool nec_decode_frame(uint32_t *frame, uint8_t *p_address, uint8_t *p_data);
nec_rx_status_t nec_get_frame(uint32_t *rx_frame, uint8_t *rx_address, uint8_t *rx_data) ;
