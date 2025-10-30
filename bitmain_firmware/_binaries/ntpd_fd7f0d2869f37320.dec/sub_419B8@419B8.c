int sub_419B8()
{
  itimer = 0;
  dword_109CB8 = 0;
  dword_109CBC = 0;
  dword_109CC0 = 0;
  getitimer(0, (struct itimerval *)&itimer);
  if ( (unsigned int)dword_109CBC <= 1 )
  {
    if ( dword_109CC0 < 0 )
    {
      dword_109CC0 = 0;
      if ( dword_109CBC )
        goto LABEL_4;
    }
    else if ( dword_109CBC || dword_109CC0 )
    {
      goto LABEL_4;
    }
    dword_109CBC = 1;
    goto LABEL_4;
  }
  dword_109CBC = 1;
  if ( dword_109CC0 < 0 )
    dword_109CC0 = 0;
LABEL_4:
  itimer = 1;
  dword_109CB8 = 0;
  return sub_4192C();
}
