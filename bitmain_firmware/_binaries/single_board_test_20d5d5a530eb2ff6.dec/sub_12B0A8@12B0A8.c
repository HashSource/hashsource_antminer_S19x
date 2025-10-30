_DWORD *__fastcall sub_12B0A8(size_t *a1, int a2, __int64 a3)
{
  int v5; // r0
  _DWORD *v6; // r6
  _DWORD *result; // r0
  int v8; // [sp+Ch] [bp-38h] BYREF
  _BYTE v9[48]; // [sp+14h] [bp-30h] BYREF

  v8 = a2;
  v5 = sub_1603FC(&v8, v9);
  v6 = (_DWORD *)v5;
  if ( v5 )
  {
    if ( !a3 )
      return sub_12AFB4(a1, v6, -1);
    result = (_DWORD *)sub_160410(v5, a3, HIDWORD(a3));
    if ( result )
      return sub_12AFB4(a1, v6, -1);
  }
  else
  {
    sub_D0048(13, 217, 173, (int)"crypto/asn1/a_time.c", 330);
    return 0;
  }
  return result;
}
