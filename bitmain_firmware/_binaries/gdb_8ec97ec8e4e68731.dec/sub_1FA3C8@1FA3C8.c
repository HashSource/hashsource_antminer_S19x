int __fastcall sub_1FA3C8(int a1, int a2, int a3, int a4, int a5, int a6, _DWORD *a7)
{
  int v8; // r5
  _BYTE *v11; // r3
  int result; // r0
  int v13; // r3
  int v14; // r10
  const char *v15; // r2
  int v16; // r3
  int v17; // r5
  int v18; // r3
  int v19; // r6
  _DWORD *v20; // r1
  int v21; // r3
  int v22; // r2
  int v23; // r3
  unsigned int v24; // r2
  int v25; // r4
  int v26; // r0
  int v27; // r7
  int v28; // r6
  int v29; // r4
  int v30; // r5
  int v31; // r0
  __int64 v32; // [sp+18h] [bp-6Ch]
  _DWORD dest[19]; // [sp+34h] [bp-50h] BYREF

  v8 = *(_DWORD *)(a1 + 24);
  if ( sub_1F92E0(v8) && !strcmp(*(const char **)(v8 + 8), "&str") )
  {
    dest[0] = a6;
    v27 = sub_2624C8(dest, 0, "data_ptr", 0, "slice");
    v28 = sub_2624C8(dest, 0, "length", 0, "slice");
    v29 = *(_DWORD *)(*(_DWORD *)(sub_26BC70(v27) + 24) + 20);
    v30 = sub_26EBA8(v27);
    v31 = sub_26EB1C(v28);
    return sub_269EC4(v29, "UTF-8", v30, v31, a4, a7);
  }
  if ( *(_BYTE *)v8 == 3 )
  {
    v11 = *(_BYTE **)(v8 + 12);
    if ( v11 )
    {
      if ( *v11 == 40 )
        goto LABEL_14;
    }
  }
  result = sub_1FA398(a1);
  v13 = *(_DWORD *)(a1 + 24);
  v14 = result;
  v15 = *(const char **)(v13 + 12);
  if ( v15 )
  {
    result = sub_25A418(a4, "%s", v15);
    v16 = *(_DWORD *)(a1 + 24);
    if ( !*(_WORD *)(v16 + 4) )
      return result;
    if ( *(_DWORD *)(v16 + 12) )
      sub_25A6BC(&word_3E1F84, a4);
  }
  else if ( !*(_WORD *)(v13 + 4) )
  {
    return result;
  }
  if ( v14 )
  {
LABEL_14:
    v14 = 1;
    sub_25A6BC("(", a4);
  }
  else
  {
    sub_25A6BC("{", a4);
  }
  v17 = 0;
  memcpy(dest, a7, sizeof(dest));
  v18 = *(_DWORD *)(a1 + 24);
  dest[13] = 0;
  if ( *(__int16 *)(v18 + 4) > 0 )
  {
    v19 = 1;
    v32 = a2;
    while ( 1 )
    {
      v25 = 24 * v17;
      if ( !sub_174F0C(*(_DWORD *)(v18 + 24) + 24 * v17) )
        break;
LABEL_21:
      v18 = *(_DWORD *)(a1 + 24);
      if ( *(__int16 *)(v18 + 4) <= ++v17 )
        goto LABEL_27;
    }
    if ( v19 )
    {
      if ( !*a7 )
      {
LABEL_18:
        v20 = (_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 24) + 24) + v25);
        if ( !v14 )
        {
          sub_25A6BC(v20[4], a4);
          sub_25A6BC(&word_3B6A00, a4);
          v20 = (_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 24) + 24) + v25);
        }
        v21 = v20[1];
        v19 = 0;
        v22 = (v21 >> 31) & 7;
        v23 = v21 + __CFADD__(v22, *v20);
        v24 = ((unsigned int)(v22 + *v20) >> 3) | (v23 << 29);
        sub_2669E8(
          v20[3],
          v23 >> 3,
          v24 + v32,
          (__PAIR64__(v23 >> 3, v24) + v32) >> 32,
          a3,
          a4,
          a5 + 1,
          a6,
          dest,
          (int)off_46D5A4[0]);
        goto LABEL_21;
      }
    }
    else
    {
      sub_25A6BC(&word_3D7D40, a4);
      if ( !*a7 )
      {
        sub_25A6BC(&word_3E1F84, a4);
        goto LABEL_18;
      }
    }
    sub_25A6BC(&word_356638, a4);
    sub_25A7A0(2 * (a5 + 1), a4);
    goto LABEL_18;
  }
LABEL_27:
  if ( *a7 )
  {
    sub_25A6BC(&word_356638, a4);
    sub_25A7A0(2 * a5, a4);
  }
  if ( v14 )
    LOWORD(v26) = 18964;
  else
    LOWORD(v26) = 13096;
  if ( v14 )
    HIWORD(v26) = 58;
  else
    HIWORD(v26) = 60;
  return sub_25A6BC(v26, a4);
}
