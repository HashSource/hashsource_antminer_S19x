const char *__fastcall sub_30770(int a1)
{
  if ( dword_880A0 )
    return "Use only user + pass or userpass, but not both";
  if ( ++dword_8809C > dword_92028 )
    sub_2F5CC();
  sub_551C4(a1, *(_DWORD *)(dword_920CC + 4 * (dword_8809C + 0x3FFFFFFF)) + 176);
  return 0;
}
