_DWORD *__fastcall sub_6679C(_DWORD *a1)
{
  int v2; // r0
  _DWORD *v5; // [sp+8h] [bp-Ch]
  unsigned int i; // [sp+Ch] [bp-8h]

  v5 = sub_65D18();
  if ( !v5 )
    return 0;
  for ( i = 0; i < sub_65E3C(a1); ++i )
  {
    v2 = sub_65E88(a1, i);
    sub_6515C((int)v5, v2);
  }
  return v5;
}
