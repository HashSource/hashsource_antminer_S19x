int __fastcall sub_329428(int result, int *a2, int *a3, int *a4)
{
  int v4; // r5
  int v5; // r12
  int v6; // r8
  int *v7; // r12
  int v9; // r7
  int v11; // r0
  int v12; // r1
  int v13; // r2
  int v14; // r3
  int v15; // r0
  int v16; // r1
  int v17; // r2
  int v18; // r3
  int v19; // r3
  unsigned __int64 v20; // r2
  int v21[2]; // [sp+Ch] [bp-20h] BYREF
  int v22; // [sp+14h] [bp-18h]
  int v23; // [sp+18h] [bp-14h]
  int v24; // [sp+1Ch] [bp-10h]
  int v25; // [sp+20h] [bp-Ch]
  int v26; // [sp+24h] [bp-8h]

  v4 = a2[2] - (*a2 - 1);
  if ( *(_WORD *)(result + 10) || *(_DWORD *)result != 1 || (*(_BYTE *)(result + 8) & 0x70) != 0 )
  {
    v5 = *a4;
    *a4 |= 0x1000u;
    v6 = v4 - *(_DWORD *)(result + 4);
    if ( v6 > 0 )
    {
      v7 = a2;
      v9 = result;
      v11 = *a2;
      v12 = a2[1];
      v13 = v7[2];
      v14 = v7[3];
      v7 += 4;
      v21[0] = v11;
      v21[1] = v12;
      v22 = v13;
      v23 = v14;
      v15 = *v7;
      v16 = v7[1];
      v17 = v7[2];
      v18 = *(_DWORD *)v9;
      v22 -= v6;
      v24 = v15;
      v25 = v16;
      v26 = v17;
      v21[0] = v18 - v6;
      result = sub_328A00(v9, v21, (unsigned __int16 *)(v9 + 10), v18, a3, a4);
      if ( *a3 )
      {
        HIDWORD(v20) = a4;
        LODWORD(v20) = *a3;
        result = sub_329110(v9, v21, v20);
      }
      if ( (*a4 & 0x20) != 0 )
        *a4 |= 0x2000u;
      if ( *(_DWORD *)(v9 + 4) > v4 )
      {
        result = sub_32845C((char *)(v9 + 10), *(_DWORD *)v9, 1);
        v19 = *(_DWORD *)(v9 + 4);
        *(_DWORD *)v9 = result;
        *(_DWORD *)(v9 + 4) = v19 - 1;
      }
      if ( !*(_WORD *)(v9 + 10) && *(_DWORD *)v9 == 1 && (*(_BYTE *)(v9 + 8) & 0x70) == 0 )
        *a4 |= 0x400u;
    }
    else if ( (v5 & 0x20) != 0 )
    {
      *a4 = v5 | 0x3000;
    }
  }
  else if ( *(_DWORD *)(result + 4) < v4 )
  {
    *(_DWORD *)(result + 4) = v4;
    *a4 |= 0x400u;
  }
  return result;
}
