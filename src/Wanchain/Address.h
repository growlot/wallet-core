// Copyright © 2017-2019 Trust Wallet.
//
// This file is part of Trust. The full Trust copyright notice, including
// terms governing use, modification, and redistribution, is contained in the
// file LICENSE at the root of the source code distribution tree.

#pragma once

#include "../Ethereum/Address.h"
#include "../PublicKey.h"
#include <array>
#include <stdint.h>
#include <vector>

namespace TW {
namespace Wanchain {
class Address : public Ethereum::Address {
  public:
    using Ethereum::Address::Address;

    /// Returns a string representation of the address.
    std::string string() const;
};
} // namespace Wanchain
} // namespace TW

/// Wrapper for C interface.
struct TWWanchainAddress {
    TW::Wanchain::Address impl;
};
