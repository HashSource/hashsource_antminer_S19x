_DWORD *__fastcall sub_20050(int a1)
{
  _DWORD *result; // r0
  const char *v3; // r3
  int v4; // r12
  char v5; // r1
  char s[2052]; // [sp+10h] [bp-804h] BYREF

  result = calloc(1u, 0x40u);
  v3 = *(const char **)a1;
  if ( !result )
  {
    snprintf(s, 0x800u, "Failed to calloc store for %s in %s %s():%d", v3, "klist.c", "k_new_store", 85);
    sub_20F58(3, s, 1);
    sub_3EBA0(1);
  }
  v4 = *(_DWORD *)(a1 + 8);
  v5 = *(_BYTE *)(a1 + 44);
  *result = v3;
  result[2] = v4;
  *((_BYTE *)result + 44) = v5;
  *((_BYTE *)result + 4) = 1;
  return result;
}
