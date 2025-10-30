char *__fastcall sub_98B08(int a1, int a2)
{
  char *v2; // r4
  bool v3; // cc
  char *v4; // r0

  v2 = (char *)(dword_475844 + 1);
  v3 = dword_475844 + 1 <= 15;
  if ( dword_475844 + 1 > 15 )
  {
    dword_475844 = 0;
  }
  else
  {
    ++dword_475844;
    v2 = &byte_475524[50 * (_DWORD)v2];
  }
  if ( !v3 )
    v2 = byte_475524;
  v4 = sub_989F0(a1, a2, 8, (int)byte_475524);
  sub_93170(v2, 0x32u, "0x%s", v4);
  return v2;
}
