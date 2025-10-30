_DWORD *__fastcall sub_74044(_DWORD *a1)
{
  int v2; // r0
  int v3; // r0
  _DWORD *v6; // [sp+8h] [bp-Ch]
  unsigned int i; // [sp+Ch] [bp-8h]

  v6 = sub_73538();
  if ( !v6 )
    return 0;
  for ( i = 0; i < sub_7365C(a1); ++i )
  {
    v2 = sub_736A8(a1, i);
    v3 = sub_74ED8(v2);
    sub_739D4(v6, v3);
  }
  return v6;
}
