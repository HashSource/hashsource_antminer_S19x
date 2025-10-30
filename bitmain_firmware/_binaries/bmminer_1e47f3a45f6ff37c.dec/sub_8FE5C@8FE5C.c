int __fastcall sub_8FE5C(double a1)
{
  if ( a1 < 0.0 )
    return -(int)sub_8FE80(LODWORD(a1), HIDWORD(a1) ^ 0x80000000);
  else
    return sub_8FE80(LODWORD(a1), HIDWORD(a1));
}
