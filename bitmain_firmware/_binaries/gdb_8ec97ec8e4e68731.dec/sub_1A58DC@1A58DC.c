void __fastcall sub_1A58DC(char *a1)
{
  if ( !a1 || !*a1 )
    sub_259858(
      "\"maintenance deprecate\" takes an argument,\n"
      "the command you want to deprecate, and optionally the replacement command\n"
      "enclosed in quotes.\n");
  sub_1A5708(a1, 1);
}
