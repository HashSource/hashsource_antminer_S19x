int __fastcall sub_C1DA0(int a1)
{
  int v2; // r0
  int (__fastcall *v3)(int); // r3

  v2 = dword_6DF3F0;
  if ( !dword_6DF3F0 )
    v2 = sub_1414E8();
  v3 = *(int (__fastcall **)(int))(v2 + 36);
  if ( v3 )
    return v3(a1);
  sub_D0048(37, 105, 108, "crypto/dso/dso_lib.c", 316);
  return -1;
}
