int __fastcall sub_73EB4(int a1, int a2, int a3, int a4)
{
  sub_7298C(a1, a2, a4);
  if ( sub_74F6C(a1 + 40) )
    return -1;
  *(_DWORD *)(a1 + 52) = a3;
  *(_DWORD *)(a1 + 60) = -1;
  return 0;
}
