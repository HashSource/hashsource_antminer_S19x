int __fastcall sub_E8D58(int a1, int a2, int a3, int a4, char a5, _BYTE *a6)
{
  if ( a4 )
  {
    if ( a2 == 3 )
      return a2;
    sub_E8860(a3 + 2, a1, a6);
    sub_25A418(a1, "protected:\n");
    return 3;
  }
  else
  {
    if ( a5 )
    {
      if ( a2 != 2 )
      {
        sub_E8860(a3 + 2, a1, a6);
        sub_25A418(a1, "private:\n");
        return 2;
      }
      return a2;
    }
    if ( a2 == 1 )
      return a2;
    sub_E8860(a3 + 2, a1, a6);
    sub_25A418(a1, "public:\n");
    return 1;
  }
}
