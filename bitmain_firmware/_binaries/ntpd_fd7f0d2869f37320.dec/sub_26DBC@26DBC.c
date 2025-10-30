unsigned int __fastcall sub_26DBC(unsigned int a1, _DWORD *a2, int a3)
{
  char v5; // r0
  unsigned int v6; // r11
  unsigned int v7; // r10
  unsigned int v8; // r9
  unsigned int v9; // r4
  char v10; // r0
  char v11; // r0
  char v12; // r0
  char v13; // r0
  unsigned int result; // r0
  char v15[32]; // [sp+4h] [bp-20h] BYREF

  if ( a1 > 0x17 )
    sub_6FC54("ntp_crypto.c", 2041, 0, "len < sizeof(v)");
  _strncpy_chk(v15, *a2, a1, 24);
  if ( a1 <= 0xC )
    sub_6FC54("ntp_crypto.c", 2043, 0, "len >= 13");
  v5 = strtoul(&v15[a1 - 3], 0, 10);
  v6 = a1 - 5;
  v15[a1 - 3] = 0;
  v7 = a1 - 7;
  v8 = a1 - 9;
  v9 = a1 - 11;
  *(_BYTE *)(a3 + 8) = v5;
  v10 = strtoul(&v15[v6], 0, 10);
  v15[v6] = 0;
  *(_BYTE *)(a3 + 7) = v10;
  v11 = strtoul(&v15[v7], 0, 10);
  v15[v7] = 0;
  *(_BYTE *)(a3 + 6) = v11;
  v12 = strtoul(&v15[v8], 0, 10);
  v15[v8] = 0;
  *(_BYTE *)(a3 + 5) = v12;
  v13 = strtoul(&v15[v9], 0, 10);
  v15[v9] = 0;
  *(_BYTE *)(a3 + 4) = v13;
  result = strtoul(v15, 0, 10);
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
