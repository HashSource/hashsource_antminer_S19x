_DWORD *__fastcall sub_1A2AC0(int a1, int a2, int a3, int a4, int a5)
{
  int v6; // r6
  _DWORD *v7; // r4
  int v8; // r6
  int v9; // r0
  int v11; // r3
  const char *v12; // r0

  if ( !a2 )
    return 0;
  v6 = *(_DWORD *)(a2 + 4);
  v7 = *(_DWORD **)(v6 + 48);
  if ( !v7 )
    return v7;
  v7 = sub_93028(8u);
  v8 = ((int (__fastcall *)(_DWORD))loc_1A349C)(*(_DWORD *)(v6 + 48));
  v9 = sub_1A3528(v8, *(_DWORD *)(a2 + 12));
  if ( v9 )
  {
    *v7 = v9;
    v7[1] = a5;
    return v7;
  }
  *v7 = v8;
  v11 = dword_47AC88;
  v7[1] = -1;
  if ( v11 <= 0 )
    return v7;
  v12 = (const char *)((int (__fastcall *)(int))loc_2043D4)(a2);
  sub_F43B4(
    &off_46D334,
    "symtab found for `%s', but that file\nis not covered in the compilation unit's macro information",
    v12);
  return v7;
}
