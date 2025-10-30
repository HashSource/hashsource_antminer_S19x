int __fastcall sub_DC5AC(_DWORD *a1)
{
  int v2; // r1
  int v3; // r2
  _DWORD *i; // r6

  a1[4] = 0;
  sub_CA274((int)(a1 + 3), a1 + 7);
  if ( off_489B54(&dword_4899A0) )
  {
    if ( *(_DWORD *)(sub_249744() + 8) )
    {
      if ( (unsigned int)(a1[3] - 27) <= 2 )
      {
        for ( i = (_DWORD *)a1[7]; i; i = (_DWORD *)*i )
          off_489BA8(&dword_4899A0, i);
      }
    }
  }
  sub_D72EC(0, v2, v3);
  return sub_1B9D50(a1);
}
