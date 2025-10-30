const char **__fastcall sub_1C318(
        const char *a1,
        const char *a2,
        const char *a3,
        const char *a4,
        char a5,
        const char *a6,
        const char *a7,
        int a8)
{
  char v13[8]; // [sp+24h] [bp-808h] BYREF
  const char **v14; // [sp+824h] [bp-8h]

  if ( (int)a3 <= 0 )
  {
    snprintf(
      v13,
      0x800u,
      "Invalid new list %s with allocate %d must be > 0 in %s %s():%d",
      a1,
      a3,
      "klist.c",
      "_k_new_list",
      100);
    sub_1DB6C(3, v13, 1);
    sub_4B2A0(1);
  }
  if ( (int)a4 < 0 )
  {
    snprintf(
      v13,
      0x800u,
      "Invalid new list %s with limit %d must be >= 0 in %s %s():%d",
      a1,
      a4,
      "klist.c",
      "_k_new_list",
      103);
    sub_1DB6C(3, v13, 1);
    sub_4B2A0(1);
  }
  v14 = (const char **)calloc(1u, 0x40u);
  if ( !v14 )
  {
    snprintf(v13, 0x800u, "Failed to calloc list %s in %s %s():%d", a1, "klist.c", "_k_new_list", 107);
    sub_1DB6C(3, v13, 1);
    sub_4B2A0(1);
  }
  *((_BYTE *)v14 + 4) = 0;
  v14[2] = (const char *)calloc(1u, 0x38u);
  if ( !v14[2] )
  {
    snprintf(v13, 0x800u, "Failed to calloc lock for list %s in %s %s():%d", a1, "klist.c", "_k_new_list", 113);
    sub_1DB6C(3, v13, 1);
    sub_4B2A0(1);
  }
  sub_1BB74((int)v14[2], "klist.c", "_k_new_list", 115);
  *v14 = a1;
  v14[5] = a2;
  v14[9] = a3;
  v14[10] = a4;
  *((_BYTE *)v14 + 44) = a5;
  sub_1BC00(v14, a6, a7, a8);
  return v14;
}
