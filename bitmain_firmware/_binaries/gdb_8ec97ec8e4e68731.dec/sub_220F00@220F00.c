void __fastcall sub_220F00(const char *a1, char *a2, char *a3, int a4)
{
  void **v5; // r1
  bool v6; // zf
  void **v7; // r1
  void *v8; // r3
  void *ptr; // [sp+4h] [bp-4h] BYREF

  sub_F574C((int *)&ptr, a1, a2, a3);
  v5 = *(void ***)(a4 + 4);
  if ( v5 == *(void ***)(a4 + 8) )
  {
    sub_F7F98(a4, v5, &ptr);
  }
  else
  {
    v6 = v5 == 0;
    v7 = v5 + 1;
    if ( !v6 )
    {
      v8 = ptr;
      ptr = 0;
      *(v7 - 1) = v8;
    }
    *(_DWORD *)(a4 + 4) = v7;
  }
  if ( ptr )
    free(ptr);
}
