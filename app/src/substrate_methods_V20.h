
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
#include "substrate_types_V20.h"
#include <stddef.h>
#include <stdint.h>

// SORA MODULES
#define PD_CALL_SYSTEM_V20 0
#define PD_CALL_TIMESTAMP_V20 1
#define PD_CALL_BALANCES_V20 2
#define PD_CALL_RANDOMNESSCOLLECTIVEFLIP_V20 4
#define PD_CALL_TRANSACTIONPAYMENT_V20 5
#define PD_CALL_PERMISSIONS_V20 6
#define PD_CALL_REFERRALSYSTEM_V20 7
#define PD_CALL_REWARDS_V20 8
#define PD_CALL_XORFEE_V20 9
#define PD_CALL_BRIDGEMULTISIG_V20 10
#define PD_CALL_UTILITY_V20 11
#define PD_CALL_SESSION_V20 12
#define PD_CALL_HISTORICAL_V20 13
#define PD_CALL_BABE_V20 14
#define PD_CALL_GRANDPA_V20 15
#define PD_CALL_AUTHORSHIP_V20 16
#define PD_CALL_STAKING_V20 17
#define PD_CALL_TOKENS_V20 18
#define PD_CALL_CURRENCIES_V20 19
#define PD_CALL_TRADINGPAIR_V20 20
#define PD_CALL_ASSETS_V20 21
#define PD_CALL_POOLXYK_V20 25
#define PD_CALL_LIQUIDITYPROXY_V20 26
#define PD_CALL_ETHBRIDGE 31
#define PD_CALL_PSWAPDISTRIBUTION 32
#define PD_CALL_VESTEDREWARDS 40
#define PD_CALL_CERESSTAKING 45

// 11 - UTILITY CALLS
#define PD_CALL_UTILITY_BATCH_V20 0
typedef struct {
    pd_VecCall_t calls;
} pd_utility_batch_V20_t;

#define PD_CALL_UTILITY_BATCH_ALL_V20 2
typedef struct {
    pd_VecCall_t calls;
} pd_utility_batch_all_V20_t;

// 12 - SESSION CALLS
#define PD_CALL_SESSION_SET_KEYS_V20 0
typedef struct {
    pd_Keys_V20_t keys;
    pd_Bytes_t proof;
} pd_session_set_keys_V20_t;

#define PD_CALL_SESSION_PURGE_KEYS_V20 1
typedef struct {
} pd_session_purge_keys_V20_t;

// 17 - STAKING CALLS
#define PD_CALL_STAKING_BOND_V20 0
typedef struct {
    pd_LookupSource_V20_t controller;
    pd_CompactBalanceOf_t value;
    pd_RewardDestination_V20_t payee;
} pd_staking_bond_V20_t;

#define PD_CALL_STAKING_BOND_EXTRA_V20 1
typedef struct {
    pd_CompactBalanceOf_t max_additional;
} pd_staking_bond_extra_V20_t;

#define PD_CALL_STAKING_UNBOND_V20 2
typedef struct {
    pd_CompactBalanceOf_t value;
} pd_staking_unbond_V20_t;

#define PD_CALL_STAKING_WITHDRAW_UNBONDED_V20 3
typedef struct {
    pd_u32_t num_slashing_spans;
} pd_staking_withdraw_unbonded_V20_t;

#define PD_CALL_STAKING_VALIDATE_V20 4
typedef struct {
    pd_ValidatorPrefs_V20_t prefs;
} pd_staking_validate_V20_t;

#define PD_CALL_STAKING_NOMINATE_V20 5
typedef struct {
    pd_VecLookupSource_V20_t targets;
} pd_staking_nominate_V20_t;

#define PD_CALL_STAKING_CHILL_V20 6
typedef struct {
} pd_staking_chill_V20_t;

#define PD_CALL_STAKING_SET_PAYEE_V20 7
typedef struct {
    pd_RewardDestination_V20_t payee;
} pd_staking_set_payee_V20_t;

#define PD_CALL_STAKING_SET_CONTROLLER_V20 8
typedef struct {
    pd_LookupSource_V20_t controller;
} pd_staking_set_controller_V20_t;

#define PD_CALL_STAKING_PAYOUT_STAKERS_V20 18
typedef struct {
    pd_AccountId_V20_t validator_stash;
    pd_EraIndex_V20_t era;
} pd_staking_payout_stakers_V20_t;

#define PD_CALL_STAKING_REBOND_V20 19
typedef struct {
    pd_CompactBalanceOf_t value;
} pd_staking_rebond_V20_t;

// 21 - ASSETS CALLS
#define PD_CALL_ASSETS_TRANSFER_V20 1
typedef struct {
	pd_AssetId_V20_t asset_id;
	pd_AccountId_V20_t to;
	pd_Amount_V20_t amount;
} pd_assets_transfer_V20_t;

// 25 - LIQUIDITYPROXY CALLS
#define PD_CALL_POOLXYK_DEPOSIT_LIQUIDITY_V20 0
typedef struct {
	pd_DexId_V20_t dex_id;
	pd_AssetId_V20_t input_asset_a;
	pd_AssetId_V20_t input_asset_b;
	pd_Balance_V20_t input_a_desired;
	pd_Balance_V20_t input_b_desired;
	pd_Balance_V20_t input_a_min;
	pd_Balance_V20_t input_b_min;
} pd_poolxyk_deposit_liquidity_V20_t;
#define PD_CALL_POOLXYK_WITHDRAW_LIQUIDITY_V20 1
typedef struct {
	pd_DexId_V20_t dex_id;
	pd_AssetId_V20_t output_asset_a;
	pd_AssetId_V20_t output_asset_b;
	pd_Balance_V20_t marker_asset_desired;
	pd_Balance_V20_t output_a_min;
	pd_Balance_V20_t output_b_min;
} pd_poolxyk_withdraw_liquidity_V20_t;

// 26 - LIQUIDITYPROXY CALLS
#define PD_CALL_LIQUIDITYPROXY_SWAPS_V20 0
typedef struct {
	pd_DexId_V20_t dex_id;
	pd_AssetId_V20_t input_asset_id;
	pd_AssetId_V20_t output_asset_id;
	pd_SwapAmount_V20_t swap_amount;
	pd_VecLiquiditySourceType_V20_t selected_source_types;
	pd_FilterMode_V20_t filter_mode;
} pd_liquidityproxy_swap_V20_t;

// 31 - ETHBRIDGE
#define PD_CALL_ETHBRIDGE_TRANSFER_TO_SIDECHAIN_V20 3
typedef struct {
	pd_AssetIdOf_V20_t asset_id;
	pd_EthereumAddress_V20_t to;
	pd_Balance_V20_t amount;
	pd_BridgeNetworkId_V20_t network_id;

} pd_ethbridge_transfer_to_sidechain_V20_t;

#define PD_CALL_ETHBRIDGE_REQUEST_FROM_SIDECHAIN_V20 4
typedef struct {
	pd_Hash_t eth_tx_hash;
	pd_EthereumAddress_V20_t kind;
	pd_BridgeNetworkId_V20_t network_id;

} pd_ethbridge_request_from_sidechain_V20_t;

#define PD_CALL_PSWAPDISTRIBUTION_CLAIM_INCENTIVE 0
typedef struct {
} pd_pswapdistribution_claim_incentive_V20_t;

#define PD_CALL_VESTEDREWARDS_CLAIM_REWARDS	0
typedef struct {
} pd_vestedrewards_claim_rewards_V20_t;

// 45 - CERESSTAKING
#define PD_CALL_CERESSTAKING_DEPOSIT	0
typedef struct {

} pd_ceresstaking_deposit_V20_t;

#define PD_CALL_CERESSTAKING_WITHDRAW	1
typedef struct {
} pd_ceresstaking_withdraw_V20_t;



#ifdef SUBSTRATE_PARSER_FULL

#endif

typedef union {

    pd_utility_batch_V20_t utility_batch_V20;
    pd_utility_batch_all_V20_t utility_batch_all_V20;

    pd_session_set_keys_V20_t session_set_keys_V20;
    pd_session_purge_keys_V20_t session_purge_keys_V20;

	pd_staking_bond_V20_t staking_bond_V20;
    pd_staking_bond_extra_V20_t staking_bond_extra_V20;
    pd_staking_unbond_V20_t staking_unbond_V20;
    pd_staking_withdraw_unbonded_V20_t staking_withdraw_unbonded_V20;
    pd_staking_validate_V20_t staking_validate_V20;
    pd_staking_nominate_V20_t staking_nominate_V20;
    pd_staking_chill_V20_t staking_chill_V20;
    pd_staking_set_payee_V20_t staking_set_payee_V20;
    pd_staking_set_controller_V20_t staking_set_controller_V20;
    pd_staking_payout_stakers_V20_t staking_payout_stakers_V20;
    pd_staking_rebond_V20_t staking_rebond_V20;

    // PolkaSwap Related
    pd_poolxyk_deposit_liquidity_V20_t poolxyk_deposit_liquidity_V20;
    pd_poolxyk_withdraw_liquidity_V20_t poolxyk_withdraw_liquidity_V20;
    pd_liquidityproxy_swap_V20_t liquidityproxy_swap_V20;
	pd_assets_transfer_V20_t assets_transfer_V20;
	pd_ethbridge_transfer_to_sidechain_V20_t ethbridge_transfer_to_sidechain_V20;
	pd_ethbridge_request_from_sidechain_V20_t ethbridge_request_from_sidechain_V20;
	pd_pswapdistribution_claim_incentive_V20_t pswapdistribution_claim_incentive_V20;
	pd_vestedrewards_claim_rewards_V20_t vestedrewards_claim_rewards_V20;

	// Ceres
	pd_ceresstaking_deposit_V20_t ceresstaking_deposit_V20;
	pd_ceresstaking_withdraw_V20_t ceresstaking_withdraw_V20;

#ifdef SUBSTRATE_PARSER_FULL

#endif
} pd_MethodBasic_V20_t;

// 2 - BALANCES CALLS
#define PD_CALL_BALANCES_TRANSFER_V20 0
typedef struct {
	pd_LookupSource_V20_t dest;
	pd_CompactBalance_t value;
} pd_balances_transfer_V20_t;

#define PD_CALL_BALANCES_TRANSFER_KEEP_ALIVE_V20 3
typedef struct {
    pd_LookupSource_V20_t dest;
    pd_CompactBalance_t value;
} pd_balances_transfer_keep_alive_V20_t;

#ifdef SUBSTRATE_PARSER_FULL

#endif

typedef union {
	pd_balances_transfer_V20_t balances_transfer_V20;
	pd_balances_transfer_keep_alive_V20_t balances_transfer_keep_alive_V20;

    pd_utility_batch_V20_t utility_batch_V20;
    pd_utility_batch_all_V20_t utility_batch_all_V20;

	#ifdef SUBSTRATE_PARSER_FULL

	#endif
} pd_MethodNested_V20_t;

typedef union {
    pd_MethodBasic_V20_t basic;
    pd_MethodNested_V20_t nested;
} pd_Method_V20_t;

#ifdef __cplusplus
}
#endif

#pragma clang diagnostic pop
