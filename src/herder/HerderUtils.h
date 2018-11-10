#pragma once

// Copyright 2017 Fonero Development Foundation and contributors. Licensed
// under the Apache License, Version 2.0. See the COPYING file at the root
// of this distribution or at http://www.apache.org/licenses/LICENSE-2.0

#include "xdr/Fonero-types.h"
#include <vector>

namespace fonero
{

struct SCPEnvelope;
struct SCPStatement;
struct FoneroValue;

std::vector<Hash> getTxSetHashes(SCPEnvelope const& envelope);
std::vector<FoneroValue> getFoneroValues(SCPStatement const& envelope);
}
