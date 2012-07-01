// ------------------------------------------------------------------------------------------------
// net/ntp.h
// ------------------------------------------------------------------------------------------------

#pragma once

#include "net/intf.h"

// ------------------------------------------------------------------------------------------------
void ntp_rx(Net_Intf* intf, const u8* pkt, uint len);
void ntp_tx(const IPv4_Addr* dst_addr);

void ntp_print(const u8* pkt, uint len);