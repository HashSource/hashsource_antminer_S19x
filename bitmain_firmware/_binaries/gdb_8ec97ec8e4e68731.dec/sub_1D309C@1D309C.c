int sub_1D309C()
{
  int v0; // r4

  v0 = sub_231934(4);
  if ( !v0 )
    return sub_259F10("No record target is currently active.\n");
  sub_259F10("Active record target: %s\n", *(const char **)(v0 + 4));
  return (*(int (__fastcall **)(int))(v0 + 656))(v0);
}
