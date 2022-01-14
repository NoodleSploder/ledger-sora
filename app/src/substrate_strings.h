/*******************************************************************************
*  (c) 2021 Zondax GmbH
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

// Modules names
static const char* STR_MO_SYSTEM 					= "System"; 		/*  0 */
static const char* STR_MO_BALANCES 					= "Balances"; 		/*  2 */
static const char* STR_MO_STAKING 					= "Staking"; 		/* 17 */
static const char* STR_MO_ASSETS 					= "Assets"; 		/* 21 */
static const char* STR_MO_POOLXYK					= "poolXYK"; 		/* 25 */
static const char* STR_MO_LIQUIDITYPROXY			= "LiquidityProxy"; /* 26 */
static const char* STR_MO_ETHBRIDGE					= "EthBridge"; /* 31 */

// Methods Names
static const char* STR_ME_TRANSFER 					= "transfer";
static const char* STR_ME_TRANSFER_KEEP_ALIVE 		= "Transfer keep alive";
static const char* STR_ME_bond 						= "bond";
/* Methods Names - Staking */
static const char* STR_ME_BOND 						= "Bond";
static const char* STR_ME_BOND_EXTRA 				= "Bond extra";
static const char* STR_ME_UNBOND 					= "Unbond";
static const char* STR_ME_WITHDRAW_UNBONDED 		= "Withdraw Unbonded";
static const char* STR_ME_VALIDATE 					= "Validate";
static const char* STR_ME_NOMINATE 					= "Nominate";
static const char* STR_ME_CHILL 					= "Chill";
static const char* STR_ME_SET_PAYEE 				= "Set payee";
static const char* STR_ME_SET_CONTROLLER 			= "Set controller";
static const char* STR_ME_PAYOUT_STAKERS 			= "Payout stakers";
static const char* STR_ME_REBOND 					= "Rebond";
/* Method Names - poolXYK */
static const char* STR_ME_DEPOSITLIQUIDITY			= "depositLiquidity";
static const char* STR_ME_WITHDRAWLIQUIDITY			= "withdrawLiquidity";
/* Method Names - LiquidityProxy */
static const char* STR_ME_SWAP						= "Swap";
/* Method Names - EthBridge */
static const char* STR_ME_TRANSFER_TO_SIDECHAIN		= "transfer_to_sidechain";
static const char* STR_ME_REQUEST_FROM_SIDECHAIN	= "request_from_sidechain";

// Items names
static const char* STR_IT_dest 						= "Dest";
static const char* STR_IT_asset_id 					= "Asset Id";
static const char* STR_IT_to 						= "To";
static const char* STR_IT_amount 					= "Amount";
static const char* STR_IT_controller 				= "Controller";
static const char* STR_IT_value 					= "Amount";
static const char* STR_IT_payee 					= "Payee";
static const char* STR_IT_dex_id					= "Dex ID";
static const char* STR_IT_input_asset_id 			= "Input Asset ID";
static const char* STR_IT_output_asset_id 			= "Output Asset ID";
static const char* STR_IT_swap_amount 				= "swap_amount";
static const char* STR_IT_swap_desired_amount_in 	= "Amount In";
static const char* STR_IT_swap_desired_amount_out	= "Amount Out";
static const char* STR_IT_swap_max_amount_in		= "Max Amount In";
static const char* STR_IT_swap_min_amount_out 		= "Min Amount Out";
static const char* STR_IT_selected_source_types 	= "selected_source_types";
static const char* STR_IT_filter_mode 				= "filter_mode";
static const char* STR_IT_input_asset_a				= "input_asset_a";
static const char* STR_IT_input_asset_b 			= "input_asset_b";
static const char* STR_IT_input_a_desired			= "input_a_desired";
static const char* STR_IT_input_b_desired 			= "input_b_desired";
static const char* STR_IT_input_a_min 				= "input_a_min";
static const char* STR_IT_input_b_min 				= "input_b_min";
static const char* STR_IT_output_asset_a			= "output_asset_a";
static const char* STR_IT_output_asset_b 			= "output_asset_b";
static const char* STR_IT_marker_asset_desired		= "marker_asset_desired";
static const char* STR_IT_output_a_min 				= "output_a_min";
static const char* STR_IT_output_b_min 				= "output_b_min";
static const char* STR_IT_network_id 				= "Network ID";
static const char* STR_IT_eth_tx_hash 				= "eth_tx_hash";
static const char* STR_IT_kind 						= "kind";
static const char* STR_IT_max_additional 			= "Amount";
static const char* STR_IT_num_slashing_spans 		= "Num slashing spans";
static const char* STR_IT_prefs 					= "Prefs";
static const char* STR_IT_targets 					= "Targets";
static const char* STR_IT_validator_stash 			= "Validator stash";
static const char* STR_IT_stash 					= "Stash";
static const char* STR_IT_era 						= "Era";


////////////////////////////////////////////////////////////////////////////////////////
// MAP ASSET_ID to COIN TICKER
///////////////////////////////////////////////////////////////////////////////////////.



#ifdef __cplusplus
}
#endif
