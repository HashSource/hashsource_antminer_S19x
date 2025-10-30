int __fastcall sub_7619C(unsigned int a1, unsigned __int8 *a2, unsigned int a3)
{
  unsigned int v4; // r3
  unsigned __int8 *v5; // r7
  unsigned __int8 *v6; // r4
  unsigned __int8 *v7; // r10
  int v8; // r2
  unsigned int v9; // r2
  int v10; // r0
  int v11; // r8
  int v12; // r2
  unsigned __int8 v13; // r1
  unsigned __int8 *v14; // r2
  int v16; // [sp+Ch] [bp-810h]
  unsigned int v17; // [sp+10h] [bp-80Ch] BYREF
  __int16 v18; // [sp+14h] [bp-808h]
  char v19; // [sp+16h] [bp-806h]
  char v20; // [sp+17h] [bp-805h]
  char s[2052]; // [sp+18h] [bp-804h] BYREF

  if ( a1 > 0xF )
    a3 = 24052;
  if ( a1 > 0xF )
  {
    v4 = a1;
    HIWORD(a3) = 26;
LABEL_16:
    snprintf(s, 0x800u, (const char *)a3, v4);
    nullsub_8();
    return -2147482111;
  }
  v4 = a3;
  if ( a3 > 7 )
  {
    a3 = (unsigned int)" Bad T-sensor param, input num is %d\n";
    goto LABEL_16;
  }
  if ( !a3 )
    return 0;
  v16 = 68 * a1;
  v5 = a2;
  v6 = &a2[(unsigned __int8)(a3 - 1) + 1];
  v7 = &byte_65E5D8[68 * a1];
  while ( 1 )
  {
    while ( sub_76154(a1, *v5) != -2147482112 )
    {
      if ( ++v5 == v6 )
        return 0;
    }
    v8 = *v5;
    v17 = a1;
    v18 = 0;
    v9 = v8 + a1;
    v19 = (v9 >> 3) & 0xF;
    v20 = v9 & 7;
    v10 = sub_76574(&v17);
    v11 = v10;
    if ( v10 < 0 )
      break;
    v12 = *v7;
    ++v5;
    *v7 = v12 + 1;
    v13 = *(v5 - 1);
    v14 = &byte_65E5D8[8 * v12 + v16];
    *((_DWORD *)v14 + 2) = v10;
    v14[4] = v13;
    if ( v5 == v6 )
      return 0;
  }
  snprintf(s, 0x800u, " open T-sensor error, chain is %d,slave addr is %d\n", a1, *v5);
  nullsub_8();
  return v11;
}
