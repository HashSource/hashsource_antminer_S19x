int __fastcall sub_19E75C(int a1, _DWORD *a2)
{
  int v2; // r3
  int result; // r0
  int v4; // r2
  bool v5; // zf
  int v6; // r2
  int v7; // r3
  int v8; // r0
  int v9; // r3
  __int64 v10; // r6
  __int64 v11; // r4
  _DWORD *v12; // r0
  _DWORD *v13; // r0
  _BYTE *v14; // r3
  unsigned int v15; // r2
  __int64 v16; // r2
  int v17; // r2
  int v18; // r0
  __int64 v19; // [sp+0h] [bp-14h] BYREF
  __int64 v20; // [sp+8h] [bp-Ch] BYREF

  v2 = *(_DWORD *)(a1 + 24);
  if ( *(_BYTE *)v2 != 3 )
    sub_946E0("expecting long_set");
  result = *(__int16 *)(v2 + 4);
  v4 = *(_WORD *)(v2 + 2) & 0x380;
  v5 = v4 == 128;
  if ( v4 == 128 )
    v6 = *(_DWORD *)(v2 + 28);
  else
    v6 = 18988;
  if ( !v5 )
    HIWORD(v6) = 59;
  if ( *(_WORD *)(v2 + 4) )
  {
    v7 = *(_DWORD *)(v2 + 24);
    v8 = v7 + 24 * result;
    v9 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v7 + 24 * *(__int16 *)v6 + 12) + 24) + 24) + 12)
                   + 24);
    v10 = *(_QWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v8 - 12) + 24) + 24) + 12)
                                            + 24)
                                + 24)
                    + 24);
    v11 = *(_QWORD *)(*(_DWORD *)(v9 + 24) + 8);
    v12 = *(_DWORD **)(v9 + 20);
    *a2 = v12;
    v13 = (_DWORD *)sub_171258(v12);
    v14 = (_BYTE *)v13[6];
    if ( *v14 != 20 || (v15 = v13[5], v15 > 7) || (v14[1] & 1) != 0 )
    {
      if ( sub_17195C(v13, &v19, &v20) < 0 )
        sub_946E0("long_set failed to find discrete bounds for its subtype");
      v16 = v19;
    }
    else
    {
      v17 = 1 << (8 * v15 - 1);
      v18 = v17 - 1;
      v16 = -v17;
      v20 = v18;
    }
    return v11 == v16 && v20 == v10;
  }
  return result;
}
