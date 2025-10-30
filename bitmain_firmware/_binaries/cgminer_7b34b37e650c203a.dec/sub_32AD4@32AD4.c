const char *__fastcall sub_32AD4(int a1)
{
  int v3; // r3

  if ( dword_69070 )
    return "Use only user + pass or userpass, but not both";
  v3 = dword_6906C + 1;
  dword_6906C = v3;
  if ( v3 > dword_733CC )
  {
    sub_324B8();
    v3 = dword_6906C;
  }
  sub_4014C(a1, *(_DWORD *)(dword_744C8 + 4 * (v3 + 0x3FFFFFFF)) + 176);
  return 0;
}
