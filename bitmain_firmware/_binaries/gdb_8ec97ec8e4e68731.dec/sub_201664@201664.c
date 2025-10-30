void __fastcall sub_201664(const char *a1, int a2, int a3)
{
  int v3; // r5
  const char *v6; // r1
  int v7; // r11
  int v8; // r10
  int v9; // r8
  int v10; // r6
  int v11; // [sp+4h] [bp-8h]

  v3 = a2;
  if ( sub_211CF0(a2, 0) )
  {
    if ( a1 )
    {
      sub_259858("Loading symbols for shared libraries: %s\n", a1);
      ++*(_DWORD *)(dword_487D2C + 52);
      goto LABEL_4;
    }
    sub_259858("Loading symbols for shared libraries.\n");
    ++*(_DWORD *)(dword_487D2C + 52);
  }
  else
  {
    ++*(_DWORD *)(dword_487D2C + 52);
    if ( a1 )
    {
LABEL_4:
      v6 = (const char *)re_comp(a1);
      if ( v6 )
        sub_946E0("Invalid regexp: %s", v6);
    }
  }
  sub_200C00(v3);
  if ( v3 )
  {
    v7 = *(_DWORD *)(dword_487D2C + 48);
    v3 = (int)a1;
    if ( a1 )
      v3 = 1;
    if ( !v7 )
    {
      if ( a1 )
        sub_259858("No loaded shared libraries match the pattern `%s'.\n", a1);
      return;
    }
    v8 = v3;
    v11 = 10;
  }
  else
  {
    v7 = *(_DWORD *)(dword_487D2C + 48);
    v8 = (int)a1;
    if ( a1 )
      v8 = 1;
    if ( !v7 )
      return;
    v11 = 8;
  }
  v9 = 0;
  v10 = 0;
  do
  {
    while ( 1 )
    {
      if ( a1 && !re_exec(v7 + 520) )
        goto LABEL_21;
      if ( !a3 && !sub_338BD4(v7 + 520, "/libpthread") )
        goto LABEL_29;
      if ( !*(_BYTE *)(v7 + 1040) )
        break;
      if ( !v8 || !v3 && !dword_48A514 )
        goto LABEL_29;
      v10 = 1;
      sub_259858("Symbols already loaded for %s\n", (const char *)(v7 + 520));
LABEL_21:
      v7 = *(_DWORD *)v7;
      if ( !v7 )
        goto LABEL_30;
    }
    if ( sub_200A8C(v7, v11) )
    {
      v9 = 1;
      v10 = 1;
      goto LABEL_21;
    }
LABEL_29:
    v7 = *(_DWORD *)v7;
    v10 = 1;
  }
  while ( v7 );
LABEL_30:
  if ( v9 )
  {
    sub_DC424();
    if ( v3 && !v10 )
    {
LABEL_38:
      sub_259858("No loaded shared libraries match the pattern `%s'.\n", a1);
      if ( !v9 )
        return;
    }
    sub_15D778();
    return;
  }
  if ( v3 && !v10 )
    goto LABEL_38;
}
