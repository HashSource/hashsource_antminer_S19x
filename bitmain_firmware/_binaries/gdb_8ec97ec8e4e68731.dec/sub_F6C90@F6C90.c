void __fastcall sub_F6C90(_DWORD *a1, void **a2, int a3, char *a4, char *a5)
{
  void *v5; // r12
  int v6; // r4
  void *v7; // r0
  void *ptr; // [sp+34h] [bp-4h] BYREF

  v5 = *a2;
  *a2 = 0;
  ptr = v5;
  v6 = sub_F6AD0(a1, (const char **)&ptr, a3, a4, a5);
  if ( ptr )
    free(ptr);
  if ( !v6 )
  {
    sub_92F64(15, "Max completions reached.");
    v7 = ptr;
    if ( ptr )
      free(ptr);
    sub_338FFC(v7);
  }
}
