/****************************************************************************
 ****************************************************************************
 ***
 ***   This header was automatically generated from a Linux kernel header
 ***   of the same name, to make information necessary for userspace to
 ***   call into the kernel available to libc.  It contains only constants,
 ***   structures, and macros generated from the original header, and thus,
 ***   contains no copyrightable information.
 ***
 ***   To edit the content of this header, modify the corresponding
 ***   source file (e.g. under external/kernel-headers/original/) then
 ***   run bionic/libc/kernel/tools/update_all.py
 ***
 ***   Any manual change here will be lost the next time this script will
 ***   be run. You've been warned!
 ***
 ****************************************************************************
 ****************************************************************************/
#ifndef _NET_TIMESTAMPING_H
#define _NET_TIMESTAMPING_H
#define NET_TIMESTAMPING_H
#define NET_TIMESTAMPING_H_
#define _UAPI_NET_TIMESTAMPING_H
#define _UAPI_NET_TIMESTAMPING_H_
#define _NET_TIMESTAMPING_H_
#include <museum/7.1.2/bionic/libc/linux/socket.h>
enum {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  SOF_TIMESTAMPING_TX_HARDWARE = (1 << 0),
  SOF_TIMESTAMPING_TX_SOFTWARE = (1 << 1),
  SOF_TIMESTAMPING_RX_HARDWARE = (1 << 2),
  SOF_TIMESTAMPING_RX_SOFTWARE = (1 << 3),
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  SOF_TIMESTAMPING_SOFTWARE = (1 << 4),
  SOF_TIMESTAMPING_SYS_HARDWARE = (1 << 5),
  SOF_TIMESTAMPING_RAW_HARDWARE = (1 << 6),
  SOF_TIMESTAMPING_OPT_ID = (1 << 7),
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  SOF_TIMESTAMPING_TX_SCHED = (1 << 8),
  SOF_TIMESTAMPING_TX_ACK = (1 << 9),
  SOF_TIMESTAMPING_OPT_CMSG = (1 << 10),
  SOF_TIMESTAMPING_OPT_TSONLY = (1 << 11),
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  SOF_TIMESTAMPING_LAST = SOF_TIMESTAMPING_OPT_TSONLY,
  SOF_TIMESTAMPING_MASK = (SOF_TIMESTAMPING_LAST - 1) | SOF_TIMESTAMPING_LAST
};
struct hwtstamp_config {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  int flags;
  int tx_type;
  int rx_filter;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
enum hwtstamp_tx_types {
  HWTSTAMP_TX_OFF,
  HWTSTAMP_TX_ON,
  HWTSTAMP_TX_ONESTEP_SYNC,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
enum hwtstamp_rx_filters {
  HWTSTAMP_FILTER_NONE,
  HWTSTAMP_FILTER_ALL,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  HWTSTAMP_FILTER_SOME,
  HWTSTAMP_FILTER_PTP_V1_L4_EVENT,
  HWTSTAMP_FILTER_PTP_V1_L4_SYNC,
  HWTSTAMP_FILTER_PTP_V1_L4_DELAY_REQ,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  HWTSTAMP_FILTER_PTP_V2_L4_EVENT,
  HWTSTAMP_FILTER_PTP_V2_L4_SYNC,
  HWTSTAMP_FILTER_PTP_V2_L4_DELAY_REQ,
  HWTSTAMP_FILTER_PTP_V2_L2_EVENT,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  HWTSTAMP_FILTER_PTP_V2_L2_SYNC,
  HWTSTAMP_FILTER_PTP_V2_L2_DELAY_REQ,
  HWTSTAMP_FILTER_PTP_V2_EVENT,
  HWTSTAMP_FILTER_PTP_V2_SYNC,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  HWTSTAMP_FILTER_PTP_V2_DELAY_REQ,
};
#endif
