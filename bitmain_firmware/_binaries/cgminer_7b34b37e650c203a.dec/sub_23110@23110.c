int __fastcall sub_23110(unsigned int *a1, unsigned int *a2)
{
  unsigned int *v2; // r3
  unsigned int *v3; // r2
  unsigned int v4; // lr
  unsigned int v5; // t1
  unsigned int v6; // t1
  bool v7; // cf
  int v8; // r5
  unsigned int v10; // r7
  unsigned int v11; // lr
  unsigned int v12; // r12
  unsigned int v13; // r6
  unsigned int v14; // r7
  unsigned int v15; // r12
  unsigned int v16; // lr
  unsigned int v17; // r3
  unsigned int v18; // lr
  unsigned int v19; // r3
  unsigned int v20; // r6
  unsigned int v21; // r12
  unsigned int v22; // lr
  unsigned int v23; // r3
  unsigned int v24; // r12
  char *v25; // r7
  const char *v26; // r0
  char *v27; // r6
  const char *v28; // r3
  _DWORD v29[8]; // [sp+8h] [bp-844h] BYREF
  _DWORD v30[8]; // [sp+28h] [bp-824h] BYREF
  char s[2052]; // [sp+48h] [bp-804h] BYREF

  v2 = a1 + 8;
  v3 = a2 + 8;
  while ( 1 )
  {
    v5 = *--v2;
    v4 = v5;
    v6 = *--v3;
    v7 = v4 >= v6;
    if ( v4 > v6 )
      break;
    if ( !v7 || a1 == v2 )
    {
      v8 = 1;
      goto LABEL_7;
    }
  }
  v8 = 0;
LABEL_7:
  if ( !byte_68BD5 )
    return v8;
  v10 = a1[7];
  v11 = a1[5];
  v12 = a1[4];
  v29[1] = bswap32(a1[6]);
  v13 = a1[2];
  v29[0] = bswap32(v10);
  v29[2] = bswap32(v11);
  v14 = a1[3];
  v29[3] = bswap32(v12);
  v15 = *a1;
  v16 = a1[1];
  v29[5] = bswap32(v13);
  v17 = a2[7];
  v29[6] = bswap32(v16);
  v18 = a2[6];
  v29[7] = bswap32(v15);
  v30[0] = bswap32(v17);
  v19 = a2[4];
  v20 = a2[3];
  v21 = bswap32(a2[5]);
  v30[1] = bswap32(v18);
  v22 = a2[2];
  v30[2] = v21;
  v30[3] = bswap32(v19);
  v23 = *a2;
  v24 = a2[1];
  v29[4] = bswap32(v14);
  v30[4] = bswap32(v20);
  v30[6] = bswap32(v24);
  v30[7] = bswap32(v23);
  v30[5] = bswap32(v22);
  v25 = sub_22C24((int)v29, 32);
  v26 = sub_22C24((int)v30, 32);
  v27 = (char *)v26;
  if ( byte_68BD5 && (byte_74500 || byte_68BD4 || dword_67DB4 > 6) )
  {
    v28 = "YES (hash <= target)";
    if ( !v8 )
      v28 = "no (false positive; hash > target)";
    snprintf(s, 0x800u, " Proof: %s\nTarget: %s\nTrgVal? %s", v25, v26, v28);
    sub_20F58(7, s, 0);
  }
  free(v25);
  free(v27);
  return v8;
}
