int __fastcall sub_F1130(int a1)
{
  const char *v2; // r4
  _BOOL4 v3; // r6
  int v4; // r4
  int v5; // r9
  int v6; // r4
  int v7; // r6
  int v8; // r4
  int v9; // r8
  int v10; // r1
  char s1[12]; // [sp+Ch] [bp-Ch] BYREF

  if ( !a1 )
    return 4096;
  v2 = **(const char ***)(a1 + 4);
  v3 = !strcmp(v2, "pe-x86-64") || strcmp(v2, "pei-x86-64") == 0;
  if ( strcmp(v2, "pe-i386")
    && strcmp(v2, "pei-i386")
    && strcmp(v2, "pe-arm-wince-little")
    && strcmp(v2, "pei-arm-wince-little")
    && !v3 )
  {
    return 4096;
  }
  v4 = sub_F02BC(a1, 60);
  v5 = sub_F0278(a1, v4 + 6);
  v6 = v4 + sub_F0278(a1, v4 + 20);
  if ( !v5 )
    return 4096;
  v7 = 0;
  v8 = v6 + 36;
  while ( 1 )
  {
    v9 = sub_F02BC(a1, v8);
    ++v7;
    sub_2A8A04(a1, v10, v8 - 12, 0, 0);
    v8 += 40;
    sub_2A87D8(s1, 8, a1);
    s1[8] = 0;
    if ( !strcmp(s1, ".text") )
      break;
    if ( v5 == v7 )
      return 4096;
  }
  return v9;
}
