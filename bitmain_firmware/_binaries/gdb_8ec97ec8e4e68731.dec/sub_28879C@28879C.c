int __fastcall sub_28879C(const char *a1)
{
  int result; // r0

  result = strncasecmp(a1, "vi", 2u);
  if ( result )
  {
    result = strncasecmp(a1, "emacs", 5u);
    if ( result )
    {
      return 1;
    }
    else
    {
      off_46DED0 = &unk_46FF30;
      dword_46DED4 = 1;
    }
  }
  else
  {
    off_46DED0 = &dword_46DF10;
    dword_46DED4 = 0;
  }
  return result;
}
