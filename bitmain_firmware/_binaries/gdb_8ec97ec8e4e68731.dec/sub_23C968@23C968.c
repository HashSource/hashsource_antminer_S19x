void __fastcall __noreturn sub_23C968(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        void *ptr,
        void *a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        void *a13)
{
  int v13; // r8
  void *v14; // r0
  void *v15; // r0

  sub_339E78(a1);
  if ( ptr )
  {
    sub_339E64(ptr);
  }
  else
  {
    v15 = *(void **)(v13 + 24);
    if ( v15 != (void *)(v13 + 32) )
      sub_339E64(v15);
    v14 = *(void **)v13;
    if ( *(_DWORD *)v13 != v13 + 8 )
      sub_339E64(v14);
  }
  sub_33A7B8(v14);
}
