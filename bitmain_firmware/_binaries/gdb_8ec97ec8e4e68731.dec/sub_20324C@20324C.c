void sub_20324C()
{
  int v0; // r0

  v0 = sub_1B7B9C();
  if ( !v0 )
  {
    v0 = sub_1B7B24();
    if ( !v0 )
      sub_946E0("No symbol table is loaded.  Use the \"file\" command.");
  }
  if ( !dword_4893EC )
    sub_203034(v0);
}
