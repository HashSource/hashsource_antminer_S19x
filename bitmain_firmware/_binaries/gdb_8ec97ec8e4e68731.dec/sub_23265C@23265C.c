int sub_23265C()
{
  int result; // r0
  void (__noreturn *v1)(); // r3
  bool v2; // zf
  void (__noreturn *v3)(); // r3
  bool v4; // zf

  result = dword_4899A0;
  if ( dword_4899A0 )
  {
    v1 = *(void (__noreturn **)())(dword_4899A0 + 664);
    v2 = v1 == sub_22E630;
    if ( v1 != sub_22E630 )
      v2 = (char *)v1 == (char *)sub_223628;
    if ( v2 )
    {
      while ( 1 )
      {
        result = *(_DWORD *)result;
        if ( !result )
          break;
        v3 = *(void (__noreturn **)())(result + 664);
        v4 = v3 == sub_22E630;
        if ( v3 != sub_22E630 )
          v4 = (char *)v3 == (char *)sub_223628;
        if ( !v4 )
          return 1;
      }
    }
    else
    {
      return 1;
    }
  }
  return result;
}
