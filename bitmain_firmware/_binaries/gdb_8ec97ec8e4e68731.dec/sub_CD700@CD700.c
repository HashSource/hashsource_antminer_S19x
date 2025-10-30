int __fastcall sub_CD700(int result, int a2)
{
  int v2; // r2

  v2 = *(_DWORD *)(result + 112);
  *(_DWORD *)(result + 112) = a2;
  if ( v2 != a2 )
    return sub_1B9D50(result);
  return result;
}
