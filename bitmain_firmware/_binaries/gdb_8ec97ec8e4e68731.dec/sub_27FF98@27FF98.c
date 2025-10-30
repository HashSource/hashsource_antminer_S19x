char *__fastcall sub_27FF98(char *a1)
{
  int v1; // r0
  int v2; // r0
  char *v3; // r0
  char *v4; // r4

  if ( dword_48AAE0 == -1 )
  {
    sub_293324();
    return 0;
  }
  else
  {
    sub_27EFC0(a1);
    v1 = sub_27FD28();
    if ( off_47073C )
      v1 = off_47073C(dword_48AB00);
    sub_290A5C(v1);
    sub_27F038();
    if ( dword_48FF30 )
    {
      v2 = 1;
    }
    else
    {
      do
        v2 = sub_27F888();
      while ( !dword_48FF30 );
    }
    v3 = sub_27F158(v2);
    v4 = v3;
    if ( off_470738 )
      v3 = (char *)off_470738();
    sub_290C8C(v3);
  }
  return v4;
}
