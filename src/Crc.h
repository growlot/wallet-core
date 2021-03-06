// Copyright © 2017-2019 Trust Wallet.
//
// This file is part of Trust. The full Trust copyright notice, including
// terms governing use, modification, and redistribution, is contained in the
// file LICENSE at the root of the source code distribution tree.

#pragma once

#include "Data.h"

namespace TW {
namespace Crc {

/// CRC16 implementation compatible with the Stellar version
/// Ported from this implementation: http://introcs.cs.princeton.edu/java/61data/CRC16CCITT.java.html
/// Initial value changed to 0x0000 to match Stellar
uint16_t crc16(uint8_t* bytes, uint32_t length);

} // namespace Crc
} // namespace TW
