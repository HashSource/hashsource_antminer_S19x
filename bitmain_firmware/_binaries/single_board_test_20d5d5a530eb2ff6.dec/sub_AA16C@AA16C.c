int __fastcall sub_AA16C(int a1, int a2)
{
  int result; // r0
  int v4; // [sp+4h] [bp-Ch]

  if ( *(_DWORD *)(a1 + 84) )
  {
    result = *(_DWORD *)(a1 + 84);
    return sub_84F24(result, a2);
  }
  v4 = a2;
  result = sub_10BFCC(a1);
  a2 = v4;
  *(_DWORD *)(a1 + 84) = result;
  if ( result )
    return sub_84F24(result, a2);
  return result;
}
