int __fastcall sub_CF304(int a1, int a2)
{
  int (__fastcall *v4)(int, int *, _DWORD, int); // r0
  int v6; // [sp+Ch] [bp-4h] BYREF

  v4 = (int (__fastcall *)(int, int *, _DWORD, int))sub_CF300(a1);
  if ( v4 && v4(a1, &v6, 0, a2) )
    return v6;
  sub_D0048(38, 192, 101, "crypto/engine/tb_pkmeth.c", 76);
  return 0;
}
