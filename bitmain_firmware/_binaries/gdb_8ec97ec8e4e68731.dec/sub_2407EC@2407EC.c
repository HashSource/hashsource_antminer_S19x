int __fastcall sub_2407EC(const char *a1)
{
  const char *v2; // r5
  _DWORD *v3; // r4
  int v4; // r0
  const char *v5; // r11
  int v6; // r0
  const char *v7; // r11
  int result; // r0
  const char *v9; // r11
  int v10; // r0
  char *v11; // r0
  char *v12; // r0
  char *v13; // r0
  char *v14; // r0

  if ( !a1 || !*a1 )
    sub_946E0("Command requires an argument.");
  v2 = (const char *)re_comp(a1);
  if ( v2 )
    sub_946E0("Invalid regexp (%s): %s", v2, a1);
  sub_240794();
  v3 = (_DWORD *)dword_48A4D4;
  if ( !dword_48A4D4 )
    return sub_259F10("No threads match '%s'\n", a1);
  do
  {
    while ( 1 )
    {
      v10 = v3[8];
      if ( v10 && re_exec(v10) )
      {
        ++v2;
        v11 = sub_240128((int)v3);
        sub_259F10("Thread %s has name '%s'\n", v11, (const char *)v3[8]);
      }
      v4 = sub_230990((int)v3);
      v5 = (const char *)v4;
      if ( v4 && re_exec(v4) )
      {
        ++v2;
        v14 = sub_240128((int)v3);
        sub_259F10("Thread %s has target name '%s'\n", v14, v5);
      }
      v6 = sub_23095C(v3[2], v3[3], v3[4]);
      v7 = (const char *)v6;
      if ( v6 && re_exec(v6) )
      {
        ++v2;
        v12 = sub_240128((int)v3);
        sub_259F10("Thread %s has target id '%s'\n", v12, v7);
      }
      result = off_489AB0(&dword_4899A0, v3);
      v9 = (const char *)result;
      if ( result )
      {
        result = re_exec(result);
        if ( result )
          break;
      }
      v3 = (_DWORD *)v3[1];
      if ( !v3 )
        goto LABEL_19;
    }
    ++v2;
    v13 = sub_240128((int)v3);
    result = sub_259F10("Thread %s has extra info '%s'\n", v13, v9);
    v3 = (_DWORD *)v3[1];
  }
  while ( v3 );
LABEL_19:
  if ( !v2 )
    return sub_259F10("No threads match '%s'\n", a1);
  return result;
}
