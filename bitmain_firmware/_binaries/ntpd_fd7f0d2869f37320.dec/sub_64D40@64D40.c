int __fastcall sub_64D40(int a1, int a2)
{
  double v2; // d0
  int v4; // r5
  size_t v5; // r8
  int v6; // r9
  int v7; // r1
  char *v8; // r12
  _BYTE *v9; // r0
  int v10; // r3
  char v11; // lr
  char v12; // r2
  _BYTE *v13; // r2
  ssize_t v14; // r0
  int v16; // [sp+10h] [bp-20h] BYREF
  _DWORD v17[2]; // [sp+14h] [bp-1Ch] BYREF
  _BYTE v18[10]; // [sp+1Ch] [bp-14h] BYREF
  char v19; // [sp+26h] [bp-Ah]
  _BYTE vars0[32]; // [sp+30h] [bp+0h] BYREF

  v4 = a2;
  v16 = 16711423;
  v17[0] = &elf_hash_bucket[265];
  v17[1] = -33751040;
  HIBYTE(v16) = a2;
  if ( a2 == 4 )
  {
    v5 = 11;
    v6 = 11;
  }
  else
  {
    v5 = 12;
    v4 = 5;
    v6 = 12;
  }
  sub_6D00C(v18, 16, " %10.0f", v2 * 1000000.0);
  LOBYTE(v7) = v19;
  if ( v19 == 32 )
  {
    v10 = 0;
  }
  else
  {
    v8 = (char *)v17 + 1;
    v9 = v18;
    v10 = 0;
    do
    {
      v11 = v9[9];
      v9 -= 2;
      v12 = v7 & 0xF;
      ++v10;
      v7 = (unsigned __int8)v9[10];
      *++v8 = v12 | (16 * v11);
    }
    while ( v7 != 32 );
    if ( v4 <= v10 )
      goto LABEL_8;
  }
  do
  {
    v13 = &vars0[v10++];
    *(v13 - 26) = 0;
  }
  while ( v10 < v4 );
LABEL_8:
  *((_BYTE *)v17 + v10 + 2) = -3;
  v14 = write(a1, &v16, v5);
  if ( v14 == -1 )
  {
    sub_65D40(3, "icom_freq: write() failed: %m");
    return -1;
  }
  else if ( v14 == v6 )
  {
    return 0;
  }
  else
  {
    sub_65D40(3, "icom_freq: only wrote %d of %d bytes.", v14, v6);
    return 1;
  }
}
