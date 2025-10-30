void __fastcall sub_17F310(int a1, int a2)
{
  int v4; // r0
  int v5; // r0
  const char *v6; // r0
  int v7; // r0
  int v8; // r0
  void *ptr; // [sp+4h] [bp-8h] BYREF

  v4 = sub_243C34(a1);
  v5 = sub_183688(v4);
  v6 = sub_93828((const char ***)(v5 + 60), "PATH");
  if ( !v6 )
    v6 = "";
  ptr = (void *)sub_327254(v6);
  v7 = sub_203A18(a1, &ptr);
  v8 = sub_183688(v7);
  sub_93E78(v8 + 60, "PATH", (int)ptr);
  if ( ptr )
    free(ptr);
  if ( a2 )
    sub_17F2D8();
}
