int __fastcall sub_FB8C4(int a1, int a2, int a3)
{
  int v4; // r0
  int result; // r0

  if ( a2 )
    sub_946E0("Too many arguments");
  v4 = sub_231C68(a1);
  result = sub_15D778(v4);
  if ( a3 )
    return sub_259F10("No core file now.\n");
  return result;
}
