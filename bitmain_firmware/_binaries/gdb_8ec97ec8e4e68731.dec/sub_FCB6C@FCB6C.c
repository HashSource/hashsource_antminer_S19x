_DWORD *__fastcall sub_FCB6C(_DWORD *a1, int a2, int a3, int a4, int a5)
{
  int v10; // r5

  sub_21CFB4();
  if ( *a1 )
    return a1;
  if ( a5 )
  {
    v10 = sub_C269C(a3);
    if ( v10 )
    {
      *a1 = sub_21CDFC(a2, 1, v10, a4);
      a1[1] = v10;
    }
    return a1;
  }
  sub_21D720(a1, a2, a3, a4);
  return a1;
}
