void __fastcall sub_110244(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        void *ptr)
{
  int v12; // r4
  int v15; // r9
  const char *v16; // r0
  int v17; // r0

  sub_92E40(a8);
  if ( a2 == 1 )
  {
    v15 = sub_339E78(a1);
    v16 = (const char *)sub_1B87A8(v12);
    v17 = sub_946B0("skipping .eh_frame info of %s: %s", v16, *(const char **)(v15 + 8));
    if ( a11 )
    {
      v17 = (int)ptr;
      if ( ptr )
        free(ptr);
    }
    sub_339EF8(v17);
    JUMPOUT(0x110218);
  }
  sub_339E78(a1);
  sub_92E60();
}
