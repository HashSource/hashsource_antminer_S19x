int __fastcall sub_4F7D0(_DWORD *a1)
{
  int v2; // r6
  const char **v3; // r0
  const char *v4; // r5
  int v5; // r0
  int v6; // r2
  const char *v7; // r1
  int result; // r0

  v2 = dword_487D2C;
  ((void (__fastcall *)(_DWORD))loc_1CD290)(*a1);
  v3 = (const char **)a1[2];
  if ( v3 )
  {
    if ( dword_46D448 )
      v4 = (const char *)sub_21B3C4();
    else
      v4 = *v3;
    v5 = ((int (__fastcall *)(_DWORD))loc_2043D4)(a1[1]);
    v6 = a1[4];
    v7 = (const char *)v5;
    if ( !v4 )
      v4 = "???";
  }
  else
  {
    v4 = "???";
    v7 = (const char *)((int (__fastcall *)(_DWORD))loc_2043D4)(a1[1]);
    v6 = a1[4];
  }
  sub_259F10("file: \"%s\", line number: %d, symbol: \"%s\"\n", v7, v6, v4);
  result = v2;
  if ( dword_487D2C != v2 )
  {
    if ( !v2 )
    {
      sub_94700(
        "progspace.c",
        195,
        "%s: Assertion `%s' failed.",
        "void set_current_program_space(program_space*)",
        "pspace != NULL");
      JUMPOUT(0x1CD2E4);
    }
    dword_487D2C = v2;
    return sub_15D778(v2);
  }
  return result;
}
