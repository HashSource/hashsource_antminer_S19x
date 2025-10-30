_DWORD *__fastcall sub_67514(_DWORD *a1)
{
  int v2; // r0
  int v3; // r0
  _DWORD *v6; // [sp+8h] [bp-Ch]
  unsigned int i; // [sp+Ch] [bp-8h]

  v6 = sub_66A14();
  if ( !v6 )
    return 0;
  for ( i = 0; sub_66B34(a1) > i; ++i )
  {
    v2 = sub_66B80(a1, i);
    v3 = sub_68348(v2);
    sub_66EA4(v6, v3);
  }
  return v6;
}
