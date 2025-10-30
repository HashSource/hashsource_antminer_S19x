int __fastcall sub_293AEC(void *a1)
{
  void *v1; // r6
  int result; // r0

  v1 = off_46DED0;
  off_46DED0 = a1;
  sub_289B24((unsigned __int8 *)dword_48BAA8, (int (*)())sub_2974E4);
  sub_289B24((unsigned __int8 *)dword_48BAAC, (int (*)())sub_2975E4);
  sub_289B24((unsigned __int8 *)dword_48BAB0, (int (*)())sub_295408);
  sub_289B24((unsigned __int8 *)dword_48BAB4, (int (*)())sub_29534C);
  sub_289B24((unsigned __int8 *)dword_48BAB8, (int (*)())sub_2954D0);
  sub_289B24((unsigned __int8 *)dword_48BABC, (int (*)())sub_2954E8);
  result = sub_289B24((unsigned __int8 *)dword_48BAC0, sub_295C9C);
  off_46DED0 = v1;
  return result;
}
