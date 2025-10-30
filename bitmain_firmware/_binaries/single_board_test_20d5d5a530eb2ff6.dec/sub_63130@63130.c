int sub_63130()
{
  int v0; // r0
  int result; // r0

  sub_6DDF4(2);
  v0 = sub_6E9D8(dword_21B3B0, 100);
  sub_6FBF4(v0);
  sub_1F650(0, (const char *)(dword_223680 + 32));
  sub_1F650(1, "check fan");
  sub_1F650(2, "speed");
  sub_1F650(3, "waiting...");
  result = sub_630C4();
  if ( !result )
  {
    sub_630FC();
    return 0;
  }
  return result;
}
