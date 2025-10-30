int __fastcall sub_19422C(int result)
{
  if ( !result )
  {
    dword_487A08 = (int)off_46D5A4[0];
    sub_259858("Current language:  %s\n", (const char *)dword_487A00);
    sub_193F84(0);
    sub_259858("Range checking:    %s\n", (const char *)dword_4879FC);
    sub_194034(0, 1, 0, 0);
    sub_259858("Case sensitivity:  %s\n", (const char *)dword_4879F8);
    JUMPOUT(0x194100);
  }
  if ( (char **)dword_487A08 != off_46D5A4[0] )
  {
    dword_487A08 = (int)off_46D5A4[0];
    sub_259858("Current language:  %s\n", (const char *)dword_487A00);
    return sub_193F84(0);
  }
  return result;
}
