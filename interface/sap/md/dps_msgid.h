/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2005
*
*  BY OPENING THIS FILE, BUYER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
*  THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS ("MEDIATEK SOFTWARE")
*  RECEIVED FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED TO BUYER ON
*  AN "AS-IS" BASIS ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL WARRANTIES,
*  EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED WARRANTIES OF
*  MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE OR NONINFRINGEMENT.
*  NEITHER DOES MEDIATEK PROVIDE ANY WARRANTY WHATSOEVER WITH RESPECT TO THE
*  SOFTWARE OF ANY THIRD PARTY WHICH MAY BE USED BY, INCORPORATED IN, OR
*  SUPPLIED WITH THE MEDIATEK SOFTWARE, AND BUYER AGREES TO LOOK ONLY TO SUCH
*  THIRD PARTY FOR ANY WARRANTY CLAIM RELATING THERETO. MEDIATEK SHALL ALSO
*  NOT BE RESPONSIBLE FOR ANY MEDIATEK SOFTWARE RELEASES MADE TO BUYER'S
*  SPECIFICATION OR TO CONFORM TO A PARTICULAR STANDARD OR OPEN FORUM.
*
*  BUYER'S SOLE AND EXCLUSIVE REMEDY AND MEDIATEK'S ENTIRE AND CUMULATIVE
*  LIABILITY WITH RESPECT TO THE MEDIATEK SOFTWARE RELEASED HEREUNDER WILL BE,
*  AT MEDIATEK'S OPTION, TO REVISE OR REPLACE THE MEDIATEK SOFTWARE AT ISSUE,
*  OR REFUND ANY SOFTWARE LICENSE FEES OR SERVICE CHARGE PAID BY BUYER TO
*  MEDIATEK FOR SUCH MEDIATEK SOFTWARE AT ISSUE. 
*
*  THE TRANSACTION CONTEMPLATED HEREUNDER SHALL BE CONSTRUED IN ACCORDANCE
*  WITH THE LAWS OF THE STATE OF CALIFORNIA, USA, EXCLUDING ITS CONFLICT OF
*  LAWS PRINCIPLES.  ANY DISPUTES, CONTROVERSIES OR CLAIMS ARISING THEREOF AND
*  RELATED THERETO SHALL BE SETTLED BY ARBITRATION IN SAN FRANCISCO, CA, UNDER
*  THE RULES OF THE INTERNATIONAL CHAMBER OF COMMERCE (ICC).
*
*****************************************************************************/

/*****************************************************************************
 *
 * Filename:
 * ---------
 *   dps_sap.h
 *
 * Project:
 * --------
 *   Maui_Software
 *
 * Description:
 * ------------
 *   Dummy Protocol Stack, SAP definition
 *
 * Author:
 * -------
 *
 *============================================================================
 *             HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

#ifndef _DPS_MSGID_H
#define _DPS_MSGID_H

#if defined(DUMMY_PROTOCOL) && defined(__GSM_RAT__)

#include "module_msg_range.h"

MODULE_MSG_BEGIN(MSG_ID_DPS_CODE_BEGIN)
MSG_ID_DPS_POWER_SCAN_REQ = MSG_ID_DPS_CODE_BEGIN,
MSG_ID_DPS_STRONGEST_ARFCN_FB_SEARCH_REQ,
MSG_ID_DPS_REPEATED_FB_SEARCH_REQ ,
MSG_ID_DPS_SPECIFIC_BCCH_RX_REQ ,
MSG_ID_DPS_START_IDLE_REQ ,
MSG_ID_DPS_REPEATED_IDLE_REQ ,
MSG_ID_DPS_CBCH_RX_REQ   ,
MSG_ID_DPS_SC_TEST_REQ	,
MSG_ID_DPS_LOCATION_UPDATE_REQ ,
MSG_ID_DPS_MT_CALL_REQ   ,
MSG_ID_DPS_MO_CALL_REQ   ,
MSG_ID_DPS_TEST_START_REQ   ,
MSG_ID_DPS_TEST_STOP_REQ  ,
MSG_ID_DPS_TEST_STOP2_REQ  ,
MSG_ID_DPS_CCCH_NC_MEAS_REQ  ,
MSG_ID_DPS_CCCH_EXT_MEAS_REQ ,
MSG_ID_DPS_CCCH_PKT_IDLE_SC_TEST_REQ ,
MSG_ID_DPS_CCCH_GPRS_ATTACH_ONE_PHASE_REQ ,
MSG_ID_DPS_CCCH_GPRS_ATTACH_TWO_PHASE_REQ ,
MSG_ID_DPS_CCCH_PACKET_IDLE1_REQ ,
MSG_ID_DPS_CCCH_PACKET_IDLE2_REQ ,
MSG_ID_DPS_CCCH_TBF_SC_TEST_REQ ,
MSG_ID_DPS_CCCH_PACKET_IDLE_PBCCH_READ_REQ ,
MSG_ID_DPS_PCCCH_PACKET_IDLE_REQ ,
MSG_ID_DPS_PCCCH_PACKET_IDLE_PBCCH_UPDATE_REQ ,
MSG_ID_DPS_PCCCH_PKT_IDLE_SC_TEST_REQ ,
MSG_ID_DPS_PCCCH_PKT_IDLE_SC_TEST_PBCCH_UPDATE_REQ ,
MSG_ID_DPS_PCCCH_PKT_IDLE_NC_MEAS_REQ ,
MSG_ID_DPS_PCCCH_EXT_MEAS_REQ ,
MSG_ID_DPS_PCCCH_GPRS_ATTACH_ONE_PHASE_REQ ,
MSG_ID_DPS_PCCCH_GPRS_ATTACH_TWO_PHASE_REQ ,
MSG_ID_DPS_SERVING_PBCCH_UPDATE_DURING_TBF_REQ ,
MSG_ID_DPS_PCCCH_NBR_PSI_UPDATE_DURING_TBF_REQ ,
MSG_ID_DPS_CCCH_NBR_PSI_UPDATE_DURING_TBF_REQ ,
MSG_ID_RLC_DATA_REQ,
MSG_ID_GRR_RLC_EST_IND,
MSG_ID_GRR_RLC_EST_REQ_CNF,
MSG_ID_GRR_RLC_REL_REQ,
MSG_ID_L1_RLC_PDTCH_CNF,
MSG_ID_L1_RLC_PACCH_IND,
MSG_ID_L1_RLC_PACCH_CNF,
MSG_ID_L1_RLC_PDTCH_IND,
MSG_ID_RLC_GRR_DATA_IND,
MSG_ID_RLC_GRR_REL_IND,
MSG_ID_RLC_GRR_REL_CNF,
MSG_ID_RR_FRAMETICK,
MSG_ID_MPAL_FRAMETICK,
MSG_ID_L1D_LOOPBACK_REQ,
MSG_ID_DPS_CCCH_ICMP_REQ,
MSG_ID_DPS_CCCH_GPRS_NONSIGNALING_REQ,
MSG_ID_DPS_CCCH_GPRS_NONSIG_FT_REQ,
MSG_ID_DPS_POWER_SCAN_WITH_STORED_LIST_REQ,
MSG_ID_DPS_CCCH_COMB_PAGE_REORG_REQ,
MSG_ID_DPS_CCCH_EGPRS_ATTACH_ONE_PHASE_REQ,
MSG_ID_DPS_CCCH_EGPRS_ATTACH_TWO_PHASE_REQ,
MSG_ID_DPS_PCCCH_EGPRS_ATTACH_ONE_PHASE_REQ,
MSG_ID_DPS_PCCCH_EGPRS_ATTACH_TWO_PHASE_REQ,
MSG_ID_DPS_CCCH_EGPRS_TBF_NBCCH_REQ,
MSG_ID_DPS_CCCH_EGPRS_TBF_NPBCCH_REQ,
MSG_ID_DPS_PCCCH_EGPRS_TBF_NPBCCH_REQ,
MSG_ID_RLC_MPAL_EGPRS_SRB_REQ,
MSG_ID_DPS_UNIT_TEST_DL_CALLBACK,
MSG_ID_DPS_UNIT_TEST_INIT,
MSG_ID_DPS_UNIT_TEST_TRACE_PRINTER,
MSG_ID_DPS_TRACE_PRINTER_UPDATE_VN,

/* For Dual DPS */ /* With "MSG_ID_DPS_xxx_REQ" */
/* 2G Standby 3G Active: start from UDPS */
MSG_ID_DPS_UDPS_GSM_MEAS_IN_NULL_REQ, /* GM1 */
MSG_ID_DPS_UDPS_GSM_MEAS_IN_IDLE_REQ, /* GM2 */
MSG_ID_DPS_UDPS_GSM_MEAS_IN_FACH_REQ, /* GM3 */
MSG_ID_DPS_UDPS_GSM_REPORTING_DELAY_REQ, /* GM4 */
MSG_ID_DPS_UDPS_GSM_REPORTING_DELAY_NO_BSIC_REQ, /* GM5 */
MSG_ID_DPS_UDPS_ABS_GSM_CARRIER_RSSI_REQ, /* GM6 */

/* 2G Active 3G Standby: still start from UDPS */
MSG_ID_DPS_UDPS_UMTS_MEAS_IN_SCAN_REQ, /*UM1*/
MSG_ID_DPS_UDPS_UMTS_MEAS_IN_IDLE_REQ, /*UM2*/
MSG_ID_DPS_UDPS_UMTS_MEAS_IN_DEDI_REQ, /*UM3*/
MSG_ID_DPS_UDPS_UMTS_MEAS_IN_PIDLE_REQ, /*UM4*/
MSG_ID_DPS_UDPS_UMTS_MEAS_IN_PTX_REQ, /*UM5*/
MSG_ID_DPS_UDPS_RECURSIVE_TCS_IN_2G_IDLE_REQ, /* UM6 = CS12(CSD) and CS13(CSD) */
MSG_ID_DPS_UDPS_RECURSIVE_TCS_IN_2G_DEDI_REQ, /* UM7 = CS8(CSD) and CS9(CSD) */

MSG_ID_DPS_UDPS_GSM_CRS_TO_UMTS_REQ, /*IRT1*/
MSG_ID_DPS_UDPS_UMTS_CRS_TO_GSM_REQ, /*IRT2*/
MSG_ID_DPS_UDPS_GSM_HHO_TO_UMTS_REQ, /*IRT3*/
MSG_ID_DPS_UDPS_UMTS_HHO_TO_GSM_REQ, /*IRT4*/


MSG_ID_DPS_UDPS_TRIGGER_DPS_REQ,           /* common usage */
MSG_ID_DPS_RESPONSE_TO_UDPS_CNF, /* common usage */

/* Copy from uas_gas_sap.h for the activity between DPS and UDPS */
MSG_ID_UAS_GAS_CONFIG_GCELL_MEAS_REQ,

MSG_ID_GAS_UAS_CONFIG_UCELL_MEAS_CNF,
MSG_ID_GAS_UAS_UCELL_MEAS_IND,

MSG_ID_UAS_GAS_CONFIG_GCELL_MEAS_CNF,
MSG_ID_UAS_GAS_GCELL_MEAS_IND,
MSG_ID_UAS_GAS_GCELL_BSIC_IND,
MSG_ID_GAS_UAS_CONFIG_UCELL_MEAS_REQ,

/* For Dual DPS */
MODULE_MSG_END(MSG_ID_DPS_CODE_TAIL)

#endif

#endif  //_DPS_MSGID_H

