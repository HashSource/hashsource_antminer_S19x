_BYTE *__fastcall sub_1EBAC(int a1, int a2)
{
  _BYTE *result; // r0
  char v5[8]; // [sp+1Ch] [bp-808h] BYREF
  _DWORD *v6; // [sp+81Ch] [bp-8h]

  v6 = calloc(1u, 0x20u);
  if ( !v6 )
  {
    snprintf(v5, 0x800u, "Failed to calloc dupdata in %s %s():%d", "noncedup.c", "dupalloc", 36);
    sub_1E4EC(3, v5, 1);
    sub_4BFB0(1);
  }
  *v6 = a2;
  v6[1] = sub_1CCC4("Nonces", (const char *)0x10, (const char *)0x400, 0, 1, "noncedup.c", "dupalloc", 39);
  result = sub_1CBDC(v6[1]);
  v6[2] = result;
  *(_DWORD *)(a1 + 24) = v6;
  return result;
}
