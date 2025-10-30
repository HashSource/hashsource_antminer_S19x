int sub_40C14()
{
  itimer = 0;
  dword_108C98 = 0;
  dword_108C9C = 0;
  dword_108CA0 = 0;
  getitimer(0, (struct itimerval *)&itimer);
  if ( (unsigned int)dword_108C9C <= 1 )
  {
    if ( dword_108CA0 < 0 )
    {
      dword_108CA0 = 0;
      if ( !dword_108C9C )
        dword_108C9C = 1;
    }
    else if ( !dword_108C9C )
    {
      dword_108C9C = dword_108CA0 == 0;
    }
  }
  else
  {
    dword_108C9C = 1;
    if ( dword_108CA0 < 0 )
      dword_108CA0 = 0;
  }
  *(_QWORD *)&itimer = 1;
  return sub_40B88();
}
