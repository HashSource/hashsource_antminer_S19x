int __fastcall sub_7F90C(int a1, _DWORD *a2, int a3, int a4)
{
  unsigned int v4; // r7
  unsigned int v5; // r5
  int v7; // r6
  int v8; // r4
  int v9; // r3
  int v11; // r4
  int v12; // r0
  unsigned int v13; // lr
  int v14; // r1
  unsigned int v15; // r12
  unsigned int v16; // r3
  unsigned int v17; // r7
  int v18; // t1
  int v19; // r0
  int v20; // [sp+0h] [bp-Ch]

  v4 = a4 + 1;
  v5 = a2[2];
  if ( (*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 4) + 100) + 48) & 1) != 0 )
  {
    if ( v4 + a3 > v5 )
      return 0;
    v5 -= a3;
    v7 = a2[6];
    v8 = a2[3];
    v9 = a2[5] + a3;
    a2[2] = v5;
    a2[5] = v9;
    a2[6] = v7 + a3;
    a2[3] = v8 - a3;
  }
  else
  {
    if ( v4 > v5 )
      return *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 4) + 100) + 48) & 1;
    v9 = a2[5];
  }
  v11 = *(unsigned __int8 *)(v5 + v9 - 1);
  v12 = sub_D8920(*(_DWORD *)(a1 + 972));
  if ( (sub_D8928(v12) & 0x200000) == 0 )
  {
    v13 = a2[2];
    v14 = ~((int)(((v4 + v11) ^ (v13 - (v4 + v11)) | v13 ^ (v4 + v11)) ^ v13) >> 31);
    if ( v13 <= 0xFF )
    {
      v15 = a2[2];
      if ( !v13 )
      {
LABEL_10:
        v20 = ((((unsigned __int8)v14 ^ 0xFF) - 1) & ~((unsigned __int8)v14 ^ 0xFF)) >> 31;
        a2[2] = v13 - ((v11 + 1) & v20);
        return ~v20 | v20 & 1;
      }
    }
    else
    {
      v15 = 256;
    }
    v16 = 0;
    v17 = a2[5] + v13;
    do
    {
      v18 = *(unsigned __int8 *)--v17;
      v19 = v11 ^ v16 | (v11 - v16) ^ v16;
      ++v16;
      v14 &= ~((v18 ^ v11) & ~((v19 ^ v11) >> 31));
    }
    while ( v16 < v15 );
    goto LABEL_10;
  }
  a2[2] = a2[2] - 1 - v11;
  return 1;
}
