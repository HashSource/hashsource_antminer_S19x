_DWORD *__fastcall sub_77514(_DWORD *a1)
{
  int v2; // r0
  int v3; // r0
  _DWORD *v6; // [sp+8h] [bp-Ch]
  unsigned int i; // [sp+Ch] [bp-8h]

  v6 = sub_76A14();
  if ( !v6 )
    return 0;
  for ( i = 0; sub_76B34(a1) > i; ++i )
  {
    v2 = sub_76B80(a1, i);
    v3 = sub_78348(v2);
    sub_76EA4(v6, v3);
  }
  return v6;
}
