//
// Created by overseven on 21.06.2021.
//
#include "substrate_types_V22.h"

#ifdef __cplusplus
extern "C" {
#endif

enum  Assets{
    ASSET_XOR = 0,
	ASSET_VAL = 1,
	ASSET_PSWAP = 2
};

typedef enum Assets pd_Assets_t;

char *get_asset_ticker(uint8_t id);

char* get_asset_id(uint8_t id);

char* get_asset_ticker_by_ID(pd_AssetId_V22_t* a);

#ifdef __cplusplus
}
#endif

