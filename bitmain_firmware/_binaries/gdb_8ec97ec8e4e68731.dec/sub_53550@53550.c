int __fastcall sub_53550(
        char *a1,
        int a2,
        int a3,
        const char *a4,
        const char *a5,
        const char *a6,
        int a7,
        int a8,
        int **a9,
        int **a10)
{
  int result; // r0
  int v11; // [sp+24h] [bp-8h] BYREF

  result = sub_530AC(a1, a2, 1, a3, a4, a5, a6, a7, a8, a9, a10, &v11);
  *(_DWORD *)(v11 + 80) = &off_3564A4;
  return result;
}
