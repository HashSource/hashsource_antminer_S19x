int __fastcall sub_30D52C(__int64 a1, int a2)
{
  size_t v2; // r4
  __int64 v3; // kr00_8

  if ( *(_DWORD *)HIDWORD(a1) != a2 )
  {
    v3 = a1;
    HIDWORD(a1) = a2 - *(_DWORD *)HIDWORD(a1);
    v2 = HIDWORD(a1);
    sub_30D298(a1);
    LODWORD(a1) = memcpy(*(void **)(v3 + 4), *(const void **)HIDWORD(v3), v2);
    *(_DWORD *)(v3 + 4) += v2;
  }
  return a1;
}
