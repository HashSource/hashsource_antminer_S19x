int __fastcall sub_17CD28(int a1, int a2, int a3)
{
  int result; // r0

  sub_231DAC(a3);
  result = sub_231B78(a1);
  dword_4878E0 = 1;
  if ( a3 )
    return sub_259F10("Done.  Use the \"run\" command to start a process.\n");
  return result;
}
