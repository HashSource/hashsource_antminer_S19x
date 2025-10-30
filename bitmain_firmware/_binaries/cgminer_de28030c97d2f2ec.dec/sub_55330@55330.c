char *__fastcall sub_55330(const char *a1, int *a2)
{
  int v6; // [sp+8h] [bp-Ch] BYREF
  char *v7; // [sp+Ch] [bp-8h]

  v7 = sub_551F8(a1, &v6);
  if ( v7 )
    return v7;
  if ( v6 < 0 )
    return sub_54FA8("'%s' is negative", a1);
  *a2 = v6;
  return 0;
}
