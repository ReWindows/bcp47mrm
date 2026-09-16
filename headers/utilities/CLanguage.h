#pragma once
#include "../windissect_forwards.h"

// Reconstructed from bcp47mrm.dll by Windissect. 18 member(s).
namespace Windows::Internal {
class CLanguage {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CLanguage@Internal@Windows@@QEAA@PEBG_N@Z
    CLanguage(unsigned short const *, bool);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CLanguage@Internal@Windows@@QEAA@_K@Z
    CLanguage(uint64_t);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CLanguage@Internal@Windows@@QEAA@XZ
    CLanguage();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CLanguage@Internal@Windows@@QEAA@AEBV012@@Z
    CLanguage(::Windows::Internal::CLanguage const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckLanguageRegionAffinity@CLanguage@Internal@Windows@@QEBAJAEBV123@PEAH@Z
    long CheckLanguageRegionAffinity(::Windows::Internal::CLanguage const &, int *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Compare@CLanguage@Internal@Windows@@QEBAJAEBV123@PEAN@Z
    long Compare(::Windows::Internal::CLanguage const &, double *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindClosestInList@CLanguage@Internal@Windows@@QEBAJPEBGW4BCP47_COMPARISON_ALGORITHM@23@PEAPEBGPEAN@Z
    long FindClosestInList(unsigned short const *, int, unsigned short const * *, double *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSubtagFields@CLanguage@Internal@Windows@@QEBAJW4BCP47_SUBTAG_FLAGS@23@PEAG@Z
    long GetSubtagFields(int, unsigned short *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSubtagFields@CLanguage@Internal@Windows@@QEBAJW4BCP47_SUBTAG_FLAGS@23@_KPEAGPEA_K@Z
    long GetSubtagFields(int, uint64_t, unsigned short *, uint64_t *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsValidTag@CLanguage@Internal@Windows@@SA_NPEBG@Z
    static bool IsValidTag(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryFindFirstInList@CLanguage@Internal@Windows@@QEBAJPEBGW4BCP47_CLOSENESS_MEASURE@23@PEAPEBG@Z
    long TryFindFirstInList(unsigned short const *, int, unsigned short const * *) const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CLanguage@Internal@Windows@@UEAA@XZ
    virtual ~CLanguage();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ParseTag@CLanguage@Internal@Windows@@IEAA_NPEBG@Z
    bool ParseTag(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateTag@CLanguage@Internal@Windows@@IEAA_NPEBG@Z
    bool ValidateTag(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateTagAndInitialize@CLanguage@Internal@Windows@@IEAA_NPEBG@Z
    bool ValidateTagAndInitialize(unsigned short const *);
};
} // namespace Windows::Internal
