#pragma once
#include "../windissect_forwards.h"

// Reconstructed from bcp47mrm.dll by Windissect. 8 member(s).
class Bcp47 {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Bcp47@@QEAA@PEAUHSTRING__@@_N@Z
    Bcp47(HSTRING__*, bool);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Bcp47@@QEAA@PEBG@Z
    Bcp47(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDirectionality@Bcp47@@QEAA?AW4BCP47_SCRIPT_DIRECTIONALITY@Internal@Windows@@XZ
    int GetDirectionality();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDistance@Bcp47@@SAHPEBG0@Z
    static int GetDistance(unsigned short const *, unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsNeutral@Bcp47@@QEAA_NXZ
    bool IsNeutral();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsValid@Bcp47@@QEAA_NXZ
    bool IsValid();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShareSameLanguageAndScript@Bcp47@@SA_NPEBG0@Z
    static bool ShareSameLanguageAndScript(unsigned short const *, unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1Bcp47@@QEAA@XZ
    ~Bcp47();
};
