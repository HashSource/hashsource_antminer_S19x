int __fastcall sub_120268(const char *a1)
{
  int i; // r4
  char *v3; // r0

  for ( i = 0; ; ++i )
  {
    if ( i >= sub_12021C() )
      return -1;
    v3 = sub_120238(i);
    if ( !strcmp(*((const char **)v3 + 5), a1) )
      break;
  }
  return i;
}
