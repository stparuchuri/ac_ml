/**************************************************************************
 *                                                                        *
 *  Catapult(R) Machine Learning Reference Design Library                 *
 *                                                                        *
 *  Software Version: 1.2                                                 *
 *                                                                        *
 *  Release Date    : Wed Jun 30 11:14:16 PDT 2021                        *
 *  Release Type    : Production Release                                  *
 *  Release Build   : 1.2.0                                               *
 *                                                                        *
 *  Copyright , Mentor Graphics Corporation,                     *
 *                                                                        *
 *  All Rights Reserved.                                                  *
 *  
 **************************************************************************
 *  Licensed under the Apache License, Version 2.0 (the "License");       *
 *  you may not use this file except in compliance with the License.      * 
 *  You may obtain a copy of the License at                               *
 *                                                                        *
 *      http://www.apache.org/licenses/LICENSE-2.0                        *
 *                                                                        *
 *  Unless required by applicable law or agreed to in writing, software   * 
 *  distributed under the License is distributed on an "AS IS" BASIS,     * 
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or       *
 *  implied.                                                              * 
 *  See the License for the specific language governing permissions and   * 
 *  limitations under the License.                                        *
 **************************************************************************
 *                                                                        *
 *  The most recent version of this package is available at github.       *
 *                                                                        *
 *************************************************************************/
#ifndef __INCLUDED_MY_AXI_STRUCT_H__
#define __INCLUDED_MY_AXI_STRUCT_H__

struct my_axi4_config {
  enum {
    dataWidth = 16,
    useVariableBeatSize = 0,
    useMisalignedAddresses = 0,
    useLast = 1,
    useWriteStrobes = 1,
    useBurst = 1, useFixedBurst = 0, useWrapBurst = 0, maxBurstSize = 256,
    useQoS = 0, useLock = 0, useProt = 0, useCache = 0, useRegion = 0,
    aUserWidth = 0, wUserWidth = 0, bUserWidth = 0, rUserWidth = 0,
    addrWidth = 32,
    idWidth = 4,
    useWriteResponses = 1,
  };
};

typedef axi::axi4_segment<my_axi4_config> local_axi;
typedef axi::axi4_segment<axi::cfg::standard> local_axi64;
typedef typename axi::axi4<axi::cfg::lite_nowstrb> local_axi4_lite;
typedef typename axi::axi4_segment<axi::cfg::lite_nowstrb> local_axi4_lite_segment;

#endif
