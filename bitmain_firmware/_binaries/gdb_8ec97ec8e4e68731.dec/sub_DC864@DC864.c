int __fastcall sub_DC864(int a1, _DWORD *a2)
{
  _DWORD *v2; // r3
  int result; // r0
  _DWORD *v5; // r4

  v2 = a2;
  while ( 1 )
  {
    v5 = (_DWORD *)v2[27];
    if ( v2 == v5 )
      break;
    result = sub_DC658(v2, 2, 1);
    v2 = v5;
    if ( a2 == v5 )
      return result;
  }
  return sub_DC658(v2, 2, 1);
}
