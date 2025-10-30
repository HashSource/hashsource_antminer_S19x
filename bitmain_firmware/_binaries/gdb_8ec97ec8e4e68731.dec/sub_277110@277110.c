int __fastcall sub_277110(int a1)
{
  int v2; // r4
  void *ptr; // [sp+4h] [bp-4h] BYREF

  sub_230590((char **)&ptr, a1, 11, "target.xml");
  if ( !ptr )
    return 0;
  v2 = sub_276EE0((const char *)ptr, (int)sub_276D84, a1);
  if ( ptr )
    free(ptr);
  return v2;
}
