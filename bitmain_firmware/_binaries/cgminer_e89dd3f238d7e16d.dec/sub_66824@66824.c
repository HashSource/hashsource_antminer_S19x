_DWORD *__fastcall sub_66824(_DWORD *a1)
{
  int v2; // r0
  int v3; // r0
  _DWORD *v6; // [sp+8h] [bp-Ch]
  unsigned int i; // [sp+Ch] [bp-8h]

  v6 = sub_65D18();
  if ( !v6 )
    return 0;
  for ( i = 0; i < sub_65E3C(a1); ++i )
  {
    v2 = sub_65E88(a1, i);
    v3 = sub_676B8(v2);
    sub_661B4(v6, v3);
  }
  return v6;
}
