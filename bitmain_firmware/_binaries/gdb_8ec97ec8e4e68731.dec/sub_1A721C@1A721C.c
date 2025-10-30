int __fastcall sub_1A721C(int a1, int a2)
{
  int v2; // r4
  int v3; // r2
  int v5; // [sp+4h] [bp-8h] BYREF

  v2 = *(_DWORD *)(dword_487AA4 + 152);
  v3 = *(_DWORD *)(v2 + 72 * a1 + 52);
  if ( !v3 )
    return v2 + 72 * a2;
  (*(void (__fastcall **)(int, int, int *))(dword_487AA8 + 64))(
    dword_487AAC,
    *(_DWORD *)(dword_487AA4 + 132) + *(_DWORD *)(dword_487AA8 + 32) * (v3 + a2),
    &v5);
  return v2 + 72 * v5;
}
