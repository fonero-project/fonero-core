#pragma once
#include "xdr/Fonero-ledger-entries.h"
#include "xdr/Fonero-ledger.h"
#include "xdr/Fonero-overlay.h"
#include "xdr/Fonero-transaction.h"
#include "xdr/Fonero-types.h"

namespace fonero
{

std::string xdr_printer(const PublicKey& pk);
}
