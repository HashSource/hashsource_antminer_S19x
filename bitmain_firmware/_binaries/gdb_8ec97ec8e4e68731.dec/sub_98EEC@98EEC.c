char *__fastcall sub_98EEC(int a1)
{
  char *v1; // r4
  bool v2; // cc
  char *v3; // r0

  v1 = (char *)(dword_475844 + 1);
  v2 = dword_475844 + 1 <= 15;
  if ( dword_475844 + 1 > 15 )
  {
    dword_475844 = 0;
  }
  else
  {
    ++dword_475844;
    v1 = &byte_475524[50 * (_DWORD)v1];
  }
  if ( !v2 )
    v1 = byte_475524;
  v3 = sub_989F0(a1, 0, 4, (int)byte_475524);
  sub_93170(v1, 0x32u, "0x%s", v3);
  return v1;
}
