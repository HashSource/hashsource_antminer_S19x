const char ***__fastcall sub_20091C(const char ***a1, int a2)
{
  char *v4; // r0
  int v5; // r0
  int v6; // r0
  int v7; // r5
  int (__fastcall *v8)(int, int); // r6
  int v9; // r0
  int v10; // r0
  const char **v11; // r3
  const char *v13; // r6
  int v14; // r0
  const char *v15; // r4
  int v16; // r0
  const char *v17; // r0
  int v18; // [sp+0h] [bp-8h] BYREF
  const char **v19; // [sp+4h] [bp-4h] BYREF

  v4 = (char *)sub_2007B8(a2, &v18);
  if ( v4 )
  {
    sub_200870(&v19, v4, v18);
    v5 = sub_2AA86C(v19, 1);
    if ( !v5 )
    {
      v15 = *v19;
      v16 = sub_2A6910(0);
      v17 = (const char *)sub_2A6920(v16);
      sub_946E0("`%s': not in executable format: %s", v15, v17);
    }
    v6 = sub_16F654(v5);
    v7 = ((int (__fastcall *)(int))loc_163EB0)(v6);
    v8 = *(int (__fastcall **)(int, int))(v7 + 36);
    v9 = sub_2A67B0(v19);
    v10 = v8(v7, v9);
    v11 = v19;
    if ( !v10 )
    {
      v13 = *v19;
      v14 = sub_2A67B0(v19);
      sub_946B0(
        "`%s': Shared library architecture %s is not compatible with target architecture %s.",
        v13,
        *(const char **)(v14 + 24),
        *(const char **)(v7 + 24));
      v11 = v19;
    }
    *a1 = v11;
    return a1;
  }
  else
  {
    if ( *_errno_location() != 2 )
      sub_258B04(a2);
    *a1 = 0;
    return a1;
  }
}
