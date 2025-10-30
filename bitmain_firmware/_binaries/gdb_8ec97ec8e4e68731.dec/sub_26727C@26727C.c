void __fastcall sub_26727C(int a1, int a2, int a3)
{
  void *ptr; // [sp+0h] [bp-18h] BYREF
  char v5; // [sp+8h] [bp-10h] BYREF

  ((void (__fastcall *)(void **, int, int, _DWORD))loc_252530)(&ptr, a1, a2, 0);
  sub_25A6BC(ptr, a3);
  if ( ptr != &v5 )
    sub_339E64(ptr);
}
