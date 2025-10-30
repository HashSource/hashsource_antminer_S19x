int __fastcall sub_177B8(_DWORD *a1, int a2)
{
  int result; // r0

  result = sub_13FF0(a1);
  if ( result )
  {
    if ( (a2 & *(_DWORD *)(result + 144)) != 0 )
      return 0;
  }
  return result;
}
