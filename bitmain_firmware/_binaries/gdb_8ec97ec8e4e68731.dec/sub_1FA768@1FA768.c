int __fastcall sub_1FA768(int a1, const char *a2, int a3, int a4, int a5, int a6)
{
  char *v6; // lr
  int v7; // r6
  __int16 *v11; // r12
  int v12; // r0
  int v13; // r0
  int result; // r0
  int v15; // r3
  int v16; // r10
  _BYTE *v17; // r3
  int v18; // r0
  int v19; // r6
  int v20; // r7
  int v21; // r8
  bool v22; // zf
  char *v23; // r2
  _BYTE *v24; // r12

  v6 = *(char **)(a1 + 24);
  v7 = *v6;
  if ( v7 == 3 )
  {
    v24 = (_BYTE *)*((_DWORD *)v6 + 3);
    if ( v24 )
    {
      if ( *v24 == 40 )
        return sub_25A6BC(*((_DWORD *)v6 + 3), a3);
    }
  }
  if ( (*((_WORD *)v6 + 1) & 0x380) == 0x80 )
    v11 = (__int16 *)*((_DWORD *)v6 + 7);
  else
    v11 = &word_3B4A2C;
  if ( *v11 > 0 )
  {
    sub_E9398(a1, a2, a3, a4, a5, a6);
    v7 = **(char **)(a1 + 24);
  }
  if ( v7 == 3 )
    LOWORD(v12) = -20316;
  else
    LOWORD(v12) = -20332;
  HIWORD(v12) = 56;
  sub_25A6BC(v12, a3);
  v13 = *(_DWORD *)(*(_DWORD *)(a1 + 24) + 12);
  if ( v13 )
    sub_25A6BC(v13, a3);
  result = sub_1FA398(a1);
  v15 = *(_DWORD *)(a1 + 24);
  v16 = result;
  if ( *(_WORD *)(v15 + 4) || *(_BYTE *)v15 == 3 && (v17 = *(_BYTE **)(v15 + 12)) != 0 && *v17 == 40 )
  {
    if ( result )
    {
      v18 = sub_25A6BC(" (\n", a3);
      if ( *(__int16 *)(*(_DWORD *)(a1 + 24) + 4) <= 0 )
      {
LABEL_30:
        v23 = ")";
        return sub_25A7C0(a5, a3, v23);
      }
    }
    else
    {
      v18 = sub_25A6BC(" {\n", a3);
      if ( *(__int16 *)(*(_DWORD *)(a1 + 24) + 4) <= 0 )
        goto LABEL_27;
    }
    v19 = 0;
    v20 = 0;
    v21 = a5 + 2;
    do
    {
      sub_258BD4(v18);
      ++v20;
      v22 = !sub_174F0C(*(_DWORD *)(*(_DWORD *)(a1 + 24) + 24) + v19);
      v18 = a5 + 2;
      if ( v22 )
      {
        sub_25A7A0(v21, a3);
        if ( !v16 )
          sub_25A418(a3, "%s: ", *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 24) + 24) + v19 + 16));
        sub_1FA9C0(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 24) + 24) + v19 + 12), 0, a3, a4 - 1, v21, a6);
        v18 = sub_25A6BC(",\n", a3);
      }
      v19 += 24;
    }
    while ( *(__int16 *)(*(_DWORD *)(a1 + 24) + 4) > v20 );
    if ( v16 )
      goto LABEL_30;
LABEL_27:
    v23 = "}";
    return sub_25A7C0(a5, a3, v23);
  }
  return result;
}
