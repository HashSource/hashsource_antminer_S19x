int __fastcall sub_15B824(int a1, int a2)
{
  int (__fastcall *v4)(int, int *, _DWORD, int); // r0
  int v6; // [sp+Ch] [bp-4h] BYREF

  v4 = (int (__fastcall *)(int, int *, _DWORD, int))sub_15B820(a1);
  if ( v4 && v4(a1, &v6, 0, a2) )
    return v6;
  sub_D0048(38, 186, 147, (int)"crypto/engine/tb_digest.c", 74);
  return 0;
}
