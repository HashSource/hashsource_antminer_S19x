int __fastcall sub_1C2F4(__int64 a1)
{
  __int64 v1; // r4
  int v3; // [sp+0h] [bp-8h] BYREF

  v1 = a1;
  if ( HIDWORD(a1) >= (unsigned int)a1 && a1 )
    sub_10C38();
  if ( HIDWORD(a1) )
  {
    sub_1C264(&v3);
    sub_1C5F4(v3, HIDWORD(v1));
    LODWORD(a1) = v1 - HIDWORD(a1);
  }
  return a1;
}
