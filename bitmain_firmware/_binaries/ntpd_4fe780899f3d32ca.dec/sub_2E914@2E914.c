char *sub_2E914()
{
  char *v0; // r5
  int v2; // r4
  const unsigned __int16 **v3; // r0
  int v4; // r2
  int v5; // t1

  v0 = (char *)dword_B9CB8;
  if ( !dword_B9CB8 )
  {
    strncpy(&byte_B9E8C, "ntp_loopfilter.c", 0x1000u);
    v2 = (unsigned __int8)byte_B9E8C;
    dword_B9CB8 = (int)&byte_B9E8C;
    if ( byte_B9E8C )
    {
      v3 = _ctype_b_loc();
      v4 = 0;
      v0 = &byte_B9E8C;
      while ( ((*v3)[v2] & 8) == 0 )
      {
        v5 = (unsigned __int8)*++v0;
        v2 = v5;
        v4 = 1;
        if ( !v5 )
        {
          dword_B9CB8 = (int)v0;
          return v0;
        }
      }
      if ( v4 )
        dword_B9CB8 = (int)v0;
      else
        return &byte_B9E8C;
    }
    else
    {
      return &byte_B9E8C;
    }
  }
  return v0;
}
