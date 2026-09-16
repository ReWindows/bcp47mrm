#pragma once
#include "../windissect_forwards.h"

// Reconstructed from bcp47mrm.dll by Windissect. 4 member(s).
class PackageInfoHelper {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFamilyName@PackageInfoHelper@@UEAAPEBGXZ
    virtual unsigned short const * GetFamilyName();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFullName@PackageInfoHelper@@UEAAPEBGXZ
    virtual unsigned short const * GetFullName();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSystemApp@PackageInfoHelper@@UEAA_NXZ
    virtual bool IsSystemApp();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0PackageInfoHelper@@QEAA@PEBG@Z
    PackageInfoHelper(unsigned short const *);
};
