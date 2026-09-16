#pragma once
#include "../windissect_forwards.h"

// Reconstructed from bcp47mrm.dll by Windissect. 5 member(s).
class ApplicationLanguagesRegistrar {
public:
    class AppKey;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearApplicationLanguageOverride@ApplicationLanguagesRegistrar@@UEAAXXZ
    virtual void ClearApplicationLanguageOverride();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearApplicationManifestLanguages@ApplicationLanguagesRegistrar@@UEAAXXZ
    virtual void ClearApplicationManifestLanguages();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ApplicationLanguagesRegistrar@@UEAA@XZ
    virtual ~ApplicationLanguagesRegistrar();
};
