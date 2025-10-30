_DWORD *__fastcall sub_12B568(size_t *a1, int a2, __int64 a3)
{
  int v5; // r0
  _DWORD *v6; // r6
  int v8; // [sp+4h] [bp-38h] BYREF
  _BYTE v9[48]; // [sp+Ch] [bp-30h] BYREF

  v8 = a2;
  v5 = sub_1603FC(&v8, v9);
  if ( v5 && ((v6 = (_DWORD *)v5, !a3) || sub_160410(v5, a3, HIDWORD(a3))) )
    return sub_12AFB4(a1, v6, 23);
  else
    return 0;
}
