int __fastcall sub_14CCCC(int a1)
{
  int v1; // r4
  void *ptr; // [sp+8h] [bp-8h] BYREF
  int v4; // [sp+Ch] [bp-4h] BYREF

  sub_1C427C(&ptr, a1, 0, 0, 1);
  v4 = 0;
  v1 = sub_14C9EC(0, (int *)ptr, &v4, 0);
  if ( ptr )
    free(ptr);
  return v1;
}
