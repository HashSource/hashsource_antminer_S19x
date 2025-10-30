int __fastcall sub_A0798(const char **a1, int a2, int a3)
{
  int v6; // r0
  int v7; // r7
  char *v8; // r0
  int v9; // r4
  int v11; // [sp+8h] [bp-Ch] BYREF
  void *ptr; // [sp+Ch] [bp-8h] BYREF

  if ( !a3 )
    return sub_15B818(a1, a2, a3);
  v6 = sub_C32A8(a3, 0);
  v7 = v6;
  if ( !v6 )
    return sub_15B818(a1, a2, a3);
  v8 = sub_A0728(a1, v6);
  if ( !v8 )
    return sub_15B818(a1, a2, a3);
  v11 = *(_DWORD *)v8;
  sub_1C427C(&ptr, &v11, 0, v7, 0);
  v9 = sub_14CD3C(ptr);
  if ( ptr )
  {
    free(ptr);
    return v9;
  }
  return v9;
}
