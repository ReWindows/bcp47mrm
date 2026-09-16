#pragma once
#include "../windissect_forwards.h"

// Reconstructed from bcp47mrm.dll by Windissect. 14 member(s).
class RegistryKey {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDwordValue@RegistryKey@@UEBAKPEBG@Z
    virtual unsigned long GetDwordValue(unsigned short const *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValuesCount@RegistryKey@@UEBAKXZ
    virtual unsigned long GetValuesCount() const;
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0RegistryKey@@QEAA@PEAUHKEY__@@PEBGKK@Z
    RegistryKey(HKEY__*, unsigned short const *, unsigned long, unsigned long);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0RegistryKey@@QEAA@PEAXPEAUHKEY__@@PEBGKK@Z
    RegistryKey(void *, HKEY__*, unsigned short const *, unsigned long, unsigned long);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0RegistryKey@@QEAA@PEAUHKEY__@@@Z
    RegistryKey(HKEY__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveSubKey@RegistryKey@@UEAAXPEBG@Z
    virtual void RemoveSubKey(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveValue@RegistryKey@@UEAAXPEBG@Z
    virtual void RemoveValue(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetValue@RegistryKey@@UEAAXPEBGK@Z
    virtual void SetValue(unsigned short const *, unsigned long);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1RegistryKey@@UEAA@XZ
    virtual ~RegistryKey();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitForUserHive@RegistryKey@@IEAAXPEAXPEBG1K@Z
    void InitForUserHive(void *, unsigned short const *, unsigned short const *, unsigned long);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureKeyExists@RegistryKey@@AEAAXXZ
    void EnsureKeyExists();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetValue@RegistryKey@@AEAAXPEBGKPEBEK@Z
    void SetValue(unsigned short const *, unsigned long, unsigned char const *, unsigned long);
};
