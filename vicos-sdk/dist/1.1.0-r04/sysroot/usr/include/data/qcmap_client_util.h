#ifndef _QCMAP_CLIENT_UTIL_H_
#define _QCMAP_CLIENT_UTIL_H_

/******************************************************************************

                         qcmap_client_util.h

******************************************************************************/

/******************************************************************************

  @file    qcmap_firewall.h

  DESCRIPTION
  Header file for firewall data structure.

  ---------------------------------------------------------------------------
  Copyright (c) 2011-2013 Qualcomm Technologies, Inc.  All Rights Reserved.
  Qualcomm Technologies Proprietary and Confidential.
  ---------------------------------------------------------------------------

******************************************************************************/

/******************************************************************************

                      EDIT HISTORY FOR FILE

when       who        what, where, why
--------   ---        -------------------------------------------------------
07/11/12   bnn         9x25

******************************************************************************/

/*===========================================================================

                          INCLUDE FILES FOR MODULE

===========================================================================*/
#include "comdef.h"
#include "qcmap_firewall_util.h"
#include "qualcomm_mobile_access_point_msgr_v01.h"
/*===========================================================================
MACRO IPV4_ADDR_MSG()

DESCRIPTION
  This macro prints an IPV4 address to F3.

PARAMETERS
  ip_addr: The IPV4 address in host byte order.

RETURN VALUE
  none
===========================================================================*/
#define IPV4_ADDR_MSG(ip_addr) MSG_4(MSG_SSID_DS, \
                        MSG_LEGACY_HIGH, \
                        "IPV4 Address is %d.%d.%d.%d", \
                        (unsigned char)(ip_addr), \
                        (unsigned char)(ip_addr >> 8), \
                        (unsigned char)(ip_addr >> 16) , \
                        (unsigned char)(ip_addr >> 24))

/*===========================================================================
MACRO IPV6_ADDR_MSG()

DESCRIPTION
  This macro prints an IPV6 address to F3.

PARAMETERS
  ip_addr: The IPV6 address in network byte order.

RETURN VALUE
  none
===========================================================================*/
#define IPV6_ADDR_MSG(ip_addr) MSG_8(MSG_SSID_DS, \
                        MSG_LEGACY_HIGH, \
                        "IPV6 Address %x:%x:%x:%x:%x:%x:%x:%x", \
                        (uint16)(ps_ntohs(ip_addr[0])), \
                        (uint16)(ps_ntohs(ip_addr[0] >> 16)), \
                        (uint16)(ps_ntohs(ip_addr[0] >> 32)) , \
                        (uint16)(ps_ntohs(ip_addr[0] >> 48)), \
                        (uint16)(ps_ntohs(ip_addr[1])), \
                        (uint16)(ps_ntohs(ip_addr[1] >> 16)), \
                        (uint16)(ps_ntohs(ip_addr[1] >> 32)) , \
                        (uint16)(ps_ntohs(ip_addr[1] >> 48)))

#define MAX_COMMAND_STR_LEN 200
#define IPV4_ADDR_LEN 4
#define IPV6_ADDR_LEN 16
#define IPTABLE_CHAIN 10
/*---------------------------------------------------------------------------
           FireWall Entry Configuration.
-----------------------------------------------------------------------------*/



typedef struct
{
  ip_filter_type filter_spec;
  uint32         firewall_handle;
  /* Direction of the firewall. */
  qcmap_msgr_firewall_direction firewall_direction ;
} qcmap_msgr_firewall_entry_conf_t;

/*---------------------------------------------------------------------------
            FireWall handle list configuration.
---------------------------------------------------------------------------*/
typedef struct
{
  uint32 handle_list[QCMAP_MSGR_MAX_FIREWALL_ENTRIES_V01];
  ip_version_enum_type ip_family;
  int num_of_entries;
} qcmap_msgr_get_firewall_handle_list_conf_t;

/*---------------------------------------------------------------------------
            FireWall configuration.
---------------------------------------------------------------------------*/
typedef union
{
  qcmap_msgr_firewall_entry_conf_t extd_firewall_entry;
  qcmap_msgr_get_firewall_handle_list_conf_t extd_firewall_handle_list;
  ip_version_enum_type ip_family;
} qcmap_msgr_firewall_conf_t;
/*---------------------------------------------------------------------------
            VLAN configuration.
---------------------------------------------------------------------------*/
typedef struct
{
  unsigned short vlan_config_list_len;
  qcmap_msgr_vlan_config_v01 vlan_config_list[QCMAP_MSGR_MAX_VLAN_ENTRIES_V01];
} qcmap_msgr_vlan_conf_t;
/*---------------------------------------------------------------------------
            L2TP configuration.
---------------------------------------------------------------------------*/
typedef struct
{
  qcmap_msgr_l2tp_mode_enum_v01 mode;
  uint8 l2tp_config_list_len;
  qcmap_msgr_l2tp_config_v01 l2tp_config_list[QCMAP_MSGR_L2TP_MAX_TUNNELS_V01];
  qcmap_msgr_l2tp_mtu_config_v01 l2tp_mtu_config;
  qcmap_msgr_l2tp_TCP_MSS_config_v01 l2tp_mss_config;
} qcmap_msgr_l2tp_conf_t;

#endif
