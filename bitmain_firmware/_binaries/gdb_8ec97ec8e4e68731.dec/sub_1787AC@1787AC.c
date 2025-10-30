int __fastcall sub_1787AC(int a1, _DWORD *a2, __int64 *a3, _DWORD *a4)
{
  _DWORD *v5; // r5
  int v6; // r4
  _DWORD *v8; // r0
  int v9; // r0
  int v10; // r7
  int v11; // r9
  int v12; // r0
  int v13; // r0
  int v14; // r0
  int v15; // r0
  char *v16; // r4
  const char *v17; // r4
  char *v18; // r0
  int v19; // r0
  int v20; // r4
  int v21; // r2
  __int16 *v22; // r3
  int v23; // r5
  __int64 v24; // r0
  unsigned int v25; // r3
  __int64 v26; // kr00_8
  _DWORD *v28; // [sp+4h] [bp-10h] BYREF
  char **v29; // [sp+8h] [bp-Ch] BYREF

  v5 = a4;
  if ( a2 )
    a4 = 0;
  v6 = a1;
  if ( a2 )
    *a2 = a4;
  if ( a3 )
    *a3 = -1;
  if ( v5 )
    *v5 = 0;
  v8 = (_DWORD *)sub_26BC70(a1);
  v9 = sub_171258(v8);
  v10 = v9;
  if ( **(_BYTE **)(v9 + 24) != 3 )
    return 0;
  v11 = sub_173244((_DWORD *)v9, &v28);
  if ( v11 < 0 )
    return 0;
  v12 = sub_171258(v28);
  if ( v10 != v12 )
  {
    v6 = sub_2647C8(v12, v6);
    if ( v5 )
      *v5 = 1;
  }
  v13 = sub_26F824(v6, v11);
  if ( !((int (__fastcall *)(int))loc_26C09C)(v13) )
    return 0;
  v14 = sub_26F824(v6, v11);
  v15 = sub_26EBA8(v14);
  sub_1B240C(&v29, v15);
  if ( !v29 )
    return 0;
  v16 = *v29;
  if ( !*v29 || !sub_FC54C() )
    return 0;
  v17 = (const char *)sub_1008BC(v16);
  v18 = strchr(v17, 32);
  if ( v18 )
    *v18 = 0;
  v19 = sub_1007F0(v17, 0);
  v20 = v19;
  if ( !v19 )
    return 0;
  v21 = *(_DWORD *)(v19 + 24);
  if ( (*(_WORD *)(v21 + 2) & 0x380) == 0x80 )
    v22 = *(__int16 **)(v21 + 28);
  else
    v22 = &word_3B4A2C;
  if ( *v22 <= 1 )
  {
    if ( !a2 )
      return v20;
    *a2 = 1;
    return v20;
  }
  if ( a2 )
  {
    if ( *a2 != 1 )
    {
      if ( !a3 )
        return v20;
      v23 = *(_DWORD *)(v21 + 24);
      v24 = *(_QWORD *)(v23 + 24 * ((int (__fastcall *)(int))loc_1724A0)(v19));
      v25 = (((SHIDWORD(v24) >> 31) & 7) + (unsigned int)v24) >> 3;
      v26 = ((SHIDWORD(v24) >> 31) & 7) + v24;
      HIDWORD(v24) = (unsigned __int64)(v24 / 8) >> 32;
      LODWORD(v24) = v25 | (HIDWORD(v26) << 29);
      *a3 = v24;
      if ( v24 < 1 )
        return v20;
      if ( *(_DWORD *)(v20 + 20) > *(_DWORD *)(v10 + 20) )
      {
        *a2 = 0;
        return v20;
      }
    }
    *a2 = 1;
    return v20;
  }
  return v20;
}
