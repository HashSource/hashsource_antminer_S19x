int __fastcall sub_1F8C24(int *a1, int a2, int a3)
{
  int *v3; // r7
  int *v5; // r6
  int v6; // r5
  unsigned int v7; // r3
  int v9; // r0
  int v10; // r2
  int v11; // r8
  const char *v12; // r2
  int v13; // r7

  v3 = &a1[4 * a3];
  v5 = a1;
  v6 = a2;
  v7 = v3[4];
  if ( v7 == 89 )
    goto LABEL_14;
  if ( v7 <= 0x59 )
  {
    if ( v7 != 50 )
    {
      if ( v7 != 83 )
        return sub_156C10(a1, a2, a3);
      v9 = sub_26725C(v3[8], v3[9]);
      sub_25A418(v6, "Field number: %d", v9);
      v10 = a3 + 3;
      a2 = v6;
      a1 = v5;
      return sub_156B40(a1, a2, v10);
    }
LABEL_14:
    v11 = v3[8];
    v12 = "name";
    v13 = v3[9];
    if ( v7 == 50 )
      v12 = "string";
    sub_25A418(a2, "%s: %s", v12, (const char *)&a1[4 * a3 + 12]);
    return a3 + 4 + (__int64)(__PAIR64__(v13, v11) + 16) / 16;
  }
  if ( v7 == 113 )
  {
    sub_26725C(v3[12], v3[13]);
    sub_25A418(v6, "Type @");
    sub_25A44C(v3[8], v6);
    sub_25A418(v6, " (");
    sub_255DB0(v3[8], 0, v6, 0);
  }
  if ( v7 == 114 )
  {
    v10 = a3 + 1;
    return sub_156B40(a1, a2, v10);
  }
  if ( v7 != 96 )
    return sub_156C10(a1, a2, a3);
  return a3 + 1;
}
