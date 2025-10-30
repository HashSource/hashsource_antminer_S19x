int __fastcall sub_8DE24(_DWORD *a1, const void *a2, size_t a3)
{
  _DWORD *v4; // r4
  int result; // r0
  int (__fastcall *v8)(_DWORD *, const void *, size_t, _DWORD *); // r4
  int v9; // r0
  unsigned int *v10; // r3
  unsigned int v11; // r2
  _DWORD *v12; // r0
  int v13; // r0
  int v14; // r0
  int v15; // r4
  unsigned int *v16; // r3
  unsigned int v17; // r2
  _DWORD v18[83]; // [sp+4h] [bp-204h] BYREF
  _BYTE dest[184]; // [sp+150h] [bp-B8h] BYREF

  v4 = (_DWORD *)a1[376];
  result = v4[9] & 0x100;
  if ( !result )
  {
    v18[0] = *a1;
    if ( a3 > 0x20 )
      return result;
    memcpy(dest, a2, a3);
    v13 = v4[134];
    v18[82] = a3;
    sub_10C544(v13);
    v14 = sub_DFA98(*(_DWORD *)(a1[376] + 20), v18);
    v15 = v14;
    if ( v14 )
    {
      sub_8DBC8(v14);
      sub_10C564(*(_DWORD *)(a1[376] + 536));
      return v15;
    }
    sub_10C564(*(_DWORD *)(a1[376] + 536));
    v16 = (unsigned int *)(a1[376] + 80);
    do
      v17 = __ldrex(v16);
    while ( __strex(v17 + 1, v16) );
    v4 = (_DWORD *)a1[376];
  }
  v8 = (int (__fastcall *)(_DWORD *, const void *, size_t, _DWORD *))v4[13];
  if ( !v8 )
    return (int)v8;
  v18[0] = 1;
  v9 = v8(a1, a2, a3, v18);
  v8 = (int (__fastcall *)(_DWORD *, const void *, size_t, _DWORD *))v9;
  if ( !v9 )
    return (int)v8;
  v10 = (unsigned int *)(a1[376] + 96);
  do
    v11 = __ldrex(v10);
  while ( __strex(v11 + 1, v10) );
  if ( v18[0] )
    sub_8DBC8(v9);
  v12 = (_DWORD *)a1[376];
  if ( (v12[9] & 0x200) != 0 )
    return (int)v8;
  sub_8DC08(v12, (int)v8);
  return (int)v8;
}
