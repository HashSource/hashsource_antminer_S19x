char *sub_2EE0C()
{
  char *result; // r0
  int v1; // r5
  const unsigned __int16 **v2; // r0
  char *v3; // r3
  int v4; // t1

  result = (char *)dword_BBCBC;
  if ( !dword_BBCBC )
  {
    strncpy(&byte_BACB8, "ntp_loopfilter.c", 0x1000u);
    v1 = (unsigned __int8)byte_BACB8;
    dword_BBCBC = (int)&byte_BACB8;
    if ( byte_BACB8 )
    {
      v2 = _ctype_b_loc();
      v3 = &byte_BACB8;
      do
      {
        if ( ((*v2)[v1] & 8) != 0 )
        {
          dword_BBCBC = (int)v3;
          return v3;
        }
        v4 = (unsigned __int8)*++v3;
        v1 = v4;
      }
      while ( v4 );
      dword_BBCBC = (int)v3;
      return v3;
    }
    else
    {
      return &byte_BACB8;
    }
  }
  return result;
}
