int __fastcall sub_A82B8(int a1, unsigned int a2, int *a3)
{
  int result; // r0
  unsigned int v6; // r3
  unsigned int v7; // r5

  result = sub_A8250((unsigned int **)a1, a2, a3);
  if ( result )
  {
    v6 = *(_DWORD *)(a1 + 12) + a2;
    v7 = a2 + *(_DWORD *)(a1 + 8);
    *(_DWORD *)(a1 + 12) = v6;
    *(_DWORD *)(a1 + 8) = v7;
    return 1;
  }
  return result;
}
