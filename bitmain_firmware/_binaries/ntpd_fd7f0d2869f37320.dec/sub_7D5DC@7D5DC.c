int __fastcall sub_7D5DC(__int64 a1)
{
  __int64 v1; // r4
  int v3; // [sp+0h] [bp-8h] BYREF

  v1 = a1;
  if ( HIDWORD(a1) >= (unsigned int)a1 && a1 )
    sub_6FC54((int)"./../lib/isc/random.c", 106, 0, "jitter < max || (jitter == 0 && max == 0)");
  if ( HIDWORD(a1) )
  {
    sub_7D54C(&v3);
    sub_8CE3C(v3, HIDWORD(v1));
    LODWORD(a1) = v1 - HIDWORD(a1);
  }
  return a1;
}
