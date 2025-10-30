int __fastcall sub_54DA8(char *a1, size_t a2, int a3)
{
  double v3; // d0
  int v7; // r2
  int v8; // r3
  double v9; // d8
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // r0
  size_t v12; // r7
  char v14[16]; // [sp+28h] [bp-864h] BYREF
  char v15[16]; // [sp+38h] [bp-854h] BYREF
  char s[64]; // [sp+48h] [bp-844h] BYREF
  char v17[2052]; // [sp+88h] [bp-804h] BYREF

  sub_53118(a3);
  v9 = sub_778B4(*(_DWORD *)(a3 + 192), *(_DWORD *)(a3 + 196), v7, v8) / v3;
  v10 = sub_77970(
          COERCE_UNSIGNED_INT64(*(double *)(a3 + 48) * 1000000.0),
          HIDWORD(COERCE_UNSIGNED_INT64(*(double *)(a3 + 48) * 1000000.0)));
  v11 = sub_77970(
          COERCE_UNSIGNED_INT64(*(double *)(a3 + 80) / v3 * 1000000.0),
          HIDWORD(COERCE_UNSIGNED_INT64(*(double *)(a3 + 80) / v3 * 1000000.0)));
  sub_51B18(v11, v14, 0x10u, 4);
  sub_51B18(v10, v15, 0x10u, 4);
  snprintf(a1, a2, "%s%d ", *(const char **)(*(_DWORD *)(a3 + 4) + 8), *(_DWORD *)(a3 + 8));
  (*(void (__fastcall **)(char *, size_t, int))(*(_DWORD *)(a3 + 4) + 20))(a1, a2, a3);
  v12 = strlen(a1);
  snprintf(
    s,
    0x40u,
    "(%ds):%s (avg):%sh/s | A:%.0f R:%.0f HW:%d WU:%.1f/m",
    dword_9ED78,
    v15,
    v14,
    *(double *)(a3 + 200),
    *(double *)(a3 + 208),
    *(_DWORD *)(a3 + 44),
    v9 * 60.0);
  if ( v12 + strlen(s) >= a2 )
  {
    snprintf(v17, 0x800u, "tailsprintf buffer overflow in %s %s line %d", "cgminer.c", "get_statline", 3113);
    sub_47AB4(3, v17, 1);
    sub_54CCC(1, 1);
  }
  strcat(a1, s);
  return (*(int (__fastcall **)(char *, size_t, int))(*(_DWORD *)(a3 + 4) + 24))(a1, a2, a3);
}
