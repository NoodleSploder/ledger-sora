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
#include "substrate_methods_V22.h"
#include "substrate_types_V22.h"
#include <stddef.h>
#include <stdint.h>

// Read functions
parser_error_t _readAccountId_V22(parser_context_t* c, pd_AccountId_V22_t* v);
parser_error_t _readAccountIndex_V22(parser_context_t* c, pd_AccountIndex_V22_t* v);
parser_error_t _readAddress_V22(parser_context_t* c, pd_Address_V22_t* v);
parser_error_t _readAssetInfo_V22(parser_context_t* c, pd_AssetInfo_V22_t* v);
parser_error_t _readChainId_V22(parser_context_t* c, pd_ChainId_V22_t* v);
parser_error_t _readEraIndex_V22(parser_context_t* c, pd_EraIndex_V22_t* v);
parser_error_t _readExtendedBalance_V22(parser_context_t* c, pd_ExtendedBalance_V22_t* v);
parser_error_t _readH256_array_3_V22(parser_context_t* c, pd_H256_array_3_V22_t* v);
parser_error_t _readKeyValue_V22(parser_context_t* c, pd_KeyValue_V22_t* v);
parser_error_t _readKey_V22(parser_context_t* c, pd_Key_V22_t* v);
parser_error_t _readKeys_V22(parser_context_t* c, pd_Keys_V22_t* v);
parser_error_t _readTokenId_V22(parser_context_t* c, pd_TokenId_V22_t* v);
parser_error_t _readTupleAccountIdData_V22(parser_context_t* c, pd_TupleAccountIdData_V22_t* v);
parser_error_t _readVecAccountId_V22(parser_context_t* c, pd_VecAccountId_V22_t* v);
parser_error_t _readVecExtendedBalance_V22(parser_context_t* c, pd_VecExtendedBalance_V22_t* v);
parser_error_t _readVecKeyValue_V22(parser_context_t* c, pd_VecKeyValue_V22_t* v);
parser_error_t _readVecKey_V22(parser_context_t* c, pd_VecKey_V22_t* v);
parser_error_t _readVecLookupSource_V22(parser_context_t* c, pd_VecLookupSource_V22_t* v);
parser_error_t _readVecTupleAccountIdData_V22(parser_context_t* c, pd_VecTupleAccountIdData_V22_t* v);
parser_error_t _readu8_array_32_V22(parser_context_t* c, pd_u8_array_32_V22_t* v);
parser_error_t _readCompactAccountIndex_V22(parser_context_t* c, pd_CompactAccountIndex_V22_t* v);
parser_error_t _readRewardDestination_V22(parser_context_t* c, pd_RewardDestination_V22_t* v);
parser_error_t _readCompactPerBill_V22(parser_context_t* c, pd_CompactPerBill_V22_t* v);

// toString functions

parser_error_t _toStringSoraAccountId_V22(
    const pd_AccountId_V22_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);


parser_error_t _toStringAccountId_V22(
    const pd_AccountId_V22_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringAccountIndex_V22(
    const pd_AccountIndex_V22_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringAccountVoteSplit_V22(
    const pd_AccountVoteSplit_V22_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringAccountVoteStandard_V22(
    const pd_AccountVoteStandard_V22_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringAccountVote_V22(
    const pd_AccountVote_V22_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringAddress_V22(
    const pd_Address_V22_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringAssetInfo_V22(
    const pd_AssetInfo_V22_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringBabeEquivocationProof_V22(
    const pd_BabeEquivocationProof_V22_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringChainId_V22(
    const pd_ChainId_V22_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringChangesTrieConfiguration_V22(
    const pd_ChangesTrieConfiguration_V22_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringCompactAssignments_V22(
    const pd_CompactAssignments_V22_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringCompactEraIndex_V22(
    const pd_CompactEraIndex_V22_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringCompactMemberCount_V22(
    const pd_CompactMemberCount_V22_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringCompactMoment_V22(
    const pd_CompactMoment_V22_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringCompactPerBill_V22(
    const pd_CompactPerBill_V22_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringCompactPropIndex_V22(
    const pd_CompactPropIndex_V22_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringCompactProposalIndex_V22(
    const pd_CompactProposalIndex_V22_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringCompactReferendumIndex_V22(
    const pd_CompactReferendumIndex_V22_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringCompactRegistrarIndex_V22(
    const pd_CompactRegistrarIndex_V22_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringCompactWeight_V22(
    const pd_CompactWeight_V22_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringConviction_V22(
    const pd_Conviction_V22_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringDefunctVoter_V22(
    const pd_DefunctVoter_V22_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringDepositNonce_V22(
    const pd_DepositNonce_V22_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringElectionScore_V22(
    const pd_ElectionScore_V22_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringElectionSize_V22(
    const pd_ElectionSize_V22_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringEraIndex_V22(
    const pd_EraIndex_V22_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringExtendedBalance_V22(
    const pd_ExtendedBalance_V22_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringGrandpaEquivocationProof_V22(
    const pd_GrandpaEquivocationProof_V22_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringH256_array_3_V22(
    const pd_H256_array_3_V22_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringIdentityFields_V22(
    const pd_IdentityFields_V22_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringIdentityInfo_V22(
    const pd_IdentityInfo_V22_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringIdentityJudgement_V22(
    const pd_IdentityJudgement_V22_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringKeyOwnerProof_V22(
    const pd_KeyOwnerProof_V22_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringKeyValue_V22(
    const pd_KeyValue_V22_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringKey_V22(
    const pd_Key_V22_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringKeys_V22(
    const pd_Keys_V22_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringLookupSource_V22(
    const pd_LookupSource_V22_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringMemberCount_V22(
    const pd_MemberCount_V22_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringMintInfo_V22(
    const pd_MintInfo_V22_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringMoment_V22(
    const pd_Moment_V22_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringOpaqueCall_V22(
    const pd_OpaqueCall_V22_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringOptionAccountId_V22(
    const pd_OptionAccountId_V22_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringOptionChangesTrieConfiguration_V22(
    const pd_OptionChangesTrieConfiguration_V22_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringOptionPeriod_V22(
    const pd_OptionPeriod_V22_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringOptionProxyType_V22(
    const pd_OptionProxyType_V22_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringOptionTimepoint_V22(
    const pd_OptionTimepoint_V22_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringPerbill_V22(
    const pd_Perbill_V22_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringPercent_V22(
    const pd_Percent_V22_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringPeriod_V22(
    const pd_Period_V22_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringPriority_V22(
    const pd_Priority_V22_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringProof_V22(
    const pd_Proof_V22_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringProxyType_V22(
    const pd_ProxyType_V22_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringReferendumIndex_V22(
    const pd_ReferendumIndex_V22_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringRegistrarIndex_V22(
    const pd_RegistrarIndex_V22_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringRegistryId_V22(
    const pd_RegistryId_V22_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringRegistryInfo_V22(
    const pd_RegistryInfo_V22_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringRenouncing_V22(
    const pd_Renouncing_V22_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringResourceId_V22(
    const pd_ResourceId_V22_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringRewardDestination_V22(
    const pd_RewardDestination_V22_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringSignature_V22(
    const pd_Signature_V22_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringStreamDependency_V22(
    const pd_StreamDependency_V22_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringTimepoint_V22(
    const pd_Timepoint_V22_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringTokenId_V22(
    const pd_TokenId_V22_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringTupleAccountIdData_V22(
    const pd_TupleAccountIdData_V22_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringValidatorIndex_V22(
    const pd_ValidatorIndex_V22_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringValidatorPrefs_V22(
    const pd_ValidatorPrefs_V22_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringVecAccountId_V22(
    const pd_VecAccountId_V22_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringVecExtendedBalance_V22(
    const pd_VecExtendedBalance_V22_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringVecKeyValue_V22(
    const pd_VecKeyValue_V22_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringVecKey_V22(
    const pd_VecKey_V22_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringVecLookupSource_V22(
    const pd_VecLookupSource_V22_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringVecProof_V22(
    const pd_VecProof_V22_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringVecTupleAccountIdData_V22(
    const pd_VecTupleAccountIdData_V22_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringVecValidatorIndex_V22(
    const pd_VecValidatorIndex_V22_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringVestingInfo_V22(
    const pd_VestingInfo_V22_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringVote_V22(
    const pd_Vote_V22_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringWeight_V22(
    const pd_Weight_V22_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringu8_array_32_V22(
    const pd_u8_array_32_V22_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

#ifdef __cplusplus
}
#endif
