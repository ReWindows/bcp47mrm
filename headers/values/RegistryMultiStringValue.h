#pragma once
#include "../windissect_forwards.h"

// Reconstructed from bcp47mrm.dll by Windissect. 5 member(s).
class RegistryMultiStringValue {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clear@RegistryMultiStringValue@@UEAAXXZ
    virtual void Clear();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0RegistryMultiStringValue@@QEAA@PEAUHKEY__@@PEBG1K@Z
    RegistryMultiStringValue(HKEY__*, unsigned short const *, unsigned short const *, unsigned long);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1RegistryMultiStringValue@@UEAA@XZ
    virtual ~RegistryMultiStringValue();
};
