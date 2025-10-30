void __fastcall sub_259E84(int a1, char *a2, void *a3)
{
  void *v4; // r0
  void *ptr; // [sp+0h] [bp-18h] BYREF
  char v6; // [sp+8h] [bp-10h] BYREF

  sub_93244((char **)&ptr, a2, a3);
  v4 = ptr;
  if ( !ptr || (sub_259C24(ptr, a1), v4 = ptr, ptr != &v6) )
    sub_339E64(v4);
}
