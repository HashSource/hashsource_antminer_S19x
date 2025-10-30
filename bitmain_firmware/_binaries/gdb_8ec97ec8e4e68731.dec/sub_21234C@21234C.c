_DWORD *__fastcall sub_21234C(_DWORD *a1)
{
  _DWORD *v1; // r4
  unsigned int v3; // r6
  int v4; // r5
  unsigned int v5; // r5
  _DWORD *v6; // r0
  _DWORD *v7; // r3
  unsigned int v8; // r1
  int v9; // r2
  unsigned int v10; // r2
  _DWORD *v11; // r3

  v1 = (_DWORD *)((a1[10] >> 5) & 0x42);
  if ( v1 )
  {
    v1 = (_DWORD *)a1[25];
    if ( v1 )
    {
      while ( (v1[5] & 1) == 0 )
      {
        v1 = (_DWORD *)v1[3];
        if ( !v1 )
          return v1;
      }
      v3 = v1[7];
      v4 = v1[9];
      v1 = sub_93094(1u, 0x10u);
      *v1 = 1;
      v1[1] = sub_93094(1u, 4u);
      v5 = v3 + v4;
      v1[2] = sub_93094(1u, 4u);
      v6 = sub_93094(a1[27], 4u);
      v7 = (_DWORD *)a1[25];
      for ( v1[3] = v6; v7; ++v6 )
      {
        if ( (v7[5] & 1) != 0 )
        {
          v8 = v7[7];
          v9 = v7[9];
          *v6 = 1;
          v10 = v8 + v9;
          if ( v3 >= v8 )
            v3 = v8;
          if ( v5 < v10 )
            v5 = v10;
        }
        v7 = (_DWORD *)v7[3];
      }
      v11 = (_DWORD *)v1[2];
      *(_DWORD *)v1[1] = v3;
      *v11 = v5 - v3;
    }
  }
  return v1;
}
