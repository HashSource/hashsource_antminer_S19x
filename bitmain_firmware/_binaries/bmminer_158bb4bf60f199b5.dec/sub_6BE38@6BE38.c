int __fastcall sub_6BE38(int a1, int a2)
{
  int result; // r0
  int v4; // r3
  int v5; // r3

  result = *(_DWORD *)(a1 + 8);
  if ( !result || (v4 = *(_DWORD *)(result + 4), v4 == -1) || (v5 = v4 - 1, (*(_DWORD *)(result + 4) = v5) != 0) )
  {
    *(_DWORD *)(a1 + 8) = a2;
  }
  else
  {
    result = sub_6E5DC(result);
    *(_DWORD *)(a1 + 8) = a2;
  }
  return result;
}
