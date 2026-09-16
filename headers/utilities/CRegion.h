#pragma once
#include "../windissect_forwards.h"

// Reconstructed from bcp47mrm.dll by Windissect. 4 member(s).
namespace Windows::Internal {
class CRegion {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CRegion@Internal@Windows@@QEAA@PEBG@Z
    CRegion(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Compare@CRegion@Internal@Windows@@QEBAJAEBV123@PEAN@Z
    long Compare(::Windows::Internal::CRegion const &, double *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCompositeRegionCode@CRegion@Internal@Windows@@SAII@Z
    static unsigned int GetCompositeRegionCode(unsigned int);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryFindRegionId@CRegion@Internal@Windows@@CAIPEBG@Z
    static unsigned int TryFindRegionId(unsigned short const *);
};
} // namespace Windows::Internal
