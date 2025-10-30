_BYTE *__fastcall sub_1CBDC(int a1)
{
  char v3[8]; // [sp+1Ch] [bp-808h] BYREF
  _BYTE *v4; // [sp+81Ch] [bp-8h]

  v4 = calloc(1u, 0x40u);
  if ( !v4 )
  {
    snprintf(
      v3,
      0x800u,
      "Failed to calloc store for %s in %s %s():%d",
      *(const char **)a1,
      "klist.c",
      "k_new_store",
      85);
    sub_1E4EC(3, v3, 1);
    sub_4BFB0(1);
  }
  v4[4] = 1;
  *((_DWORD *)v4 + 2) = *(_DWORD *)(a1 + 8);
  *(_DWORD *)v4 = *(_DWORD *)a1;
  v4[44] = *(_BYTE *)(a1 + 44);
  return v4;
}
