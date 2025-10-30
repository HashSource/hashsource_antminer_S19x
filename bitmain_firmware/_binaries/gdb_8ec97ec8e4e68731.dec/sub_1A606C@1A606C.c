void sub_1A606C()
{
  if ( dword_487A88 != dword_487A78 )
  {
    dword_487A78 = dword_487A88;
    if ( dword_487A88 )
    {
      if ( !dword_487A8C )
      {
        sub_349204(1726168);
        dword_487A8C = 1;
      }
      monstartup((u_long)main, (u_long)&unk_349280);
    }
    else
    {
      mcleanup();
    }
  }
}
