int __fastcall sub_1874E4(char *s)
{
  char *v2; // r6
  const char *v3; // r7
  int v4; // r0
  int v5; // r1
  int v6; // r2
  int v7; // r3
  char *v8; // r3
  __int64 *v9; // r2
  __int64 v10; // r0
  _DWORD v12[4]; // [sp+10h] [bp-44h] BYREF
  char v13; // [sp+20h] [bp-34h]
  char v14; // [sp+21h] [bp-33h]
  int v15; // [sp+22h] [bp-32h]
  int v16; // [sp+26h] [bp-2Eh]
  int v17; // [sp+2Ah] [bp-2Ah]
  __int16 v18; // [sp+2Eh] [bp-26h]
  int v19; // [sp+30h] [bp-24h]
  int v20; // [sp+34h] [bp-20h]
  int v21; // [sp+38h] [bp-1Ch]
  int v22; // [sp+3Ch] [bp-18h]
  int v23; // [sp+40h] [bp-14h]
  int v24; // [sp+44h] [bp-10h]
  int v25; // [sp+48h] [bp-Ch]
  int v26; // [sp+4Ch] [bp-8h]

  v12[0] = 16842816;
  v2 = s;
  v3 = (const char *)&unk_1F1708;
  memset(&v12[1], 0, 12);
  v13 = 0;
  v14 = 0;
  v15 = 0;
  v19 = 0;
  v23 = 0;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  v20 = 0;
  v21 = 0;
  v22 = 0;
  v24 = 0;
  v25 = 0;
  v26 = 0;
  memset(s, 0, 0xE8u);
  do
  {
    v2 += 16;
    v4 = *(_DWORD *)v3;
    v5 = *((_DWORD *)v3 + 1);
    v6 = *((_DWORD *)v3 + 2);
    v7 = *((_DWORD *)v3 + 3);
    v3 += 16;
    *((_DWORD *)v2 - 4) = v4;
    *((_DWORD *)v2 - 3) = v5;
    *((_DWORD *)v2 - 2) = v6;
    *((_DWORD *)v2 - 1) = v7;
  }
  while ( v3 != "crypto/pkcs12/p12_add.c" );
  v8 = s;
  v9 = (__int64 *)v12;
  do
  {
    v10 = *v9++;
    *(_QWORD *)v8 ^= v10;
    v8 += 8;
  }
  while ( s + 64 != v8 );
  return 1;
}
