int __fastcall sub_BCE58(int *a1, void **a2, int a3)
{
  void *v3; // r3
  int result; // r0
  int v8; // r2
  int v9; // r4
  int *v10; // [sp+0h] [bp-Ch] BYREF
  int v11; // [sp+4h] [bp-8h] BYREF

  v3 = *a2;
  v10 = 0;
  v11 = (int)v3;
  result = sub_B2038((int *)&v10, (void **)&v11, a3);
  if ( result )
  {
    v8 = *v10;
    v11 = v10[2];
    v9 = sub_BCBBC(a1, (unsigned __int8 **)&v11, v8);
    if ( v9 )
      *a2 = (char *)*a2 + a3;
    j_ASN1_STRING_free(v10);
    return v9;
  }
  return result;
}
