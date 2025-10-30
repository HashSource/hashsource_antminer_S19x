int __fastcall sub_111454(int a1, int a2)
{
  int result; // r0
  int v4; // [sp+4h] [bp-4h] BYREF

  v4 = a2;
  result = sub_110B00(a1, &v4);
  if ( *(_DWORD *)(result + 52) )
    return sub_111A9C(a1);
  return result;
}
