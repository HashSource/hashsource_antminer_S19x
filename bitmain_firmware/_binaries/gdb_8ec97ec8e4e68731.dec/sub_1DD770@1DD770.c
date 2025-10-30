int __fastcall sub_1DD770(int a1, int a2, int a3)
{
  __int64 v6; // r0
  int v7; // r0

  ((void (__fastcall *)(int, _DWORD, _DWORD, int))loc_1DD4B4)(a1, **(_DWORD **)a3, 0, 1);
  if ( *(_BYTE *)(a3 + 16) )
  {
    v6 = sub_94700(
           (int)"regcache.c",
           216,
           "%s: Assertion `%s' failed.",
           "regcache::regcache(regcache::readonly_t, const regcache&)",
           "!src.m_readonly_p");
    v7 = sub_1DFE3C(a1, HIDWORD(v6));
    sub_338FFC(v7);
  }
  ((void (__fastcall *)(int, void *, int))loc_1DD624)(a1, &sub_1DE034, a3);
  return a1;
}
