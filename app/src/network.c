//
// Created by overseven on 21.06.2021.
//


#include <stdint.h>
#include "network.h"

static const char* NETWORK_SORA 		= "XOR";
static const char* NETWORK_SORA_TESTNET = "XOR";
static const char* GENESIS_SORA    		= "7e4e32d0feafd4f9c9414b0be86373f9a1efa904809b683453a9af6856d38ad5";
static const char* GENESIS_SORA_TESTNET = "1a0983c6c9fd3178ae24656bcfca4510a439ab7b90c83e360a1671609752b09a";

static const char* NETWORK_ERROR = "ERROR";
static const char* GENESIS_ERROR = "00";

const char *get_network_name(uint8_t id) {
    switch (id) {
        case Network_SORA:
            return NETWORK_SORA;
        case Network_SORA_TESTNET:
            return NETWORK_SORA_TESTNET;
        default:
            return NETWORK_ERROR;
    }
}

//  Full list of der. paths: https://github.com/satoshilabs/slips/blob/master/slip-0044.md
uint32_t get_network_derivation_path(uint8_t id) {
    switch (id) {
        case Network_SORA:
            return (0x80000000 | 0x269); 	// 617 = m/44/617/0/0/0
        case Network_SORA_TESTNET:
            return (0x80000000 | 0x269); 	// 617 = m/44/617/0/0/0
        default:
            return 0;
    }
}

const char* get_network_genesis_hash(uint8_t id){
    switch (id) {
        case Network_SORA:
            return GENESIS_SORA;
        case Network_SORA_TESTNET:
            return GENESIS_SORA_TESTNET;
        default:
            return GENESIS_ERROR;
    }
}

// https://polkadot.subscan.io/tools/ss58_transform
uint8_t get_network_address_type(uint8_t id){
    switch (id) {
        case Network_SORA:
            return 69;
        case Network_SORA_TESTNET:
        	return 69;
        default:
            return 0;
    }
}
