void __fastcall sub_11D1C4(int a1, int a2)
{
  void *v4; // r4
  void *v5; // [sp+4h] [bp-4h] BYREF

  v4 = **(void ***)a1;
  if ( v4 )
  {
    sub_984A4((int *)&v5, a2);
    v4 = v5;
  }
  (**(void (__fastcall ***)(int, void *, _DWORD))(a1 + 4))(a2, v4, **(_DWORD **)(a1 + 8));
  if ( v4 )
    free(v4);
}
