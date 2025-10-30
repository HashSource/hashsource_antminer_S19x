unsigned int __fastcall sub_2698C(unsigned int a1, _DWORD *a2, int a3)
{
  unsigned int v5; // r10
  unsigned int v6; // r9
  unsigned int v7; // r4
  unsigned int result; // r0
  char var1C[60]; // [sp+4h] [bp-1Ch] BYREF

  if ( a1 > 0x17 )
    sub_6ECC0("ntp_crypto.c", 2041, 0, "len < sizeof(v)");
  _strncpy_chk(var1C, *a2, a1, 24);
  if ( a1 <= 0xC )
    sub_6ECC0("ntp_crypto.c", 2043, 0, "len >= 13");
  *(_BYTE *)(a3 + 8) = strtoul(&var1C[a1 - 3], 0, 10);
  var1C[a1 - 3] = 0;
  v5 = a1 - 7;
  *(_BYTE *)(a3 + 7) = strtoul(&var1C[a1 - 5], 0, 10);
  var1C[a1 - 5] = 0;
  v6 = a1 - 9;
  *(_BYTE *)(a3 + 6) = strtoul(&var1C[a1 - 7], 0, 10);
  v7 = a1 - 11;
  var1C[v5] = 0;
  *(_BYTE *)(a3 + 5) = strtoul(&var1C[v6], 0, 10);
  var1C[v6] = 0;
  *(_BYTE *)(a3 + 4) = strtoul(&var1C[v7], 0, 10);
  var1C[v7] = 0;
  result = strtoul(var1C, 0, 10);
  if ( result > 0x31 )
  {
    if ( result > 0x95 )
      goto LABEL_7;
  }
  else
  {
    result += 100;
  }
  result += 1900;
LABEL_7:
  *(_BYTE *)(a3 + 9) = 0;
  *(_WORD *)a3 = result;
  *(_WORD *)(a3 + 2) = 0;
  return result;
}
