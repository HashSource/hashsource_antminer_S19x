const char *__fastcall sub_20C3C(const char **a1, int a2, const char *a3, const char *a4, int a5)
{
  const char *result; // r0
  const char *v8; // r1
  const char *v9; // r3
  int v10; // r2
  const char *v11; // r1
  char s[2048]; // [sp+20h] [bp-800h] BYREF

  result = *a1;
  v8 = *(const char **)a2;
  if ( result != v8 )
  {
    snprintf(
      s,
      0x800u,
      "List %s can't %s() to a %s list - from %s %s() line %d in %s %s():%d",
      result,
      "_k_list_transfer_to_tail",
      v8,
      a3,
      a4,
      a5,
      "klist.c",
      "_k_list_transfer_to_tail",
      368);
    sub_20F58(3, s, 1);
    sub_3EBA0(1);
  }
  if ( !*((_BYTE *)a1 + 44) )
  {
    snprintf(
      s,
      0x800u,
      "List %s can't %s() - do_tail is false - from %s %s() line %d in %s %s():%d",
      *a1,
      "_k_list_transfer_to_tail",
      a3,
      a4,
      a5,
      "klist.c",
      "_k_list_transfer_to_tail",
      373);
    sub_20F58(3, s, 1);
    sub_3EBA0(1);
  }
  v9 = a1[3];
  if ( v9 )
  {
    v10 = *(_DWORD *)(a2 + 16);
    if ( v10 )
      *(_DWORD *)(v10 + 8) = v9;
    else
      *(_DWORD *)(a2 + 12) = v9;
    if ( v10 )
      v10 = *(_DWORD *)(a2 + 16);
    *((_DWORD *)a1[3] + 1) = v10;
    *(_DWORD *)(a2 + 16) = a1[4];
    a1[4] = 0;
    v11 = a1[7];
    a1[3] = 0;
    *(_DWORD *)(a2 + 28) += v11;
    a1[7] = 0;
    *(_DWORD *)(a2 + 32) += a1[8];
    a1[8] = 0;
  }
  return result;
}
