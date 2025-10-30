int __fastcall sub_6FC48(const char *a1, int a2, int a3)
{
  int result; // r0

  if ( dword_65E308 )
    return 0;
  if ( a1 )
  {
    result = open(a1, 2050, a3, a1);
    dword_65E30C = result;
    if ( result < 0 )
    {
      nullsub_8();
      return -1;
    }
    else
    {
      dword_65E308 = 1;
    }
  }
  else
  {
    nullsub_8();
    return -3;
  }
  return result;
}
