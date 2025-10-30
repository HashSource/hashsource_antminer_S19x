int __fastcall sub_A2744(int a1)
{
  int result; // r0
  int v3; // r3

  result = sub_82358(a1);
  if ( result )
  {
    v3 = **(_DWORD **)(a1 + 4);
    if ( v3 == 0x10000 )
      *(_DWORD *)a1 = 772;
    else
      *(_DWORD *)a1 = v3;
    return 1;
  }
  return result;
}
