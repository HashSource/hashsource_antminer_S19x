_DWORD *__fastcall sub_1D1034(_DWORD *a1, const char *a2)
{
  _DWORD *result; // r0
  int i; // r4
  const char *v6; // r7
  const char *v7; // r0
  const char *v8; // r0

  result = sub_1D0878(a1, 1);
  for ( i = result[6]; i; i = *(_DWORD *)i )
  {
    if ( !*(_BYTE *)(i + 54) )
    {
      if ( dword_489708
        || (v6 = (const char *)sub_3245A4(a2),
            v7 = (const char *)sub_3245A4(*(_DWORD *)(i + 4)),
            (result = (_DWORD *)j_strcmp(v6, v7)) == 0) )
      {
        v8 = (const char *)sub_1CE0F4(i);
        result = (_DWORD *)j_strcmp(a2, v8);
        if ( !result )
          result = (_DWORD *)sub_1CE1F0((int)a1, i);
      }
    }
  }
  return result;
}
