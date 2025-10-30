int __fastcall sub_F1320(int a1, int a2, int a3)
{
  int result; // r0

  result = *(_DWORD *)(a2 + 136);
  if ( result == *(_DWORD *)a3 )
    **(_DWORD **)(a3 + 4) = a2;
  return result;
}
