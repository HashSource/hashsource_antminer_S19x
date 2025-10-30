int __fastcall sub_2DC8D0(int a1)
{
  int v1; // r3
  int v2; // r2
  int v3; // r3
  _DWORD *v5; // r3
  int v6; // r12
  int v7; // r3
  _DWORD *v8; // r3
  int v9; // r2
  int v10; // r0
  int v11; // r2
  int i; // r3
  int v13; // t1
  int *v15; // r2
  int v16; // r1
  int v17; // r2

  if ( (*(_BYTE *)(a1 + 53) & 0x10) != 0 )
    return 1;
  v1 = *(_DWORD *)(a1 + 68);
  if ( !v1 )
    return 1;
  v2 = *(_DWORD *)(v1 + 8);
  if ( (unsigned int)(v2 - 1) > 0xFFFFFFFD )
    return 1;
  v3 = *(_DWORD *)(v1 + 4);
  if ( v3 )
  {
    if ( *(_DWORD *)(v3 - 4) )
      return 1;
  }
  sub_2DC8D0(v2);
  v5 = *(_DWORD **)(a1 + 68);
  v6 = v5[1];
  if ( v6 )
  {
    v7 = v5[2];
    *(_DWORD *)(v6 - 4) = 1;
    v8 = *(_DWORD **)(v7 + 68);
    v9 = v8[1];
    if ( v9 )
    {
      v10 = *v8 >> *(_BYTE *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 20) + 148) + 4) + 444)
                                        + 392)
                            + 11);
      if ( v10 )
      {
        v11 = v9 - 4;
        for ( i = 0; i != v10; ++i )
        {
          v13 = *(_DWORD *)(v11 + 4);
          v11 += 4;
          if ( v13 )
            *(_DWORD *)(v6 + 4 * i) = 1;
        }
      }
    }
  }
  else
  {
    v15 = *(int **)(v5[2] + 68);
    v16 = v15[1];
    v17 = *v15;
    v5[1] = v16;
    *v5 = v17;
  }
  return 1;
}
