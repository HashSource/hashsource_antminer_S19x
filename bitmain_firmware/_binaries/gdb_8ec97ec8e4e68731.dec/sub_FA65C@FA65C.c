char **__fastcall sub_FA65C(char **a1, int a2, int a3, int a4)
{
  const char *v5; // r0
  const char *v7; // r0
  const char *v8; // r4
  char *v9; // r0
  __int64 v10; // r0

  if ( a2 == -1 )
  {
    v7 = (const char *)sub_25AC8C(a3, a4);
    sub_931D8(a1, "Cannot access memory at address %s", v7);
    return a1;
  }
  else
  {
    if ( a2 != 2 )
    {
      v8 = (const char *)sub_22F44C(a2);
      v9 = sub_988AC(a2);
      v10 = sub_94700((int)"corefile.c", 195, "unhandled target_xfer_status: %s (%s)", v8, v9);
      sub_FA710(v10, HIDWORD(v10));
    }
    v5 = (const char *)sub_25AC8C(a3, a4);
    sub_931D8(a1, "Memory at address %s unavailable.", v5);
    return a1;
  }
}
