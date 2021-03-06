// Copyright © 2017-2019 Trust Wallet.
//
// This file is part of Trust. The full Trust copyright notice, including
// terms governing use, modification, and redistribution, is contained in the
// file LICENSE at the root of the source code distribution tree.

#pragma once

#include "Asset.h"
#include "../Data.h"

namespace TW {
namespace Ontology {

class Ont : public Asset {
  private:
    static const uint8_t version = 0x00;

    const Data ontContract = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                              0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01};

  public:
    Data contractAddress() override { return ontContract; }

    Transaction decimals(const Address& address) override;

    Transaction balanceOf(const Address& address) override;

    Transaction transfer(const Signer& from, const Address& to, uint64_t amount,
                         const Signer& payer, uint64_t gasPrice, uint64_t gasLimit) override;
};

} // namespace Ontology
} // namespace TW
