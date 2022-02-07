
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
#include "substrate_types_V24.h"
#include <stddef.h>
#include <stdint.h>

// SORA MODULES
#define PD_CALL_SYSTEM_V24 0
#define PD_CALL_TIMESTAMP_V24 1
#define PD_CALL_BALANCES_V24 2
#define PD_CALL_RANDOMNESSCOLLECTIVEFLIP_V24 4
#define PD_CALL_TRANSACTIONPAYMENT_V24 5
#define PD_CALL_PERMISSIONS_V24 6
#define PD_CALL_REFERRALSYSTEM_V24 7
#define PD_CALL_REWARDS_V24 8
#define PD_CALL_XORFEE_V24 9
#define PD_CALL_BRIDGEMULTISIG_V24 10
#define PD_CALL_UTILITY_V24 11
#define PD_CALL_SESSION_V24 12
#define PD_CALL_HISTORICAL_V24 13
#define PD_CALL_BABE_V24 14
#define PD_CALL_GRANDPA_V24 15
#define PD_CALL_AUTHORSHIP_V24 16
#define PD_CALL_STAKING_V24 17
#define PD_CALL_TOKENS_V24 18
#define PD_CALL_CURRENCIES_V24 19
#define PD_CALL_TRADINGPAIR_V24 20
#define PD_CALL_ASSETS_V24 21
#define PD_CALL_POOLXYK_V24 25
#define PD_CALL_LIQUIDITYPROXY_V24 26
#define PD_CALL_ETHBRIDGE 31
#define PD_CALL_PSWAPDISTRIBUTION 32
#define PD_CALL_VESTEDREWARDS 40
#define PD_CALL_CERESSTAKING 45

// 11 - UTILITY CALLS
#define PD_CALL_UTILITY_BATCH_V24 0
typedef struct {
    pd_VecCall_t calls;
} pd_utility_batch_V24_t;

#define PD_CALL_UTILITY_BATCH_ALL_V24 2
typedef struct {
    pd_VecCall_t calls;
} pd_utility_batch_all_V24_t;

// 12 - SESSION CALLS
#define PD_CALL_SESSION_SET_KEYS_V24 0
typedef struct {
    pd_Keys_V24_t keys;
    pd_Bytes_t proof;
} pd_session_set_keys_V24_t;

#define PD_CALL_SESSION_PURGE_KEYS_V24 1
typedef struct {
} pd_session_purge_keys_V24_t;

// 17 - STAKING CALLS
#define PD_CALL_STAKING_BOND_V24 0
typedef struct {
    pd_LookupSource_V24_t controller;
    pd_CompactBalanceOf_t value;
    pd_RewardDestination_V24_t payee;
} pd_staking_bond_V24_t;

#define PD_CALL_STAKING_BOND_EXTRA_V24 1
typedef struct {
    pd_CompactBalanceOf_t max_additional;
} pd_staking_bond_extra_V24_t;

#define PD_CALL_STAKING_UNBOND_V24 2
typedef struct {
    pd_CompactBalanceOf_t value;
} pd_staking_unbond_V24_t;

#define PD_CALL_STAKING_WITHDRAW_UNBONDED_V24 3
typedef struct {
    pd_u32_t num_slashing_spans;
} pd_staking_withdraw_unbonded_V24_t;

#define PD_CALL_STAKING_VALIDATE_V24 4
typedef struct {
    pd_ValidatorPrefs_V24_t prefs;
} pd_staking_validate_V24_t;

#define PD_CALL_STAKING_NOMINATE_V24 5
typedef struct {
    pd_VecLookupSource_V24_t targets;
} pd_staking_nominate_V24_t;

#define PD_CALL_STAKING_CHILL_V24 6
typedef struct {
} pd_staking_chill_V24_t;

#define PD_CALL_STAKING_SET_PAYEE_V24 7
typedef struct {
    pd_RewardDestination_V24_t payee;
} pd_staking_set_payee_V24_t;

#define PD_CALL_STAKING_SET_CONTROLLER_V24 8
typedef struct {
    pd_LookupSource_V24_t controller;
} pd_staking_set_controller_V24_t;

#define PD_CALL_STAKING_PAYOUT_STAKERS_V24 18
typedef struct {
    pd_AccountId_V24_t validator_stash;
    pd_EraIndex_V24_t era;
} pd_staking_payout_stakers_V24_t;

#define PD_CALL_STAKING_REBOND_V24 19
typedef struct {
    pd_CompactBalanceOf_t value;
} pd_staking_rebond_V24_t;

// 21 - ASSETS CALLS
#define PD_CALL_ASSETS_TRANSFER_V24 1
typedef struct {
	pd_AssetId_V24_t asset_id;
	pd_AccountId_V24_t to;
	pd_Amount_V24_t amount;
} pd_assets_transfer_V24_t;

// 25 - LIQUIDITYPROXY CALLS
#define PD_CALL_POOLXYK_DEPOSIT_LIQUIDITY_V24 0
typedef struct {
	pd_DexId_V24_t dex_id;
	pd_AssetId_V24_t input_asset_a;
	pd_AssetId_V24_t input_asset_b;
	pd_Balance_V24_t input_a_desired;
	pd_Balance_V24_t input_b_desired;
	pd_Balance_V24_t input_a_min;
	pd_Balance_V24_t input_b_min;
} pd_poolxyk_deposit_liquidity_V24_t;
#define PD_CALL_POOLXYK_WITHDRAW_LIQUIDITY_V24 1
typedef struct {
	pd_DexId_V24_t dex_id;
	pd_AssetId_V24_t output_asset_a;
	pd_AssetId_V24_t output_asset_b;
	pd_Balance_V24_t marker_asset_desired;
	pd_Balance_V24_t output_a_min;
	pd_Balance_V24_t output_b_min;
} pd_poolxyk_withdraw_liquidity_V24_t;

// 26 - LIQUIDITYPROXY CALLS
#define PD_CALL_LIQUIDITYPROXY_SWAPS_V24 0
typedef struct {
	pd_DexId_V24_t dex_id;
	pd_AssetId_V24_t input_asset_id;
	pd_AssetId_V24_t output_asset_id;
	pd_SwapAmount_V24_t swap_amount;
	pd_VecLiquiditySourceType_V24_t selected_source_types;
	pd_FilterMode_V24_t filter_mode;
} pd_liquidityproxy_swap_V24_t;

// 31 - ETHBRIDGE
#define PD_CALL_ETHBRIDGE_TRANSFER_TO_SIDECHAIN_V24 3
typedef struct {
	pd_AssetIdOf_V24_t asset_id;
	pd_EthereumAddress_V24_t to;
	pd_Balance_V24_t amount;
	pd_BridgeNetworkId_V24_t network_id;

} pd_ethbridge_transfer_to_sidechain_V24_t;

#define PD_CALL_ETHBRIDGE_REQUEST_FROM_SIDECHAIN_V24 4
typedef struct {
	pd_Hash_t eth_tx_hash;
	pd_EthereumAddress_V24_t kind;
	pd_BridgeNetworkId_V24_t network_id;

} pd_ethbridge_request_from_sidechain_V24_t;

#define PD_CALL_PSWAPDISTRIBUTION_CLAIM_INCENTIVE 0
typedef struct {
} pd_pswapdistribution_claim_incentive_V24_t;

#define PD_CALL_VESTEDREWARDS_CLAIM_REWARDS	0
typedef struct {
} pd_vestedrewards_claim_rewards_V24_t;

// 45 - CERESSTAKING
#define PD_CALL_CERESSTAKING_DEPOSIT	0
typedef struct {
	pd_Balance_V24_t amount;
} pd_ceresstaking_deposit_V24_t;

#define PD_CALL_CERESSTAKING_WITHDRAW	1
typedef struct {
} pd_ceresstaking_withdraw_V24_t;



#ifdef SUBSTRATE_PARSER_FULL

#endif

typedef union {

    pd_utility_batch_V24_t utility_batch_V24;
    pd_utility_batch_all_V24_t utility_batch_all_V24;

    pd_session_set_keys_V24_t session_set_keys_V24;
    pd_session_purge_keys_V24_t session_purge_keys_V24;

	pd_staking_bond_V24_t staking_bond_V24;
    pd_staking_bond_extra_V24_t staking_bond_extra_V24;
    pd_staking_unbond_V24_t staking_unbond_V24;
    pd_staking_withdraw_unbonded_V24_t staking_withdraw_unbonded_V24;
    pd_staking_validate_V24_t staking_validate_V24;
    pd_staking_nominate_V24_t staking_nominate_V24;
    pd_staking_chill_V24_t staking_chill_V24;
    pd_staking_set_payee_V24_t staking_set_payee_V24;
    pd_staking_set_controller_V24_t staking_set_controller_V24;
    pd_staking_payout_stakers_V24_t staking_payout_stakers_V24;
    pd_staking_rebond_V24_t staking_rebond_V24;

    // PolkaSwap Related
    pd_poolxyk_deposit_liquidity_V24_t poolxyk_deposit_liquidity_V24;
    pd_poolxyk_withdraw_liquidity_V24_t poolxyk_withdraw_liquidity_V24;
    pd_liquidityproxy_swap_V24_t liquidityproxy_swap_V24;
	pd_assets_transfer_V24_t assets_transfer_V24;
	pd_ethbridge_transfer_to_sidechain_V24_t ethbridge_transfer_to_sidechain_V24;
	pd_ethbridge_request_from_sidechain_V24_t ethbridge_request_from_sidechain_V24;
	pd_pswapdistribution_claim_incentive_V24_t pswapdistribution_claim_incentive_V24;
	pd_vestedrewards_claim_rewards_V24_t vestedrewards_claim_rewards_V24;

	// Ceres
	pd_ceresstaking_deposit_V24_t ceresstaking_deposit_V24;
	pd_ceresstaking_withdraw_V24_t ceresstaking_withdraw_V24;

#ifdef SUBSTRATE_PARSER_FULL

#endif
} pd_MethodBasic_V24_t;

// 2 - BALANCES CALLS
#define PD_CALL_BALANCES_TRANSFER_V24 0
typedef struct {
	pd_LookupSource_V24_t dest;
	pd_CompactBalance_t value;
} pd_balances_transfer_V24_t;

#define PD_CALL_BALANCES_TRANSFER_KEEP_ALIVE_V24 3
typedef struct {
    pd_LookupSource_V24_t dest;
    pd_CompactBalance_t value;
} pd_balances_transfer_keep_alive_V24_t;

#ifdef SUBSTRATE_PARSER_FULL

#endif

typedef union {
	pd_balances_transfer_V24_t balances_transfer_V24;
	pd_balances_transfer_keep_alive_V24_t balances_transfer_keep_alive_V24;

    pd_utility_batch_V24_t utility_batch_V24;
    pd_utility_batch_all_V24_t utility_batch_all_V24;

	#ifdef SUBSTRATE_PARSER_FULL

	#endif
} pd_MethodNested_V24_t;

typedef union {
    pd_MethodBasic_V24_t basic;
    pd_MethodNested_V24_t nested;
} pd_Method_V24_t;

#ifdef __cplusplus
}
#endif

#pragma clang diagnostic pop
