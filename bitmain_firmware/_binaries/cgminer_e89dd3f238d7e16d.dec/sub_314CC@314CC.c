int __fastcall sub_314CC(char *a1, size_t a2, int a3)
{
  double v3; // d0
  char v8[12]; // [sp+38h] [bp-89Ch] BYREF
  char v9[12]; // [sp+78h] [bp-85Ch] BYREF
  char v10[16]; // [sp+878h] [bp-5Ch] BYREF
  char v11[16]; // [sp+888h] [bp-4Ch] BYREF
  size_t v12; // [sp+898h] [bp-3Ch]
  size_t v13; // [sp+89Ch] [bp-38h]
  unsigned __int64 v14; // [sp+8A0h] [bp-34h]
  unsigned __int64 v15; // [sp+8A8h] [bp-2Ch]
  double v16; // [sp+8B0h] [bp-24h]
  double v17; // [sp+8B8h] [bp-1Ch]

  sub_313C0(a3);
  v17 = v3;
  v16 = sub_68214(*(_DWORD *)(a3 + 192), *(_DWORD *)(a3 + 196)) / v3 * 60.0;
  v15 = sub_682D0(
          COERCE_UNSIGNED_INT64(*(double *)(a3 + 80) / v17 * 1000000.0),
          HIDWORD(COERCE_UNSIGNED_INT64(*(double *)(a3 + 80) / v17 * 1000000.0)));
  v14 = sub_682D0(
          COERCE_UNSIGNED_INT64(*(double *)(a3 + 48) * 1000000.0),
          HIDWORD(COERCE_UNSIGNED_INT64(*(double *)(a3 + 48) * 1000000.0)));
  sub_31028(v15, v11, 0x10u, 4);
  sub_31028(v14, v10, 0x10u, 4);
  snprintf(a1, a2, "%s%d ", *(const char **)(*(_DWORD *)(a3 + 4) + 8), *(_DWORD *)(a3 + 8));
  (*(void (__fastcall **)(char *, size_t, int))(*(_DWORD *)(a3 + 4) + 20))(a1, a2, a3);
  v13 = strlen(a1);
  snprintf(
    v8,
    0x40u,
    "(%ds):%s (avg):%sh/s | A:%.0f R:%.0f HW:%d WU:%.1f/m",
    dword_85A88,
    v10,
    v11,
    *(double *)(a3 + 200),
    *(double *)(a3 + 208),
    *(_DWORD *)(a3 + 44),
    v16);
  v12 = strlen(v8);
  if ( a2 <= v13 + v12 )
  {
    snprintf(v9, 0x800u, "tailsprintf buffer overflow in %s %s line %d", "cgminer.c", "get_statline", 3181);
    sub_1DB6C(3, v9, 1);
    sub_4B2A0(1);
  }
  strcat(a1, v8);
  return (*(int (__fastcall **)(char *, size_t, int))(*(_DWORD *)(a3 + 4) + 24))(a1, a2, a3);
}
