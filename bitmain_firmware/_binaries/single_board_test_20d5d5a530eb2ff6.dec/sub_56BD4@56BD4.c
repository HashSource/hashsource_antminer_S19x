int __fastcall sub_56BD4(int a1, int a2)
{
  int result; // r0

  if ( a2 > 0 )
  {
    if ( a2 > 12 )
      LOWORD(a2) = 12;
  }
  else
  {
    LOWORD(a2) = 9;
  }
  result = a1 + 0x40000;
  *(_WORD *)(result + 24) = a2;
  return result;
}
