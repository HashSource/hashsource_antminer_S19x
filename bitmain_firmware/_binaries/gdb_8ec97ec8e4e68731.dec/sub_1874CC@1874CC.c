int __fastcall sub_1874CC(char *a1)
{
  __int64 v2; // r0
  int v4; // r0
  int v5; // r0
  unsigned int v6; // r0

  sub_259F10("Signal        Stop\tPrint\tPass to program\tDescription\n");
  if ( a1 )
  {
    LODWORD(v2) = sub_99A88(a1);
    if ( (_DWORD)v2 == 143 )
    {
      v2 = sub_14CC00((int)a1);
      if ( (unsigned int)(v2 - 1) > 0xE )
        sub_946E0(
          "Only signals 1-15 are valid as numeric signals.\nUse \"info signals\" for a list of symbolic signals.",
          HIDWORD(v2));
    }
    return sub_186510(v2);
  }
  else
  {
    v4 = sub_259F10((const char *)&word_356638);
    v5 = sub_258BD4(v4);
    while ( ++a1 != (char *)152 )
    {
      while ( 1 )
      {
        v5 = sub_258BD4(v5);
        if ( (unsigned int)(a1 - 143) <= 1 )
          break;
        v6 = (unsigned int)a1++;
        v5 = sub_186510(v6);
        if ( a1 == (char *)152 )
          return sub_259F10("\nUse the \"handle\" command to change these tables.\n");
      }
    }
    return sub_259F10("\nUse the \"handle\" command to change these tables.\n");
  }
}
