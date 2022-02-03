
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
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wextern-c-compat"
#pragma once

#ifdef __cplusplus
extern "C" {
#endif

#include "substrate_types.h"
#include "substrate_types_V22.h"
#include <stddef.h>
#include <stdint.h>

// SORA MODULES
#define PD_CALL_SYSTEM_V22 0
#define PD_CALL_TIMESTAMP_V22 1
#define PD_CALL_BALANCES_V22 2
#define PD_CALL_RANDOMNESSCOLLECTIVEFLIP_V22 4
#define PD_CALL_TRANSACTIONPAYMENT_V22 5
#define PD_CALL_PERMISSIONS_V22 6
#define PD_CALL_REFERRALSYSTEM_V22 7
#define PD_CALL_REWARDS_V22 8
#define PD_CALL_XORFEE_V22 9
#define PD_CALL_BRIDGEMULTISIG_V22 10
#define PD_CALL_UTILITY_V22 11
#define PD_CALL_SESSION_V22 12
#define PD_CALL_HISTORICAL_V22 13
#define PD_CALL_BABE_V22 14
#define PD_CALL_GRANDPA_V22 15
#define PD_CALL_AUTHORSHIP_V22 16
#define PD_CALL_STAKING_V22 17
#define PD_CALL_TOKENS_V22 18
#define PD_CALL_CURRENCIES_V22 19
#define PD_CALL_TRADINGPAIR_V22 20
#define PD_CALL_ASSETS_V22 21
#define PD_CALL_POOLXYK_V22 25
#define PD_CALL_LIQUIDITYPROXY_V22 26
#define PD_CALL_ETHBRIDGE 31
#define PD_CALL_PSWAPDISTRIBUTION 32
#define PD_CALL_VESTEDREWARDS 40
#define PD_CALL_CERESSTAKING 45

// 11 - UTILITY CALLS
#define PD_CALL_UTILITY_BATCH_V22 0
typedef struct {
    pd_VecCall_t calls;
} pd_utility_batch_V22_t;

#define PD_CALL_UTILITY_BATCH_ALL_V22 2
typedef struct {
    pd_VecCall_t calls;
} pd_utility_batch_all_V22_t;

// 12 - SESSION CALLS
#define PD_CALL_SESSION_SET_KEYS_V22 0
typedef struct {
    pd_Keys_V22_t keys;
    pd_Bytes_t proof;
} pd_session_set_keys_V22_t;

#define PD_CALL_SESSION_PURGE_KEYS_V22 1
typedef struct {
} pd_session_purge_keys_V22_t;

// 17 - STAKING CALLS
#define PD_CALL_STAKING_BOND_V22 0
typedef struct {
    pd_LookupSource_V22_t controller;
    pd_CompactBalanceOf_t value;
    pd_RewardDestination_V22_t payee;
} pd_staking_bond_V22_t;

#define PD_CALL_STAKING_BOND_EXTRA_V22 1
typedef struct {
    pd_CompactBalanceOf_t max_additional;
} pd_staking_bond_extra_V22_t;

#define PD_CALL_STAKING_UNBOND_V22 2
typedef struct {
    pd_CompactBalanceOf_t value;
} pd_staking_unbond_V22_t;

#define PD_CALL_STAKING_WITHDRAW_UNBONDED_V22 3
typedef struct {
    pd_u32_t num_slashing_spans;
} pd_staking_withdraw_unbonded_V22_t;

#define PD_CALL_STAKING_VALIDATE_V22 4
typedef struct {
    pd_ValidatorPrefs_V22_t prefs;
} pd_staking_validate_V22_t;

#define PD_CALL_STAKING_NOMINATE_V22 5
typedef struct {
    pd_VecLookupSource_V22_t targets;
} pd_staking_nominate_V22_t;

#define PD_CALL_STAKING_CHILL_V22 6
typedef struct {
} pd_staking_chill_V22_t;

#define PD_CALL_STAKING_SET_PAYEE_V22 7
typedef struct {
    pd_RewardDestination_V22_t payee;
} pd_staking_set_payee_V22_t;

#define PD_CALL_STAKING_SET_CONTROLLER_V22 8
typedef struct {
    pd_LookupSource_V22_t controller;
} pd_staking_set_controller_V22_t;

#define PD_CALL_STAKING_PAYOUT_STAKERS_V22 18
typedef struct {
    pd_AccountId_V22_t validator_stash;
    pd_EraIndex_V22_t era;
} pd_staking_payout_stakers_V22_t;

#define PD_CALL_STAKING_REBOND_V22 19
typedef struct {
    pd_CompactBalanceOf_t value;
} pd_staking_rebond_V22_t;

// 21 - ASSETS CALLS
#define PD_CALL_ASSETS_TRANSFER_V22 1
typedef struct {
	pd_AssetId_V22_t asset_id;
	pd_AccountId_V22_t to;
	pd_Amount_V22_t amount;
} pd_assets_transfer_V22_t;

// 25 - LIQUIDITYPROXY CALLS
#define PD_CALL_POOLXYK_DEPOSIT_LIQUIDITY_V22 0
typedef struct {
	pd_DexId_V22_t dex_id;
	pd_AssetId_V22_t input_asset_a;
	pd_AssetId_V22_t input_asset_b;
	pd_Balance_V22_t input_a_desired;
	pd_Balance_V22_t input_b_desired;
	pd_Balance_V22_t input_a_min;
	pd_Balance_V22_t input_b_min;
} pd_poolxyk_deposit_liquidity_V22_t;
#define PD_CALL_POOLXYK_WITHDRAW_LIQUIDITY_V22 1
typedef struct {
	pd_DexId_V22_t dex_id;
	pd_AssetId_V22_t output_asset_a;
	pd_AssetId_V22_t output_asset_b;
	pd_Balance_V22_t marker_asset_desired;
	pd_Balance_V22_t output_a_min;
	pd_Balance_V22_t output_b_min;
} pd_poolxyk_withdraw_liquidity_V22_t;

// 26 - LIQUIDITYPROXY CALLS
#define PD_CALL_LIQUIDITYPROXY_SWAPS_V22 0
typedef struct {
	pd_DexId_V22_t dex_id;
	pd_AssetId_V22_t input_asset_id;
	pd_AssetId_V22_t output_asset_id;
	pd_SwapAmount_V22_t swap_amount;
	pd_VecLiquiditySourceType_V22_t selected_source_types;
	pd_FilterMode_V22_t filter_mode;
} pd_liquidityproxy_swap_V22_t;

// 31 - ETHBRIDGE
#define PD_CALL_ETHBRIDGE_TRANSFER_TO_SIDECHAIN_V22 3
typedef struct {
	pd_AssetIdOf_V22_t asset_id;
	pd_EthereumAddress_V22_t to;
	pd_Balance_V22_t amount;
	pd_BridgeNetworkId_V22_t network_id;

} pd_ethbridge_transfer_to_sidechain_V22_t;

#define PD_CALL_ETHBRIDGE_REQUEST_FROM_SIDECHAIN_V22 4
typedef struct {
	pd_Hash_t eth_tx_hash;
	pd_EthereumAddress_V22_t kind;
	pd_BridgeNetworkId_V22_t network_id;

} pd_ethbridge_request_from_sidechain_V22_t;

#define PD_CALL_PSWAPDISTRIBUTION_CLAIM_INCENTIVE 0
typedef struct {
} pd_pswapdistribution_claim_incentive_V22_t;

#define PD_CALL_VESTEDREWARDS_CLAIM_REWARDS	0
typedef struct {
} pd_vestedrewards_claim_rewards_V22_t;

// 45 - CERESSTAKING
#define PD_CALL_CERESSTAKING_DEPOSIT	0
typedef struct {
	pd_Balance_V22_t amount;
} pd_ceresstaking_deposit_V22_t;

#define PD_CALL_CERESSTAKING_WITHDRAW	1
typedef struct {
} pd_ceresstaking_withdraw_V22_t;



#ifdef SUBSTRATE_PARSER_FULL

#endif

typedef union {

    pd_utility_batch_V22_t utility_batch_V22;
    pd_utility_batch_all_V22_t utility_batch_all_V22;

    pd_session_set_keys_V22_t session_set_keys_V22;
    pd_session_purge_keys_V22_t session_purge_keys_V22;

	pd_staking_bond_V22_t staking_bond_V22;
    pd_staking_bond_extra_V22_t staking_bond_extra_V22;
    pd_staking_unbond_V22_t staking_unbond_V22;
    pd_staking_withdraw_unbonded_V22_t staking_withdraw_unbonded_V22;
    pd_staking_validate_V22_t staking_validate_V22;
    pd_staking_nominate_V22_t staking_nominate_V22;
    pd_staking_chill_V22_t staking_chill_V22;
    pd_staking_set_payee_V22_t staking_set_payee_V22;
    pd_staking_set_controller_V22_t staking_set_controller_V22;
    pd_staking_payout_stakers_V22_t staking_payout_stakers_V22;
    pd_staking_rebond_V22_t staking_rebond_V22;

    // PolkaSwap Related
    pd_poolxyk_deposit_liquidity_V22_t poolxyk_deposit_liquidity_V22;
    pd_poolxyk_withdraw_liquidity_V22_t poolxyk_withdraw_liquidity_V22;
    pd_liquidityproxy_swap_V22_t liquidityproxy_swap_V22;
	pd_assets_transfer_V22_t assets_transfer_V22;
	pd_ethbridge_transfer_to_sidechain_V22_t ethbridge_transfer_to_sidechain_V22;
	pd_ethbridge_request_from_sidechain_V22_t ethbridge_request_from_sidechain_V22;
	pd_pswapdistribution_claim_incentive_V22_t pswapdistribution_claim_incentive_V22;
	pd_vestedrewards_claim_rewards_V22_t vestedrewards_claim_rewards_V22;

	// Ceres
	pd_ceresstaking_deposit_V22_t ceresstaking_deposit_V22;
	pd_ceresstaking_withdraw_V22_t ceresstaking_withdraw_V22;

#ifdef SUBSTRATE_PARSER_FULL

#endif
} pd_MethodBasic_V22_t;

// 2 - BALANCES CALLS
#define PD_CALL_BALANCES_TRANSFER_V22 0
typedef struct {
	pd_LookupSource_V22_t dest;
	pd_CompactBalance_t value;
} pd_balances_transfer_V22_t;

#define PD_CALL_BALANCES_TRANSFER_KEEP_ALIVE_V22 3
typedef struct {
    pd_LookupSource_V22_t dest;
    pd_CompactBalance_t value;
} pd_balances_transfer_keep_alive_V22_t;

#ifdef SUBSTRATE_PARSER_FULL

#endif

typedef union {
	pd_balances_transfer_V22_t balances_transfer_V22;
	pd_balances_transfer_keep_alive_V22_t balances_transfer_keep_alive_V22;

    pd_utility_batch_V22_t utility_batch_V22;
    pd_utility_batch_all_V22_t utility_batch_all_V22;

	#ifdef SUBSTRATE_PARSER_FULL

	#endif
} pd_MethodNested_V22_t;

typedef union {
    pd_MethodBasic_V22_t basic;
    pd_MethodNested_V22_t nested;
} pd_Method_V22_t;

#ifdef __cplusplus
}
#endif

#pragma clang diagnostic pop
