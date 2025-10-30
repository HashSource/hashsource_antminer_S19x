int __fastcall sub_45BFC(int a1, int a2, unsigned int a3)
{
  if ( sub_45588(a1, a3) && sub_45004(a2, a3) )
  {
    sub_45464(a1, a2);
    if ( dword_91F78 && byte_9202C )
      sub_340D0(a2, a3);
    return 1;
  }
  else
  {
    sub_44CA8(a1);
    return 0;
  }
}
