int __fastcall sub_29451C(int a1)
{
  const char *v2; // r0
  int v3; // r4
  int v4; // r4

  v2 = (const char *)dword_490134;
  if ( dword_490134 )
  {
    if ( a1 > 0 )
    {
      v3 = 0;
      while ( 1 )
      {
        ++v3;
        tputs(v2, 1, sub_293B80);
        if ( a1 == v3 )
          break;
        v2 = (const char *)dword_490134;
      }
    }
  }
  else if ( a1 > 0 )
  {
    v4 = dword_490134;
    do
    {
      ++v4;
      IO_putc(8, (_IO_FILE *)dword_48FF2C);
    }
    while ( a1 != v4 );
  }
  return 0;
}
