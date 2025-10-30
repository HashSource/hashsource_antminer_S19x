const char *__fastcall sub_2F624(int a1)
{
  if ( dword_86F08 )
    return "Use only user + pass or userpass, but not both";
  if ( ++dword_86F04 > dword_90E90 )
    sub_2E5D4();
  sub_5452C(a1, *(_DWORD *)(dword_90F34 + 4 * (dword_86F04 + 0x3FFFFFFF)) + 176);
  return 0;
}
