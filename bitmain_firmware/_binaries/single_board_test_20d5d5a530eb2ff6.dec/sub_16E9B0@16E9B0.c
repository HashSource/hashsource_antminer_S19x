int __fastcall sub_16E9B0(int a1, unsigned int a2, int a3, char *a4, int a5)
{
  int result; // r0

  result = sub_10E448((void ***)(a1 + 24), a2, a3, a4, a5);
  if ( result )
  {
    *(_DWORD *)(a1 + 8) = 1;
    return 1;
  }
  return result;
}
