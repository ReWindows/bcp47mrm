#pragma once
#include "../windissect_forwards.h"

// Reconstructed from bcp47mrm.dll by Windissect. 15 member(s).
namespace Windows::Internal {
class LanguagesList {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindClosest@LanguagesList@Internal@Windows@@UEBAJAEBVCLanguage@23@W4BCP47_COMPARISON_ALGORITHM@23@PEAIPEAN@Z
    virtual long FindClosest(::Windows::Internal::CLanguage const &, int, unsigned int *, double *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindClosest@LanguagesList@Internal@Windows@@UEBAJPEBGW4BCP47_COMPARISON_ALGORITHM@23@PEAIPEAN@Z
    virtual long FindClosest(unsigned short const *, int, unsigned int *, double *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?FormatAsHttpAcceptLanguageHeader@LanguagesList@Internal@Windows@@UEBAJ_KPEA_KPEAG@Z
    virtual long FormatAsHttpAcceptLanguageHeader(uint64_t, uint64_t *, unsigned short *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEntry@LanguagesList@Internal@Windows@@UEBAJIPEAG@Z
    virtual long GetEntry(unsigned int, unsigned short *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEntry@LanguagesList@Internal@Windows@@UEBAJIPEAPEBVCLanguage@23@@Z
    virtual long GetEntry(unsigned int, ::Windows::Internal::CLanguage const * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetListSize@LanguagesList@Internal@Windows@@UEBAIXZ
    virtual unsigned int GetListSize() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeFromRegistry@LanguagesList@Internal@Windows@@UEAAJXZ
    virtual long InitializeFromRegistry();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ToString@LanguagesList@Internal@Windows@@UEBAJW4BCP47_SUBTAG_FLAGS@23@GPEA_KPEAG@Z
    virtual long ToString(int, unsigned short, uint64_t *, unsigned short *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryFindEntry@LanguagesList@Internal@Windows@@UEBAJAEBVCLanguage@23@PEAI@Z
    virtual long TryFindEntry(::Windows::Internal::CLanguage const &, unsigned int *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryFindEntry@LanguagesList@Internal@Windows@@UEBAJPEBGPEAI@Z
    virtual long TryFindEntry(unsigned short const *, unsigned int *) const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1LanguagesList@Internal@Windows@@UEAA@XZ
    virtual ~LanguagesList();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BaseInit@LanguagesList@Internal@Windows@@MEAAJPEBG@Z
    virtual long BaseInit(unsigned short const *);
};
} // namespace Windows::Internal
