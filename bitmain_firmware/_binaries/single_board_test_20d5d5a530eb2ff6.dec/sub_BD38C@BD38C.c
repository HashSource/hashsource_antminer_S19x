int __fastcall sub_BD38C(int a1, int a2)
{
  unsigned int v3; // r1

  *(_DWORD *)(a1 + 56) = a2;
  *(_DWORD *)(a1 + 60) = 0;
  if ( a2 == 2 )
  {
    v3 = 1;
  }
  else
  {
    if ( a2 != 3 && a2 != 1 )
      return 1;
    v3 = 0;
  }
  return sub_BD058(a1, v3);
}
