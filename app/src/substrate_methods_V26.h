
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
#include "substrate_types_V26.h"
#include <stddef.h>
#include <stdint.h>

// SORA MODULES
#define PD_CALL_SYSTEM_V26 0
#define PD_CALL_TIMESTAMP_V26 1
#define PD_CALL_BALANCES_V26 2
#define PD_CALL_RANDOMNESSCOLLECTIVEFLIP_V26 4
#define PD_CALL_TRANSACTIONPAYMENT_V26 5
#define PD_CALL_PERMISSIONS_V26 6
#define PD_CALL_REFERRALSYSTEM_V26 7
#define PD_CALL_REWARDS_V26 8
#define PD_CALL_XORFEE_V26 9
#define PD_CALL_BRIDGEMULTISIG_V26 10
#define PD_CALL_UTILITY_V26 11
#define PD_CALL_SESSION_V26 12
#define PD_CALL_HISTORICAL_V26 13
#define PD_CALL_BABE_V26 14
#define PD_CALL_GRANDPA_V26 15
#define PD_CALL_AUTHORSHIP_V26 16
#define PD_CALL_STAKING_V26 17
#define PD_CALL_TOKENS_V26 18
#define PD_CALL_CURRENCIES_V26 19
#define PD_CALL_TRADINGPAIR_V26 20
#define PD_CALL_ASSETS_V26 21
#define PD_CALL_POOLXYK_V26 25
#define PD_CALL_LIQUIDITYPROXY_V26 26
#define PD_CALL_ETHBRIDGE 31
#define PD_CALL_PSWAPDISTRIBUTION 32
#define PD_CALL_VESTEDREWARDS 40
#define PD_CALL_CERESSTAKING 45

// 11 - UTILITY CALLS
#define PD_CALL_UTILITY_BATCH_V26 0
typedef struct {
    pd_VecCall_t calls;
} pd_utility_batch_V26_t;

#define PD_CALL_UTILITY_BATCH_ALL_V26 2
typedef struct {
    pd_VecCall_t calls;
} pd_utility_batch_all_V26_t;

// 12 - SESSION CALLS
#define PD_CALL_SESSION_SET_KEYS_V26 0
typedef struct {
    pd_Keys_V26_t keys;
    pd_Bytes_t proof;
} pd_session_set_keys_V26_t;

#define PD_CALL_SESSION_PURGE_KEYS_V26 1
typedef struct {
} pd_session_purge_keys_V26_t;

// 17 - STAKING CALLS
#define PD_CALL_STAKING_BOND_V26 0
typedef struct {
    pd_LookupSource_V26_t controller;
    pd_CompactBalanceOf_t value;
    pd_RewardDestination_V26_t payee;
} pd_staking_bond_V26_t;

#define PD_CALL_STAKING_BOND_EXTRA_V26 1
typedef struct {
    pd_CompactBalanceOf_t max_additional;
} pd_staking_bond_extra_V26_t;

#define PD_CALL_STAKING_UNBOND_V26 2
typedef struct {
    pd_CompactBalanceOf_t value;
} pd_staking_unbond_V26_t;

#define PD_CALL_STAKING_WITHDRAW_UNBONDED_V26 3
typedef struct {
    pd_u32_t num_slashing_spans;
} pd_staking_withdraw_unbonded_V26_t;

#define PD_CALL_STAKING_VALIDATE_V26 4
typedef struct {
    pd_ValidatorPrefs_V26_t prefs;
} pd_staking_validate_V26_t;

#define PD_CALL_STAKING_NOMINATE_V26 5
typedef struct {
    pd_VecLookupSource_V26_t targets;
} pd_staking_nominate_V26_t;

#define PD_CALL_STAKING_CHILL_V26 6
typedef struct {
} pd_staking_chill_V26_t;

#define PD_CALL_STAKING_SET_PAYEE_V26 7
typedef struct {
    pd_RewardDestination_V26_t payee;
} pd_staking_set_payee_V26_t;

#define PD_CALL_STAKING_SET_CONTROLLER_V26 8
typedef struct {
    pd_LookupSource_V26_t controller;
} pd_staking_set_controller_V26_t;

#define PD_CALL_STAKING_PAYOUT_STAKERS_V26 18
typedef struct {
    pd_AccountId_V26_t validator_stash;
    pd_EraIndex_V26_t era;
} pd_staking_payout_stakers_V26_t;

#define PD_CALL_STAKING_REBOND_V26 19
typedef struct {
    pd_CompactBalanceOf_t value;
} pd_staking_rebond_V26_t;

// 21 - ASSETS CALLS
#define PD_CALL_ASSETS_TRANSFER_V26 1
typedef struct {
	pd_AssetId_V26_t asset_id;
	pd_AccountId_V26_t to;
	pd_Amount_V26_t amount;
} pd_assets_transfer_V26_t;

#define PD_CALL_ASSETS_REGISTER_V26 1
typedef struct {
	pd_AssetSymbol_V26_t symbol;
	pd_AssetName_V26_t name;
	pd_InitialSupply_V26_t initial_supply;
	pd_IsMintable_V26_t is_mintable;
	pd_IsIndivisible_V26_t is_indivisible ;
 	//pd__V26_t initial_supply;
} pd_assets_register_V26_t;


// 25 - LIQUIDITYPROXY CALLS
#define PD_CALL_POOLXYK_DEPOSIT_LIQUIDITY_V26 0
typedef struct {
	pd_DexId_V26_t dex_id;
	pd_AssetId_V26_t input_asset_a;
	pd_AssetId_V26_t input_asset_b;
	pd_Balance_V26_t input_a_desired;
	pd_Balance_V26_t input_b_desired;
	pd_Balance_V26_t input_a_min;
	pd_Balance_V26_t input_b_min;
} pd_poolxyk_deposit_liquidity_V26_t;
#define PD_CALL_POOLXYK_WITHDRAW_LIQUIDITY_V26 1
typedef struct {
	pd_DexId_V26_t dex_id;
	pd_AssetId_V26_t output_asset_a;
	pd_AssetId_V26_t output_asset_b;
	pd_Balance_V26_t marker_asset_desired;
	pd_Balance_V26_t output_a_min;
	pd_Balance_V26_t output_b_min;
} pd_poolxyk_withdraw_liquidity_V26_t;

// 26 - LIQUIDITYPROXY CALLS
#define PD_CALL_LIQUIDITYPROXY_SWAPS_V26 0
typedef struct {
	pd_DexId_V26_t dex_id;
	pd_AssetId_V26_t input_asset_id;
	pd_AssetId_V26_t output_asset_id;
	pd_SwapAmount_V26_t swap_amount;
	pd_VecLiquiditySourceType_V26_t selected_source_types;
	pd_FilterMode_V26_t filter_mode;
} pd_liquidityproxy_swap_V26_t;

// 31 - ETHBRIDGE
#define PD_CALL_ETHBRIDGE_TRANSFER_TO_SIDECHAIN_V26 3
typedef struct {
	pd_AssetIdOf_V26_t asset_id;
	pd_EthereumAddress_V26_t to;
	pd_Balance_V26_t amount;
	pd_BridgeNetworkId_V26_t network_id;

} pd_ethbridge_transfer_to_sidechain_V26_t;

#define PD_CALL_ETHBRIDGE_REQUEST_FROM_SIDECHAIN_V26 4
typedef struct {
	pd_Hash_t eth_tx_hash;
	pd_EthereumAddress_V26_t kind;
	pd_BridgeNetworkId_V26_t network_id;

} pd_ethbridge_request_from_sidechain_V26_t;

#define PD_CALL_PSWAPDISTRIBUTION_CLAIM_INCENTIVE 0
typedef struct {
} pd_pswapdistribution_claim_incentive_V26_t;

#define PD_CALL_VESTEDREWARDS_CLAIM_REWARDS	0
typedef struct {
} pd_vestedrewards_claim_rewards_V26_t;

// 45 - CERESSTAKING
#define PD_CALL_CERESSTAKING_DEPOSIT	0
typedef struct {
	pd_Balance_V26_t amount;
} pd_ceresstaking_deposit_V26_t;

#define PD_CALL_CERESSTAKING_WITHDRAW	1
typedef struct {
} pd_ceresstaking_withdraw_V26_t;



#ifdef SUBSTRATE_PARSER_FULL

#endif

typedef union {

    pd_utility_batch_V26_t utility_batch_V26;
    pd_utility_batch_all_V26_t utility_batch_all_V26;

    pd_session_set_keys_V26_t session_set_keys_V26;
    pd_session_purge_keys_V26_t session_purge_keys_V26;

	pd_staking_bond_V26_t staking_bond_V26;
    pd_staking_bond_extra_V26_t staking_bond_extra_V26;
    pd_staking_unbond_V26_t staking_unbond_V26;
    pd_staking_withdraw_unbonded_V26_t staking_withdraw_unbonded_V26;
    pd_staking_validate_V26_t staking_validate_V26;
    pd_staking_nominate_V26_t staking_nominate_V26;
    pd_staking_chill_V26_t staking_chill_V26;
    pd_staking_set_payee_V26_t staking_set_payee_V26;
    pd_staking_set_controller_V26_t staking_set_controller_V26;
    pd_staking_payout_stakers_V26_t staking_payout_stakers_V26;
    pd_staking_rebond_V26_t staking_rebond_V26;

    // PolkaSwap Related
    pd_poolxyk_deposit_liquidity_V26_t poolxyk_deposit_liquidity_V26;
    pd_poolxyk_withdraw_liquidity_V26_t poolxyk_withdraw_liquidity_V26;
    pd_liquidityproxy_swap_V26_t liquidityproxy_swap_V26;
	pd_assets_transfer_V26_t assets_transfer_V26;
	pd_ethbridge_transfer_to_sidechain_V26_t ethbridge_transfer_to_sidechain_V26;
	pd_ethbridge_request_from_sidechain_V26_t ethbridge_request_from_sidechain_V26;
	pd_pswapdistribution_claim_incentive_V26_t pswapdistribution_claim_incentive_V26;
	pd_vestedrewards_claim_rewards_V26_t vestedrewards_claim_rewards_V26;

	// Ceres
	pd_ceresstaking_deposit_V26_t ceresstaking_deposit_V26;
	pd_ceresstaking_withdraw_V26_t ceresstaking_withdraw_V26;

#ifdef SUBSTRATE_PARSER_FULL

#endif
} pd_MethodBasic_V26_t;

// 2 - BALANCES CALLS
#define PD_CALL_BALANCES_TRANSFER_V26 0
typedef struct {
	pd_LookupSource_V26_t dest;
	pd_CompactBalance_t value;
} pd_balances_transfer_V26_t;

#define PD_CALL_BALANCES_TRANSFER_KEEP_ALIVE_V26 3
typedef struct {
    pd_LookupSource_V26_t dest;
    pd_CompactBalance_t value;
} pd_balances_transfer_keep_alive_V26_t;

#ifdef SUBSTRATE_PARSER_FULL

#endif

typedef union {
	pd_balances_transfer_V26_t balances_transfer_V26;
	pd_balances_transfer_keep_alive_V26_t balances_transfer_keep_alive_V26;

    pd_utility_batch_V26_t utility_batch_V26;
    pd_utility_batch_all_V26_t utility_batch_all_V26;

	#ifdef SUBSTRATE_PARSER_FULL

	#endif
} pd_MethodNested_V26_t;

typedef union {
    pd_MethodBasic_V26_t basic;
    pd_MethodNested_V26_t nested;
} pd_Method_V26_t;

#ifdef __cplusplus
}
#endif

#pragma clang diagnostic pop
