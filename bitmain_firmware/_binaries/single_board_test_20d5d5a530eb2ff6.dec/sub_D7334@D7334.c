int __fastcall sub_D7334(int a1, int a2, int a3, _DWORD *a4)
{
  _DWORD *v7; // r4

  if ( a2 == 2 )
  {
    *a4 = *(_DWORD *)sub_D8934(a1);
    return 1;
  }
  else if ( a2 == 3 )
  {
    if ( a3 <= 0 )
      return 0;
    *(_DWORD *)sub_D8934(a1) = a3;
    return 1;
  }
  else
  {
    if ( a2 )
      return -1;
    v7 = (_DWORD *)sub_D8934(a1);
    *v7 = 8 * sub_D8AD4(a1);
    return 1;
  }
}
