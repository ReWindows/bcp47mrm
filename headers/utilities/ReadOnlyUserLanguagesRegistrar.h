#pragma once
#include "../windissect_forwards.h"

// Reconstructed from bcp47mrm.dll by Windissect. 6 member(s).
class ReadOnlyUserLanguagesRegistrar {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNextAvailableTransientLcid@ReadOnlyUserLanguagesRegistrar@@UEAAKXZ
    virtual unsigned long GetNextAvailableTransientLcid();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsUserLocaleAutoSetFromLanguageProfile@ReadOnlyUserLanguagesRegistrar@@UEAA_NXZ
    virtual bool IsUserLocaleAutoSetFromLanguageProfile();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ReadOnlyUserLanguagesRegistrar@@QEAA@XZ
    ReadOnlyUserLanguagesRegistrar();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ReadOnlyUserLanguagesRegistrar@@UEAA@XZ
    virtual ~ReadOnlyUserLanguagesRegistrar();
};
