#pragma once
#include <xdr/Fonero-types.h>

namespace std
{
template <> struct hash<fonero::uint256>
{
    size_t operator()(fonero::uint256 const& x) const noexcept;
};
}
