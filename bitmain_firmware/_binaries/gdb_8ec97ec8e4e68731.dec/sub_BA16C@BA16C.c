void __fastcall __noreturn sub_BA16C(int a1, int a2, int a3, int a4, int a5, void *ptr, char *a7, int a8, char a9)
{
  void *v9; // r0

  if ( a7 != &a9 )
    sub_339E64(a7);
  v9 = ptr;
  if ( ptr )
    free(ptr);
  sub_338FFC(v9);
}
