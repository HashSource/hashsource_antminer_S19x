int __fastcall sub_257E94(int a1, char *s, int a3)
{
  size_t v3; // r6
  int v6; // r5
  int v7; // r5
  int v8; // r4
  const char *v9; // r0
  const char *v10; // r7
  int v12; // r5
  int v13; // r8
  int v14; // r4

  v3 = a3;
  if ( a3 < 0 )
    v3 = strlen(s);
  v6 = ((int (__fastcall *)(int))loc_166E9C)(a1);
  v7 = v6 + ((int (__fastcall *)(int))loc_166F48)(a1);
  if ( v7 <= 0 )
  {
LABEL_10:
    v12 = *(_DWORD *)((int (__fastcall *)(int, int))loc_16EC88)(a1, dword_48A9A8);
    if ( v12 )
    {
      v13 = 0;
      while ( strlen(*(const char **)v12) != v3 || strncmp(*(const char **)v12, s, v3) )
      {
        v12 = *(_DWORD *)(v12 + 12);
        ++v13;
        if ( !v12 )
          return -1;
      }
      v14 = ((int (__fastcall *)(int))loc_166E9C)(a1);
      return v14 + ((int (__fastcall *)(int))loc_166F48)(a1) + v13;
    }
    else
    {
      return -1;
    }
  }
  else
  {
    v8 = 0;
    while ( 1 )
    {
      v9 = (const char *)((int (__fastcall *)(int, int))loc_1677C0)(a1, v8);
      v10 = v9;
      if ( v9 )
      {
        if ( strlen(v9) == v3 && !strncmp(v10, s, v3) )
          return v8;
      }
      if ( v7 == ++v8 )
        goto LABEL_10;
    }
  }
}
