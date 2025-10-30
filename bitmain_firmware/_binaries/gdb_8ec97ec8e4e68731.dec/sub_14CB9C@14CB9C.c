int __fastcall sub_14CB9C(int a1)
{
  int v1; // r0
  int v2; // r4
  void *ptr; // [sp+0h] [bp-8h] BYREF
  int v5; // [sp+4h] [bp-4h] BYREF

  sub_1C42A8(&ptr, a1);
  v5 = 0;
  v1 = sub_14C9EC(0, (int *)ptr, &v5, 0);
  v2 = sub_26EBA8(v1);
  if ( ptr )
    free(ptr);
  return v2;
}
