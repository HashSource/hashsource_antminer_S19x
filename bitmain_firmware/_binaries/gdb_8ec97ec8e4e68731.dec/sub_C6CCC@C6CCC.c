int __fastcall sub_C6CCC(int a1, int a2)
{
  _DWORD *i; // r3

  for ( i = *(_DWORD **)(a1 + 136); i; i = (_DWORD *)*i )
  {
    if ( a2 == i[2] )
    {
      i[2] = 0;
      i[5] = 0;
    }
  }
  return 0;
}
