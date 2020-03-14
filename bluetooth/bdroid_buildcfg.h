/*
 *
 *  Copyright (c) 2013, The Linux Foundation. All rights reserved.
 *  Not a Contribution, Apache license notifications and license are retained
 *  for attribution purposes only.
 *
 * Copyright (C) 2012 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef _BDROID_BUILDCFG_H
#define _BDROID_BUILDCFG_H

#include <cutils/properties.h>
#include <string.h>

static inline const char* BtmGetDefaultName()
{
    char product_device[PROPERTY_VALUE_MAX];
    property_get("ro.product.device", product_device, "");

    if (strstr(product_device, "aljeter"))
        return "moto g6 play";
    if (strstr(product_device, "cedric"))
        return "moto g5";
    if (strstr(product_device, "hannah"))
        return "moto e5 plus";
    if (strstr(product_device, "james"))
        return "moto e5 play";
    if (strstr(product_device, "jeter"))
        return "moto g6 play";
    if (strstr(product_device, "montana"))
        return "moto g5s";
    if (strstr(product_device, "nora"))
        return "moto e5";
    if (strstr(product_device, "owens"))
        return "moto e4 plus";
    if (strstr(product_device, "perry"))
        return "moto e4";
    if (strstr(product_device, "rhannah"))
        return "moto e5 plus";

    // Fallback to moto
    return "moto";
}

#define BTM_DEF_LOCAL_NAME BtmGetDefaultName()
// Disables read remote device feature
#define MAX_ACL_CONNECTIONS   16
#define MAX_L2CAP_CHANNELS    16
#define BLE_VND_INCLUDED   TRUE
#define BTM_SCO_ENHANCED_SYNC_ENABLED FALSE
#define BTM_SCO_ENHANCED_SYNC_DISABLED TRUE
// skips conn update at conn completion
#define BT_CLEAN_TURN_ON_DISABLED 1

/* Increasing SEPs to 12 from 6 to support SHO/MCast i.e. two streams per codec */
#define AVDT_NUM_SEPS 12

/* Enable HFP WBS feature */
#define BTIF_HF_CLIENT_WBS_INCLUDED TRUE
#endif
