int __fastcall sub_A7A24(char *a1, int a2, int a3, int a4)
{
  int v6; // r0
  int v7; // r11
  int v8; // r5
  int v9; // r6
  int v10; // r4
  int v11; // r9
  int v12; // r7
  const char *v13; // r9
  int v14; // r1
  int v15; // r6
  int result; // r0
  int v17; // r0
  int v18; // r10
  int v19; // r3
  _DWORD *v20; // r0
  unsigned int v21; // r7
  int v22; // r11
  int v23; // r2

  while ( 1 )
  {
    v6 = sub_A0870(a4);
    v7 = *(_DWORD *)(v6 + 24);
    v8 = v6;
    if ( *(__int16 *)(v7 + 4) <= 0 )
      return 0;
    v9 = -1;
    v10 = 0;
    do
    {
      while ( 1 )
      {
        v12 = 24 * v10;
        v13 = *(const char **)(*(_DWORD *)(v7 + 24) + 24 * v10 + 16);
        if ( v13 )
          break;
LABEL_6:
        if ( *(__int16 *)(v7 + 4) <= ++v10 )
          goto LABEL_10;
      }
      if ( !sub_A1938(v8, v10) )
      {
        if ( sub_9DF20(v13, a1) )
          return sub_A7978(a2, a3, v10, v8);
        v11 = sub_A0274(v8, v10);
        v7 = *(_DWORD *)(v8 + 24);
        if ( v11 )
        {
          result = sub_A7A24(
                     a1,
                     a2,
                     a3 + *(_QWORD *)(*(_DWORD *)(v7 + 24) + 24 * v10) / 8LL,
                     *(_DWORD *)(*(_DWORD *)(v7 + 24) + 24 * v10 + 12));
          if ( result )
            return result;
LABEL_13:
          v7 = *(_DWORD *)(v8 + 24);
        }
        else if ( sub_A0328(v8, v10) )
        {
          v17 = sub_A0870(*(_DWORD *)(*(_DWORD *)(v7 + 24) + v12 + 12));
          v7 = *(_DWORD *)(v8 + 24);
          v18 = v17;
          v19 = *(_DWORD *)(v17 + 24);
          v20 = (_DWORD *)(*(_DWORD *)(v7 + 24) + v12);
          v21 = a3
              + ((((((int)v20[1] >> 31) & 7u) + *v20) >> 3) | ((v20[1] + __CFADD__(((int)v20[1] >> 31) & 7, *v20)) << 29));
          if ( *(__int16 *)(v19 + 4) > 0 )
          {
            v22 = 0;
            while ( 1 )
            {
              ++v11;
              v23 = *(_DWORD *)(v19 + 24) + v22;
              v22 += 24;
              result = sub_A7A24(a1, a2, v21 + *(_QWORD *)v23 / 8LL, *(_DWORD *)(v23 + 12));
              if ( result )
                return result;
              v19 = *(_DWORD *)(v18 + 24);
              if ( *(__int16 *)(v19 + 4) <= v11 )
                goto LABEL_13;
            }
          }
        }
        goto LABEL_6;
      }
      v7 = *(_DWORD *)(v8 + 24);
      v9 = v10++;
    }
    while ( *(__int16 *)(v7 + 4) > v10 );
LABEL_10:
    if ( v9 == -1 )
      return 0;
    v14 = *(_DWORD *)(v7 + 24);
    v15 = 24 * v9;
    a4 = *(_DWORD *)(v14 + v15 + 12);
    a3 += *(_QWORD *)(v14 + v15) / 8LL;
  }
}
