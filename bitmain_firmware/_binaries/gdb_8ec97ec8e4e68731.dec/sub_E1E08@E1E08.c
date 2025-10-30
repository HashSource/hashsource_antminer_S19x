int __fastcall sub_E1E08(_DWORD *a1, int a2, unsigned int a3)
{
  _BOOL4 v3; // r3

  v3 = a3 == 0;
  if ( a3 > -991146299 * ((*(_DWORD *)(a2 + 28) - *(_DWORD *)(a2 + 24)) >> 2) )
    v3 = 1;
  if ( v3 )
    return 0;
  *a1 = a2;
  a1[1] = a3 - 1;
  return 1;
}
