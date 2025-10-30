int __fastcall sub_2DC674(int a1, _DWORD *a2)
{
  int v4; // r3
  int v6; // r7
  unsigned int v7; // r8
  int v8; // r6
  int v9; // r2
  int v10; // r1
  int v11; // r0
  int v12; // r3
  unsigned int v13; // r0
  int v14; // r2
  int v15; // r3

  if ( *(_DWORD *)(a1 + 32) == -1 )
    return 1;
  if ( (*(int (**)(void))(a2[1] + 356))() )
  {
    v6 = a2[5];
    v7 = *(_DWORD *)(v6 + 4 * *(_DWORD *)(a1 + 32));
    v8 = (unsigned __int64)sub_347674(v7, a2[11]) >> 32;
    v9 = a2[8];
    v10 = a2[7];
    v11 = ((a2[3] >> a2[14]) - 1) & (v7 >> a2[14]);
    v12 = *(_DWORD *)(v9 + 4 * v11) | (1 << (v7 & a2[16]));
    *(_DWORD *)(v9 + 4 * v11) = v12;
    *(_DWORD *)(v9 + 4 * v11) = v12 | (1 << (a2[16] & (*(_DWORD *)(v6 + 4 * *(_DWORD *)(a1 + 32)) >> a2[15])));
    v13 = *(_DWORD *)(v6 + 4 * *(_DWORD *)(a1 + 32)) & 0xFFFFFFFE;
    if ( *(_DWORD *)(v10 + 4 * v8) == 1 )
      v13 |= 1u;
    (*(void (__fastcall **)(unsigned int, int))(*(_DWORD *)(*a2 + 4) + 48))(
      v13,
      a2[9] + 4 * (*(_DWORD *)(a2[6] + 4 * v8) - a2[12]));
    v14 = a2[6];
    --*(_DWORD *)(a2[7] + 4 * v8);
    v15 = *(_DWORD *)(v14 + 4 * v8);
    *(_DWORD *)(v14 + 4 * v8) = v15 + 1;
    *(_DWORD *)(a1 + 32) = v15;
  }
  else if ( *(_DWORD *)(a1 + 32) >= a2[10] )
  {
    v4 = a2[13];
    a2[13] = v4 + 1;
    *(_DWORD *)(a1 + 32) = v4;
    return 1;
  }
  return 1;
}
