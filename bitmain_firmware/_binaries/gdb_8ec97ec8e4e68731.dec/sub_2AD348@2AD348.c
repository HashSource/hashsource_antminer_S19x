void *__fastcall sub_2AD348(int a1)
{
  void *v1; // r4
  size_t v3; // [sp+0h] [bp-8h] BYREF
  void *ptr; // [sp+4h] [bp-4h] BYREF

  ptr = 0;
  v1 = sub_2AD238(a1, &v3, &ptr);
  free(ptr);
  return v1;
}
