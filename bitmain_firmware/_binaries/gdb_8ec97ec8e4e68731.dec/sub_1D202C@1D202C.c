int __fastcall sub_1D202C(int a1, unsigned int a2)
{
  char *v3; // lr
  char *v5; // r1
  int j; // r0
  int v7; // r2
  char *v8; // r12
  int v10; // r3
  _DWORD *i; // r6
  unsigned int *v12; // r9
  unsigned int *v13; // r6
  unsigned int *v14; // r8
  unsigned int v15; // r0
  unsigned int v16; // r2
  unsigned int v17; // lr
  unsigned int *v18; // r12
  unsigned int *v19; // r3
  unsigned int v20; // r1
  unsigned int v21; // t1
  char v22[4]; // [sp+8h] [bp-1Ch] BYREF
  int v23; // [sp+Ch] [bp-18h] BYREF
  int v24; // [sp+10h] [bp-14h]
  int *v25; // [sp+14h] [bp-10h]
  int *v26; // [sp+18h] [bp-Ch]
  int v27; // [sp+1Ch] [bp-8h]

  v3 = *(char **)(a1 + 100);
  v5 = *(char **)(a1 + 96);
  if ( v3 == v5 )
  {
    v23 = 0;
    v24 = 0;
    v27 = 0;
    v25 = &v23;
    v26 = &v23;
    for ( i = (_DWORD *)sub_1D0878((_DWORD *)a1, 1)[6]; i; i = (_DWORD *)*i )
    {
      sub_1D1F20(a1, (unsigned int)i, (int)v22, (_DWORD *)(a1 + 108), i[9], i[10]);
      sub_1D1F20(a1, (unsigned int)i, (int)v22, (_DWORD *)(a1 + 120), i[11], i[12]);
    }
    sub_1D2BFC(a1 + 96);
    v12 = *(unsigned int **)(a1 + 96);
    v13 = *(unsigned int **)(a1 + 100);
    if ( v13 != v12 )
    {
      sub_1CF2D0(*(_DWORD *)(a1 + 96), *(char **)(a1 + 100), 2 * (31 - __clz(((char *)v13 - (char *)v12) >> 3)), 0);
      if ( (char *)v13 - (char *)v12 <= 128 )
      {
        sub_1CF21C(v12, v13);
      }
      else
      {
        v14 = v12 + 32;
        sub_1CF21C(v12, v12 + 32);
        if ( v13 != v12 + 32 )
        {
          do
          {
            v15 = *v14;
            v16 = *(v14 - 2);
            v17 = v14[1];
            if ( *v14 < v16 )
            {
              v19 = v14 - 2;
              do
              {
                v20 = v19[1];
                v18 = v19;
                v19[2] = v16;
                v19[3] = v20;
                v21 = *(v19 - 2);
                v19 -= 2;
                v16 = v21;
              }
              while ( v15 < v21 );
            }
            else
            {
              v18 = v14;
            }
            v14 += 2;
            *v18 = v15;
            v18[1] = v17;
          }
          while ( v13 != v14 );
        }
      }
    }
    sub_1D2BC8(v22, v24);
    v3 = *(char **)(a1 + 100);
    v5 = *(char **)(a1 + 96);
  }
  for ( j = (v3 - v5) >> 3; j > 0; j = v7 - v10 - 1 )
  {
    v7 = j >> 1;
    v8 = &v5[8 * (j >> 1)];
    if ( *(_DWORD *)v8 >= a2 )
    {
      while ( v7 )
      {
        v10 = v7 >> 1;
        v8 = &v5[8 * (v7 >> 1)];
        if ( *(_DWORD *)v8 < a2 )
          goto LABEL_12;
        v7 >>= 1;
      }
      break;
    }
    v10 = j >> 1;
    v7 = j;
LABEL_12:
    v5 = v8 + 8;
  }
  if ( v5 == v3 || *(_DWORD *)v5 != a2 )
    return 0;
  else
    return sub_1CE1F0(a1, *((_DWORD *)v5 + 1));
}
