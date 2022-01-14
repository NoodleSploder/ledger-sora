
#include <stdint.h>
#include "assets.h"
#include "substrate_types_V19.h"

static const char* ASSET_XOR_TICKER		= "XOR";
static const char* ASSET_XOR_ID			= "0200000000000000000000000000000000000000000000000000000000000000";
static const char* ASSET_VAL_TICKER		= "VAL";
static const char* ASSET_VAL_ID			= "0200040000000000000000000000000000000000000000000000000000000000";
static const char* ASSET_PSWAP_TICKER	= "PSWAP";
static const char* ASSET_PSWAP_ID		= "0200050000000000000000000000000000000000000000000000000000000000";
static const char* ASSET_XSTUSD_TICKER	= "XSTUSD";
static const char* ASSET_XSTUSD_ID		= "0200050000000000000000000000000000000000000000000000000000000000";
static const char* ASSET_NOT_FOUND		= " ";



char *get_asset_ticker(uint8_t id) {
    switch (id) {
        case ASSET_XOR:
            return ASSET_XOR_TICKER;
        case ASSET_VAL:
            return ASSET_VAL_TICKER;
        case ASSET_PSWAP:
            return ASSET_PSWAP_TICKER;
        default:
            return ASSET_NOT_FOUND;
    }
}

char* get_asset_id(uint8_t id){
   switch (id) {
		case ASSET_XOR:
			return ASSET_XOR_ID;
		case ASSET_VAL:
			return ASSET_VAL_ID;
		case ASSET_PSWAP:
			return ASSET_PSWAP_ID;
		default:
			return ASSET_NOT_FOUND;
	}
}

char* get_asset_ticker_by_ID(pd_AssetId_V19_t* a){

    char hashstr[65];
    uint8_t pc;

    if (&a->_ptr != NULL) {
    	_toStringAssetId_V19(&a, hashstr, 65, 0, &pc);

    	return hashstr;

        if (strcmp(hashstr, ASSET_XOR_ID) == 0) {
             return "XOR";
        }

        if (strcmp(hashstr, ASSET_VAL_ID) == 0) {
        	return "VAL";
        }
    	return "NUL";
    }

    // Default:
    return "NUL";

}



