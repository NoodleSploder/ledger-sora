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

#include "parser_common.h"
#include "substrate_methods_V24.h"
#include "substrate_types_V24.h"
#include <stddef.h>
#include <stdint.h>

// Read functions
parser_error_t _readAccountId_V24(parser_context_t* c, pd_AccountId_V24_t* v);
parser_error_t _readAccountIndex_V24(parser_context_t* c, pd_AccountIndex_V24_t* v);
parser_error_t _readAddress_V24(parser_context_t* c, pd_Address_V24_t* v);
parser_error_t _readAssetInfo_V24(parser_context_t* c, pd_AssetInfo_V24_t* v);
parser_error_t _readChainId_V24(parser_context_t* c, pd_ChainId_V24_t* v);
parser_error_t _readEraIndex_V24(parser_context_t* c, pd_EraIndex_V24_t* v);
parser_error_t _readExtendedBalance_V24(parser_context_t* c, pd_ExtendedBalance_V24_t* v);
parser_error_t _readH256_array_3_V24(parser_context_t* c, pd_H256_array_3_V24_t* v);
parser_error_t _readKeyValue_V24(parser_context_t* c, pd_KeyValue_V24_t* v);
parser_error_t _readKey_V24(parser_context_t* c, pd_Key_V24_t* v);
parser_error_t _readKeys_V24(parser_context_t* c, pd_Keys_V24_t* v);
parser_error_t _readTokenId_V24(parser_context_t* c, pd_TokenId_V24_t* v);
parser_error_t _readTupleAccountIdData_V24(parser_context_t* c, pd_TupleAccountIdData_V24_t* v);
parser_error_t _readVecAccountId_V24(parser_context_t* c, pd_VecAccountId_V24_t* v);
parser_error_t _readVecExtendedBalance_V24(parser_context_t* c, pd_VecExtendedBalance_V24_t* v);
parser_error_t _readVecKeyValue_V24(parser_context_t* c, pd_VecKeyValue_V24_t* v);
parser_error_t _readVecKey_V24(parser_context_t* c, pd_VecKey_V24_t* v);
parser_error_t _readVecLookupSource_V24(parser_context_t* c, pd_VecLookupSource_V24_t* v);
parser_error_t _readVecTupleAccountIdData_V24(parser_context_t* c, pd_VecTupleAccountIdData_V24_t* v);
parser_error_t _readu8_array_32_V24(parser_context_t* c, pd_u8_array_32_V24_t* v);
parser_error_t _readCompactAccountIndex_V24(parser_context_t* c, pd_CompactAccountIndex_V24_t* v);
parser_error_t _readRewardDestination_V24(parser_context_t* c, pd_RewardDestination_V24_t* v);
parser_error_t _readCompactPerBill_V24(parser_context_t* c, pd_CompactPerBill_V24_t* v);

// toString functions

parser_error_t _toStringSoraAccountId_V24(
    const pd_AccountId_V24_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);


parser_error_t _toStringAccountId_V24(
    const pd_AccountId_V24_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringAccountIndex_V24(
    const pd_AccountIndex_V24_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringAccountVoteSplit_V24(
    const pd_AccountVoteSplit_V24_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringAccountVoteStandard_V24(
    const pd_AccountVoteStandard_V24_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringAccountVote_V24(
    const pd_AccountVote_V24_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringAddress_V24(
    const pd_Address_V24_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringAssetInfo_V24(
    const pd_AssetInfo_V24_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringBabeEquivocationProof_V24(
    const pd_BabeEquivocationProof_V24_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringChainId_V24(
    const pd_ChainId_V24_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringChangesTrieConfiguration_V24(
    const pd_ChangesTrieConfiguration_V24_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringCompactAssignments_V24(
    const pd_CompactAssignments_V24_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringCompactEraIndex_V24(
    const pd_CompactEraIndex_V24_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringCompactMemberCount_V24(
    const pd_CompactMemberCount_V24_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringCompactMoment_V24(
    const pd_CompactMoment_V24_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringCompactPerBill_V24(
    const pd_CompactPerBill_V24_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringCompactPropIndex_V24(
    const pd_CompactPropIndex_V24_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringCompactProposalIndex_V24(
    const pd_CompactProposalIndex_V24_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringCompactReferendumIndex_V24(
    const pd_CompactReferendumIndex_V24_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringCompactRegistrarIndex_V24(
    const pd_CompactRegistrarIndex_V24_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringCompactWeight_V24(
    const pd_CompactWeight_V24_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringConviction_V24(
    const pd_Conviction_V24_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringDefunctVoter_V24(
    const pd_DefunctVoter_V24_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringDepositNonce_V24(
    const pd_DepositNonce_V24_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringElectionScore_V24(
    const pd_ElectionScore_V24_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringElectionSize_V24(
    const pd_ElectionSize_V24_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringEraIndex_V24(
    const pd_EraIndex_V24_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringExtendedBalance_V24(
    const pd_ExtendedBalance_V24_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringGrandpaEquivocationProof_V24(
    const pd_GrandpaEquivocationProof_V24_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringH256_array_3_V24(
    const pd_H256_array_3_V24_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringIdentityFields_V24(
    const pd_IdentityFields_V24_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringIdentityInfo_V24(
    const pd_IdentityInfo_V24_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringIdentityJudgement_V24(
    const pd_IdentityJudgement_V24_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringKeyOwnerProof_V24(
    const pd_KeyOwnerProof_V24_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringKeyValue_V24(
    const pd_KeyValue_V24_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringKey_V24(
    const pd_Key_V24_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringKeys_V24(
    const pd_Keys_V24_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringLookupSource_V24(
    const pd_LookupSource_V24_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringMemberCount_V24(
    const pd_MemberCount_V24_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringMintInfo_V24(
    const pd_MintInfo_V24_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringMoment_V24(
    const pd_Moment_V24_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringOpaqueCall_V24(
    const pd_OpaqueCall_V24_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringOptionAccountId_V24(
    const pd_OptionAccountId_V24_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringOptionChangesTrieConfiguration_V24(
    const pd_OptionChangesTrieConfiguration_V24_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringOptionPeriod_V24(
    const pd_OptionPeriod_V24_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringOptionProxyType_V24(
    const pd_OptionProxyType_V24_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringOptionTimepoint_V24(
    const pd_OptionTimepoint_V24_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringPerbill_V24(
    const pd_Perbill_V24_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringPercent_V24(
    const pd_Percent_V24_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringPeriod_V24(
    const pd_Period_V24_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringPriority_V24(
    const pd_Priority_V24_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringProof_V24(
    const pd_Proof_V24_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringProxyType_V24(
    const pd_ProxyType_V24_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringReferendumIndex_V24(
    const pd_ReferendumIndex_V24_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringRegistrarIndex_V24(
    const pd_RegistrarIndex_V24_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringRegistryId_V24(
    const pd_RegistryId_V24_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringRegistryInfo_V24(
    const pd_RegistryInfo_V24_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringRenouncing_V24(
    const pd_Renouncing_V24_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringResourceId_V24(
    const pd_ResourceId_V24_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringRewardDestination_V24(
    const pd_RewardDestination_V24_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringSignature_V24(
    const pd_Signature_V24_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringStreamDependency_V24(
    const pd_StreamDependency_V24_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringTimepoint_V24(
    const pd_Timepoint_V24_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringTokenId_V24(
    const pd_TokenId_V24_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringTupleAccountIdData_V24(
    const pd_TupleAccountIdData_V24_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringValidatorIndex_V24(
    const pd_ValidatorIndex_V24_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringValidatorPrefs_V24(
    const pd_ValidatorPrefs_V24_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringVecAccountId_V24(
    const pd_VecAccountId_V24_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringVecExtendedBalance_V24(
    const pd_VecExtendedBalance_V24_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringVecKeyValue_V24(
    const pd_VecKeyValue_V24_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringVecKey_V24(
    const pd_VecKey_V24_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringVecLookupSource_V24(
    const pd_VecLookupSource_V24_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringVecProof_V24(
    const pd_VecProof_V24_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringVecTupleAccountIdData_V24(
    const pd_VecTupleAccountIdData_V24_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringVecValidatorIndex_V24(
    const pd_VecValidatorIndex_V24_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringVestingInfo_V24(
    const pd_VestingInfo_V24_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringVote_V24(
    const pd_Vote_V24_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringWeight_V24(
    const pd_Weight_V24_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringu8_array_32_V24(
    const pd_u8_array_32_V24_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

#ifdef __cplusplus
}
#endif
