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
#ifndef __LINUX_TC_PED_H
#define __LINUX_TC_PED_H
#define _LINUX_TC_PED_H
#define _LINUX_TC_PED_H_
#define _UAPI_LINUX_TC_PED_H
#define _UAPI_LINUX_TC_PED_H_
#define _UAPI__LINUX_TC_PED_H
#define _UAPI__LINUX_TC_PED_H_
#define __LINUX_TC_PED_H_
#include <museum/8.0.0/bionic/libc/linux/types.h>
#include <museum/8.0.0/bionic/libc/linux/pkt_cls.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define TCA_ACT_PEDIT 7
enum {
  TCA_PEDIT_UNSPEC,
  TCA_PEDIT_TM,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  TCA_PEDIT_PARMS,
  TCA_PEDIT_PAD,
  __TCA_PEDIT_MAX
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define TCA_PEDIT_MAX (__TCA_PEDIT_MAX - 1)
struct tc_pedit_key {
  __u32 mask;
  __u32 val;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u32 off;
  __u32 at;
  __u32 offmask;
  __u32 shift;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct tc_pedit_sel {
  tc_gen;
  unsigned char nkeys;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  unsigned char flags;
  struct tc_pedit_key keys[0];
};
#define tc_pedit tc_pedit_sel
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
