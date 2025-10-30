_DWORD *__fastcall sub_73FBC(_DWORD *a1)
{
  int v2; // r0
  _DWORD *v5; // [sp+8h] [bp-Ch]
  unsigned int i; // [sp+Ch] [bp-8h]

  v5 = sub_73538();
  if ( !v5 )
    return 0;
  for ( i = 0; i < sub_7365C(a1); ++i )
  {
    v2 = sub_736A8(a1, i);
    sub_7297C((int)v5, v2);
  }
  return v5;
}
