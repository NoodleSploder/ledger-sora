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
#include "substrate_dispatch_V19.h"
#include "substrate_strings.h"
#include "uint256.h"

#include <stddef.h>
#include <stdint.h>
#include <zxmacros.h>


parser_error_t _readDexId_V19(parser_context_t* c, pd_DexId_V19_t* v){
	return _readUInt32(c, &v->value);
}

parser_error_t _readBalance_V19(parser_context_t* c, pd_Balance_V19_t* v) {
	GEN_DEF_READARRAY(16)
}

parser_error_t _readSwapAmountWithDesiredInput_V19(parser_context_t* c, pd_SwapWithDesiredInput_V19_t* v){
	CHECK_ERROR(_readBalance_V19(c, &v->desired_amount_in))
	CHECK_ERROR(_readBalance_V19(c, &v->min_amount_out))
	return parser_ok;
}

parser_error_t _readSwapAmountWithDesiredOutput_V19(parser_context_t* c, pd_SwapWithDesiredOutput_V19_t* v){
	CHECK_ERROR(_readBalance_V19(c, &v->desired_amount_out))
	CHECK_ERROR(_readBalance_V19(c, &v->max_amount_in))
	return parser_ok;
}

parser_error_t _readSwapAmount_V19(parser_context_t* c, pd_SwapAmount_V19_t* v){
	uint8_t tmp = _readUInt8(c, &v->type);

    switch ( tmp ) {
		case WithDesiredInput: {
			// THERE IS A BUG IN the Extension, encoded doesnt match display
			CHECK_ERROR(_readSwapAmountWithDesiredInput_V19(c, &v->WithDesiredInput))
			//CHECK_ERROR(_readSwapAmountWithDesiredOutput_V19(c, &v->WithDesiredOutput))
			break;
		}
		case WithDesiredOutput: {
			CHECK_ERROR(_readSwapAmountWithDesiredOutput_V19(c, &v->WithDesiredOutput))
			break;
		}
		default:{
			break;
		}
    }

    return parser_ok;
}

parser_error_t _readLiquiditySourceType_V19(parser_context_t* c, pd_LiquiditySourceType_V19_t* v){
	return _readUInt8(c, &v->value);
	//GEN_DEC_READFIX_UNSIGNED(8)
}

parser_error_t _readVecLiquiditySourceType_V19(parser_context_t* c, pd_VecLiquiditySourceType_V19_t* v){
	//GEN_DEF_READVECTOR(LiquiditySourceType_V19);
	return parser_ok;
}

parser_error_t _readFilterMode_V19(parser_context_t* c, pd_FilterMode_V19_t* v){
	//GEN_DEC_READFIX_UNSIGNED(8)
	return _readUInt8(c, &v->value);
}

parser_error_t _readEthereumAddress_V19(parser_context_t* c, pd_EthereumAddress_V19_t* v){
	GEN_DEF_READARRAY(20)
	return parser_ok;
}

parser_error_t _readIncomingTransactionRequestKind_V19(parser_context_t* c, pd_IncomingTransactionRequestKind_V19_t* v){

	CHECK_ERROR(_readUInt8(c, &v->type))

	uint8_t tmp = _readUInt8(c, &v->type);

    switch ( tmp ) {
		case Transfer: {
			//
			break;
		}
		case AddAsset: {
			//CHECK_ERROR(_readSwapAmountWithDesiredOutput_V19(c, &v->WithDesiredOutput))
			break;
		}
		case AddPeer: {
			//CHECK_ERROR(_readSwapAmountWithDesiredOutput_V19(c, &v->))
			break;
		}
		case RemovePeer: {
			//CHECK_ERROR(_readSwapAmountWithDesiredOutput_V19(c, &v->WithDesiredOutput))
			break;
		}
		case PrepareForMigration: {
			//CHECK_ERROR(_readSwapAmountWithDesiredOutput_V19(c, &v->))
			break;
		}
		case Migrate: {
			//CHECK_ERROR(_readSwapAmountWithDesiredOutput_V19(c, &v->WithDesiredOutput))
			break;
		}
		case AddPeerCompat: {
			//CHECK_ERROR(_readSwapAmountWithDesiredOutput_V19(c, &v->))
			break;
			}
		case RemovePeerCompat: {
			//CHECK_ERROR(_readSwapAmountWithDesiredOutput_V19(c, &v->WithDesiredOutput))
			break;
		}
		case TransferXOR: {
			//CHECK_ERROR(_readSwapAmountWithDesiredOutput_V19(c, &v->WithDesiredOutput))
			break;
		}
		default:{
			break;
		}
    }
    return parser_ok;
}

parser_error_t _readpd_IncomingMetaRequestKind_V19_t_V19(parser_context_t* c, pd_IncomingMetaRequestKind_V19_t* v){
	CHECK_ERROR(_readUInt8(c, &v->type))

	uint8_t tmp = _readUInt8(c, &v->type);

    switch ( tmp ) {
		case CancelOutgoingRequest: {
			//CHECK_ERROR(_readSwapAmountWithDesiredOutput_V19(c, &v->))
			break;
		}
		case MarkAsDone: {
			//CHECK_ERROR(_readSwapAmountWithDesiredOutput_V19(c, &v->WithDesiredOutput))
			break;
		}
		default:{
			break;
		}
    }
    return parser_ok;
}

parser_error_t _readIncomingRequestKind_V19(parser_context_t* c, pd_IncomingRequestKind_V19_t* v){
	uint8_t tmp = _readUInt8(c, &v->type);

    switch ( tmp ) {
		case Transfer: {
			CHECK_ERROR(_readIncomingTransactionRequestKind_V19(c, &v->Transaction))
			break;
		}
		case Meta: {
			CHECK_ERROR(_readpd_IncomingMetaRequestKind_V19_t_V19(c, &v->Meta))
			break;
		}
		default:{
			break;
		}
    }
    return parser_ok;
}
parser_error_t _readBridgeNetworkId_V19(parser_context_t* c, pd_BridgeNetworkId_V19_t* v){
	return _readUInt32(c, &v->value);
}

parser_error_t _readAssetId_V19(parser_context_t* c, pd_AssetId_V19_t* v){
	GEN_DEF_READARRAY(32)
	return parser_ok;
}

parser_error_t _readAssetIdOf_V19(parser_context_t* c, pd_AssetIdOf_V19_t* v){
	return _readAssetId_V19(c, &v->value);
}

parser_error_t _readAccountId_V19(parser_context_t* c, pd_AccountId_V19_t* v) {
    GEN_DEF_READARRAY(32)
	return parser_ok;
}

parser_error_t _readAmount_V19(parser_context_t* c, pd_Amount_V19_t* v){
	GEN_DEF_READARRAY(16)
	return parser_ok;
}


parser_error_t _readAccountIndex_V19(parser_context_t* c, pd_AccountIndex_V19_t* v){
    return _readUInt32(c, &v->value);
}

parser_error_t _readAddress_V19(parser_context_t* c, pd_Address_V19_t* v){
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

parser_error_t _readAssetInfo_V19(parser_context_t* c, pd_AssetInfo_V19_t* v)
{
    CHECK_ERROR(_readBytes(c, &v->metadata))
    return parser_ok;
}

parser_error_t _readChainId_V19(parser_context_t* c, pd_ChainId_V19_t* v)
{
    CHECK_INPUT()
    CHECK_ERROR(_readUInt8(c, &v->value))
    return parser_ok;
}

parser_error_t _readEraIndex_V19(parser_context_t* c, pd_EraIndex_V19_t* v)
{
    return _readUInt32(c, &v->value);
}

parser_error_t _readH256_array_3_V19(parser_context_t* c, pd_H256_array_3_V19_t* v) {
    GEN_DEF_READARRAY(96)
	return parser_ok;
}


parser_error_t _readKeyValue_V19(parser_context_t* c, pd_KeyValue_V19_t* v) {
    GEN_DEF_READARRAY(32)
	return parser_ok;
}

parser_error_t _readKey_V19(parser_context_t* c, pd_Key_V19_t* v) {
    GEN_DEF_READARRAY(32)
	return parser_ok;
}

parser_error_t _readKeys_V19(parser_context_t* c, pd_Keys_V19_t* v)
{
    GEN_DEF_READARRAY(4 * 32)
    return parser_ok;
}

parser_error_t _readLookupSource_V19(parser_context_t* c, pd_LookupSource_V19_t* v) {
    GEN_DEF_READARRAY(32)
	return parser_ok;
}

parser_error_t _readCompactAccountIndex_V19(parser_context_t* c, pd_CompactAccountIndex_V19_t* v)
{
    return _readCompactInt(c, &v->value);
}

parser_error_t _readCompactPerBill_V19(parser_context_t* c, pd_CompactPerBill_V19_t* v)
{
    return _readCompactInt(c, &v->value);
}

parser_error_t _readSignature_V19(parser_context_t* c, pd_Signature_V19_t* v) {
    GEN_DEF_READARRAY(64)
	return parser_ok;
}


parser_error_t _readTokenId_V19(parser_context_t* c, pd_TokenId_V19_t* v)
{
    CHECK_INPUT()
    CHECK_ERROR(_readu256(c, &v->value))
    return parser_ok;
}

parser_error_t _readTupleAccountIdData_V19(parser_context_t* c, pd_TupleAccountIdData_V19_t* v)
{
    CHECK_ERROR(_readAccountId_V19(c, &v->accountId))
    CHECK_ERROR(_readData(c, &v->data))
    return parser_ok;
}

parser_error_t _readu8_array_32_V19(parser_context_t* c, pd_u8_array_32_V19_t* v) {
    GEN_DEF_READARRAY(32)
}

parser_error_t _readVecAccountId_V19(parser_context_t* c, pd_VecAccountId_V19_t* v) {
    GEN_DEF_READVECTOR(AccountId_V19)
}

parser_error_t _readVecExtendedBalance_V19(parser_context_t* c, pd_VecExtendedBalance_V19_t* v) {
    GEN_DEF_READVECTOR(ExtendedBalance_V19)
}

parser_error_t _readVecKeyValue_V19(parser_context_t* c, pd_VecKeyValue_V19_t* v) {
    GEN_DEF_READVECTOR(KeyValue_V19)
}

parser_error_t _readVecKey_V19(parser_context_t* c, pd_VecKey_V19_t* v) {
    GEN_DEF_READVECTOR(Key_V19)
}

parser_error_t _readVecLookupSource_V19(parser_context_t* c, pd_VecLookupSource_V19_t* v) {
    GEN_DEF_READVECTOR(LookupSource_V19)
}

parser_error_t _readVecProof_V19(parser_context_t* c, pd_VecProof_V19_t* v) {
    GEN_DEF_READVECTOR(Proof_V19)
}

parser_error_t _readVecTupleAccountIdData_V19(parser_context_t* c, pd_VecTupleAccountIdData_V19_t* v) {
    GEN_DEF_READVECTOR(TupleAccountIdData_V19)
}

parser_error_t _readOptionAccountId_V19(parser_context_t* c, pd_OptionAccountId_V19_t* v)
{
    CHECK_ERROR(_readUInt8(c, &v->some))
    if (v->some > 0) {
        CHECK_ERROR(_readAccountId_V19(c, &v->contained))
    }
    return parser_ok;
}

parser_error_t _readOptionChangesTrieConfiguration_V19(parser_context_t* c, pd_OptionChangesTrieConfiguration_V19_t* v)
{
    CHECK_ERROR(_readUInt8(c, &v->some))
    if (v->some > 0) {
        CHECK_ERROR(_readChangesTrieConfiguration_V19(c, &v->contained))
    }
    return parser_ok;
}

parser_error_t _readOptionPeriod_V19(parser_context_t* c, pd_OptionPeriod_V19_t* v)
{
    CHECK_ERROR(_readUInt8(c, &v->some))
    if (v->some > 0) {
        CHECK_ERROR(_readPeriod_V19(c, &v->contained))
    }
    return parser_ok;
}

parser_error_t _readOptionProxyType_V19(parser_context_t* c, pd_OptionProxyType_V19_t* v)
{
    CHECK_ERROR(_readUInt8(c, &v->some))
    if (v->some > 0) {
        CHECK_ERROR(_readProxyType_V19(c, &v->contained))
    }
    return parser_ok;
}

parser_error_t _readOptionTimepoint_V19(parser_context_t* c, pd_OptionTimepoint_V19_t* v)
{
    CHECK_ERROR(_readUInt8(c, &v->some))
    if (v->some > 0) {
        CHECK_ERROR(_readTimepoint_V19(c, &v->contained))
    }
    return parser_ok;
}

parser_error_t _readRewardDestination_V19(parser_context_t* c, pd_RewardDestination_V19_t* v)
{
    CHECK_INPUT();

    CHECK_ERROR(_readUInt8(c, &v->value))
    if (v->value > 2) {
        return parser_value_out_of_range;
    }

    return parser_ok;
}

parser_error_t _readValidatorPrefs_V19(parser_context_t* c, pd_ValidatorPrefs_V19_t* v)
{
    CHECK_INPUT();
    CHECK_ERROR(_readCompactPerBill_V19(c, &v->commission));
    //CHECK_ERROR(_readbool(c, &v->blocked))
    return parser_ok;
}





///////////////////////////////////
///////////////////////////////////
///////////////////////////////////

parser_error_t _toStringDexId_V19(
    const pd_DexId_V19_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount)
{
    return _toStringu32(&v->value, outValue, outValueLen, pageIdx, pageCount);
}



parser_error_t _toStringAccountId_V19(
    const pd_AccountId_V19_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount)
{
    return _toStringPubkeyAsAddress(v->_ptr, outValue, outValueLen, pageIdx, pageCount);
}

parser_error_t _toStringAccountIndex_V19(
    const pd_AccountIndex_V19_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount)
{
    return _toStringu32(&v->value, outValue, outValueLen, pageIdx, pageCount);
}



parser_error_t _toStringAddress_V19(
    const pd_Address_V19_t* v,
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

parser_error_t _toStringAssetInfo_V19(
    const pd_AssetInfo_V19_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount)
{
    return _toStringBytes(&v->metadata, outValue, outValueLen, pageIdx, pageCount);
}

parser_error_t _toStringChainId_V19(
    const pd_ChainId_V19_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount)
{
    return _toStringu16((const pd_u16_t*)&v->value, outValue, outValueLen, pageIdx, pageCount);
}

parser_error_t _toStringEraIndex_V19(
    const pd_EraIndex_V19_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount)
{
    return _toStringu32(&v->value, outValue, outValueLen, pageIdx, pageCount);
}

parser_error_t _toStringExtendedBalance_V19(
    const pd_ExtendedBalance_V19_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount)
{
    return _toStringu128(&v->value, outValue, outValueLen, pageIdx, pageCount);
}

parser_error_t _toStringH256_array_3_V19(
    const pd_H256_array_3_V19_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount)
{
    GEN_DEF_TOSTRING_ARRAY(96);
}


parser_error_t _toStringKeyValue_V19(
    const pd_KeyValue_V19_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount)
{
    CLEAN_AND_CHECK()

    return parser_print_not_supported;
}

parser_error_t _toStringKey_V19(
    const pd_Key_V19_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount)
{
    CLEAN_AND_CHECK()

    return parser_print_not_supported;
}

parser_error_t _toStringKeys_V19(
    const pd_Keys_V19_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount) {
    GEN_DEF_TOSTRING_ARRAY(4 * 32)
}

parser_error_t _toStringLookupSource_V19(
    const pd_LookupSource_V19_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount)
{
    return _toStringPubkeyAsAddress(v->_ptr, outValue, outValueLen, pageIdx, pageCount);
}


parser_error_t _toStringProof_V19(
    const pd_Proof_V19_t* v,
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


parser_error_t _toStringSignature_V19(
    const pd_Signature_V19_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount) {
    GEN_DEF_TOSTRING_ARRAY(64)
}

parser_error_t _toStringAmount_V19(
    const pd_Amount_V19_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount)
{
	GEN_DEF_TOSTRING_ARRAY(16);
}

parser_error_t _toStringBalance_V19(
    const pd_Balance_V19_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount)
{
	GEN_DEF_TOSTRING_ARRAY(16);
}



parser_error_t _toStringBridgeNetworkId_V19(
    const pd_BridgeNetworkId_V19_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount)
{
	return _toStringu32(&v->value, outValue, outValueLen, pageIdx, pageCount);
}


parser_error_t _toStringEthereumAddress_V19(
    const pd_EthereumAddress_V19_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount)
{
	GEN_DEF_TOSTRING_ARRAY(32);
    //return _toStringu8_array_32_V19(&v->_ptr, outValue, outValueLen, pageIdx, pageCount);
}

parser_error_t _toStringAssetId_V19(
    const pd_AssetId_V19_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount)
{
	GEN_DEF_TOSTRING_ARRAY(32);
    //return _toStringu8_array_32_V19(&v->_ptr, outValue, outValueLen, pageIdx, pageCount);
}

parser_error_t _toStringTokenId_V19(
    const pd_TokenId_V19_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount)
{
    return _toStringu256(&v->value, outValue, outValueLen, pageIdx, pageCount);
}

parser_error_t _toStringTupleAccountIdData_V19(
    const pd_TupleAccountIdData_V19_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount)
{
    // Get all pages first
    uint8_t pages[2];
    CHECK_ERROR(_toStringAccountId_V19(&v->accountId, outValue, outValueLen, 0, &pages[0]))
    CHECK_ERROR(_toStringData(&v->data, outValue, outValueLen, 0, &pages[1]))

    *pageCount = pages[0] + pages[1];
    if (pageIdx > *pageCount) {
        return parser_display_idx_out_of_range;
    }

    if (pageIdx < pages[0]) {
        CHECK_ERROR(_toStringAccountId_V19(&v->accountId, outValue, outValueLen, pageIdx, &pages[0]))
        return parser_ok;
    }
    pageIdx -= pages[0];

    if (pageIdx < pages[1]) {
        CHECK_ERROR(_toStringData(&v->data, outValue, outValueLen, pageIdx, &pages[1]))
        return parser_ok;
    }

    return parser_display_idx_out_of_range;
}

parser_error_t _toStringu8_array_32_V19(
    const pd_u8_array_32_V19_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount) {
    GEN_DEF_TOSTRING_ARRAY(32)
}

parser_error_t _toStringVecAccountId_V19(
    const pd_VecAccountId_V19_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount)
{
    GEN_DEF_TOSTRING_VECTOR(AccountId_V19);
}

parser_error_t _toStringVecExtendedBalance_V19(
    const pd_VecExtendedBalance_V19_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount)
{
    GEN_DEF_TOSTRING_VECTOR(ExtendedBalance_V19);
}

parser_error_t _toStringVecKeyValue_V19(
    const pd_VecKeyValue_V19_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount)
{
    GEN_DEF_TOSTRING_VECTOR(KeyValue_V19);
}

parser_error_t _toStringVecKey_V19(
    const pd_VecKey_V19_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount)
{
    GEN_DEF_TOSTRING_VECTOR(Key_V19);
}

parser_error_t _toStringVecLookupSource_V19(
    const pd_VecLookupSource_V19_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount)
{
    GEN_DEF_TOSTRING_VECTOR(LookupSource_V19);
}

parser_error_t _toStringVecProof_V19(
    const pd_VecProof_V19_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount)
{
    GEN_DEF_TOSTRING_VECTOR(Proof_V19);
}


parser_error_t _toStringVecTupleAccountIdData_V19(
    const pd_VecTupleAccountIdData_V19_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount)
{
    GEN_DEF_TOSTRING_VECTOR(TupleAccountIdData_V19);
}

parser_error_t _toStringOptionAccountId_V19(
    const pd_OptionAccountId_V19_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount)
{
    CLEAN_AND_CHECK()

    *pageCount = 1;
    if (v->some > 0) {
        CHECK_ERROR(_toStringAccountId_V19(
            &v->contained,
            outValue, outValueLen,
            pageIdx, pageCount));
    } else {
        snprintf(outValue, outValueLen, "None");
    }
    return parser_ok;
}

parser_error_t _toStringOptionChangesTrieConfiguration_V19(
    const pd_OptionChangesTrieConfiguration_V19_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount)
{
    CLEAN_AND_CHECK()

    *pageCount = 1;
    if (v->some > 0) {
        CHECK_ERROR(_toStringChangesTrieConfiguration_V19(
            &v->contained,
            outValue, outValueLen,
            pageIdx, pageCount));
    } else {
        snprintf(outValue, outValueLen, "None");
    }
    return parser_ok;
}

parser_error_t _toStringOptionPeriod_V19(
    const pd_OptionPeriod_V19_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount)
{
    CLEAN_AND_CHECK()

    *pageCount = 1;
    if (v->some > 0) {
        CHECK_ERROR(_toStringPeriod_V19(
            &v->contained,
            outValue, outValueLen,
            pageIdx, pageCount));
    } else {
        snprintf(outValue, outValueLen, "None");
    }
    return parser_ok;
}

parser_error_t _toStringOptionProxyType_V19(
    const pd_OptionProxyType_V19_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount)
{
    CLEAN_AND_CHECK()

    *pageCount = 1;
    if (v->some > 0) {
        CHECK_ERROR(_toStringProxyType_V19(
            &v->contained,
            outValue, outValueLen,
            pageIdx, pageCount));
    } else {
        snprintf(outValue, outValueLen, "None");
    }
    return parser_ok;
}

parser_error_t _toStringOptionTimepoint_V19(
    const pd_OptionTimepoint_V19_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount)
{
    CLEAN_AND_CHECK()

    *pageCount = 1;
    if (v->some > 0) {
        CHECK_ERROR(_toStringTimepoint_V19(
            &v->contained,
            outValue, outValueLen,
            pageIdx, pageCount));
    } else {
        snprintf(outValue, outValueLen, "None");
    }
    return parser_ok;
}


parser_error_t _toStringRewardDestination_V19(
    const pd_RewardDestination_V19_t* v,
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



parser_error_t _toStringValidatorPrefs_V19(
    const pd_ValidatorPrefs_V19_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount)
{
    CLEAN_AND_CHECK()

    uint8_t pages[2];
    CHECK_ERROR(_toStringCompactPerBill_V19(&v->commission, outValue, outValueLen, 0, &pages[0]))
    //CHECK_ERROR(_toStringbool(&v->blocked, outValue, outValueLen, 0, &pages[1]))

    *pageCount = 0;
    for (uint8_t i = 0; i < (uint8_t)sizeof(pages); i++) {
        *pageCount += pages[i];
    }

    if (pageIdx > *pageCount) {
        return parser_display_idx_out_of_range;
    }

    if (pageIdx < pages[0]) {
        CHECK_ERROR(_toStringCompactPerBill_V19(&v->commission, outValue, outValueLen, pageIdx, &pages[0]))
        return parser_ok;
    }
    pageIdx -= pages[0];

    if (pageIdx < pages[1]) {
        //CHECK_ERROR(_toStringbool(&v->blocked, outValue, outValueLen, pageIdx, &pages[1]))
        return parser_ok;
    }

    return parser_display_idx_out_of_range;
}

parser_error_t _toStringCompactPerBill_V19(
    const pd_CompactPerBill_V19_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount)
{
    // 9 but shift 2 to show as percentage
    return _toStringCompactInt(&v->value, 7, '%', "", outValue, outValueLen, pageIdx, pageCount);
}
