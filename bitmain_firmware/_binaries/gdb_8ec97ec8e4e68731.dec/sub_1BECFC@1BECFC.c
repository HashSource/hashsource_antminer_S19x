int __fastcall sub_1BECFC(int a1, int a2, int *a3)
{
  int result; // r0
  int v4; // r1
  bool v5; // zf
  int v6; // r1

  result = *a3;
  v4 = *(_DWORD *)(*a3 + 28);
  if ( v4 == *(_DWORD *)(*a3 + 32) )
    return sub_1BEFEC(result + 24);
  v5 = v4 == 0;
  v6 = v4 + 12;
  if ( !v5 )
  {
    *(_DWORD *)(v6 - 12) = 0;
    *(_DWORD *)(v6 - 8) = 0;
    *(_DWORD *)(v6 - 4) = 0;
  }
  *(_DWORD *)(result + 28) = v6;
  return result;
}
