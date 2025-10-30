int __fastcall sub_7D598(_DWORD *a1, unsigned int a2, unsigned int a3, int a4, int a5, unsigned int *a6)
{
  int v7; // r7
  unsigned int v11; // r4
  int v12; // r6
  bool v13; // cc
  unsigned __int8 *v14; // r8
  unsigned __int8 *v15; // r1
  _BOOL4 v16; // r7
  unsigned int v17; // r2
  int result; // r0
  bool v19; // cc
  int v20; // r3
  int v21; // r1
  unsigned int v22; // r7
  int v23; // r2
  bool v24; // zf
  int *v25; // r11
  int v26; // r3
  int v27; // r0
  int v28; // r6
  unsigned int v29; // r3
  int v30; // r1
  int v31; // r2
  int v32; // r3
  int v33; // r3
  int v34; // r2
  unsigned __int8 *v35; // r3
  void *v36; // r0
  int v37; // r1
  int v38; // [sp+Ch] [bp-2Ch]

  if ( !a2 )
    return 0;
  v7 = a1[409];
  if ( !v7 )
  {
    if ( !sub_7EFD4() )
      return -1;
    v7 = a1[409];
  }
  v11 = a1[413];
  v12 = (3 - (_BYTE)v7) & 7;
  if ( a4 )
  {
    v15 = (unsigned __int8 *)a1[958];
    v14 = (unsigned __int8 *)(v7 + v12);
    v38 = a1[959];
    v16 = v15 != (unsigned __int8 *)(v7 + v12);
    if ( a5 != 1 )
      v16 = 0;
  }
  else
  {
    if ( v11 )
    {
      v13 = v12 != 0;
      if ( ((3 - (_BYTE)v7) & 7) != 0 )
        v13 = v11 > 4;
      if ( v13 )
      {
        v33 = a1[412];
        v34 = *(unsigned __int8 *)(v7 + v33);
        v35 = (unsigned __int8 *)(v33 + v7);
        if ( v34 == 23 && (v35[4] | (v35[3] << 8)) > 127 )
        {
          v36 = (void *)(v7 + v12);
          v16 = 0;
          memmove(v36, v35, a1[413]);
          v37 = a1[409];
          a1[412] = v12;
          v15 = (unsigned __int8 *)(v37 + v12);
          v14 = v15;
        }
        else
        {
          v14 = (unsigned __int8 *)(v7 + v12);
          v15 = v35;
          v16 = v35 != (unsigned __int8 *)(v7 + v12);
          if ( a5 != 1 )
            v16 = 0;
        }
      }
      else
      {
        v14 = (unsigned __int8 *)(v7 + v12);
        v15 = (unsigned __int8 *)(a1[412] + v7);
        v16 = a1[412] != v12;
        if ( a5 != 1 )
          v16 = 0;
      }
    }
    else
    {
      v15 = (unsigned __int8 *)(v7 + v12);
      a1[412] = v12;
      v14 = (unsigned __int8 *)(v7 + v12);
      v16 = 0;
    }
    a1[958] = v15;
    v38 = 0;
    a1[959] = 0;
  }
  if ( v16 )
  {
    memmove(v14, v15, v11 + v38);
    a1[958] = v14;
    a1[412] = v12 + v38;
  }
  if ( (*(_DWORD *)(*(_DWORD *)(a1[1] + 100) + 48) & 8) != 0 )
  {
    v17 = v11 == 0;
    if ( !a4 )
      v17 = 0;
    result = 0;
    if ( v17 )
      return result;
    v19 = v11 != 0;
    if ( v11 )
      v19 = a2 > v11;
    if ( v19 )
    {
LABEL_21:
      v20 = a1[412];
      result = 1;
      v21 = a1[959];
      a1[413] = v17;
      a1[412] = v20 + v11;
      a1[959] = v21 + v11;
      *a6 = v11;
      return result;
    }
  }
  if ( a2 <= v11 )
  {
    v17 = v11 - a2;
    v11 = a2;
    goto LABEL_21;
  }
  v22 = a1[411] - a1[412];
  if ( a2 > v22 )
  {
    sub_95494(a1, 80, 149, 68, "ssl/record/rec_layer_s3.c", 279);
    return -1;
  }
  else
  {
    v23 = a1[405];
    v24 = v23 == 0;
    if ( !v23 )
      v24 = (*(_DWORD *)(*(_DWORD *)(a1[1] + 100) + 48) & 8) == 0;
    if ( v24 )
    {
      v22 = a2;
    }
    else
    {
      if ( a3 < a2 )
        a3 = a2;
      if ( v22 >= a3 )
        v22 = a3;
    }
    v25 = _errno_location();
    while ( 1 )
    {
      v26 = a1[2];
      *v25 = 0;
      if ( !v26 )
        break;
      a1[5] = 3;
      v27 = sub_B6740(v26, &v14[v11 + v38], v22 - v11);
      v28 = v27;
      if ( v27 <= 0 )
        goto LABEL_47;
      v11 += v27;
      if ( ((a2 > v11) & (*(_DWORD *)(*(_DWORD *)(a1[1] + 100) + 48) >> 3)) != 0 )
      {
        v29 = 0;
        goto LABEL_45;
      }
      if ( a2 <= v11 )
      {
        v29 = v11 - a2;
        v11 = a2;
LABEL_45:
        v30 = a1[412];
        v31 = a1[959];
        a1[413] = v29;
        a1[5] = 1;
        a1[412] = v30 + v11;
        a1[959] = v31 + v11;
        *a6 = v11;
        return 1;
      }
    }
    v28 = -1;
    sub_95494(a1, 80, 149, 211, "ssl/record/rec_layer_s3.c", 313);
LABEL_47:
    v32 = a1[316];
    a1[413] = v11;
    if ( (v32 & 0x10) == 0 || (*(_DWORD *)(*(_DWORD *)(a1[1] + 100) + 48) & 8) != 0 || v11 + v38 )
    {
      return v28;
    }
    else
    {
      sub_7F1A0(a1);
      return v28;
    }
  }
}
