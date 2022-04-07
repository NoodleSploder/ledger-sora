/*******************************************************************************
*  (c) 2019 Zondax GmbH
*
*  Licensed under the Apache License, Version 2.0 (the "License");
*  you may not use this file except in compliance with the License.
*  You may obtain a copy of the License at
*
*      http://www.apache.org/licenses/LICENSE-2.0
*
*  Unless required by applicable law or agreed to in writing, software
*  distributed under the License is distributed on an "AS IS" BASIS,
*  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
*  See the License for the specific language governing permissions and
*  limitations under the License.
********************************************************************************/
#include "bignum.h"
#include "coin.h"
#include "parser_impl.h"
#include "substrate_strings.h"
#include "uint256.h"

#include <stddef.h>
#include <stdint.h>
#include <zxmacros.h>
#include "substrate_dispatch_V30.h"


parser_error_t _readDexId_V30(parser_context_t* c, pd_DexId_V30_t* v){
	return _readUInt32(c, &v->value);
}

parser_error_t _readBalance_V30(parser_context_t* c, pd_Balance_V30_t* v) {
	GEN_DEF_READARRAY(16)
}


parser_error_t _readOptionSwapAmount_V30(parser_context_t* c, pd_SwapAmount_V30_t* v){
	CHECK_ERROR(_readUInt8(c, &v->some))
	CHECK_ERROR(_readBalance_V30(c, &v->contained_1))
	CHECK_ERROR(_readBalance_V30(c, &v->contained_2))
	return parser_ok;
}

parser_error_t _readLiquiditySourceType_V30(parser_context_t* c, pd_LiquiditySourceType_V30_t* v){
	return _readUInt8(c, &v->value);
	//GEN_DEC_READFIX_UNSIGNED(8)
}

parser_error_t _readVecLiquiditySourceType_V30(parser_context_t* c, pd_VecLiquiditySourceType_V30_t* v){
	GEN_DEF_READVECTOR(LiquiditySourceType_V30);
	return parser_ok;
}

parser_error_t _readFilterMode_V30(parser_context_t* c, pd_FilterMode_V30_t* v){
	//GEN_DEC_READFIX_UNSIGNED(8)
	return _readUInt8(c, &v->value);
}

parser_error_t _readEthereumAddress_V30(parser_context_t* c, pd_EthereumAddress_V30_t* v){
	GEN_DEF_READARRAY(20)
	return parser_ok;
}

parser_error_t _readIncomingTransactionRequestKind_V30(parser_context_t* c, pd_IncomingTransactionRequestKind_t* v){

	CHECK_ERROR(_readUInt8(c, &v->type))

	uint8_t tmp = _readUInt8(c, &v->type);

    switch ( tmp ) {
		case Transfer: {
			//
			break;
		}
		case AddAsset: {
			//CHECK_ERROR(_readSwapAmountWithDesiredOutput_V30(c, &v->WithDesiredOutput))
			break;
		}
		case AddPeer: {
			//CHECK_ERROR(_readSwapAmountWithDesiredOutput_V30(c, &v->))
			break;
		}
		case RemovePeer: {
			//CHECK_ERROR(_readSwapAmountWithDesiredOutput_V30(c, &v->WithDesiredOutput))
			break;
		}
		case PrepareForMigration: {
			//CHECK_ERROR(_readSwapAmountWithDesiredOutput_V30(c, &v->))
			break;
		}
		case Migrate: {
			//CHECK_ERROR(_readSwapAmountWithDesiredOutput_V30(c, &v->WithDesiredOutput))
			break;
		}
		case AddPeerCompat: {
			//CHECK_ERROR(_readSwapAmountWithDesiredOutput_V30(c, &v->))
			break;
			}
		case RemovePeerCompat: {
			//CHECK_ERROR(_readSwapAmountWithDesiredOutput_V30(c, &v->WithDesiredOutput))
			break;
		}
		case TransferXOR: {
			//CHECK_ERROR(_readSwapAmountWithDesiredOutput_V30(c, &v->WithDesiredOutput))
			break;
		}
		default:{
			break;
		}
    }
    return parser_ok;
}

parser_error_t _readIncomingMetaRequestKind_V30(parser_context_t* c, pd_IncomingMetaRequestKind_V30_t* v){
	CHECK_ERROR(_readUInt8(c, &v->type))

	uint8_t tmp = _readUInt8(c, &v->type);

    switch ( tmp ) {
		case CancelOutgoingRequest: {
			//CHECK_ERROR(_readSwapAmountWithDesiredOutput_V30(c, &v->))
			break;
		}
		case MarkAsDone: {
			//CHECK_ERROR(_readSwapAmountWithDesiredOutput_V30(c, &v->WithDesiredOutput))
			break;
		}
		default:{
			break;
		}
    }
    return parser_ok;
}

parser_error_t _readIncomingRequestKind_V30(parser_context_t* c, pd_IncomingRequestKind_V30_t* v){
	uint8_t tmp = _readUInt8(c, &v->type);

    switch ( tmp ) {
		case Transfer: {
			CHECK_ERROR(_readIncomingTransactionRequestKind_V30(c, &v->Transaction))
			break;
		}
		case Meta: {
			CHECK_ERROR(_readIncomingMetaRequestKind_V30(c, &v->Meta))
			break;
		}
		default:{
			break;
		}
    }
    return parser_ok;
}
parser_error_t _readBridgeNetworkId_V30(parser_context_t* c, pd_BridgeNetworkId_V30_t* v){
	return _readUInt32(c, &v->value);
}

parser_error_t _readAssetId_V30(parser_context_t* c, pd_AssetId_V30_t* v){
	GEN_DEF_READARRAY(32)
	return parser_ok;
}

parser_error_t _readAssetIdOf_V30(parser_context_t* c, pd_AssetIdOf_V30_t* v){
	return _readAssetId_V30(c, &v->value);
}

parser_error_t _readAccountId_V30(parser_context_t* c, pd_AccountId_V30_t* v) {
    GEN_DEF_READARRAY(32)
	return parser_ok;
}

parser_error_t _readAmount_V30(parser_context_t* c, pd_Amount_V30_t* v){
	GEN_DEF_READARRAY(16)
	return parser_ok;
}


parser_error_t _readAccountIndex_V30(parser_context_t* c, pd_AccountIndex_V30_t* v){
    return _readUInt32(c, &v->value);
}

parser_error_t _readAddress_V30(parser_context_t* c, pd_Address_V30_t* v){
    CHECK_INPUT();
    // Based on
    // https://github.com/paritytech/substrate/blob/fc3adc87dc806237eb7371c1d21055eea1702be0/srml/indices/src/address.rs#L66

    uint8_t tmp;
    CHECK_ERROR(_readUInt8(c, &tmp));

    switch (tmp) {
    case 0xFF: {
        v->type = eAddressId;
        v->idPtr = c->buffer + c->offset;
        CTX_CHECK_AND_ADVANCE(c, 32);
        break;
    }
    case 0xFE: {
        compactInt_t ci;
        CHECK_ERROR(_readCompactInt(c, &ci));

        v->type = eAddressIndex;
        CHECK_ERROR(_getValue(&ci, &v->idx));

        if (v->idx <= 0xffffffffu) {
            return parser_unexpected_value;
        }
        break;
    }
    case 0xFD: {
        uint32_t tmpval;
        CHECK_ERROR(_readUInt32(c, &tmpval));
        v->type = eAddressIndex;
        v->idx = tmpval;
        if (v->idx <= 0xFFFF) {
            return parser_unexpected_value;
        }
        break;
    }
    case 0xFC: {
        uint16_t tmpval;
        CHECK_ERROR(_readUInt16(c, &tmpval));
        v->type = eAddressIndex;
        v->idx = tmpval;
        if (v->idx <= 0xEF) {
            return parser_unexpected_value;
        }
        break;
    }
    default:
        if (tmp <= 0xEF) {
            v->type = eAddressIndex;
            v->idx = tmp;
            return parser_ok;
        }

        return parser_unexpected_value;
    }

    return parser_ok;
}

parser_error_t _readAssetInfo_V30(parser_context_t* c, pd_AssetInfo_V30_t* v)
{
    CHECK_ERROR(_readBytes(c, &v->metadata))
    return parser_ok;
}

parser_error_t _readChainId_V30(parser_context_t* c, pd_ChainId_V30_t* v)
{
    CHECK_INPUT()
    CHECK_ERROR(_readUInt8(c, &v->value))
    return parser_ok;
}

parser_error_t _readEraIndex_V30(parser_context_t* c, pd_EraIndex_V30_t* v)
{
    return _readUInt32(c, &v->value);
}

parser_error_t _readH256_array_3_V30(parser_context_t* c, pd_H256_array_3_V30_t* v) {
    GEN_DEF_READARRAY(96)
	return parser_ok;
}


parser_error_t _readKeyValue_V30(parser_context_t* c, pd_KeyValue_V30_t* v) {
    GEN_DEF_READARRAY(32)
	return parser_ok;
}

parser_error_t _readKey_V30(parser_context_t* c, pd_Key_V30_t* v) {
    GEN_DEF_READARRAY(32)
	return parser_ok;
}

parser_error_t _readKeys_V30(parser_context_t* c, pd_Keys_V30_t* v)
{
    GEN_DEF_READARRAY(4 * 32)
    return parser_ok;
}

parser_error_t _readLookupSource_V30(parser_context_t* c, pd_LookupSource_V30_t* v) {
    GEN_DEF_READARRAY(32)
	return parser_ok;
}

parser_error_t _readCompactAccountIndex_V30(parser_context_t* c, pd_CompactAccountIndex_V30_t* v)
{
    return _readCompactInt(c, &v->value);
}

parser_error_t _readCompactPerBill_V30(parser_context_t* c, pd_CompactPerBill_V30_t* v)
{
    return _readCompactInt(c, &v->value);
}

parser_error_t _readSignature_V30(parser_context_t* c, pd_Signature_V30_t* v) {
    GEN_DEF_READARRAY(64)
	return parser_ok;
}


parser_error_t _readTokenId_V30(parser_context_t* c, pd_TokenId_V30_t* v)
{
    CHECK_INPUT()
    CHECK_ERROR(_readu256(c, &v->value))
    return parser_ok;
}

parser_error_t _readTupleAccountIdData_V30(parser_context_t* c, pd_TupleAccountIdData_V30_t* v)
{
    CHECK_ERROR(_readAccountId_V30(c, &v->accountId))
    CHECK_ERROR(_readData(c, &v->data))
    return parser_ok;
}

parser_error_t _readu8_array_32_V30(parser_context_t* c, pd_u8_array_32_V30_t* v) {
    GEN_DEF_READARRAY(32)
}

parser_error_t _readVecAccountId_V30(parser_context_t* c, pd_VecAccountId_V30_t* v) {
    GEN_DEF_READVECTOR(AccountId_V30)
}

parser_error_t _readVecExtendedBalance_V30(parser_context_t* c, pd_VecExtendedBalance_V30_t* v) {
    GEN_DEF_READVECTOR(ExtendedBalance_V30)
}

parser_error_t _readVecKeyValue_V30(parser_context_t* c, pd_VecKeyValue_V30_t* v) {
    GEN_DEF_READVECTOR(KeyValue_V30)
}

parser_error_t _readVecKey_V30(parser_context_t* c, pd_VecKey_V30_t* v) {
    GEN_DEF_READVECTOR(Key_V30)
}

parser_error_t _readVecLookupSource_V30(parser_context_t* c, pd_VecLookupSource_V30_t* v) {
    GEN_DEF_READVECTOR(LookupSource_V30)
}

parser_error_t _readVecProof_V30(parser_context_t* c, pd_VecProof_V30_t* v) {
    GEN_DEF_READVECTOR(Proof_V30)
}

parser_error_t _readVecTupleAccountIdData_V30(parser_context_t* c, pd_VecTupleAccountIdData_V30_t* v) {
    GEN_DEF_READVECTOR(TupleAccountIdData_V30)
}

parser_error_t _readOptionAccountId_V30(parser_context_t* c, pd_OptionAccountId_V30_t* v)
{
    CHECK_ERROR(_readUInt8(c, &v->some))
    if (v->some > 0) {
        CHECK_ERROR(_readAccountId_V30(c, &v->contained))
    }
    return parser_ok;
}

parser_error_t _readOptionChangesTrieConfiguration_V30(parser_context_t* c, pd_OptionChangesTrieConfiguration_V30_t* v)
{
    CHECK_ERROR(_readUInt8(c, &v->some))
    if (v->some > 0) {
        CHECK_ERROR(_readChangesTrieConfiguration_V30(c, &v->contained))
    }
    return parser_ok;
}

parser_error_t _readOptionPeriod_V30(parser_context_t* c, pd_OptionPeriod_V30_t* v)
{
    CHECK_ERROR(_readUInt8(c, &v->some))
    if (v->some > 0) {
        CHECK_ERROR(_readPeriod_V30(c, &v->contained))
    }
    return parser_ok;
}

parser_error_t _readOptionProxyType_V30(parser_context_t* c, pd_OptionProxyType_V30_t* v)
{
    CHECK_ERROR(_readUInt8(c, &v->some))
    if (v->some > 0) {
        CHECK_ERROR(_readProxyType_V30(c, &v->contained))
    }
    return parser_ok;
}

parser_error_t _readOptionTimepoint_V30(parser_context_t* c, pd_OptionTimepoint_V30_t* v)
{
    CHECK_ERROR(_readUInt8(c, &v->some))
    if (v->some > 0) {
        CHECK_ERROR(_readTimepoint_V30(c, &v->contained))
    }
    return parser_ok;
}

parser_error_t _readRewardDestination_V30(parser_context_t* c, pd_RewardDestination_V30_t* v)
{
    CHECK_INPUT();

    CHECK_ERROR(_readUInt8(c, &v->value))
    if (v->value > 2) {
        return parser_value_out_of_range;
    }

    return parser_ok;
}

parser_error_t _readValidatorPrefs_V30(parser_context_t* c, pd_ValidatorPrefs_V30_t* v)
{
    CHECK_INPUT();
    CHECK_ERROR(_readCompactPerBill_V30(c, &v->commission));
    //CHECK_ERROR(_readbool(c, &v->blocked))
    return parser_ok;
}





///////////////////////////////////
///////////////////////////////////
///////////////////////////////////

parser_error_t _toStringDexId_V30(
    const pd_DexId_V30_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount)
{
    return _toStringu32(&v->value, outValue, outValueLen, pageIdx, pageCount);
}



parser_error_t _toStringAccountId_V30(
    const pd_AccountId_V30_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount)
{
    return _toStringPubkeyAsAddress(v->_ptr, outValue, outValueLen, pageIdx, pageCount);
}

parser_error_t _toStringAccountIndex_V30(
    const pd_AccountIndex_V30_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount)
{
    return _toStringu32(&v->value, outValue, outValueLen, pageIdx, pageCount);
}



parser_error_t _toStringAddress_V30(
    const pd_Address_V30_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount)
{
    MEMZERO(outValue, outValueLen);
    if (v == NULL) {
        return parser_ok;
    }

    *pageCount = 1;
    switch (v->type) {
		case eAddressIndex: {
			return parser_not_supported;
		}
		case eAddressId: {
			return _toStringPubkeyAsAddress(v->idPtr,
				outValue, outValueLen,
				pageIdx, pageCount);
		}
    }

    return parser_ok;
}

parser_error_t _toStringAssetInfo_V30(
    const pd_AssetInfo_V30_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount)
{
    return _toStringBytes(&v->metadata, outValue, outValueLen, pageIdx, pageCount);
}

parser_error_t _toStringChainId_V30(
    const pd_ChainId_V30_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount)
{
    return _toStringu16((const pd_u16_t*)&v->value, outValue, outValueLen, pageIdx, pageCount);
}

parser_error_t _toStringEraIndex_V30(
    const pd_EraIndex_V30_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount)
{
    return _toStringu32(&v->value, outValue, outValueLen, pageIdx, pageCount);
}

parser_error_t _toStringExtendedBalance_V30(
    const pd_ExtendedBalance_V30_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount)
{
    return _toStringu128(&v->value, outValue, outValueLen, pageIdx, pageCount);
}

parser_error_t _toStringH256_array_3_V30(
    const pd_H256_array_3_V30_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount)
{
    GEN_DEF_TOSTRING_ARRAY(96);
    return parser_ok;
}


parser_error_t _toStringKeyValue_V30(
    const pd_KeyValue_V30_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount)
{
    CLEAN_AND_CHECK()

    return parser_print_not_supported;
}

parser_error_t _toStringKey_V30(
    const pd_Key_V30_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount)
{
    CLEAN_AND_CHECK()

    return parser_print_not_supported;
}

parser_error_t _toStringKeys_V30(
    const pd_Keys_V30_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount) {
    GEN_DEF_TOSTRING_ARRAY(4 * 32)
		return parser_ok;
}

parser_error_t _toStringLookupSource_V30(
    const pd_LookupSource_V30_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount)
{
    return _toStringPubkeyAsAddress(v->_ptr, outValue, outValueLen, pageIdx, pageCount);
}


parser_error_t _toStringProof_V30(
    const pd_Proof_V30_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount)
{
    CLEAN_AND_CHECK()

    // First measure number of pages
    uint8_t pages[2];
    CHECK_ERROR(_toStringHash(&v->leaf_hash, outValue, outValueLen, 0, &pages[0]))
    CHECK_ERROR(_toStringVecHash(&v->sorted_hashes, outValue, outValueLen, 0, &pages[1]))

    *pageCount = 0;
    for (uint8_t i = 0; i < (uint8_t)sizeof(pages); i++) {
        *pageCount += pages[i];
    }

    if (pageIdx > *pageCount) {
        return parser_display_idx_out_of_range;
    }

    if (pageIdx < pages[0]) {
        CHECK_ERROR(_toStringHash(&v->leaf_hash, outValue, outValueLen, pageIdx, &pages[0]))
        return parser_ok;
    }

    pageIdx -= pages[0];

    /////////
    /////////

    if (pageIdx < pages[1]) {
        CHECK_ERROR(_toStringVecHash(&v->sorted_hashes, outValue, outValueLen, pageIdx, &pages[1]))
        return parser_ok;
    }

    return parser_display_idx_out_of_range;
}


parser_error_t _toStringSignature_V30(
    const pd_Signature_V30_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount) {
    GEN_DEF_TOSTRING_ARRAY(64);
		return parser_ok;
}

parser_error_t _toStringAmount_V30(
    const pd_Amount_V30_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount)
{
	GEN_DEF_TOSTRING_ARRAY(16);
	return parser_ok;
}

parser_error_t _toStringBalance_SIMPLE_V30(
    const pd_Balance_V30_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount)
{
	GEN_DEF_TOSTRING_ARRAY(16);
	return parser_ok;
}



parser_error_t _toStringBalance_V30(
    const pd_Balance_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount)
{
    CLEAN_AND_CHECK()

    char bufferUI[200];
    MEMSET(outValue, 0, outValueLen);
    MEMSET(bufferUI, 0, sizeof(bufferUI));
    *pageCount = 1;

    uint8_t bcdOut[100];
    const uint16_t bcdOutLen = sizeof(bcdOut);

    bignumLittleEndian_to_bcd(bcdOut, bcdOutLen, v->_ptr, 16);
    if (!bignumLittleEndian_bcdprint(bufferUI, sizeof(bufferUI), bcdOut, bcdOutLen)) {
        return parser_unexpected_value;
    }

    // Format number
    if (intstr_to_fpstr_inplace(bufferUI, sizeof(bufferUI), COIN_AMOUNT_DECIMAL_PLACES) == 0) {
        return parser_unexpected_value;
    }

    number_inplace_trimming(bufferUI, 1);
    size_t size = strlen(bufferUI) + 2;
    char _tmpBuffer[200];
    MEMZERO(_tmpBuffer, sizeof(_tmpBuffer));
    strcat(_tmpBuffer, " ");
    strcat(_tmpBuffer, bufferUI);
    // print length: strlen(value) + strlen(COIN_TICKER) + strlen(" ") + nullChar
    MEMZERO(bufferUI, sizeof(bufferUI));
    snprintf(bufferUI, size, "%s", _tmpBuffer);

    pageString(outValue, outValueLen, bufferUI, pageIdx, pageCount);
    return parser_ok;
}


parser_error_t _toStringBridgeNetworkId_V30(
    const pd_BridgeNetworkId_V30_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount)
{
	return _toStringu32(&v->value, outValue, outValueLen, pageIdx, pageCount);
}


parser_error_t _toStringEthereumAddress_V30(
    const pd_EthereumAddress_V30_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount)
{
	GEN_DEF_TOSTRING_ARRAY(32);
	return parser_ok;
}

parser_error_t _toStringAssetId_V30(
    const pd_AssetId_V30_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount)
{
	GEN_DEF_TOSTRING_ARRAY(32);
	return parser_ok;
}

parser_error_t _toStringTokenId_V30(
    const pd_TokenId_V30_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount)
{
    return _toStringu256(&v->value, outValue, outValueLen, pageIdx, pageCount);
}

parser_error_t _toStringTupleAccountIdData_V30(
    const pd_TupleAccountIdData_V30_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount)
{
    // Get all pages first
    uint8_t pages[2];
    CHECK_ERROR(_toStringAccountId_V30(&v->accountId, outValue, outValueLen, 0, &pages[0]))
    CHECK_ERROR(_toStringData(&v->data, outValue, outValueLen, 0, &pages[1]))

    *pageCount = pages[0] + pages[1];
    if (pageIdx > *pageCount) {
        return parser_display_idx_out_of_range;
    }

    if (pageIdx < pages[0]) {
        CHECK_ERROR(_toStringAccountId_V30(&v->accountId, outValue, outValueLen, pageIdx, &pages[0]))
        return parser_ok;
    }
    pageIdx -= pages[0];

    if (pageIdx < pages[1]) {
        CHECK_ERROR(_toStringData(&v->data, outValue, outValueLen, pageIdx, &pages[1]))
        return parser_ok;
    }

    return parser_display_idx_out_of_range;
}

parser_error_t _toStringu8_array_32_V30(
    const pd_u8_array_32_V30_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount) {
    GEN_DEF_TOSTRING_ARRAY(32)
	return parser_ok;
}

parser_error_t _toStringVecAccountId_V30(
    const pd_VecAccountId_V30_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount)
{
    GEN_DEF_TOSTRING_VECTOR(AccountId_V30);
}

parser_error_t _toStringVecExtendedBalance_V30(
    const pd_VecExtendedBalance_V30_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount)
{
    GEN_DEF_TOSTRING_VECTOR(ExtendedBalance_V30);
}

parser_error_t _toStringVecKeyValue_V30(
    const pd_VecKeyValue_V30_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount)
{
    GEN_DEF_TOSTRING_VECTOR(KeyValue_V30);
}

parser_error_t _toStringVecKey_V30(
    const pd_VecKey_V30_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount)
{
    GEN_DEF_TOSTRING_VECTOR(Key_V30);
}

parser_error_t _toStringVecLookupSource_V30(
    const pd_VecLookupSource_V30_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount)
{
    GEN_DEF_TOSTRING_VECTOR(LookupSource_V30);
}

parser_error_t _toStringVecProof_V30(
    const pd_VecProof_V30_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount)
{
    GEN_DEF_TOSTRING_VECTOR(Proof_V30);
}


parser_error_t _toStringVecTupleAccountIdData_V30(
    const pd_VecTupleAccountIdData_V30_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount)
{
    GEN_DEF_TOSTRING_VECTOR(TupleAccountIdData_V30);
}

parser_error_t _toStringOptionAccountId_V30(
    const pd_OptionAccountId_V30_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount)
{
    CLEAN_AND_CHECK()

    *pageCount = 1;
    if (v->some > 0) {
        CHECK_ERROR(_toStringAccountId_V30(
            &v->contained,
            outValue, outValueLen,
            pageIdx, pageCount));
    } else {
        snprintf(outValue, outValueLen, "None");
    }
    return parser_ok;
}

parser_error_t _toStringOptionChangesTrieConfiguration_V30(
    const pd_OptionChangesTrieConfiguration_V30_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount)
{
    CLEAN_AND_CHECK()

    *pageCount = 1;
    if (v->some > 0) {
        CHECK_ERROR(_toStringChangesTrieConfiguration_V30(
            &v->contained,
            outValue, outValueLen,
            pageIdx, pageCount));
    } else {
        snprintf(outValue, outValueLen, "None");
    }
    return parser_ok;
}

parser_error_t _toStringOptionPeriod_V30(
    const pd_OptionPeriod_V30_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount)
{
    CLEAN_AND_CHECK()

    *pageCount = 1;
    if (v->some > 0) {
        CHECK_ERROR(_toStringPeriod_V30(
            &v->contained,
            outValue, outValueLen,
            pageIdx, pageCount));
    } else {
        snprintf(outValue, outValueLen, "None");
    }
    return parser_ok;
}

parser_error_t _toStringOptionProxyType_V30(
    const pd_OptionProxyType_V30_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount)
{
    CLEAN_AND_CHECK()

    *pageCount = 1;
    if (v->some > 0) {
        CHECK_ERROR(_toStringProxyType_V30(
            &v->contained,
            outValue, outValueLen,
            pageIdx, pageCount));
    } else {
        snprintf(outValue, outValueLen, "None");
    }
    return parser_ok;
}

parser_error_t _toStringOptionTimepoint_V30(
    const pd_OptionTimepoint_V30_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount)
{
    CLEAN_AND_CHECK()

    *pageCount = 1;
    if (v->some > 0) {
        CHECK_ERROR(_toStringTimepoint_V30(
            &v->contained,
            outValue, outValueLen,
            pageIdx, pageCount));
    } else {
        snprintf(outValue, outValueLen, "None");
    }
    return parser_ok;
}


parser_error_t _toStringRewardDestination_V30(
    const pd_RewardDestination_V30_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount)
{
    CLEAN_AND_CHECK()

    *pageCount = 1;
    switch (v->value) {
    case 0:
        snprintf(outValue, outValueLen, "Staked");
        break;
    case 1:
        snprintf(outValue, outValueLen, "Stash");
        break;
    case 2:
        snprintf(outValue, outValueLen, "Controller");
        break;
    default:
        return parser_print_not_supported;
    }

    return parser_ok;
}



parser_error_t _toStringValidatorPrefs_V30(
    const pd_ValidatorPrefs_V30_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount)
{
    CLEAN_AND_CHECK()

    uint8_t pages[2];
    CHECK_ERROR(_toStringCompactPerBill_V30(&v->commission, outValue, outValueLen, 0, &pages[0]))
    //CHECK_ERROR(_toStringbool(&v->blocked, outValue, outValueLen, 0, &pages[1]))

    *pageCount = 0;
    for (uint8_t i = 0; i < (uint8_t)sizeof(pages); i++) {
        *pageCount += pages[i];
    }

    if (pageIdx > *pageCount) {
        return parser_display_idx_out_of_range;
    }

    if (pageIdx < pages[0]) {
        CHECK_ERROR(_toStringCompactPerBill_V30(&v->commission, outValue, outValueLen, pageIdx, &pages[0]))
        return parser_ok;
    }
    pageIdx -= pages[0];

    if (pageIdx < pages[1]) {
        //CHECK_ERROR(_toStringbool(&v->blocked, outValue, outValueLen, pageIdx, &pages[1]))
        return parser_ok;
    }

    return parser_display_idx_out_of_range;
}

parser_error_t _toStringCompactPerBill_V30(
    const pd_CompactPerBill_V30_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount)
{
    // 9 but shift 2 to show as percentage
    return _toStringCompactInt(&v->value, 7, '%', "", outValue, outValueLen, pageIdx, pageCount);
}

parser_error_t _toStringOptionSwapAmount_Out_V30(
	const pd_SwapAmount_V30_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount)
{
	CLEAN_AND_CHECK()

	*pageCount = 1;

	CHECK_ERROR(_toStringBalance_V30(
		&v->contained_1,
		outValue, outValueLen,
		pageIdx, pageCount));

	return parser_ok;
}


parser_error_t _toStringOptionSwapAmount_In_V30(
	const pd_SwapAmount_V30_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount)
{
	CLEAN_AND_CHECK()

	*pageCount = 1;

	CHECK_ERROR(_toStringBalance_V30(
		&v->contained_2,
		outValue, outValueLen,
		pageIdx, pageCount));
	return parser_ok;
}



parser_error_t _toStringLiquiditySourceType_V30(
    const pd_LiquiditySourceType_V30_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount)
{
	return _toStringu8((const pd_u16_t*)&v->value, outValue, outValueLen, pageIdx, pageCount);
}


parser_error_t _toStringVecLiquiditySourceType_V30(
    const pd_VecLiquiditySourceType_V30_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount)
{
    GEN_DEF_TOSTRING_VECTOR(LiquiditySourceType_V30);
}
