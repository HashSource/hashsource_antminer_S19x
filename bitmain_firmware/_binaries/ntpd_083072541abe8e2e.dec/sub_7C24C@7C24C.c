unsigned int __fastcall sub_7C24C(unsigned int result, unsigned int a2)
{
  unsigned int v2; // r4
  int v4; // r1
  unsigned int v5; // [sp+0h] [bp-8h] BYREF

  v2 = result;
  if ( a2 < result )
  {
    if ( a2 )
    {
      sub_7C1B4(&v5);
      sub_8B8EC(v5, a2);
      return v2 - v4;
    }
  }
  else
  {
    result |= a2;
    if ( result )
      sub_6ECC0((int)"./../lib/isc/random.c", 106, 0, "jitter < max || (jitter == 0 && max == 0)");
  }
  return result;
}
