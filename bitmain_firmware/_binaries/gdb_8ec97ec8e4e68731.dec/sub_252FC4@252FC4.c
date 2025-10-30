char **__fastcall sub_252FC4(char **a1, int a2, int a3, int a4, int a5)
{
  int v9; // r0
  int v10; // r0
  void *v12[2]; // [sp+0h] [bp-24h] BYREF
  void *ptr; // [sp+8h] [bp-1Ch] BYREF
  char v14; // [sp+10h] [bp-14h] BYREF

  v9 = ((int (__fastcall *)(int))loc_173460)(a4);
  ((void (__fastcall *)(void **, int, int, int))loc_2520A4)(&ptr, v9, a5, 76);
  v10 = ((int (__fastcall *)(int))loc_173460)(a4);
  ((void (__fastcall *)(int, int, int, void **))loc_252D68)(a2, v10, a3, v12);
  sub_931D8(a1, (const char *)ptr, v12[0], v12[1]);
  if ( ptr != &v14 )
    sub_339E64(ptr);
  return a1;
}
