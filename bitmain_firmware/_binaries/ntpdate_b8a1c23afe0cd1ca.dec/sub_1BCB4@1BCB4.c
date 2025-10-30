unsigned int __fastcall sub_1BCB4(unsigned int result, unsigned int a2)
{
  unsigned int v2; // r4
  int v4; // r1
  unsigned int v5; // [sp+0h] [bp-8h] BYREF

  v2 = result;
  if ( a2 < result )
  {
    if ( a2 )
    {
      sub_1BC1C(&v5);
      sub_1BFB4(v5, a2);
      return v2 - v4;
    }
  }
  else
  {
    result |= a2;
    if ( result )
      sub_1073C();
  }
  return result;
}
