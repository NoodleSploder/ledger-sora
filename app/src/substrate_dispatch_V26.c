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
*
*  TODO:
*  		democracy.notePreimage 29 - 14 ( encoded_proposal:Bytes )
*  		democracy.propose 29 - 0 ( proposal_hash:Hash, value:Compact<BalanceOf> )
*  		democracy.vote 29 -2 ( ref_index: Compact<ReferendumIndex>, vote:AccountVote )
*  		democracy.second 29 - 1 ( proposal:Compact<PropIndex>, seconds_upper_bound:Compact<u32>)
*
*  		electionsPhragmen.submitCandidacy 39 - 2 ( candidate_count:Compact<u32> )
*  		electionsPhragmen.vote 39 - 0 ( votes:Vec<AccountId>, value:Compact<BalanceOf> )
*
*		CeresStaking 45
*			CeresStaking.deposit 45 - 0 ( amount:Balance )
*			CeresStaking.withdraw 45 - 1
********************************************************************************/

#include "coin.h"
#include "substrate_strings.h"
#include "zxmacros.h"
#include <stdint.h>
#include "assets.h"
#include "substrate_dispatch_V26.h"

/**
 * SYSTEM idx:0
 */

/**
 * Timestamp idx:1
 */

/**
 * BALANCES idx:2
 */
__Z_INLINE parser_error_t _readMethod_balances_transfer_V26(
    parser_context_t* c, pd_balances_transfer_V26_t* m)
{
	CHECK_ERROR(_readLookupSource_V26(c, &m->dest));
	CHECK_ERROR(_readCompactBalanceOf(c, &m->value));
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_balances_transfer_keep_alive_V26(
    parser_context_t* c, pd_balances_transfer_keep_alive_V26_t* m)
{
    CHECK_ERROR(_readLookupSource_V26(c, &m->dest))
    CHECK_ERROR(_readCompactBalance(c, &m->value))
    return parser_ok;
}

/**
 * RandomnessCollectiveFlip idx:4
 */

/**
 * TransactionPayment idx:5
 */

/**
* Permissions idx :6
 */

/**
 * ReferralSystem idx: 7
 */

/**
 * Rewards idx: 8
 */

/**
 * XorFee idx: 9
 */

/**
 * BridgeMultisig idx: 10
 */

/**
 * Utility idx: 11
 */
__Z_INLINE parser_error_t _readMethod_utility_batch_V26(
    parser_context_t* c, pd_utility_batch_V26_t* m)
{
    CHECK_ERROR(_readVecCall(c, &m->calls))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_utility_batch_all_V26(
    parser_context_t* c, pd_utility_batch_V26_t* m)
{
    CHECK_ERROR(_readVecCall(c, &m->calls))
    return parser_ok;
}

/**
 * Session idx: 12
 */

__Z_INLINE parser_error_t _readMethod_session_set_keys_V26(
    parser_context_t* c, pd_session_set_keys_V26_t* m)
{
    CHECK_ERROR(_readKeys_V26(c, &m->keys))
    CHECK_ERROR(_readBytes(c, &m->proof))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_session_purge_keys_V26(
    parser_context_t* c, pd_session_purge_keys_V26_t* m)
{
    return parser_ok;
}

/**
 * Historical idx: 13
 */

/**
 * Babe idx: 14
 */

/**
 * Grandpa idx: 15
 */

/**
 * Authorship idx: 16
 */

/**
 * Staking idx:17
 */

__Z_INLINE parser_error_t _readMethod_staking_bond_V26(
    parser_context_t* c, pd_staking_bond_V26_t* m)
{
    CHECK_ERROR(_readLookupSource_V26(c, &m->controller))
    CHECK_ERROR(_readCompactBalanceOf(c, &m->value))
    CHECK_ERROR(_readRewardDestination_V26(c, &m->payee))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_staking_bond_extra_V26(
    parser_context_t* c, pd_staking_bond_extra_V26_t* m)
{
    CHECK_ERROR(_readCompactBalanceOf(c, &m->max_additional))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_staking_unbond_V26(
    parser_context_t* c, pd_staking_unbond_V26_t* m)
{
    CHECK_ERROR(_readCompactBalanceOf(c, &m->value))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_staking_withdraw_unbonded_V26(
    parser_context_t* c, pd_staking_withdraw_unbonded_V26_t* m)
{
    CHECK_ERROR(_readu32(c, &m->num_slashing_spans))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_staking_validate_V26(
    parser_context_t* c, pd_staking_validate_V26_t* m)
{
    CHECK_ERROR(_readValidatorPrefs_V26(c, &m->prefs))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_staking_nominate_V26(
    parser_context_t* c, pd_staking_nominate_V26_t* m)
{
    CHECK_ERROR(_readVecLookupSource_V26(c, &m->targets))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_staking_chill_V26(
    parser_context_t* c, pd_staking_chill_V26_t* m)
{
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_staking_set_payee_V26(
    parser_context_t* c, pd_staking_set_payee_V26_t* m)
{
    CHECK_ERROR(_readRewardDestination_V26(c, &m->payee))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_staking_set_controller_V26(
    parser_context_t* c, pd_staking_set_controller_V26_t* m)
{
    CHECK_ERROR(_readLookupSource_V26(c, &m->controller))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_staking_payout_stakers_V26(
    parser_context_t* c, pd_staking_payout_stakers_V26_t* m)
{
    CHECK_ERROR(_readAccountId_V26(c, &m->validator_stash))
    CHECK_ERROR(_readEraIndex_V26(c, &m->era))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_staking_rebond_V26(
    parser_context_t* c, pd_staking_rebond_V26_t* m)
{
    CHECK_ERROR(_readCompactBalanceOf(c, &m->value))
    return parser_ok;
}

/**
 * Tokens idx:18
 */

/**
 * Currencies idx: 19
 */

/**
 *TradingPair idx: 20
 */

/**
 *Assets idx: 21
 */

__Z_INLINE parser_error_t _readMethod_assets_register_V26(
    parser_context_t* c, pd_assets_register_V26_t* m)
{
	CHECK_ERROR(_readAssetSymbol_V26(c, &m->symbol));
	CHECK_ERROR(_readAssetName_V26(c, &m->name));
	CHECK_ERROR(_readInitialSupply_V26(c, &m->initial_supply));
	CHECK_ERROR(_readIsMintable_V26(c, &m->is_mintable));
	CHECK_ERROR(_readIsIndivisible_V26(c, &m->is_indivisible));
	// TODO CHECK_ERROR(_readInitialSupply_V26(c, &m->opt_content_src));
	// TODO CHECK_ERROR(_readInitialSupply_V26(c, &m->opt_desc));
	return parser_ok;
}


__Z_INLINE parser_error_t _readMethod_assets_transfer_V26(
    parser_context_t* c, pd_assets_transfer_V26_t* m)
{
	CHECK_ERROR(_readAssetId_V26(c, &m->asset_id));
	CHECK_ERROR(_readAccountId_V26(c, &m->to));
	CHECK_ERROR(_readAmount_V26(c, &m->amount));
	return parser_ok;
}

/*
 * DEXManager idx: 22
 */
/*
 * MulticollateralBondingCurvePool idx: 23
 */
/*
 * Technical idx: 24
 */

/*
 * PoolXYK idx: 25
 */
__Z_INLINE parser_error_t _readMethod_poolXYK_deposit_Liquidity_V26(
    parser_context_t* c, pd_poolxyk_deposit_liquidity_V26_t* m)
{
	CHECK_ERROR(_readDexId_V26(c, &m->dex_id))
	CHECK_ERROR(_readAssetId_V26(c, &m->input_asset_a))
	CHECK_ERROR(_readAssetId_V26(c, &m->input_asset_b))
	CHECK_ERROR(_readBalance_V26(c, &m->input_a_desired))
	CHECK_ERROR(_readBalance_V26(c, &m->input_b_desired))
	CHECK_ERROR(_readBalance_V26(c, &m->input_a_min))
	CHECK_ERROR(_readBalance_V26(c, &m->input_b_min))
	return parser_ok;
}
__Z_INLINE parser_error_t _readMethod_poolXYK_withdraw_Liquidity_V26(
    parser_context_t* c, pd_poolxyk_withdraw_liquidity_V26_t* m)
{
	CHECK_ERROR(_readDexId_V26(c, &m->dex_id))
	CHECK_ERROR(_readAssetId_V26(c, &m->output_asset_a))
	CHECK_ERROR(_readAssetId_V26(c, &m->output_asset_b))
	CHECK_ERROR(_readBalance_V26(c, &m->marker_asset_desired))
	CHECK_ERROR(_readBalance_V26(c, &m->output_a_min))
	CHECK_ERROR(_readBalance_V26(c, &m->output_b_min))
	return parser_ok;
}
/*
 * LiquidityProxy idx:26
 */
__Z_INLINE parser_error_t _readMethod_liquidityproxy_swap_V26(
    parser_context_t* c, pd_liquidityproxy_swap_V26_t* m)
{
	CHECK_ERROR(_readDexId_V26(c, &m->dex_id));
	CHECK_ERROR(_readAssetId_V26(c, &m->input_asset_id));
	CHECK_ERROR(_readAssetId_V26(c, &m->output_asset_id));
	CHECK_ERROR(_readOptionSwapAmount_V26(c, &m->swap_amount));
	CHECK_ERROR(_readVecLiquiditySourceType_V26(c, &m->selected_source_types));
	CHECK_ERROR(_readFilterMode_V26(c, &m->filter_mode));

	return parser_ok;
}

/*
 * Council idx: 27
 * TechnicalCommittee idx: 28
 * Democracy idx: 29
 *
 * DEXAPI idx: 30
 */
/*
 * EthBridge idx: 31
 */
__Z_INLINE parser_error_t _readMethod_ethbridge_transfer_to_sidechain_V26(
    parser_context_t* c, pd_ethbridge_transfer_to_sidechain_V26_t* m)
{
	CHECK_ERROR(_readAssetIdOf_V26(c, &m->asset_id));
	CHECK_ERROR(_readEthereumAddress_V26(c, &m->to));
	CHECK_ERROR(_readBalance_V26(c, &m->amount));
	CHECK_ERROR(_readBridgeNetworkId_V26(c, &m->network_id));
	return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_ethbridge_request_from_sidechain_V26(
    parser_context_t* c, pd_ethbridge_request_from_sidechain_V26_t* m)
{
	CHECK_ERROR(_readHash(c, &m->eth_tx_hash));
	CHECK_ERROR(_readIncomingRequestKind_V26(c, &m->kind));
	CHECK_ERROR(_readBridgeNetworkId_V26(c, &m->network_id));
	return parser_ok;
}



/*
 * PswapDistribution idx: 32
 */
__Z_INLINE parser_error_t _readMethod_PswapDistribution_claim_incentive_V26(
    parser_context_t* c, pd_pswapdistribution_claim_incentive_V26_t* m)
{
	return parser_ok;
}


/*
 * Multisig idx: 33
 * Scheduler idx: 34
 * IrohaMigration idx: 35
 * ImOnline idx: 36
 * Offences idx: 37
 * TechnicalMembership idx: 38
 * ElectionsPhragmen idx: 39
 */
/*
 * VestedRewards idx: 40
 */
__Z_INLINE parser_error_t _readMethod_VestedRewards_claim_rewards_V26(
    parser_context_t* c, pd_vestedrewards_claim_rewards_V26_t* m)
{
	return parser_ok;
}

/*
 * Identity idx: 41
 * Farming idx: 42
 * XSTPool idx: 43
 * PriceTools idx: 44
 */
/*
 * CeresStaking idx: 45
 */
__Z_INLINE parser_error_t _readMethod_CeresStaking_deposit_V26(
    parser_context_t* c, pd_ceresstaking_deposit_V26_t* m)
{
	CHECK_ERROR(_readBalance_V26(c, &m->amount));
	return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_CeresStaking_withdraw_V26(
    parser_context_t* c, pd_ceresstaking_withdraw_V26_t* m)
{
	return parser_ok;
}

/*
 *
 *
 */


#ifdef SUBSTRATE_PARSER_FULL
#endif

parser_error_t _readMethod_V26(
    parser_context_t* c,
    uint8_t moduleIdx,
    uint8_t callIdx,
    pd_Method_V26_t* method)
{
	// 256 x moduleIdx + callIdx
	uint16_t callPrivIdx = ((uint16_t)moduleIdx << 8u) + callIdx;

    switch (callPrivIdx) {
		/* module 2 call 0 - Balances.transfer */
		case 512:
			CHECK_ERROR(_readMethod_balances_transfer_V26(c, &method->nested.balances_transfer_V26))
			break;
		/* module 2 call 1 - Balances.set_balance */
        case 513:
        	return parser_not_supported;
        	break;
		/* module 2 call 2 - Balances.force_transfer */
		case 514:
			return parser_not_supported;
			break;
		/* module 2 call 3 - Balances.transfer_keep_alive */
		case 515:
			CHECK_ERROR(_readMethod_balances_transfer_keep_alive_V26(c, &method->nested.balances_transfer_keep_alive_V26))
			break;
		/* module 11 call 0 - Utility.batch */
		case 2816:
			CHECK_ERROR(_readMethod_utility_batch_V26(c, &method->basic.utility_batch_V26))
			break;
		/* module 11 call 1 - Utility.batch_all */
		case 2817:
			return parser_tx_call_vec_too_large;
			break;
		/* module 11 call 2 - Utility.batch_all */
		case 2818:
			CHECK_ERROR(_readMethod_utility_batch_all_V26(c, &method->nested.utility_batch_all_V26))
			break;
		/* module 17 call 0 - Staking.bond */
		case 4352:
			CHECK_ERROR(_readMethod_staking_bond_V26(c, &method->basic.staking_bond_V26))
			break;
		/* module 17 call 1 */
		case 4353:
			CHECK_ERROR(_readMethod_staking_bond_extra_V26(c, &method->basic.staking_bond_extra_V26))
			break;
		/* module 17 call 2 */
		case 4354:
			CHECK_ERROR(_readMethod_staking_unbond_V26(c, &method->basic.staking_unbond_V26))
			break;
		/* module 17 call 3 */
		case 4355:
			CHECK_ERROR(_readMethod_staking_withdraw_unbonded_V26(c, &method->basic.staking_withdraw_unbonded_V26))
			break;
		/* module 17 call 4 */
		case 4356:
			CHECK_ERROR(_readMethod_staking_validate_V26(c, &method->basic.staking_validate_V26))
			break;
		/* module 17 call 5 */
		case 4357:
			CHECK_ERROR(_readMethod_staking_nominate_V26(c, &method->basic.staking_nominate_V26))
			break;
		/* module 17 call 6 */
		case 4358:
			CHECK_ERROR(_readMethod_staking_chill_V26(c, &method->basic.staking_chill_V26))
			break;
		/* module 17 call 7 */
		case 4359:
			CHECK_ERROR(_readMethod_staking_set_payee_V26(c, &method->basic.staking_set_payee_V26))
			break;
		/* module 17 call 8 */
		case 4360:
			CHECK_ERROR(_readMethod_staking_set_controller_V26(c, &method->basic.staking_set_controller_V26))
			break;
		/* module 17 call 18 */
		case 4370:
			CHECK_ERROR(_readMethod_staking_payout_stakers_V26(c, &method->basic.staking_payout_stakers_V26))
			break;
		/* module 17 call 19 */
		case 4371:
			CHECK_ERROR(_readMethod_staking_rebond_V26(c, &method->basic.staking_rebond_V26))
			break;
		/* module 21 call 1 - Assets.transfer */
		case 5377:
			CHECK_ERROR(_readMethod_assets_transfer_V26(c, &method->basic.assets_transfer_V26))
			break;
		/* module 25 call 0 - PoolXYK.DepositLiquidity */
		case 6400:
			CHECK_ERROR(_readMethod_poolXYK_deposit_Liquidity_V26(c, &method->basic.poolxyk_deposit_liquidity_V26))
			break;
		/* module 25 call 1 - PoolXYK.WithdrawLiquidity */
		case 6401:
			CHECK_ERROR(_readMethod_poolXYK_withdraw_Liquidity_V26(c, &method->basic.poolxyk_withdraw_liquidity_V26))
			break;
		/* module 26 call 0 - LiquidityProxy.swap */
		case 6656:
			CHECK_ERROR(_readMethod_liquidityproxy_swap_V26(c, &method->basic.liquidityproxy_swap_V26))
			break;
		/* module 31 - 3 - ethBridge.transfer_to_sidechain */
		case 7939:
			CHECK_ERROR(_readMethod_ethbridge_transfer_to_sidechain_V26(c, &method->basic.ethbridge_transfer_to_sidechain_V26))
			break;
		/* module 31 - 4 - ethBridge.request_from_sidechain */
		case 7940:
			CHECK_ERROR(_readMethod_ethbridge_request_from_sidechain_V26(c, &method->basic.ethbridge_request_from_sidechain_V26))
			break;
		/* module 32 - 0 - PswapDistribution.claim_incentive */
		case 8192:
			CHECK_ERROR(_readMethod_PswapDistribution_claim_incentive_V26(c, &method->basic.pswapdistribution_claim_incentive_V26))
			break;
		/* module 40 - 0 - VestedRewards.claim_rewards */
		case 10240:
			CHECK_ERROR(_readMethod_VestedRewards_claim_rewards_V26(c, &method->basic.vestedrewards_claim_rewards_V26))
			break;
		/* module 45 - 0 - ceresstaking.deposit */
		case 11520:
			 CHECK_ERROR(_readMethod_CeresStaking_deposit_V26(c, &method->basic.ceresstaking_deposit_V26));
			 break;
		/* module 45 - 1 - ceresstaking.withdraw */
		case 11521:
			 CHECK_ERROR(_readMethod_CeresStaking_withdraw_V26(c, &method->basic.ceresstaking_withdraw_V26));
			 break;
#ifdef SUBSTRATE_PARSER_FULL

#endif
    default:
    	//return parser_here_8;
        return parser_not_supported;
    }

    return parser_ok;
}

/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////

const char* _getMethod_ModuleName_V26(uint8_t moduleIdx)
{
    switch (moduleIdx) {
    case 2:
    	return STR_MO_BALANCES;
    case 11:
    	return STR_MO_UTILITY;
    case 17:
    	return STR_MO_STAKING;
    case 21:
    	return STR_MO_ASSETS;
    case 25:
    	return STR_MO_POOLXYK;
    case 26:
    	return STR_MO_LIQUIDITYPROXY;
    case 31:
    	return STR_MO_ETHBRIDGE;
    case 32:
    	return STR_MO_PSWAP_DISTRIBUTION;
    case 40:
    	return STR_MO_VESTED_REWARDS;
    case 45:
    	return STR_MO_CERESSTAKING;
#ifdef SUBSTRATE_PARSER_FULL
    case 0:
        return STR_MO_SYSTEM;
#endif
    default:
        return NULL;
    }

    return NULL;
}

const char* _getMethod_Name_V26(uint8_t moduleIdx, uint8_t callIdx)
{
    uint16_t callPrivIdx = ((uint16_t)moduleIdx << 8u) + callIdx;

    switch (callPrivIdx) {
    case 512: /* module 2 call 0 */
        return STR_ME_TRANSFER;
    case 515: /* module 3 call 3 - Balances.transfer_keep_alive */
    	return STR_ME_TRANSFER_KEEP_ALIVE;
	case 2816: /* module 11 call 0 - Utility.batch */
		return STR_ME_BATCH;
	case 2818: /* module 11 call 2 - Utility.batch_all */
		return STR_ME_BATCH_ALL;
	case 4352: /* module 17 call 0 - Staking.bond */
		return STR_ME_BOND;
    case 4353: /* module 7 call 1 */
        return STR_ME_BOND_EXTRA;
    case 4354: /* module 7 call 2 */
        return STR_ME_UNBOND;
    case 4355: /* module 7 call 3 */
        return STR_ME_WITHDRAW_UNBONDED;
    case 4356: /* module 7 call 4 */
        return STR_ME_VALIDATE;
    case 4357: /* module 7 call 5 */
        return STR_ME_NOMINATE;
    case 4358: /* module 7 call 6 */
        return STR_ME_CHILL;
    case 4359: /* module 7 call 7 */
        return STR_ME_SET_PAYEE;
    case 4360: /* module 7 call 8 */
        return STR_ME_SET_CONTROLLER;
    case 4370: /* module 7 call 18 */
        return STR_ME_PAYOUT_STAKERS;
    case 4371: /* module 7 call 19 */
        return STR_ME_REBOND;
    case 5377: /* module 21 call 2 - Assets.transfer */
    	return STR_ME_TRANSFER;
    case 6400: /* module 25 call 0 */
    	return STR_ME_DEPOSITLIQUIDITY;
    case 6401: /* module 25 call 1 */
    	return STR_ME_WITHDRAWLIQUIDITY;
    case 6656: /* module 26 call 0 */
    	return STR_ME_SWAP;
    case 7939: /* module 31 - 3 - ethBridge.transfer_to_sidechain */
    	return STR_ME_TRANSFER_TO_SIDECHAIN;
    case 7940: /* module 31 - 4 - ethBridge.request_from_sidechain */
    	return STR_ME_REQUEST_FROM_SIDECHAIN;
	case 8192: /* module 32 - 0 - PswapDistribution.claim_incentive */
		return STR_ME_CLAIM_INCENTIVE;
	case 10240: /* module 40 - 0 - VestedRewards.claim_rewards */
		return STR_ME_CLAIM_REWARDS;
	case 11520: /* module 45 - 0 - ceresstaking.deposit */
		 return STR_ME_DEPOSIT;
	case 11521: /* module 45 - 1 - ceresstaking.withdraw */
		return STR_ME_WITHDRAW;
#ifdef SUBSTRATE_PARSER_FULL

#endif
    default:
        return NULL;
    }

    return NULL;
}

uint8_t _getMethod_NumItems_V26(uint8_t moduleIdx, uint8_t callIdx)
{
    uint16_t callPrivIdx = ((uint16_t)moduleIdx << 8u) + callIdx;

    switch (callPrivIdx) {
    case 512: /* module 2 call 0 */
        return 2;
    case 515: /* module 2 call 3 - Balances.transfer_keep_alive */
    	return 2;
    case 2816: /* module 11 call 0 - Utility.batch */
		return 1;
	case 2818: /* module 11 call 2 - Utility.batch_all */
		return 1;
    case 4352: /* module 17 call 0 - Staking.bond */
		return 3;
    case 4353: /* module 7 call 1 */
        return 1;
    case 4354: /* module 7 call 2 */
        return 1;
    case 4355: /* module 7 call 3 */
        return 1;
    case 4356: /* module 7 call 4 */
        return 1;
    case 4357: /* module 7 call 5 */
        return 1;
    case 4358: /* module 7 call 6 */
        return 0;
    case 4359: /* module 7 call 7 */
        return 1;
    case 4360: /* module 7 call 8 */
        return 1;
    case 4370: /* module 7 call 18 */
        return 2;
    case 4371: /* module 7 call 19 */
        return 1;
	/* module 21 call 2 - Assets.transfer*/
	case 5377:
		return 3;
	/* module 25 call 0 */
	case 6400:
		return 7;
	/* module 25 call 1 */
	case 6401:
		return 6;
	/* module 26 call 0 - LiquidityProxy.Swap */
	case 6656:
		//return 8;
		return 7;
	/* module 31 - 3 - ethBridge.transfer_to_sidechain */
	case 7939:
		return 4;
	/* module 31 - 4 - ethBridge.request_from_sidechain */
	case 7940:
		return 3;
	/* module 32 - 0 - PswapDistribution.claim_incentive */
	case 8192:
		return 0;
	/* module 40 - 0 - VestedRewards.claim_rewards */
	case 10240:
		return 0;
	/* module 45 - 0 - ceresstaking.deposit */
	case 11520:
		 return 1;
	/* module 45 - 1 - ceresstaking.withdraw */
	case 11521:
		return 0;
#ifdef SUBSTRATE_PARSER_FULL

#endif
    default:
        return 0;
    }

    return 0;
}

const char* _getMethod_ItemName_V26(uint8_t moduleIdx, uint8_t callIdx, uint8_t itemIdx)
{
    uint16_t callPrivIdx = ((uint16_t)moduleIdx << 8u) + callIdx;

    switch (callPrivIdx) {
    /* Module  2 call 0 - Balances.transfer */
    case 512:
        switch (itemIdx) {
			case 0:
				return STR_IT_dest;
			case 1:
				return STR_IT_value;
			default:
				return NULL;
			}
        break;
    /* module 2 call 3 - Balances.transfer_keep_alive */
    case 515:
        switch (itemIdx) {
			case 0:
				return STR_IT_dest;
			case 1:
				return STR_IT_value;
			default:
				return NULL;
			}
	/* module 11 call 0 - Utility.batch */
	case 2816:
		switch (itemIdx) {
			case 0:
				return STR_IT_calls;
			default:
				return NULL;
			}
		break;
	/* module 11 call 2 - Utility.batch_all */
	case 2818:
		switch (itemIdx) {
			case 0:
				return STR_IT_calls;
			default:
				return NULL;
			}
		break;
    /* module 17 call 0 - Staking.bond */
    case 4352:
        switch (itemIdx) {
			case 0:
				return STR_IT_controller;
			case 1:
				return STR_IT_value;
			case 2:
				return STR_IT_payee;
			default:
				return NULL;
			}
    	break;
	case 4353: /* module 7 call 1 */
		switch (itemIdx) {
		case 0:
			return STR_IT_max_additional;
		default:
			return NULL;
		}
	case 4354: /* module 7 call 2 */
		switch (itemIdx) {
		case 0:
			return STR_IT_value;
		default:
			return NULL;
		}
	case 4355: /* module 7 call 3 */
		switch (itemIdx) {
		case 0:
			return STR_IT_num_slashing_spans;
		default:
			return NULL;
		}
	case 4356: /* module 7 call 4 */
		switch (itemIdx) {
		case 0:
			return STR_IT_prefs;
		default:
			return NULL;
		}
	case 4357: /* module 7 call 5 */
		switch (itemIdx) {
		case 0:
			return STR_IT_targets;
		default:
			return NULL;
		}
	case 4358: /* module 7 call 6 */
		switch (itemIdx) {
		default:
			return NULL;
		}
	case 4359: /* module 7 call 7 */
		switch (itemIdx) {
		case 0:
			return STR_IT_payee;
		default:
			return NULL;
		}
	case 4360: /* module 7 call 8 */
		switch (itemIdx) {
		case 0:
			return STR_IT_controller;
		default:
			return NULL;
		}
	case 4370: /* module 7 call 18 */
		switch (itemIdx) {
		case 0:
			return STR_IT_validator_stash;
		case 1:
			return STR_IT_era;
		default:
			return NULL;
		}
	case 4371: /* module 7 call 19 */
		switch (itemIdx) {
		case 0:
			return STR_IT_value;
		default:
			return NULL;
		}
	/* module 21 call 2 - Assets.transfer*/
	case 5377:
        switch (itemIdx) {
			case 0:
				return STR_IT_asset_id;
			case 1:
				return STR_IT_to;
			case 2:
				return STR_IT_amount;
			default:
				return NULL;
		}
		break;
	/* module 25 call 0 PoolXYK.DepositLiquidity */
	case 6400:
		switch (itemIdx) {
			case 0:
				return STR_IT_dex_id;
			case 1:
				return STR_IT_input_asset_a;
			case 2:
				return STR_IT_input_asset_b;
			case 3:
				return STR_IT_input_a_desired;
			case 4:
				return STR_IT_input_b_desired;
			case 5:
				return STR_IT_input_a_min;
			case 6:
				return STR_IT_input_b_min;
			default:
				return NULL;
		}
		break;
	/* module 25 call 1 PoolXYK.DepositLiquidity */
	case 6401:
		switch (itemIdx) {
			case 0:
				return STR_IT_dex_id;
			case 1:
				return STR_IT_output_asset_a;
			case 2:
				return STR_IT_output_asset_b;
			case 3:
				return STR_IT_marker_asset_desired;
			case 4:
				return STR_IT_output_a_min;
			case 5:
				return STR_IT_output_b_min;
			default:
				return NULL;
		}
		break;
	/* module 26 call 0 - LiquidityProxy.swap */
	case 6656:
		switch (itemIdx) {
			case 0:
				return STR_IT_dex_id;
			case 1:
				return STR_IT_output_asset_id;
			case 2:
				return STR_IT_swap_desired_amount_out;
			case 3:
				return STR_IT_input_asset_id;
			case 4:
				return STR_IT_swap_max_amount_in;
			case 5:
				return STR_IT_selected_source_types;
			case 6:
				return STR_IT_filter_mode;
			default:
				return NULL;
		}
		break;
	/* module 31 - 3 - ethBridge.transfer_to_sidechain */
	case 7939:
		switch (itemIdx) {
			case 0:
				return STR_IT_asset_id;
			case 1:
				return STR_IT_to;
			case 2:
				return STR_IT_amount;
			case 3:
				return STR_IT_network_id;
			default:
				return NULL;
		}
		break;
	/* module 31 - 4 - ethBridge.request_from_sidechain */
	case 7940:
		switch (itemIdx) {
			case 0:
				return STR_IT_eth_tx_hash;
			case 1:
				return STR_IT_kind;
			case 2:
				return STR_IT_network_id;
			default:
				return NULL;
		}
	/* module 32 - 0 - PswapDistribution.claim_incentive */
	case 8192:
		switch (itemIdx) {
			default:
				return NULL;
		}
	/* module 40 - 0 - VestedRewards.claim_rewards */
	case 10240:
		switch (itemIdx) {
			default:
				return NULL;
		}
	/* module 45 - 0 - ceresstaking.deposit */
	case 11520:
		switch (itemIdx) {
		case 0:
			return STR_IT_amount;
		default:
			return NULL;
		}
	/* module 45 - 1 - ceresstaking.withdraw */
	case 11521:
		switch (itemIdx) {
			default:
				return NULL;
		}
#ifdef SUBSTRATE_PARSER_FULL

#endif
    default:
        return NULL;
    }

    return NULL;
}


parser_error_t _getMethod_ItemValue_V26(
    pd_Method_V26_t* m,
    uint8_t moduleIdx, uint8_t callIdx, uint8_t itemIdx,
    char* outValue, uint16_t outValueLen,
    uint8_t pageIdx, uint8_t* pageCount)
{
    uint16_t callPrivIdx = ((uint16_t)moduleIdx << 8u) + callIdx;

    switch (callPrivIdx) {
    case 512: /* module 2 call 0 */
        switch (itemIdx) {
        case 0: /* balances_transfer_V26 - dest */;
            return _toStringLookupSource_V26(
                &m->nested.balances_transfer_V26.dest,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 1: /* balances_transfer_V2 - value */;
            return _toStringCompactBalance(
                &m->nested.balances_transfer_V26.value,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
	case 515: /* module 3 call 3 - Balances.transfer_keep_alive */
        switch (itemIdx) {
        case 0: /* balances_transfer_keep_alive_V26 - dest */;
            return _toStringLookupSource_V26(
                &m->nested.balances_transfer_keep_alive_V26.dest,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 1: /* balances_transfer_keep_alive_V26 - value */;
            return _toStringCompactBalance(
                &m->nested.balances_transfer_keep_alive_V26.value,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
	/* module 11 call 0 - Utility.batch */
	case 2816:
		switch (itemIdx) {
			case 0: /* utility_batch_V26 - calls */
				return _toStringVecCall(
					&m->basic.utility_batch_V26.calls,
					outValue, outValueLen,
					pageIdx, pageCount);
			default:
				return parser_no_data;
		}
	/* module 11 call 2 - Utility.batch_all */
	case 2818:
		switch (itemIdx) {
			case 0: /* utility_batch_all_V26 - calls */
				return _toStringVecCall(
					&m->basic.utility_batch_all_V26.calls,
					outValue, outValueLen,
					pageIdx, pageCount);
			default:
				return parser_no_data;
		}
	/* module 17 call 0 - Staking.bond */
	case 4352:
		switch (itemIdx) {
			case 0: /* staking_bond_V26 - controller */;
				return _toStringLookupSource_V26(
					&m->basic.staking_bond_V26.controller,
					outValue, outValueLen,
					pageIdx, pageCount);
			case 1: /* staking_bond_V26 - value */;
				return _toStringCompactBalanceOf(
					&m->basic.staking_bond_V26.value,
					outValue, outValueLen,
					pageIdx, pageCount);
			case 2: /* staking_bond_V26 - payee */;
				return _toStringRewardDestination_V26(
					&m->basic.staking_bond_V26.payee,
					outValue, outValueLen,
					pageIdx, pageCount);
			default:
				return parser_no_data;
		}
		break;
	case 4353: /* module 7 call 1 */
			switch (itemIdx) {
			case 0: /* staking_bond_extra_V26 - max_additional */;
				return _toStringCompactBalanceOf(
					&m->basic.staking_bond_extra_V26.max_additional,
					outValue, outValueLen,
					pageIdx, pageCount);
			default:
				return parser_no_data;
			}
	case 4354: /* module 7 call 2 */
		switch (itemIdx) {
		case 0: /* staking_unbond_V26 - value */;
			return _toStringCompactBalanceOf(
				&m->basic.staking_unbond_V26.value,
				outValue, outValueLen,
				pageIdx, pageCount);
		default:
			return parser_no_data;
		}
	case 4355: /* module 7 call 3 */
		switch (itemIdx) {
		case 0: /* staking_withdraw_unbonded_V26 - num_slashing_spans */;
			return _toStringu32(
				&m->basic.staking_withdraw_unbonded_V26.num_slashing_spans,
				outValue, outValueLen,
				pageIdx, pageCount);
		default:
			return parser_no_data;
		}
	case 4356: /* module 7 call 4 */
		switch (itemIdx) {
		case 0: /* staking_validate_V26 - prefs */;
			return _toStringValidatorPrefs_V26(
				&m->basic.staking_validate_V26.prefs,
				outValue, outValueLen,
				pageIdx, pageCount);
		default:
			return parser_no_data;
		}
	case 4357: /* module 7 call 5 */
		switch (itemIdx) {
		case 0: /* staking_nominate_V26 - targets */;
			return _toStringVecLookupSource_V26(
				&m->basic.staking_nominate_V26.targets,
				outValue, outValueLen,
				pageIdx, pageCount);
		default:
			return parser_no_data;
		}
	case 4358: /* module 7 call 6 */
		switch (itemIdx) {
		default:
			return parser_no_data;
		}
	case 4359: /* module 7 call 7 */
		switch (itemIdx) {
		case 0: /* staking_set_payee_V26 - payee */;
			return _toStringRewardDestination_V26(
				&m->basic.staking_set_payee_V26.payee,
				outValue, outValueLen,
				pageIdx, pageCount);
		default:
			return parser_no_data;
		}
	case 4360: /* module 7 call 8 */
		switch (itemIdx) {
		case 0: /* staking_set_controller_V26 - controller */;
			return _toStringLookupSource_V26(
				&m->basic.staking_set_controller_V26.controller,
				outValue, outValueLen,
				pageIdx, pageCount);
		default:
			return parser_no_data;
		}
	case 4370: /* module 7 call 18 */
		switch (itemIdx) {
		case 0: /* staking_payout_stakers_V26 - validator_stash */;
			return _toStringAccountId_V26(
				&m->basic.staking_payout_stakers_V26.validator_stash,
				outValue, outValueLen,
				pageIdx, pageCount);
		case 1: /* staking_payout_stakers_V26 - era */;
			return _toStringEraIndex_V26(
				&m->basic.staking_payout_stakers_V26.era,
				outValue, outValueLen,
				pageIdx, pageCount);
		default:
			return parser_no_data;
		}
	case 4371: /* module 7 call 19 */
		switch (itemIdx) {
			case 0: /* staking_rebond_V26 - value */;
				return _toStringCompactBalanceOf(
					&m->basic.staking_rebond_V26.value,
					outValue, outValueLen,
					pageIdx, pageCount);
			default:
				return parser_no_data;
			}
		break;

    /* module 21 call 2 - Assets.transfer*/
    case 5377:
        switch (itemIdx) {
			case 0: // assets_transfer_V26 - asset_id
				return _toStringAssetId_V26(
					&m->basic.assets_transfer_V26.asset_id,
					outValue, outValueLen,
					pageIdx, pageCount);
			case 1: // assets_transfer_V26 - to
				return _toStringAccountId_V26(
					&m->basic.assets_transfer_V26.to,
					outValue, outValueLen,
				   pageIdx, pageCount);
			case 2: // assets_transfer_V26 - amount
				return _toStringBalance_V26(
					&m->basic.assets_transfer_V26.amount,
					outValue, outValueLen,
					pageIdx, pageCount);
			default:
				return parser_no_data;
		}
        break;
	/* module 25 call 0 PoolXYK.DepositLiquidity */
	case 6400:
		switch (itemIdx) {
			case 0: // PoolXYK.DepositLiquidity - dex_id
				return _toStringDexId_V26(
					&m->basic.poolxyk_deposit_liquidity_V26.dex_id,
					outValue, outValueLen,
					pageIdx, pageCount);
			case 1: // PoolXYK.DepositLiquidity - input_asset_a
				return _toStringAssetId_V26(
					&m->basic.poolxyk_deposit_liquidity_V26.input_asset_a,
					outValue, outValueLen,
					pageIdx, pageCount);
			case 2: // PoolXYK.DepositLiquidity - input_asset_b
				return _toStringAssetId_V26(
					&m->basic.poolxyk_deposit_liquidity_V26.input_asset_b,
					outValue, outValueLen,
					pageIdx, pageCount);
			case 3: // PoolXYK.DepositLiquidity - input_a_desired
				return _toStringBalance_V26(
					&m->basic.poolxyk_deposit_liquidity_V26.input_a_desired,
					outValue, outValueLen,
					pageIdx, pageCount);
			case 4: // PoolXYK.DepositLiquidity - input_b_desired
				return _toStringBalance_V26(
					&m->basic.poolxyk_deposit_liquidity_V26.input_b_desired,
					outValue, outValueLen,
					pageIdx, pageCount);
			case 5: // PoolXYK.DepositLiquidity - input_a_min
				return _toStringBalance_V26(
					&m->basic.poolxyk_deposit_liquidity_V26.input_a_min,
					outValue, outValueLen,
					pageIdx, pageCount);
			case 6: // PoolXYK.DepositLiquidity - input_b_min
				return _toStringBalance_V26(
					&m->basic.poolxyk_deposit_liquidity_V26.input_b_min,
					outValue, outValueLen,
					pageIdx, pageCount);
			default:
				return parser_no_data;
		}
		break;
	/* module 25 call 1 PoolXYK.WithdrawLiquidity */
	case 6401:
		switch (itemIdx) {
			case 0: // PoolXYK.WithdrawLiquidity - dex_id
				return _toStringDexId_V26(
					&m->basic.poolxyk_withdraw_liquidity_V26.dex_id,
					outValue, outValueLen,
					pageIdx, pageCount);
			case 1: // PoolXYK.WithdrawLiquidity - output_asset_a
				return _toStringAssetId_V26(
					&m->basic.poolxyk_withdraw_liquidity_V26.output_asset_a,
					outValue, outValueLen,
					pageIdx, pageCount);
			case 2: // PoolXYK.WithdrawLiquidity - output_asset_b
				return _toStringAssetId_V26(
					&m->basic.poolxyk_withdraw_liquidity_V26.output_asset_b,
					outValue, outValueLen,
					pageIdx, pageCount);
			case 3: // PoolXYK.WithdrawLiquidity - marker_asset_desired
				return _toStringBalance_V26(
					&m->basic.poolxyk_withdraw_liquidity_V26.marker_asset_desired,
					outValue, outValueLen,
					pageIdx, pageCount);
			case 4: // PoolXYK.WithdrawLiquidity - output_a_min
				return _toStringBalance_V26(
					&m->basic.poolxyk_withdraw_liquidity_V26.output_a_min,
					outValue, outValueLen,
					pageIdx, pageCount);
			case 5: // PoolXYK.WithdrawLiquidity - output_b_min
				return _toStringBalance_V26(
					&m->basic.poolxyk_withdraw_liquidity_V26.output_b_min,
					outValue, outValueLen,
					pageIdx, pageCount);
			default:
				return parser_no_data;
		}
		break;
	/* module 26 call 0 - LiquidityProxy.swap */
	case 6656:
		switch (itemIdx) {
			case 0: // LiquidityProxy_swap - dex_id
				return _toStringDexId_V26(
					&m->basic.liquidityproxy_swap_V26.dex_id,
					outValue, outValueLen,
					pageIdx, pageCount);
			case 1: // LiquidityProxy_swap - input_asset_id
				return  _toStringAssetId_V26(
					&m->basic.liquidityproxy_swap_V26.input_asset_id,
					outValue, outValueLen,
					pageIdx, pageCount);
			case 2: // LiquidityProxy_swap - swap_amount_out
				return _toStringOptionSwapAmount_Out_V26(
					&m->basic.liquidityproxy_swap_V26.swap_amount,
					outValue, outValueLen,
					pageIdx, pageCount);
			case 3: // LiquidityProxy_swap - output_asset_id
				return _toStringAssetId_V26(
					&m->basic.liquidityproxy_swap_V26.output_asset_id,
					outValue, outValueLen,
					pageIdx, pageCount);
			case 4: // LiquidityProxy_swap - swap_amount_in
				return _toStringOptionSwapAmount_In_V26(
					&m->basic.liquidityproxy_swap_V26.swap_amount,
					outValue, outValueLen,
					pageIdx, pageCount);
			case 5: // LiquidityProxy_swap - selected_source_types
				return _toStringVecLiquiditySourceType_V26(
					&m->basic.liquidityproxy_swap_V26.selected_source_types,
					outValue, outValueLen,
					pageIdx, pageCount);
			case 6: // LiquidityProxy_swap - filter_mode
				//return parser_here_7;
				return _toStringu8(
					&m->basic.liquidityproxy_swap_V26.filter_mode,
					outValue, outValueLen,
					pageIdx, pageCount);
			default:
				return parser_no_data;
			}
		break;
	/* module 31 - 3 - ethBridge.transfer_to_sidechain */
	case 7939:
		switch (itemIdx) {
			case 0:
				return _toStringAssetId_V26(
					&m->basic.ethbridge_transfer_to_sidechain_V26.asset_id,
					outValue, outValueLen,
					pageIdx, pageCount);
			case 1:
				return _toStringEthereumAddress_V26(
					&m->basic.ethbridge_transfer_to_sidechain_V26.to,
					outValue, outValueLen,
					pageIdx, pageCount);
			case 2:
				return _toStringBalance_V26(
					&m->basic.ethbridge_transfer_to_sidechain_V26.amount,
					outValue, outValueLen,
					pageIdx, pageCount);
			case 3:
				return _toStringBridgeNetworkId_V26(
					&m->basic.ethbridge_transfer_to_sidechain_V26.network_id,
					outValue, outValueLen,
					pageIdx, pageCount);
			default:
				return parser_no_data;
		}
		break;
	/* module 31 - 4 - ethBridge.request_from_sidechain */
	case 7940:
		switch (itemIdx) {
			case 0:
				return _toStringHash(
					&m->basic.ethbridge_request_from_sidechain_V26.eth_tx_hash,
					outValue, outValueLen,
					pageIdx, pageCount);
			case 1:
				return _toStringEthereumAddress_V26(
					&m->basic.ethbridge_request_from_sidechain_V26.kind,
					outValue, outValueLen,
					pageIdx, pageCount);
			case 2:
				return _toStringBridgeNetworkId_V26(
					&m->basic.ethbridge_request_from_sidechain_V26.network_id,
					outValue, outValueLen,
					pageIdx, pageCount);
			default:
				return parser_no_data;
		}
		break;
	/* module 32 - 0 - PswapDistribution.claim_incentive */
	case 8192:
		switch (itemIdx) {
			default:
				return parser_no_data;
		}
	/* module 40 - 0 - VestedRewards.claim_rewards */
	case 10240:
		switch (itemIdx) {
			default:
				return parser_no_data;
		}
	/* module 45 - 0 - ceresstaking.deposit */
	case 11520:
		switch (itemIdx) {
			case 0:
				return _toStringBalance_V26(
					&m->basic.ceresstaking_deposit_V26.amount,
					outValue, outValueLen,
					pageIdx, pageCount);;
			default:
				return parser_no_data;
		}
	/* module 45 - 1 - ceresstaking.withdraw */
	case 11521:
		switch (itemIdx) {
			default:
				return parser_no_data;
		}
#ifdef SUBSTRATE_PARSER_FULL

#endif
    default:
        return parser_ok;
    }

    return parser_ok;
}

bool _getMethod_ItemIsExpert_V26(uint8_t moduleIdx, uint8_t callIdx, uint8_t itemIdx)
{
    uint16_t callPrivIdx = ((uint16_t)moduleIdx << 8u) + callIdx;

    switch (callPrivIdx) {
    default:
        return false;
    }
}

bool _getMethod_IsNestingSupported_V26(uint8_t moduleIdx, uint8_t callIdx)
{
    uint16_t callPrivIdx = ((uint16_t)moduleIdx << 8u) + callIdx;

    switch (callPrivIdx) {

    default:
        return true;
    }
}




