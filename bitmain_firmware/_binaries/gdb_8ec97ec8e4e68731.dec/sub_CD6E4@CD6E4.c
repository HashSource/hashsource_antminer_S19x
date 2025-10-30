int __fastcall sub_CD6E4(int result, int a2)
{
  int v2; // r2
  char v3; // r12

  v2 = *(unsigned __int8 *)(result + 32);
  v3 = a2;
  if ( a2 )
    v3 = 1;
  *(_BYTE *)(result + 32) = v3;
  if ( v2 != a2 )
    return sub_1B9D50(result);
  return result;
}
