bool __fastcall sub_A19AC(char *a1, int a2, int a3, _DWORD *a4, _DWORD *a5, int *a6, _DWORD *a7, _DWORD *a8)
{
  int v10; // r0
  int v11; // r11
  int v12; // r5
  int v13; // r2
  int v14; // r4
  int v15; // r6
  int v16; // r10
  int v17; // r2
  int v18; // r7
  const char *v19; // r10
  int v20; // r11
  int v22; // r7
  int v23; // r2
  int v24; // r3
  int v25; // r0
  int v26; // r2
  int v27; // r3
  int v28; // r2
  int v30; // [sp+14h] [bp-18h]
  int v32; // [sp+1Ch] [bp-10h]

  v10 = sub_A0870(a2);
  v11 = *(_DWORD *)(v10 + 24);
  if ( a4 )
    *a4 = 0;
  v12 = v10;
  if ( a5 )
    *a5 = 0;
  if ( a6 )
    *a6 = 0;
  v13 = *(__int16 *)(v11 + 4);
  if ( !a7 )
  {
    if ( v13 > 0 )
      goto LABEL_9;
    return 0;
  }
  *a7 = 0;
  if ( v13 <= 0 )
    return 0;
LABEL_9:
  v14 = 0;
  v30 = -1;
  do
  {
    while ( 1 )
    {
      v17 = *(_DWORD *)(v11 + 24);
      v18 = 24 * v14;
      v19 = *(const char **)(v17 + 24 * v14 + 16);
      if ( !v19 )
        goto LABEL_16;
      v20 = *(_DWORD *)(v17 + 24 * v14);
      if ( sub_A1938(v12, v14) )
        break;
      v15 = a3 + v20 / 8;
      if ( a1 && sub_9DF20(v19, a1) )
      {
        v22 = *(_DWORD *)(*(_DWORD *)(v12 + 24) + 24) + v18;
        v23 = *(_DWORD *)(v22 + 8) >> 4;
        if ( a4 )
          *a4 = *(_DWORD *)(v22 + 12);
        if ( a5 )
          *a5 = v15;
        if ( a6 )
        {
          v24 = v20 & 7;
          if ( v20 <= 0 )
            v24 = -(-v20 & 7);
          *a6 = v24;
        }
        if ( a7 )
          *a7 = v23;
        return 1;
      }
      v16 = sub_A0274(v12, v14);
      v11 = *(_DWORD *)(v12 + 24);
      if ( v16 )
      {
        if ( sub_A19AC(a1, *(_DWORD *)(*(_DWORD *)(v11 + 24) + v18 + 12), v15, a4, a5, a6, a7, a8) )
          return 1;
      }
      else
      {
        if ( !sub_A0328(v12, v14) )
        {
          if ( a8 )
            ++*a8;
          goto LABEL_16;
        }
        v25 = sub_A0870(*(_DWORD *)(*(_DWORD *)(v11 + 24) + v18 + 12));
        v26 = *(_DWORD *)(v25 + 24);
        if ( *(__int16 *)(v26 + 4) > 0 )
        {
          v32 = v25;
          do
          {
            v27 = *(_DWORD *)(v26 + 24);
            v28 = 24 * v16++;
            if ( sub_A19AC(a1, *(_DWORD *)(v27 + v28 + 12), v15 + *(_QWORD *)(v27 + v28) / 8LL, a4, a5, a6, a7, a8) )
              return 1;
            v26 = *(_DWORD *)(v32 + 24);
          }
          while ( *(__int16 *)(v26 + 4) > v16 );
        }
      }
      v11 = *(_DWORD *)(v12 + 24);
LABEL_16:
      if ( *(__int16 *)(v11 + 4) <= ++v14 )
        goto LABEL_20;
    }
    v11 = *(_DWORD *)(v12 + 24);
    v30 = v14++;
  }
  while ( *(__int16 *)(v11 + 4) > v14 );
LABEL_20:
  if ( v30 == -1 )
    return 0;
  return sub_A19AC(
           a1,
           *(_DWORD *)(*(_DWORD *)(v11 + 24) + 24 * v30 + 12),
           a3 + *(_DWORD *)(*(_DWORD *)(v11 + 24) + 24 * v30) / 8,
           a4,
           a5,
           a6,
           a7,
           a8) != 0;
}
