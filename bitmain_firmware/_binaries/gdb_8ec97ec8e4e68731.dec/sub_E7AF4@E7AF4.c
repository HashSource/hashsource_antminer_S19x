int __fastcall sub_E7AF4(int a1, int a2, const char **a3)
{
  char *v6; // r3
  const char *v7; // r4
  int v8; // r11
  bool v9; // zf
  int v10; // r3
  char *v11; // r2
  bool v12; // zf
  int v13; // r4

  while ( a1 )
  {
    v6 = *(char **)(a1 + 24);
    v7 = (const char *)*((_DWORD *)v6 + 2);
    v8 = *v6;
    v9 = v8 == 20;
    if ( v8 != 20 )
      v9 = v7 == 0;
    if ( v9 )
      break;
    while ( 1 )
    {
      if ( !strcmp(v7, "wchar_t") )
      {
        v13 = 5;
        goto LABEL_15;
      }
      if ( !strcmp(v7, "char16_t") )
      {
        v13 = 6;
        goto LABEL_15;
      }
      if ( !strcmp(v7, "char32_t") )
      {
        v13 = 7;
        goto LABEL_15;
      }
      if ( v8 != 23 )
        goto LABEL_14;
      sub_171258(a1);
      v10 = *(_DWORD *)(*(_DWORD *)(a1 + 24) + 20);
      if ( !v10 )
        break;
      v11 = *(char **)(v10 + 24);
      a1 = *(_DWORD *)(*(_DWORD *)(a1 + 24) + 20);
      v7 = (const char *)*((_DWORD *)v11 + 2);
      v8 = *v11;
      v12 = v8 == 20;
      if ( v8 != 20 )
        v12 = v7 == 0;
      if ( v12 )
        goto LABEL_14;
    }
    a1 = sub_171258(a1);
  }
LABEL_14:
  v13 = 4;
LABEL_15:
  if ( a3 )
    *a3 = sub_E7A50(v13, a2);
  return v13;
}
