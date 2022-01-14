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
#pragma once

#ifdef __cplusplus
extern "C" {
#endif

#include "substrate_types.h"
#include <stddef.h>
#include <stdint.h>
#include "./common/uint256.h"


// Based
// https://github.com/paritytech/substrate/blob/master/node/primitives/src/lib.rs

typedef struct {
    const uint8_t* _ptr;
} pd_Asset_Ticker_V20_t;



typedef struct {
	uint8_t value;
} pd_FilterMode_V20_t;

typedef struct {
	uint8_t value;
} pd_LiquiditySourceType_V20_t;

typedef struct {
    uint64_t _len;
    const uint8_t* _ptr;
    uint64_t _lenBuffer;
} pd_VecLiquiditySourceType_V20_t;

typedef struct {
    //compactInt_t value;
	const uint8_t* _ptr;
	uint8_t _len;
} pd_Balance_V20_t;

typedef struct {
	uint8_t some;

	pd_Balance_V20_t contained_1;
    pd_Balance_V20_t contained_2;

} pd_SwapAmount_V20_t;


typedef struct {
	uint32_t value;
} pd_DexId_V20_t;

typedef struct {
    const uint8_t* _ptr;
    uint8_t _len;
} pd_AssetId_V20_t;

typedef struct {
	pd_AssetId_V20_t value;

} pd_AssetIdOf_V20_t;

typedef struct {
    const uint8_t* _ptr;
    uint8_t _len;
} pd_AccountId_V20_t;

typedef struct {
    //compactInt_t value;
	const uint8_t* _ptr;
	uint8_t _len;
} pd_Amount_V20_t;


typedef struct {
	const uint8_t* _ptr;
	uint8_t _len;
} pd_EthereumAddress_V20_t;

typedef struct {
	uint32_t value;
} pd_BridgeNetworkId_V20_t;

typedef struct {
	pd_IncomingTransactionRequestKind_V19_e type;
    uint64_t idx;
    const uint8_t* idPtr;
} pd_IncomingTransactionRequestKind_V20_t;

typedef struct {
	pd_IncomingMetaRequestKind_V19_e type;
    uint64_t idx;
    const uint8_t* idPtr;
} pd_IncomingMetaRequestKind_V20_t;

typedef struct {
	pd_IncomingRequestKind_V19_e type;
    uint64_t idx;
    const uint8_t* idPtr;

    pd_IncomingTransactionRequestKind_V20_t Transaction;
    pd_IncomingMetaRequestKind_V20_t Meta;

} pd_IncomingRequestKind_V20_t;

typedef struct {
    uint8_t value;
} pd_Conviction_V20_t;

typedef struct {
    pd_u128_t value;
} pd_ExtendedBalance_V20_t;

typedef struct {
    pd_bool_t aye;
    pd_Conviction_V20_t conviction;
} pd_Vote_V20_t;

typedef struct {
    pd_BalanceOf_t aye;
    pd_BalanceOf_t nay;
} pd_AccountVoteSplit_V20_t;

typedef struct {
    pd_Vote_V20_t vote;
    pd_BalanceOf_t balance;
} pd_AccountVoteStandard_V20_t;

typedef struct {
    pd_u32_t digest_interval;
    pd_u32_t digest_levels;
} pd_ChangesTrieConfiguration_V20_t;

typedef struct {
    compactInt_t value;
} pd_CompactPerBill_V20_t;

typedef struct {
    const uint8_t* _ptr;
} pd_KeyValue_V20_t;

typedef struct {
    const uint8_t* _ptr;
} pd_Key_V20_t;

typedef struct {
    compactInt_t value;
} pd_CompactAccountIndex_V20_t;

typedef struct {
    const uint8_t* _ptr;
} pd_LookupSource_V20_t;

typedef struct {
    uint64_t value;
} pd_Period_V20_t;

typedef struct {
    pd_Hash_t leaf_hash;
    pd_VecHash_t sorted_hashes;
} pd_Proof_V20_t;

typedef struct {
    uint8_t value;
} pd_ProxyType_V20_t;

typedef struct {
    pd_u32_t dependency_id;
    uint8_t weight;
    pd_bool_t is_exclusive;
} pd_StreamDependency_V20_t;

typedef struct {
    pd_BlockNumber_t height;
    uint32_t index;
} pd_Timepoint_V20_t;

typedef struct {
    pd_AccountId_V20_t accountId;
    pd_Data_t data;
} pd_TupleAccountIdData_V20_t;

typedef struct {
    uint16_t value;
} pd_ValidatorIndex_V20_t;

typedef struct {
    uint64_t _len;
    const uint8_t* _ptr;
    uint64_t _lenBuffer;
} pd_VecExtendedBalance_V20_t;

typedef struct {
    uint8_t value;
    union {
        pd_AccountVoteStandard_V20_t voteStandard;
        pd_AccountVoteSplit_V20_t voteSplit;
    };
} pd_AccountVote_V20_t;

typedef struct {
    pd_Bytes_t metadata;
} pd_AssetInfo_V20_t;

typedef struct {
    pd_AccountId_V20_t who;
    compactInt_t vote_count;
    compactInt_t candidate_count;
} pd_DefunctVoter_V20_t;

typedef struct {
    pd_VecExtendedBalance_V20_t value;
} pd_ElectionScore_V20_t;

typedef struct {
    // https://github.com/paritytech/substrate/blob/effe489951d1edab9d34846b1eefdfaf9511dab9/frame/identity/src/lib.rs#L276
    pd_VecTupleDataData_t additional;
    pd_Data_t display;
    pd_Data_t legal;
    pd_Data_t web;
    pd_Data_t riot;
    pd_Data_t email;
    pd_Optionu8_array_20_t pgp_fingerprint;
    pd_Data_t image;
    pd_Data_t twitter;
} pd_IdentityInfo_V20_t;

typedef struct {
    pd_Call_t call;
} pd_OpaqueCall_V20_t;

typedef struct {
    uint8_t some;
    pd_ChangesTrieConfiguration_V20_t contained;
} pd_OptionChangesTrieConfiguration_V20_t;

typedef struct {
    uint8_t some;
    pd_Timepoint_V20_t contained;
} pd_OptionTimepoint_V20_t;

typedef struct {
    uint32_t stream_id;
    pd_StreamDependency_V20_t dependency;
} pd_Priority_V20_t;

typedef struct {
    pd_bool_t owner_can_burn;
    pd_VecBytes_t fields;
} pd_RegistryInfo_V20_t;

typedef struct {
    pd_u256_t value;
} pd_TokenId_V20_t;

typedef struct {
    pd_CompactPerBill_V20_t commission;
} pd_ValidatorPrefs_V20_t;

typedef struct {
    uint64_t _len;
    const uint8_t* _ptr;
    uint64_t _lenBuffer;
} pd_VecLookupSource_V20_t;

typedef struct {
    uint64_t _len;
    const uint8_t* _ptr;
    uint64_t _lenBuffer;
} pd_VecProof_V20_t;

typedef struct {
    uint64_t _len;
    const uint8_t* _ptr;
    uint64_t _lenBuffer;
} pd_VecTupleAccountIdData_V20_t;

typedef struct {
    pd_BalanceOf_t locked;
    pd_BalanceOf_t per_block;
    pd_BlockNumber_t starting_block;
} pd_VestingInfo_V20_t;

typedef struct {
    uint32_t value;
} pd_AccountIndex_V20_t;



typedef struct {
    pd_Address_e type;
    uint64_t idx;
    const uint8_t* idPtr;
} pd_Address_V20_t;

typedef struct {
    // TODO: Not implemented
    uint8_t _NOT_IMPLEMENTED__DO_NOT_USE;
} pd_BabeEquivocationProof_V20_t;

typedef struct {
    uint8_t value;
} pd_ChainId_V20_t;

typedef compactInt_t pd_CompactAssignments_V20_t;

typedef compactInt_t pd_CompactEraIndex_V20_t;

typedef compactInt_t pd_CompactMemberCount_V20_t;

typedef compactInt_t pd_CompactMoment_V20_t;

typedef compactInt_t pd_CompactPropIndex_V20_t;

typedef compactInt_t pd_CompactProposalIndex_V20_t;

typedef compactInt_t pd_CompactReferendumIndex_V20_t;

typedef compactInt_t pd_CompactRegistrarIndex_V20_t;

typedef compactInt_t pd_CompactWeight_V20_t;

typedef struct {
    uint64_t value;
} pd_DepositNonce_V20_t;

typedef struct {
    compactInt_t validators;
    compactInt_t nominators;
} pd_ElectionSize_V20_t;

typedef struct {
    uint32_t value;
} pd_EraIndex_V20_t;

typedef struct {
    // TODO: Not implemented
    uint8_t _NOT_IMPLEMENTED__DO_NOT_USE;
} pd_GrandpaEquivocationProof_V20_t;

typedef struct {
    const uint8_t* _ptr;
} pd_H256_array_3_V20_t;

typedef struct {
    uint8_t value;
} pd_IdentityFields_V20_t;

typedef struct {
    // TODO: Not implemented
    uint8_t _NOT_IMPLEMENTED__DO_NOT_USE;
} pd_IdentityJudgement_V20_t;

typedef struct {
    // TODO: Not implemented
    uint8_t _NOT_IMPLEMENTED__DO_NOT_USE;
} pd_KeyOwnerProof_V20_t;

typedef struct {
    const uint8_t* _ptr;
} pd_Keys_V20_t;

typedef struct {
    uint32_t value;
} pd_MemberCount_V20_t;

typedef struct {
    // TODO: Not implemented
    uint8_t _NOT_IMPLEMENTED__DO_NOT_USE;
} pd_MintInfo_V20_t;

typedef struct {
    uint64_t value;
} pd_Moment_V20_t;

typedef struct {
    uint8_t some;
    pd_AccountId_V20_t contained;
} pd_OptionAccountId_V20_t;

typedef struct {
    uint8_t some;
    pd_Period_V20_t contained;
} pd_OptionPeriod_V20_t;

typedef struct {
    uint8_t some;
    pd_ProxyType_V20_t contained;
} pd_OptionProxyType_V20_t;

typedef struct {
    uint32_t value;
} pd_Perbill_V20_t;

typedef struct {
    compactInt_t value;
} pd_Percent_V20_t;

typedef struct {
    uint32_t value;
} pd_ReferendumIndex_V20_t;

typedef struct {
    uint32_t value;
} pd_RegistrarIndex_V20_t;

typedef struct {
    uint32_t value;
} pd_RegistryId_V20_t;

typedef struct {
    uint8_t value;
    compactInt_t candidate;
} pd_Renouncing_V20_t;

typedef struct {
    const uint8_t* _ptr;
} pd_ResourceId_V20_t;

typedef struct {
    uint8_t value;
} pd_RewardDestination_V20_t;

typedef struct {
    const uint8_t* _ptr;
} pd_Signature_V20_t;

typedef struct {
    uint64_t _len;
    const uint8_t* _ptr;
    uint64_t _lenBuffer;
} pd_VecAccountId_V20_t;

typedef struct {
    uint64_t _len;
    const uint8_t* _ptr;
    uint64_t _lenBuffer;
} pd_VecKeyValue_V20_t;

typedef struct {
    uint64_t _len;
    const uint8_t* _ptr;
    uint64_t _lenBuffer;
} pd_VecKey_V20_t;

typedef struct {
    uint64_t _len;
    const uint8_t* _ptr;
    uint64_t _lenBuffer;
} pd_VecValidatorIndex_V20_t;

typedef struct {
    uint64_t value;
} pd_Weight_V20_t;

typedef struct {
    const uint8_t* _ptr;
} pd_u8_array_32_V20_t;



#ifdef __cplusplus
}
#endif
