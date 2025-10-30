int __fastcall sub_534EC(
        char *a1,
        int a2,
        int a3,
        int a4,
        const char *a5,
        const char *a6,
        const char *a7,
        int a8,
        int a9,
        int **a10,
        int **a11)
{
  int result; // r0
  int v13; // [sp+24h] [bp-8h] BYREF

  result = sub_530AC(a1, a2, 11, a4, a5, a6, a7, a8, a9, a10, a11, &v13);
  *(_DWORD *)(v13 + 80) = a3;
  return result;
}
