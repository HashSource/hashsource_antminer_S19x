int __fastcall sub_11AF50(_DWORD *a1)
{
  int v2; // r0
  _DWORD *v3; // r5
  int v4; // r0
  int v5; // r7
  int v6; // r6
  int v7; // r4
  _DWORD *v8; // r2
  _DWORD *v9; // r9
  int v10; // r11
  _DWORD *v11; // r2
  _DWORD *v12; // r8
  signed int i; // r7
  int v14; // r2
  _DWORD *v15; // r0
  _DWORD *v16; // r0
  int v17; // r0
  int v18; // r0
  bool v19; // zf
  _DWORD *v21; // r2
  _DWORD *v22; // r2
  int v23; // [sp+4h] [bp-8h]

  v2 = a1[20];
  if ( !v2 || !sub_10C010(v2) || !a1[7] || (v3 = (_DWORD *)a1[20]) == 0 || sub_10C010(a1[20]) <= 0 || !a1[7] )
  {
LABEL_37:
    a1[24] = 1;
    return 0;
  }
  v4 = sub_10C01C(v3, 0);
  v5 = *(_DWORD *)(v4 + 172);
  v6 = v4;
  if ( !v5 )
    return 1;
  if ( sub_11AA6C(*(_DWORD *)(v4 + 172)) )
  {
    v7 = 1;
  }
  else
  {
    a1[23] = 0;
    a1[24] = 41;
    a1[25] = v6;
    v7 = ((int (__fastcall *)(_DWORD, _DWORD *))a1[7])(0, a1);
    if ( !v7 )
      return 0;
  }
  v8 = *(_DWORD **)v5;
  if ( !*(_DWORD *)v5 )
    goto LABEL_52;
  if ( !*v8 )
  {
    v9 = 0;
    v10 = 1;
    goto LABEL_14;
  }
  if ( *v8 == 1 )
  {
    v9 = (_DWORD *)v8[1];
    v10 = 0;
  }
  else
  {
LABEL_52:
    v10 = 0;
    v9 = 0;
  }
LABEL_14:
  v11 = *(_DWORD **)(v5 + 4);
  if ( v11 )
  {
    if ( *v11 )
    {
      if ( *v11 == 1 )
        v12 = (_DWORD *)v11[1];
      else
        v12 = 0;
      v23 = 0;
    }
    else
    {
      v12 = 0;
      v23 = 1;
    }
  }
  else
  {
    v23 = 0;
    v12 = 0;
  }
  for ( i = 1; i < sub_10C010((int)v3); ++i )
  {
    v17 = sub_10C01C(v3, i);
    v6 = v17;
    if ( !v17 )
      goto LABEL_37;
    v18 = *(_DWORD *)(v17 + 172);
    if ( !v18 )
    {
      v19 = v12 == 0;
      if ( !v12 )
        v19 = v9 == 0;
      if ( v19 )
      {
        v12 = 0;
        v9 = 0;
        continue;
      }
      a1[24] = 46;
      a1[23] = i;
      goto LABEL_35;
    }
    if ( !sub_11AA6C(v18) )
    {
      a1[23] = i;
      a1[24] = 41;
      a1[25] = v6;
      v7 = ((int (__fastcall *)(_DWORD, _DWORD *))a1[7])(0, a1);
      if ( !v7 )
        return 0;
    }
    v14 = *(_DWORD *)(v6 + 172);
    v15 = *(_DWORD **)v14;
    if ( !*(_DWORD *)v14 )
    {
      if ( !v9 )
        goto LABEL_24;
      a1[23] = i;
      a1[24] = 46;
      a1[25] = v6;
      v7 = ((int (*)(void))a1[7])();
      if ( !v7 )
        return 0;
      v14 = *(_DWORD *)(v6 + 172);
      v15 = *(_DWORD **)v14;
      if ( !*(_DWORD *)v14 )
      {
        v10 = 0;
        v9 = 0;
        goto LABEL_24;
      }
      if ( *v15 != 1 )
      {
        v10 = 0;
        v9 = 0;
        goto LABEL_24;
      }
      v9 = 0;
LABEL_54:
      v10 = sub_11A3E4(v15[1], v9);
      if ( !v10 )
      {
        a1[24] = 46;
        a1[23] = i;
        a1[25] = v6;
        v7 = ((int (__fastcall *)(_DWORD, _DWORD *))a1[7])(0, a1);
        if ( !v7 )
          return 0;
        v14 = *(_DWORD *)(v6 + 172);
        goto LABEL_24;
      }
      v14 = *(_DWORD *)(v6 + 172);
      v15 = *(_DWORD **)v14;
LABEL_41:
      v9 = (_DWORD *)v15[1];
      v10 = 0;
      goto LABEL_24;
    }
    if ( *v15 == 1 )
    {
      if ( !v10 )
        goto LABEL_54;
      goto LABEL_41;
    }
LABEL_24:
    v16 = *(_DWORD **)(v14 + 4);
    if ( v16 )
    {
      if ( *v16 != 1 )
        continue;
      if ( v23 )
        goto LABEL_43;
    }
    else
    {
      if ( !v12 )
        continue;
      a1[23] = i;
      a1[24] = 46;
      a1[25] = v6;
      v7 = ((int (*)(void))a1[7])();
      if ( !v7 )
        return 0;
      v16 = *(_DWORD **)(*(_DWORD *)(v6 + 172) + 4);
      if ( !v16 )
      {
        v23 = 0;
        v12 = 0;
        continue;
      }
      if ( *v16 != 1 )
      {
        v23 = 0;
        v12 = 0;
        continue;
      }
      v12 = 0;
    }
    if ( sub_11A3E4(v16[1], v12) )
    {
      v16 = *(_DWORD **)(*(_DWORD *)(v6 + 172) + 4);
LABEL_43:
      v12 = (_DWORD *)v16[1];
      v23 = 0;
      continue;
    }
    v23 = 0;
    a1[24] = 46;
    a1[23] = i;
LABEL_35:
    a1[25] = v6;
    v7 = ((int (*)(void))a1[7])();
    if ( !v7 )
      return 0;
  }
  v21 = *(_DWORD **)(v6 + 172);
  if ( !v21 )
    return v7;
  if ( !*v21 || *(_DWORD *)*v21 )
  {
LABEL_71:
    v22 = (_DWORD *)v21[1];
    if ( v22 && !*v22 )
    {
      a1[23] = i;
      a1[25] = v6;
      a1[24] = 46;
      return ((int (__fastcall *)(_DWORD, _DWORD *))a1[7])(0, a1);
    }
    return v7;
  }
  a1[23] = i;
  a1[24] = 46;
  a1[25] = v6;
  v7 = ((int (__fastcall *)(_DWORD, _DWORD *))a1[7])(0, a1);
  if ( v7 )
  {
    v21 = *(_DWORD **)(v6 + 172);
    goto LABEL_71;
  }
  return 0;
}
