void __fastcall sub_3ACFC(const char **a1, const char *a2, const char *a3, const char *a4, int a5)
{
  int v9; // r3
  const char *v10; // r3
  const char *v11; // r3
  bool v12; // zf
  const char *v13; // r3
  int v14; // r2
  const char *v15; // r3
  int v16; // r3
  char s[2052]; // [sp+20h] [bp-804h] BYREF

  if ( *(const char **)a2 != *a1 )
  {
    snprintf(
      s,
      0x800u,
      "List %s can't %s() a %s item - from %s %s() line %d in %s %s():%d",
      *a1,
      "_k_add_tail",
      *(const char **)a2,
      a3,
      a4,
      a5,
      "klist.c",
      "_k_add_tail",
      236);
    sub_3B6AC(3, s, 1, v9);
    nullsub_1();
  }
  if ( !*((_BYTE *)a1 + 44) )
  {
    snprintf(
      s,
      0x800u,
      "List %s can't %s() - do_tail is false - from %s %s() line %d in %s %s():%d",
      *a1,
      "_k_add_tail",
      a3,
      a4,
      a5,
      "klist.c",
      "_k_add_tail",
      241);
    sub_3B6AC(3, s, 1, v16);
    nullsub_1();
  }
  v10 = a1[4];
  *((_DWORD *)a2 + 2) = 0;
  *((_DWORD *)a2 + 1) = v10;
  v11 = a1[4];
  if ( v11 )
    *((_DWORD *)v11 + 2) = a2;
  v12 = a1[3] == 0;
  v13 = a1[8];
  v14 = (int)(a1[7] + 1);
  a1[4] = a2;
  v15 = v13 + 1;
  if ( v12 )
    a1[3] = a2;
  a1[7] = (const char *)v14;
  a1[8] = v15;
}
