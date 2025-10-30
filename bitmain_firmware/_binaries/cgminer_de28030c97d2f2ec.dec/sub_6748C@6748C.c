_DWORD *__fastcall sub_6748C(_DWORD *a1)
{
  int v2; // r0
  _DWORD *v5; // [sp+8h] [bp-Ch]
  unsigned int i; // [sp+Ch] [bp-8h]

  v5 = sub_66A14();
  if ( !v5 )
    return 0;
  for ( i = 0; sub_66B34(a1) > i; ++i )
  {
    v2 = sub_66B80(a1, i);
    sub_65E60((int)v5, v2);
  }
  return v5;
}
