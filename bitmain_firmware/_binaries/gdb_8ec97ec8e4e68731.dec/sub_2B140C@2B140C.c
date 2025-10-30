int __fastcall sub_2B140C(int a1, int a2)
{
  int v2; // r3
  int result; // r0
  int v4; // r3
  int i; // r1

  v2 = *(_DWORD *)(a1 + 160);
  result = *(_DWORD *)(a1 + 124);
  v4 = *(_DWORD *)(v2 + 8);
  *(_DWORD *)(a2 + 4 * result) = 0;
  for ( i = a2 + 4 * result; v4; v4 = *(_DWORD *)(v4 + 24) )
  {
    *(_DWORD *)(i - 4) = v4;
    i -= 4;
  }
  return result;
}
