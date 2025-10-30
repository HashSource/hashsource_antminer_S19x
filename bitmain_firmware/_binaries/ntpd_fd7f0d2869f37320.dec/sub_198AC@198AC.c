int __fastcall sub_198AC(const char *a1)
{
  _DWORD *v2; // r4
  int v3; // r1
  __int64 v4; // r0
  int result; // r0

  v2 = (_DWORD *)sub_1C704();
  v3 = v2[9];
  v2[10] = v2[8];
  v2[11] = v3;
  v4 = sub_65D40(3, "line %d column %d %s", v2[10], v2[11], a1);
  result = sub_1C69C(v4, HIDWORD(v4));
  if ( !result )
  {
    result = sub_6D00C((char *)&remote_config + dword_108D14 + 1024, 1024 - dword_108D14, "column %d %s", v2[11], a1);
    if ( result > 0 )
    {
      result += dword_108D14;
      dword_108D14 = result;
    }
    ++dword_108D18;
  }
  return result;
}
