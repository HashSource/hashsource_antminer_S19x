int __fastcall sub_8BFD0(__int64 a1, int a2, int a3)
{
  int v4; // [sp+8h] [bp-8h] BYREF

  if ( a3 || a2 )
    return sub_8C050(a1, HIDWORD(a1), a2, a3, &v4);
  if ( a1 )
    HIDWORD(a1) = -1;
  v4 = HIDWORD(a1);
  return raise(8);
}
