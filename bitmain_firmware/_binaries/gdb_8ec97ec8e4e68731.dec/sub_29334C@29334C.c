int sub_29334C()
{
  int v0; // r4
  int v2; // r2
  int v3; // r2
  char *v4; // r3

  v0 = dword_48AAE0;
  ++dword_48AADC;
  if ( dword_48AAE0 )
  {
    dword_48AAE0 = 0;
    dword_48AAA0 &= ~0x20000u;
  }
  else
  {
    v0 = sub_29297C();
    if ( !v0 )
    {
      if ( off_48B90C )
      {
        while ( 1 )
        {
          if ( sub_29307C() < 0 )
          {
            v0 = 10;
            dword_48FF30 = 1;
            return v0;
          }
          if ( dword_48B6B8 )
            sub_291120(dword_48B6B8);
          if ( dword_48B704 != dword_48B708 )
            break;
          v0 = dword_48FF30;
          if ( dword_48FF30 )
            return 10;
          off_48B90C();
          if ( !off_48B90C )
            return v0;
        }
        v3 = dword_48B708 + 1;
        v4 = (char *)&dword_48B704 + dword_48B708;
        v0 = *((unsigned __int8 *)&dword_48B704 + dword_48B708 + 8);
        if ( dword_48B708 + 1 >= 512 )
          v4 = 0;
        ++dword_48B708;
        if ( v3 >= 512 )
          dword_48B708 = (int)v4;
      }
      else
      {
        v2 = dword_48B708;
        if ( dword_48B704 == dword_48B708 )
        {
          v0 = off_47079C((FILE *)dword_48AAAC);
        }
        else
        {
          ++dword_48B708;
          v0 = *((unsigned __int8 *)&dword_48B704 + v2 + 8);
          if ( v2 + 1 >= 512 )
            dword_48B708 = 0;
        }
        if ( dword_48B6B8 )
          sub_291120(dword_48B6B8);
      }
    }
  }
  return v0;
}
