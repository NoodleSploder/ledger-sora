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
#include "substrate_methods_V19.h"
#include "substrate_types_V19.h"
#include <stddef.h>
#include <stdint.h>

// Read functions
parser_error_t _readAccountId_V19(parser_context_t* c, pd_AccountId_V19_t* v);
parser_error_t _readAccountIndex_V19(parser_context_t* c, pd_AccountIndex_V19_t* v);
parser_error_t _readAddress_V19(parser_context_t* c, pd_Address_V19_t* v);
parser_error_t _readAssetInfo_V19(parser_context_t* c, pd_AssetInfo_V19_t* v);
parser_error_t _readChainId_V19(parser_context_t* c, pd_ChainId_V19_t* v);
parser_error_t _readEraIndex_V19(parser_context_t* c, pd_EraIndex_V19_t* v);
parser_error_t _readExtendedBalance_V19(parser_context_t* c, pd_ExtendedBalance_V19_t* v);
parser_error_t _readH256_array_3_V19(parser_context_t* c, pd_H256_array_3_V19_t* v);
parser_error_t _readKeyValue_V19(parser_context_t* c, pd_KeyValue_V19_t* v);
parser_error_t _readKey_V19(parser_context_t* c, pd_Key_V19_t* v);
parser_error_t _readKeys_V19(parser_context_t* c, pd_Keys_V19_t* v);
parser_error_t _readTokenId_V19(parser_context_t* c, pd_TokenId_V19_t* v);
parser_error_t _readTupleAccountIdData_V19(parser_context_t* c, pd_TupleAccountIdData_V19_t* v);
parser_error_t _readVecAccountId_V19(parser_context_t* c, pd_VecAccountId_V19_t* v);
parser_error_t _readVecExtendedBalance_V19(parser_context_t* c, pd_VecExtendedBalance_V19_t* v);
parser_error_t _readVecKeyValue_V19(parser_context_t* c, pd_VecKeyValue_V19_t* v);
parser_error_t _readVecKey_V19(parser_context_t* c, pd_VecKey_V19_t* v);
parser_error_t _readVecLookupSource_V19(parser_context_t* c, pd_VecLookupSource_V19_t* v);
parser_error_t _readVecTupleAccountIdData_V19(parser_context_t* c, pd_VecTupleAccountIdData_V19_t* v);
parser_error_t _readu8_array_32_V19(parser_context_t* c, pd_u8_array_32_V19_t* v);
parser_error_t _readCompactAccountIndex_V19(parser_context_t* c, pd_CompactAccountIndex_V19_t* v);
parser_error_t _readRewardDestination_V19(parser_context_t* c, pd_RewardDestination_V19_t* v);
parser_error_t _readCompactPerBill_V19(parser_context_t* c, pd_CompactPerBill_V19_t* v);

// toString functions

parser_error_t _toStringSoraAccountId_V19(
    const pd_AccountId_V19_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);


parser_error_t _toStringAccountId_V19(
    const pd_AccountId_V19_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringAccountIndex_V19(
    const pd_AccountIndex_V19_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringAccountVoteSplit_V19(
    const pd_AccountVoteSplit_V19_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringAccountVoteStandard_V19(
    const pd_AccountVoteStandard_V19_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringAccountVote_V19(
    const pd_AccountVote_V19_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringAddress_V19(
    const pd_Address_V19_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringAssetInfo_V19(
    const pd_AssetInfo_V19_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringBabeEquivocationProof_V19(
    const pd_BabeEquivocationProof_V19_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringChainId_V19(
    const pd_ChainId_V19_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringChangesTrieConfiguration_V19(
    const pd_ChangesTrieConfiguration_V19_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringCompactAssignments_V19(
    const pd_CompactAssignments_V19_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringCompactEraIndex_V19(
    const pd_CompactEraIndex_V19_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringCompactMemberCount_V19(
    const pd_CompactMemberCount_V19_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringCompactMoment_V19(
    const pd_CompactMoment_V19_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringCompactPerBill_V19(
    const pd_CompactPerBill_V19_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringCompactPropIndex_V19(
    const pd_CompactPropIndex_V19_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringCompactProposalIndex_V19(
    const pd_CompactProposalIndex_V19_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringCompactReferendumIndex_V19(
    const pd_CompactReferendumIndex_V19_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringCompactRegistrarIndex_V19(
    const pd_CompactRegistrarIndex_V19_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringCompactWeight_V19(
    const pd_CompactWeight_V19_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringConviction_V19(
    const pd_Conviction_V19_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringDefunctVoter_V19(
    const pd_DefunctVoter_V19_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringDepositNonce_V19(
    const pd_DepositNonce_V19_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringElectionScore_V19(
    const pd_ElectionScore_V19_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringElectionSize_V19(
    const pd_ElectionSize_V19_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringEraIndex_V19(
    const pd_EraIndex_V19_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringExtendedBalance_V19(
    const pd_ExtendedBalance_V19_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringGrandpaEquivocationProof_V19(
    const pd_GrandpaEquivocationProof_V19_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringH256_array_3_V19(
    const pd_H256_array_3_V19_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringIdentityFields_V19(
    const pd_IdentityFields_V19_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringIdentityInfo_V19(
    const pd_IdentityInfo_V19_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringIdentityJudgement_V19(
    const pd_IdentityJudgement_V19_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringKeyOwnerProof_V19(
    const pd_KeyOwnerProof_V19_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringKeyValue_V19(
    const pd_KeyValue_V19_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringKey_V19(
    const pd_Key_V19_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringKeys_V19(
    const pd_Keys_V19_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringLookupSource_V19(
    const pd_LookupSource_V19_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringMemberCount_V19(
    const pd_MemberCount_V19_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringMintInfo_V19(
    const pd_MintInfo_V19_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringMoment_V19(
    const pd_Moment_V19_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringOpaqueCall_V19(
    const pd_OpaqueCall_V19_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringOptionAccountId_V19(
    const pd_OptionAccountId_V19_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringOptionChangesTrieConfiguration_V19(
    const pd_OptionChangesTrieConfiguration_V19_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringOptionPeriod_V19(
    const pd_OptionPeriod_V19_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringOptionProxyType_V19(
    const pd_OptionProxyType_V19_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringOptionTimepoint_V19(
    const pd_OptionTimepoint_V19_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringPerbill_V19(
    const pd_Perbill_V19_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringPercent_V19(
    const pd_Percent_V19_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringPeriod_V19(
    const pd_Period_V19_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringPriority_V19(
    const pd_Priority_V19_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringProof_V19(
    const pd_Proof_V19_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringProxyType_V19(
    const pd_ProxyType_V19_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringReferendumIndex_V19(
    const pd_ReferendumIndex_V19_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringRegistrarIndex_V19(
    const pd_RegistrarIndex_V19_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringRegistryId_V19(
    const pd_RegistryId_V19_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringRegistryInfo_V19(
    const pd_RegistryInfo_V19_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringRenouncing_V19(
    const pd_Renouncing_V19_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringResourceId_V19(
    const pd_ResourceId_V19_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringRewardDestination_V19(
    const pd_RewardDestination_V19_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringSignature_V19(
    const pd_Signature_V19_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringStreamDependency_V19(
    const pd_StreamDependency_V19_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringTimepoint_V19(
    const pd_Timepoint_V19_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringTokenId_V19(
    const pd_TokenId_V19_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringTupleAccountIdData_V19(
    const pd_TupleAccountIdData_V19_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringValidatorIndex_V19(
    const pd_ValidatorIndex_V19_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringValidatorPrefs_V19(
    const pd_ValidatorPrefs_V19_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringVecAccountId_V19(
    const pd_VecAccountId_V19_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringVecExtendedBalance_V19(
    const pd_VecExtendedBalance_V19_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringVecKeyValue_V19(
    const pd_VecKeyValue_V19_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringVecKey_V19(
    const pd_VecKey_V19_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringVecLookupSource_V19(
    const pd_VecLookupSource_V19_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringVecProof_V19(
    const pd_VecProof_V19_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringVecTupleAccountIdData_V19(
    const pd_VecTupleAccountIdData_V19_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringVecValidatorIndex_V19(
    const pd_VecValidatorIndex_V19_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringVestingInfo_V19(
    const pd_VestingInfo_V19_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringVote_V19(
    const pd_Vote_V19_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringWeight_V19(
    const pd_Weight_V19_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringu8_array_32_V19(
    const pd_u8_array_32_V19_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

#ifdef __cplusplus
}
#endif
