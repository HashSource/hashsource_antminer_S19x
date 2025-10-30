int __fastcall sub_161F18(int a1, int *ptr)
{
  int v2; // r4
  _BYTE v4[4]; // [sp+4h] [bp-4h] BYREF

  v2 = *ptr;
  free(ptr);
  sub_231568(v2, v4);
  return 0;
}
