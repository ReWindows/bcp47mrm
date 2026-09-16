// Flat C exports observed in bcp47mrm.dll. Unknown ABIs are intentionally not declared.
// Validated dialects: ISO C17/C23/C26 draft and Windissect C20 (C ABI under C++20).
#pragma once
#ifndef BCP47MRM_C_H
#define BCP47MRM_C_H
#if defined(__cplusplus)
#  if __cplusplus < 202002L
#    define WINDISSECT_C20_PROFILE 0
#  else
#    define WINDISSECT_C20_PROFILE 1
#  endif
extern "C" {
#else
#  if defined(__STDC_VERSION__) && __STDC_VERSION__ < 201710L
#    error "Windissect C output requires C17 or newer"
#  endif
#  define WINDISSECT_C20_PROFILE 0
#  define WINDISSECT_C_STANDARD __STDC_VERSION__
#endif

// Export: Bcp47IsValid (ABI unverified)
// Export: GetApplicationLayoutDirection (ABI unverified)
// Export: GetLanguageDirectionality (ABI unverified)
// Export: GetApplicationLanguagesWithUserLanguagesFallback (ABI unverified)
// Export: GetDistanceOfClosestLanguageInList (ABI unverified)
// Export: IsWellFormedTag (ABI unverified)
// Export: CompareBcp47Tags (ABI unverified)
// Export: IsValidUnIsoRegionTag (ABI unverified)
// Export: Bcp47GetDistanceCString (ABI unverified)
// Export: Bcp47GetNeutralFormCString (ABI unverified)
// Export: GetMrtDisplayLanguageList (ABI unverified)
// Export: FormatLanguageList (ABI unverified)
// Export: FormatLanguageTag (ABI unverified)
// Export: GetClosenessOfUnIsoRegionTags (ABI unverified)
// Export: GetCompositeRegionCode (ABI unverified)
// Export: GetParentCompositeRegionCode (ABI unverified)
// Export: IsValidTag (ABI unverified)

#ifdef __cplusplus
} // extern "C"
#endif
#endif // BCP47MRM_C_H
