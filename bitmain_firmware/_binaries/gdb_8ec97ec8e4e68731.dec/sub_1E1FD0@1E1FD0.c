int __fastcall sub_1E1FD0(int a1, int a2, int a3)
{
  int v4; // r0
  int result; // r0

  if ( a2 )
    sub_946E0("Argument given to \"disconnect\" when remotely debugging.");
  v4 = sub_231C68(a1);
  result = sub_231A0C(v4);
  if ( a3 )
    return sub_259B34("Ending remote debugging.\n");
  return result;
}
