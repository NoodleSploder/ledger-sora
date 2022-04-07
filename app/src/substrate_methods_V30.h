
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
#include "substrate_types_V30.h"
#include <stddef.h>
#include <stdint.h>

// SORA MODULES
#define PD_CALL_SYSTEM_V30 0
#define PD_CALL_TIMESTAMP_V30 1
#define PD_CALL_BALANCES_V30 2
#define PD_CALL_RANDOMNESSCOLLECTIVEFLIP_V30 4
#define PD_CALL_TRANSACTIONPAYMENT_V30 5
#define PD_CALL_PERMISSIONS_V30 6
#define PD_CALL_REFERRALSYSTEM_V30 7
#define PD_CALL_REWARDS_V30 8
#define PD_CALL_XORFEE_V30 9
#define PD_CALL_BRIDGEMULTISIG_V30 10
#define PD_CALL_UTILITY_V30 11
#define PD_CALL_SESSION_V30 12
#define PD_CALL_HISTORICAL_V30 13
#define PD_CALL_BABE_V30 14
#define PD_CALL_GRANDPA_V30 15
#define PD_CALL_AUTHORSHIP_V30 16
#define PD_CALL_STAKING_V30 17
#define PD_CALL_TOKENS_V30 18
#define PD_CALL_CURRENCIES_V30 19
#define PD_CALL_TRADINGPAIR_V30 20
#define PD_CALL_ASSETS_V30 21
#define PD_CALL_POOLXYK_V30 25
#define PD_CALL_LIQUIDITYPROXY_V30 26
#define PD_CALL_ETHBRIDGE 31
#define PD_CALL_PSWAPDISTRIBUTION 32
#define PD_CALL_VESTEDREWARDS 40
#define PD_CALL_CERESSTAKING 45

// 11 - UTILITY CALLS
#define PD_CALL_UTILITY_BATCH_V30 0
typedef struct {
    pd_VecCall_t calls;
} pd_utility_batch_V30_t;

#define PD_CALL_UTILITY_BATCH_ALL_V30 2
typedef struct {
    pd_VecCall_t calls;
} pd_utility_batch_all_V30_t;

// 12 - SESSION CALLS
#define PD_CALL_SESSION_SET_KEYS_V30 0
typedef struct {
    pd_Keys_V30_t keys;
    pd_Bytes_t proof;
} pd_session_set_keys_V30_t;

#define PD_CALL_SESSION_PURGE_KEYS_V30 1
typedef struct {
} pd_session_purge_keys_V30_t;

// 17 - STAKING CALLS
#define PD_CALL_STAKING_BOND_V30 0
typedef struct {
    pd_LookupSource_V30_t controller;
    pd_CompactBalanceOf_t value;
    pd_RewardDestination_V30_t payee;
} pd_staking_bond_V30_t;

#define PD_CALL_STAKING_BOND_EXTRA_V30 1
typedef struct {
    pd_CompactBalanceOf_t max_additional;
} pd_staking_bond_extra_V30_t;

#define PD_CALL_STAKING_UNBOND_V30 2
typedef struct {
    pd_CompactBalanceOf_t value;
} pd_staking_unbond_V30_t;

#define PD_CALL_STAKING_WITHDRAW_UNBONDED_V30 3
typedef struct {
    pd_u32_t num_slashing_spans;
} pd_staking_withdraw_unbonded_V30_t;

#define PD_CALL_STAKING_VALIDATE_V30 4
typedef struct {
    pd_ValidatorPrefs_V30_t prefs;
} pd_staking_validate_V30_t;

#define PD_CALL_STAKING_NOMINATE_V30 5
typedef struct {
    pd_VecLookupSource_V30_t targets;
} pd_staking_nominate_V30_t;

#define PD_CALL_STAKING_CHILL_V30 6
typedef struct {
} pd_staking_chill_V30_t;

#define PD_CALL_STAKING_SET_PAYEE_V30 7
typedef struct {
    pd_RewardDestination_V30_t payee;
} pd_staking_set_payee_V30_t;

#define PD_CALL_STAKING_SET_CONTROLLER_V30 8
typedef struct {
    pd_LookupSource_V30_t controller;
} pd_staking_set_controller_V30_t;

#define PD_CALL_STAKING_PAYOUT_STAKERS_V30 18
typedef struct {
    pd_AccountId_V30_t validator_stash;
    pd_EraIndex_V30_t era;
} pd_staking_payout_stakers_V30_t;

#define PD_CALL_STAKING_REBOND_V30 19
typedef struct {
    pd_CompactBalanceOf_t value;
} pd_staking_rebond_V30_t;

// 21 - ASSETS CALLS
#define PD_CALL_ASSETS_TRANSFER_V30 1
typedef struct {
	pd_AssetId_V30_t asset_id;
	pd_AccountId_V30_t to;
	pd_Amount_V30_t amount;
} pd_assets_transfer_V30_t;

#define PD_CALL_ASSETS_REGISTER_V30 1
typedef struct {
	pd_AssetSymbol_V30_t symbol;
	pd_AssetName_V30_t name;
	pd_InitialSupply_V30_t initial_supply;
	pd_IsMintable_V30_t is_mintable;
	pd_IsIndivisible_V30_t is_indivisible ;
 	//pd__V30_t initial_supply;
} pd_assets_register_V30_t;


// 25 - LIQUIDITYPROXY CALLS
#define PD_CALL_POOLXYK_DEPOSIT_LIQUIDITY_V30 0
typedef struct {
	pd_DexId_V30_t dex_id;
	pd_AssetId_V30_t input_asset_a;
	pd_AssetId_V30_t input_asset_b;
	pd_Balance_V30_t input_a_desired;
	pd_Balance_V30_t input_b_desired;
	pd_Balance_V30_t input_a_min;
	pd_Balance_V30_t input_b_min;
} pd_poolxyk_deposit_liquidity_V30_t;
#define PD_CALL_POOLXYK_WITHDRAW_LIQUIDITY_V30 1
typedef struct {
	pd_DexId_V30_t dex_id;
	pd_AssetId_V30_t output_asset_a;
	pd_AssetId_V30_t output_asset_b;
	pd_Balance_V30_t marker_asset_desired;
	pd_Balance_V30_t output_a_min;
	pd_Balance_V30_t output_b_min;
} pd_poolxyk_withdraw_liquidity_V30_t;

// 26 - LIQUIDITYPROXY CALLS
#define PD_CALL_LIQUIDITYPROXY_SWAPS_V30 0
typedef struct {
	pd_DexId_V30_t dex_id;
	pd_AssetId_V30_t input_asset_id;
	pd_AssetId_V30_t output_asset_id;
	pd_SwapAmount_V30_t swap_amount;
	pd_VecLiquiditySourceType_V30_t selected_source_types;
	pd_FilterMode_V30_t filter_mode;
} pd_liquidityproxy_swap_V30_t;

// 31 - ETHBRIDGE
#define PD_CALL_ETHBRIDGE_TRANSFER_TO_SIDECHAIN_V30 3
typedef struct {
	pd_AssetIdOf_V30_t asset_id;
	pd_EthereumAddress_V30_t to;
	pd_Balance_V30_t amount;
	pd_BridgeNetworkId_V30_t network_id;

} pd_ethbridge_transfer_to_sidechain_V30_t;

#define PD_CALL_ETHBRIDGE_REQUEST_FROM_SIDECHAIN_V30 4
typedef struct {
	pd_Hash_t eth_tx_hash;
	pd_EthereumAddress_V30_t kind;
	pd_BridgeNetworkId_V30_t network_id;

} pd_ethbridge_request_from_sidechain_V30_t;

#define PD_CALL_PSWAPDISTRIBUTION_CLAIM_INCENTIVE 0
typedef struct {
} pd_pswapdistribution_claim_incentive_V30_t;

#define PD_CALL_VESTEDREWARDS_CLAIM_REWARDS	0
typedef struct {
} pd_vestedrewards_claim_rewards_V30_t;

// 45 - CERESSTAKING
#define PD_CALL_CERESSTAKING_DEPOSIT	0
typedef struct {
	pd_Balance_V30_t amount;
} pd_ceresstaking_deposit_V30_t;

#define PD_CALL_CERESSTAKING_WITHDRAW	1
typedef struct {
} pd_ceresstaking_withdraw_V30_t;



#ifdef SUBSTRATE_PARSER_FULL

#endif

typedef union {

    pd_utility_batch_V30_t utility_batch_V30;
    pd_utility_batch_all_V30_t utility_batch_all_V30;

    pd_session_set_keys_V30_t session_set_keys_V30;
    pd_session_purge_keys_V30_t session_purge_keys_V30;

	pd_staking_bond_V30_t staking_bond_V30;
    pd_staking_bond_extra_V30_t staking_bond_extra_V30;
    pd_staking_unbond_V30_t staking_unbond_V30;
    pd_staking_withdraw_unbonded_V30_t staking_withdraw_unbonded_V30;
    pd_staking_validate_V30_t staking_validate_V30;
    pd_staking_nominate_V30_t staking_nominate_V30;
    pd_staking_chill_V30_t staking_chill_V30;
    pd_staking_set_payee_V30_t staking_set_payee_V30;
    pd_staking_set_controller_V30_t staking_set_controller_V30;
    pd_staking_payout_stakers_V30_t staking_payout_stakers_V30;
    pd_staking_rebond_V30_t staking_rebond_V30;

    // PolkaSwap Related
    pd_poolxyk_deposit_liquidity_V30_t poolxyk_deposit_liquidity_V30;
    pd_poolxyk_withdraw_liquidity_V30_t poolxyk_withdraw_liquidity_V30;
    pd_liquidityproxy_swap_V30_t liquidityproxy_swap_V30;
	pd_assets_transfer_V30_t assets_transfer_V30;
	pd_ethbridge_transfer_to_sidechain_V30_t ethbridge_transfer_to_sidechain_V30;
	pd_ethbridge_request_from_sidechain_V30_t ethbridge_request_from_sidechain_V30;
	pd_pswapdistribution_claim_incentive_V30_t pswapdistribution_claim_incentive_V30;
	pd_vestedrewards_claim_rewards_V30_t vestedrewards_claim_rewards_V30;

	// Ceres
	pd_ceresstaking_deposit_V30_t ceresstaking_deposit_V30;
	pd_ceresstaking_withdraw_V30_t ceresstaking_withdraw_V30;

#ifdef SUBSTRATE_PARSER_FULL

#endif
} pd_MethodBasic_V30_t;

// 2 - BALANCES CALLS
#define PD_CALL_BALANCES_TRANSFER_V30 0
typedef struct {
	pd_LookupSource_V30_t dest;
	pd_CompactBalance_t value;
} pd_balances_transfer_V30_t;

#define PD_CALL_BALANCES_TRANSFER_KEEP_ALIVE_V30 3
typedef struct {
    pd_LookupSource_V30_t dest;
    pd_CompactBalance_t value;
} pd_balances_transfer_keep_alive_V30_t;

#ifdef SUBSTRATE_PARSER_FULL

#endif

typedef union {
	pd_balances_transfer_V30_t balances_transfer_V30;
	pd_balances_transfer_keep_alive_V30_t balances_transfer_keep_alive_V30;

    pd_utility_batch_V30_t utility_batch_V30;
    pd_utility_batch_all_V30_t utility_batch_all_V30;

	#ifdef SUBSTRATE_PARSER_FULL

	#endif
} pd_MethodNested_V30_t;

typedef union {
    pd_MethodBasic_V30_t basic;
    pd_MethodNested_V30_t nested;
} pd_Method_V30_t;

#ifdef __cplusplus
}
#endif

#pragma clang diagnostic pop
