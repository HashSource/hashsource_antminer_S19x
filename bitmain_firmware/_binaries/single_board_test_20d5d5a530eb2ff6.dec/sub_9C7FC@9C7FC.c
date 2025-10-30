bool __fastcall sub_9C7FC(int a1, int a2, int *a3)
{
  int v3; // r3
  int v4; // r3
  int *v5; // r4
  _DWORD *v8; // r6
  int v9; // r2
  int v10; // r8
  int v12; // r1
  int (__fastcall *v13)(int); // r3
  int v14; // r3
  int v15; // r11
  int v16; // r5
  int v17; // r3
  int v18; // t1
  int v19; // r2
  _BOOL4 v20; // r3
  int v21; // r3
  int v22; // r2
  int v23; // r0
  unsigned int v24; // r5
  int i; // r11
  int v26; // r1
  int v27; // r3
  int v28; // r0
  int v29; // r0

  v3 = **(_DWORD **)(a1 + 4);
  if ( v3 == 0x10000 )
  {
    v4 = 772;
    v5 = &dword_2165F0;
  }
  else
  {
    if ( v3 != 0x1FFFF )
      return *(_DWORD *)a1 == a2;
    v4 = 65277;
    v5 = &dword_216638;
  }
  v8 = (_DWORD *)a1;
  v9 = *(_DWORD *)(a1 + 4);
  if ( a2 == 256 )
    v10 = 65280;
  else
    v10 = a2;
  while ( 1 )
  {
    if ( a2 != v4 )
    {
      if ( (*(_DWORD *)(*(_DWORD *)(v9 + 100) + 48) & 8) != 0 )
      {
        if ( v4 == 256 )
          v4 = 65280;
        if ( v10 <= v4 )
          return 0;
      }
      else if ( a2 >= v4 )
      {
        return 0;
      }
      goto LABEL_23;
    }
    v13 = (int (__fastcall *)(int))v5[1];
    if ( !v13 )
      goto LABEL_23;
    a1 = v13(a1);
    v14 = v8[317];
    v15 = a1;
    v16 = *(_DWORD *)a1;
    if ( v14 && v16 != v14 )
    {
      if ( (*(_DWORD *)(*(_DWORD *)(v8[1] + 100) + 48) & 8) != 0 )
      {
        if ( v16 == 256 )
        {
          if ( v14 == 256 )
            goto LABEL_18;
          v19 = 65280;
        }
        else
        {
          v19 = *(_DWORD *)a1;
          if ( v14 == 256 )
            v14 = 65280;
        }
        if ( v19 > v14 )
          goto LABEL_23;
      }
      else if ( v16 < v14 )
      {
        goto LABEL_23;
      }
    }
LABEL_18:
    a1 = sub_854EC((int)v8, 9);
    if ( !a1 )
      goto LABEL_23;
    v17 = v8[318];
    if ( v17 && v16 != v17 )
    {
      if ( (*(_DWORD *)(*(_DWORD *)(v8[1] + 100) + 48) & 8) != 0 )
      {
        if ( v16 == 256 )
        {
          if ( v17 == 256 )
            goto LABEL_23;
          v16 = 65280;
        }
        else if ( v17 == 256 )
        {
          v17 = 65280;
        }
        if ( v17 >= v16 )
          goto LABEL_23;
      }
      else if ( v16 >= v17 )
      {
        goto LABEL_23;
      }
    }
    if ( (v8[315] & *(_DWORD *)(v15 + 8)) == 0
      && ((*(_DWORD *)(v15 + 4) & 2) == 0 || (*(_DWORD *)(v8[257] + 16) & 0x30000) == 0) )
    {
      v20 = a2 != 772;
      if ( !v8[7] )
        v20 = 1;
      if ( v20 )
        goto LABEL_47;
      v21 = v8[308];
      if ( v21 )
      {
        v22 = v8[376];
        if ( v22 )
          break;
      }
    }
LABEL_23:
    __pld(v5 + 6);
    v18 = v5[3];
    v5 += 3;
    v4 = v18;
    if ( !v18 )
      return 0;
    v9 = v8[1];
  }
  if ( !*(_DWORD *)(v21 + 304) && !*(_DWORD *)(v22 + 304) && !v8[305] && !v8[306] )
  {
    v24 = *(_DWORD *)(v8[257] + 224);
    if ( !v24 )
    {
      for ( i = 1; ; ++i )
      {
        if ( v24 != 2
          && (v24 < 2 || v24 - 4 > 2)
          && (v26 = v8[257], v27 = v26 + 20 * v24, *(_DWORD *)(v27 + 20))
          && *(_DWORD *)(v27 + 24) )
        {
          if ( v24 != 3 )
            break;
          a1 = sub_DA1F4(*(_DWORD *)(v26 + 84));
          if ( a1 )
          {
            v28 = sub_C59B8(a1);
            v29 = sub_C6284(v28);
            a1 = sub_A2F18(v8, v29);
            if ( a1 )
              break;
          }
        }
        else if ( i == 9 )
        {
          goto LABEL_23;
        }
        ++v24;
      }
    }
  }
LABEL_47:
  v12 = 1;
  if ( a3 )
  {
    v23 = ((int (__fastcall *)(int))v5[1])(a1);
    v12 = 1;
    *a3 = v23;
  }
  return v12;
}
