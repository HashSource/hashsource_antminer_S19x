int __fastcall sub_19664(const char *a1)
{
  _DWORD *v2; // r4
  int v3; // r1
  __int64 v4; // r0
  int result; // r0

  v2 = (_DWORD *)sub_1C4B8();
  v3 = v2[9];
  v2[10] = v2[8];
  v2[11] = v3;
  v4 = sub_64E00(3, "line %d column %d %s", v2[10], v2[11], a1);
  result = sub_1C450(v4, HIDWORD(v4));
  if ( !result )
  {
    result = sub_6C054((char *)&unk_1078F0 + dword_107CF4, 1024 - dword_107CF4, "column %d %s", v2[11], a1);
    if ( result > 0 )
    {
      result += dword_107CF4;
      dword_107CF4 = result;
    }
    ++dword_107CF8;
  }
  return result;
}
