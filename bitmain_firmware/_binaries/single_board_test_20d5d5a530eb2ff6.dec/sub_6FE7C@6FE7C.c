int __fastcall sub_6FE7C(int a1)
{
  int result; // r0

  if ( !dword_65E308 )
    return 0;
  result = close(a1);
  if ( result )
  {
    nullsub_8();
    result = -1;
  }
  dword_65E308 = 0;
  return result;
}
