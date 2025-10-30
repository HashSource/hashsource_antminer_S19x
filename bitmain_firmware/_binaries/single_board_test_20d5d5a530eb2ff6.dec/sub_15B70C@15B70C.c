int __fastcall sub_15B70C(int a1, int a2)
{
  int (__fastcall *v4)(int, int *, _DWORD, int); // r0
  int v6; // [sp+Ch] [bp-4h] BYREF

  v4 = (int (__fastcall *)(int, int *, _DWORD, int))sub_15B708(a1);
  if ( v4 && v4(a1, &v6, 0, a2) )
    return v6;
  sub_D0048(38, 185, 146, (int)"crypto/engine/tb_cipher.c", 74);
  return 0;
}
