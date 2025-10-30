void __fastcall sub_B9F84(const char *a1, int a2, int a3)
{
  char *v3; // r5

  if ( a1 )
  {
    a3 = *(unsigned __int8 *)a1;
    if ( *a1 )
    {
      v3 = sub_93140("%s%c%s", (const char *)dword_478248, 58, a1);
      if ( dword_478248 )
        free((void *)dword_478248);
      dword_478248 = (int)v3;
      JUMPOUT(0xB9CF8);
    }
  }
  sub_946E0(
    "Directory argument required.\nUse 'set auto-load safe-path /' for disabling the auto-load safe-path security.",
    a2,
    a3,
    a1);
}
