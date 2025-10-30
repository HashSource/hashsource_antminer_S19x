int __fastcall sub_15A0A4(int a1, int a2, int a3, int a4)
{
  const char *v4; // r1
  int v5; // r2
  int v7; // r6
  int v8; // r0

  if ( off_46D4A4 == "auto" )
  {
    v7 = a1;
    v8 = sub_16F654(a1);
    ((void (__fastcall *)(int))loc_16DD90)(v8);
    v4 = "The assumed file system kind for target reported file names is \"%s\" (currently \"%s\").\n";
    v5 = a4;
    a1 = v7;
  }
  else
  {
    v4 = "The assumed file system kind for target reported file names is \"%s\".\n";
    v5 = a4;
  }
  return sub_25A418(a1, v4, v5);
}
