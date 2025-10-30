int __fastcall sub_A897C(int a1, int a2)
{
  __int64 v4; // r2
  unsigned __int64 v5; // r4
  __int64 v6; // r6
  __int64 v7; // r0
  __int64 v8; // r2
  unsigned __int64 v9; // r2
  int result; // r0
  __int64 v11; // r4
  unsigned int v12; // r1
  int v13; // r3
  _BOOL4 v14; // r3
  int v15; // r4
  __int64 v16; // [sp+0h] [bp-24h]
  __int64 v17; // [sp+8h] [bp-1Ch]
  unsigned __int64 v18; // [sp+10h] [bp-14h]

  LODWORD(v4) = 0;
  HIDWORD(v4) = (*(unsigned __int8 *)(a2 + 5) << 16) | (*(unsigned __int8 *)(a2 + 4) << 24);
  LODWORD(v17) = 0;
  HIDWORD(v16) = *(unsigned __int8 *)(a2 + 6) << 8;
  LODWORD(v16) = 0;
  HIDWORD(v17) = *(unsigned __int8 *)(a2 + 7);
  LODWORD(v5) = *(unsigned __int8 *)(a1 + 3879)
              | (*(unsigned __int8 *)(a1 + 3876) << 24)
              | (*(unsigned __int8 *)(a1 + 3877) << 16);
  HIDWORD(v5) = _byteswap_ulong(*(_DWORD *)(a1 + 3872));
  LODWORD(v6) = *(unsigned __int8 *)(a1 + 3878) << 8;
  LODWORD(v7) = *(unsigned __int8 *)(a2 + 8) << 24;
  v18 = (unsigned int)v6 | v5;
  v6 = (unsigned int)v6;
  LODWORD(v6) = *(unsigned __int8 *)(a2 + 9) << 16;
  v8 = v17 | v16 | v4 | *(unsigned __int8 *)(a2 + 11) | (unsigned int)v7 | v6;
  v7 = (unsigned int)v7;
  LODWORD(v7) = *(unsigned __int8 *)(a2 + 10) << 8;
  v9 = v8 | v7;
  result = v18;
  v11 = v18 - v9;
  v12 = (unsigned int)((v18 - v9) >> 32) >> 31;
  if ( v9 >= v18 )
    v12 = 0;
  if ( v12 )
    goto LABEL_4;
  result = v18;
  v14 = v18 < v9;
  if ( v11 < 1 )
    v14 = 0;
  if ( !v14 )
  {
    if ( v11 < 129 )
    {
      if ( v11 < -128 )
        return result;
      if ( (int)v11 <= 0 )
      {
        v15 = -(int)v11;
        if ( v15 <= 31 )
          *(_DWORD *)a2 |= 1 << v15;
        return result;
      }
      if ( (int)v11 <= 31 )
      {
        *(_DWORD *)a2 = (*(_DWORD *)a2 << v11) | 1;
        goto LABEL_5;
      }
    }
LABEL_4:
    *(_DWORD *)a2 = 1;
LABEL_5:
    v13 = *(_DWORD *)(a1 + 3876);
    *(_DWORD *)(a2 + 4) = *(_DWORD *)(a1 + 3872);
    *(_DWORD *)(a2 + 8) = v13;
  }
  return result;
}
