int __fastcall sub_347FD8(float a1)
{
  if ( a1 < 0.0 )
    return -(int)sub_348020(LODWORD(a1) ^ 0x80000000);
  else
    return sub_348020(LODWORD(a1));
}
