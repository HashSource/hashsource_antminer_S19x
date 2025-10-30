int __fastcall sub_28A908(char *a1)
{
  int result; // r0

  if ( a1 || (a1 = (char *)dword_48ADEC) != 0 || (a1 = j_getenv("INPUTRC")) != 0 )
  {
    if ( *a1 )
      return sub_28A638(a1, 0);
  }
  result = sub_28A638("~/.inputrc", 0);
  if ( result )
  {
    a1 = "/etc/inputrc";
    return sub_28A638(a1, 0);
  }
  return result;
}
