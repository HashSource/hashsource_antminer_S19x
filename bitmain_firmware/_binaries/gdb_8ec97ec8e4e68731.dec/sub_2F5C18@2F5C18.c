int __fastcall sub_2F5C18(_DWORD *a1, const char **a2, int a3, int a4, unsigned __int64 a5, _DWORD *a6, size_t *a7)
{
  const char *v8; // r8
  char *v12; // r11
  size_t v13; // r0
  void *v14; // r6
  _BOOL4 v15; // r0

  v8 = *a2;
  if ( *a6 )
    goto LABEL_2;
  v12 = sub_2AD7AC((int)a1, v8);
  if ( !v12 )
  {
    v8 = a2[1];
    if ( !v8 || (v12 = sub_2AD7AC((int)a1, a2[1])) == 0 )
    {
      sub_2A6A5C("Dwarf Error: Can't find %s section.", *a2);
      ((void (__fastcall *)(int))loc_2A6C48)(17);
      return 0;
    }
  }
  v13 = *((_DWORD *)v12 + 10);
  if ( !v13 )
    v13 = *((_DWORD *)v12 + 9);
  *a7 = v13;
  v14 = sub_2AB368(v13 + 1);
  if ( !v14 )
    return 0;
  if ( a3 )
    v15 = sub_2AE08C(a1, v12, (int)v14, a3) == 0;
  else
    v15 = sub_2ADEDC((int)a1, v12, v14, 0, 0, *a7) == 0;
  if ( v15 )
  {
    free(v14);
    return 0;
  }
  *((_BYTE *)v14 + *a7) = 0;
  *a6 = v14;
LABEL_2:
  if ( !a5 || *a7 > a5 )
    return 1;
  sub_2A6A5C("Dwarf Error: Offset (%llu) greater than or equal to %s size (%Lu).", 0, a5, v8, *a7);
  ((void (__fastcall *)(int))loc_2A6C48)(17);
  return 0;
}
