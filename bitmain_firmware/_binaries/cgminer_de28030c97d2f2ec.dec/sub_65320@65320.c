_BYTE **__fastcall sub_65320(const char **a1)
{
  _BYTE **result; // r0
  _BYTE *v3; // [sp+Ch] [bp-8h]

  result = (_BYTE **)localeconv();
  v3 = *result;
  if ( **result != 46 )
  {
    result = (_BYTE **)strchr(*a1, 46);
    if ( result )
      *(_BYTE *)result = *v3;
  }
  return result;
}
