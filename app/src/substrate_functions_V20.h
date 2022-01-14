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
#include "substrate_methods_V20.h"
#include "substrate_types_V20.h"
#include <stddef.h>
#include <stdint.h>

// Read functions
parser_error_t _readAccountId_V20(parser_context_t* c, pd_AccountId_V20_t* v);
parser_error_t _readAccountIndex_V20(parser_context_t* c, pd_AccountIndex_V20_t* v);
parser_error_t _readAddress_V20(parser_context_t* c, pd_Address_V20_t* v);
parser_error_t _readAssetInfo_V20(parser_context_t* c, pd_AssetInfo_V20_t* v);
parser_error_t _readChainId_V20(parser_context_t* c, pd_ChainId_V20_t* v);
parser_error_t _readEraIndex_V20(parser_context_t* c, pd_EraIndex_V20_t* v);
parser_error_t _readExtendedBalance_V20(parser_context_t* c, pd_ExtendedBalance_V20_t* v);
parser_error_t _readH256_array_3_V20(parser_context_t* c, pd_H256_array_3_V20_t* v);
parser_error_t _readKeyValue_V20(parser_context_t* c, pd_KeyValue_V20_t* v);
parser_error_t _readKey_V20(parser_context_t* c, pd_Key_V20_t* v);
parser_error_t _readKeys_V20(parser_context_t* c, pd_Keys_V20_t* v);
parser_error_t _readTokenId_V20(parser_context_t* c, pd_TokenId_V20_t* v);
parser_error_t _readTupleAccountIdData_V20(parser_context_t* c, pd_TupleAccountIdData_V20_t* v);
parser_error_t _readVecAccountId_V20(parser_context_t* c, pd_VecAccountId_V20_t* v);
parser_error_t _readVecExtendedBalance_V20(parser_context_t* c, pd_VecExtendedBalance_V20_t* v);
parser_error_t _readVecKeyValue_V20(parser_context_t* c, pd_VecKeyValue_V20_t* v);
parser_error_t _readVecKey_V20(parser_context_t* c, pd_VecKey_V20_t* v);
parser_error_t _readVecLookupSource_V20(parser_context_t* c, pd_VecLookupSource_V20_t* v);
parser_error_t _readVecTupleAccountIdData_V20(parser_context_t* c, pd_VecTupleAccountIdData_V20_t* v);
parser_error_t _readu8_array_32_V20(parser_context_t* c, pd_u8_array_32_V20_t* v);
parser_error_t _readCompactAccountIndex_V20(parser_context_t* c, pd_CompactAccountIndex_V20_t* v);
parser_error_t _readRewardDestination_V20(parser_context_t* c, pd_RewardDestination_V20_t* v);
parser_error_t _readCompactPerBill_V20(parser_context_t* c, pd_CompactPerBill_V20_t* v);

// toString functions

parser_error_t _toStringSoraAccountId_V20(
    const pd_AccountId_V20_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);


parser_error_t _toStringAccountId_V20(
    const pd_AccountId_V20_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringAccountIndex_V20(
    const pd_AccountIndex_V20_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringAccountVoteSplit_V20(
    const pd_AccountVoteSplit_V20_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringAccountVoteStandard_V20(
    const pd_AccountVoteStandard_V20_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringAccountVote_V20(
    const pd_AccountVote_V20_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringAddress_V20(
    const pd_Address_V20_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringAssetInfo_V20(
    const pd_AssetInfo_V20_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringBabeEquivocationProof_V20(
    const pd_BabeEquivocationProof_V20_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringChainId_V20(
    const pd_ChainId_V20_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringChangesTrieConfiguration_V20(
    const pd_ChangesTrieConfiguration_V20_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringCompactAssignments_V20(
    const pd_CompactAssignments_V20_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringCompactEraIndex_V20(
    const pd_CompactEraIndex_V20_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringCompactMemberCount_V20(
    const pd_CompactMemberCount_V20_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringCompactMoment_V20(
    const pd_CompactMoment_V20_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringCompactPerBill_V20(
    const pd_CompactPerBill_V20_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringCompactPropIndex_V20(
    const pd_CompactPropIndex_V20_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringCompactProposalIndex_V20(
    const pd_CompactProposalIndex_V20_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringCompactReferendumIndex_V20(
    const pd_CompactReferendumIndex_V20_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringCompactRegistrarIndex_V20(
    const pd_CompactRegistrarIndex_V20_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringCompactWeight_V20(
    const pd_CompactWeight_V20_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringConviction_V20(
    const pd_Conviction_V20_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringDefunctVoter_V20(
    const pd_DefunctVoter_V20_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringDepositNonce_V20(
    const pd_DepositNonce_V20_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringElectionScore_V20(
    const pd_ElectionScore_V20_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringElectionSize_V20(
    const pd_ElectionSize_V20_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringEraIndex_V20(
    const pd_EraIndex_V20_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringExtendedBalance_V20(
    const pd_ExtendedBalance_V20_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringGrandpaEquivocationProof_V20(
    const pd_GrandpaEquivocationProof_V20_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringH256_array_3_V20(
    const pd_H256_array_3_V20_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringIdentityFields_V20(
    const pd_IdentityFields_V20_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringIdentityInfo_V20(
    const pd_IdentityInfo_V20_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringIdentityJudgement_V20(
    const pd_IdentityJudgement_V20_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringKeyOwnerProof_V20(
    const pd_KeyOwnerProof_V20_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringKeyValue_V20(
    const pd_KeyValue_V20_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringKey_V20(
    const pd_Key_V20_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringKeys_V20(
    const pd_Keys_V20_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringLookupSource_V20(
    const pd_LookupSource_V20_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringMemberCount_V20(
    const pd_MemberCount_V20_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringMintInfo_V20(
    const pd_MintInfo_V20_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringMoment_V20(
    const pd_Moment_V20_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringOpaqueCall_V20(
    const pd_OpaqueCall_V20_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringOptionAccountId_V20(
    const pd_OptionAccountId_V20_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringOptionChangesTrieConfiguration_V20(
    const pd_OptionChangesTrieConfiguration_V20_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringOptionPeriod_V20(
    const pd_OptionPeriod_V20_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringOptionProxyType_V20(
    const pd_OptionProxyType_V20_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringOptionTimepoint_V20(
    const pd_OptionTimepoint_V20_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringPerbill_V20(
    const pd_Perbill_V20_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringPercent_V20(
    const pd_Percent_V20_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringPeriod_V20(
    const pd_Period_V20_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringPriority_V20(
    const pd_Priority_V20_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringProof_V20(
    const pd_Proof_V20_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringProxyType_V20(
    const pd_ProxyType_V20_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringReferendumIndex_V20(
    const pd_ReferendumIndex_V20_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringRegistrarIndex_V20(
    const pd_RegistrarIndex_V20_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringRegistryId_V20(
    const pd_RegistryId_V20_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringRegistryInfo_V20(
    const pd_RegistryInfo_V20_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringRenouncing_V20(
    const pd_Renouncing_V20_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringResourceId_V20(
    const pd_ResourceId_V20_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringRewardDestination_V20(
    const pd_RewardDestination_V20_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringSignature_V20(
    const pd_Signature_V20_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringStreamDependency_V20(
    const pd_StreamDependency_V20_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringTimepoint_V20(
    const pd_Timepoint_V20_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringTokenId_V20(
    const pd_TokenId_V20_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringTupleAccountIdData_V20(
    const pd_TupleAccountIdData_V20_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringValidatorIndex_V20(
    const pd_ValidatorIndex_V20_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringValidatorPrefs_V20(
    const pd_ValidatorPrefs_V20_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringVecAccountId_V20(
    const pd_VecAccountId_V20_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringVecExtendedBalance_V20(
    const pd_VecExtendedBalance_V20_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringVecKeyValue_V20(
    const pd_VecKeyValue_V20_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringVecKey_V20(
    const pd_VecKey_V20_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringVecLookupSource_V20(
    const pd_VecLookupSource_V20_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringVecProof_V20(
    const pd_VecProof_V20_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringVecTupleAccountIdData_V20(
    const pd_VecTupleAccountIdData_V20_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringVecValidatorIndex_V20(
    const pd_VecValidatorIndex_V20_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringVestingInfo_V20(
    const pd_VestingInfo_V20_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringVote_V20(
    const pd_Vote_V20_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringWeight_V20(
    const pd_Weight_V20_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringu8_array_32_V20(
    const pd_u8_array_32_V20_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

#ifdef __cplusplus
}
#endif
