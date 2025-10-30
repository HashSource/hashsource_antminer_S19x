int __fastcall sub_12EED8(int a1, int a2)
{
  int result; // r0
  int v5; // r3

  *(_DWORD *)(a2 + 60) = 0;
  *(_DWORD *)(a2 + 56) = 0;
  result = sub_12E694(a1, 82, a2);
  if ( result || (result = sub_12E694(a1, 17, a2)) != 0 )
  {
    v5 = *(_DWORD *)(result + 8);
    *(_DWORD *)(a2 + 60) = 1;
    *(_DWORD *)(a2 + 56) = v5;
  }
  return result;
}
