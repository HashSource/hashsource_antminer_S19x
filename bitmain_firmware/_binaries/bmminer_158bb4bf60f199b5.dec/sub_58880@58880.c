const char *__fastcall sub_58880(int a1)
{
  int v3; // r3

  if ( dword_1AF13C )
    return "Use only user + pass or userpass, but not both";
  v3 = dword_1AF134 + 1;
  dword_1AF134 = v3;
  if ( v3 > dword_242F4C )
  {
    sub_58548();
    v3 = dword_1AF134;
  }
  sub_64370(a1, *(_DWORD *)(dword_244048 + 4 * (v3 + 0x3FFFFFFF)) + 172);
  return 0;
}
