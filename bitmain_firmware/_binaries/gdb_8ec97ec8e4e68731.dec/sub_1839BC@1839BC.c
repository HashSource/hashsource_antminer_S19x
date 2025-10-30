void sub_1839BC()
{
  int i; // r4
  int v1; // r0

  for ( i = dword_487918; i; i = *(_DWORD *)(i + 4) )
  {
    v1 = *(_DWORD *)(i + 12);
    if ( v1 )
      sub_1838B8(v1);
  }
}
