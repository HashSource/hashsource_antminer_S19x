char **__fastcall sub_A3610(int a1, unsigned int a2)
{
  int v3; // r3
  int v4; // r1
  char **v5; // r0
  char **v6; // r4
  unsigned int v8; // r4
  char *v9; // r0
  int v10; // r3
  _DWORD *v11; // r3

  if ( a2 == -1 )
  {
    if ( !*(_DWORD *)(a1 + 28) )
    {
      a2 = -858993459 * ((**(_DWORD **)(a1 + 1028) - (*(_DWORD *)(a1 + 1028) + 20)) >> 2);
      goto LABEL_2;
    }
    v8 = 0;
    while ( 1 )
    {
      v9 = sub_855D0(v8);
      v10 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 124) + 528) + 20);
      if ( (v10 & *((_DWORD *)v9 + 1)) != 0 )
        break;
      if ( ++v8 == 9 )
        return 0;
    }
    a2 = v8;
    if ( v8 == 4 )
    {
      if ( v10 != 32 )
      {
        v11 = *(_DWORD **)(a1 + 1028);
        if ( v11[36] )
        {
          a2 = 6;
        }
        else if ( v11[31] )
        {
          a2 = 5;
        }
        else if ( !v11[26] )
        {
          goto LABEL_30;
        }
LABEL_6:
        v4 = *((unsigned __int16 *)&unk_1A9C40 + a2 + 218);
LABEL_7:
        v5 = &off_202A94;
        do
        {
          if ( *((unsigned __int16 *)v5 + 2) == v4 )
          {
            v6 = v5;
            goto LABEL_11;
          }
          v5 += 8;
        }
        while ( v5 != &off_202DD4 );
        v6 = 0;
LABEL_11:
        if ( !sub_A2D04((int)v6, 0) || !sub_A2D04((int)v6, 0) )
          return 0;
        goto LABEL_13;
      }
LABEL_30:
      v4 = 60909;
      goto LABEL_7;
    }
  }
LABEL_2:
  if ( a2 > 8 )
    return 0;
  v3 = (*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 4) + 100) + 48) >> 1) & 1;
  if ( a2 )
    v3 = 1;
  if ( v3 )
    goto LABEL_6;
  v6 = &off_202DD4;
  if ( !sub_A2D04((int)&off_202DD4, 0) )
    return 0;
LABEL_13:
  if ( !sub_A34AC((_DWORD *)a1, (int)&loc_5000A + 1, (int)v6) )
    return 0;
  return v6;
}
