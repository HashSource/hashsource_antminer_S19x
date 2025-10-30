const char *__fastcall sub_327F0(int a1)
{
  int v3; // r3

  if ( dword_69070 )
    return "Use only user + pass or userpass, but not both";
  v3 = dword_69068 + 1;
  dword_69068 = v3;
  if ( v3 > dword_733CC )
  {
    sub_324B8();
    v3 = dword_69068;
  }
  sub_4014C(a1, *(_DWORD *)(dword_744C8 + 4 * (v3 + 0x3FFFFFFF)) + 172);
  return 0;
}
