//
// Created by overseven on 21.06.2021.
//

#ifndef LEDGER_KUSAMA_NETWORK_H
#define LEDGER_KUSAMA_NETWORK_H

#ifdef __cplusplus
extern "C" {
#endif

typedef enum {
    Network_SORA = 0,
    Network_SORA_TESTNET = 1,
    Network_MAX
} NetworkID;

const char *get_network_name(uint8_t id);

uint32_t get_network_derivation_path(uint8_t id);

const char* get_network_genesis_hash(uint8_t id);

uint8_t get_network_address_type(uint8_t id);

#ifdef __cplusplus
}
#endif

#endif //LEDGER_KUSAMA_NETWORK_H
