int __fastcall sub_10DE8(FILE *a1, int a2, _DWORD *a3, char a4, char a5, char a6)
{
  int v6; // r1
  int v7; // r2
  int v8; // r3
  int v9; // r1
  int v10; // r2
  int v11; // r3
  _BYTE v17[128]; // [sp+14h] [bp-520h] BYREF
  int v18; // [sp+94h] [bp-4A0h] BYREF
  int v19; // [sp+98h] [bp-49Ch]
  int v20; // [sp+9Ch] [bp-498h]
  int v21; // [sp+A0h] [bp-494h]
  int v22; // [sp+A4h] [bp-490h]
  int v23; // [sp+A8h] [bp-48Ch]
  int v24; // [sp+ACh] [bp-488h]
  int v25; // [sp+B0h] [bp-484h]
  _BYTE v26[16]; // [sp+B4h] [bp-480h] BYREF
  size_t v27[256]; // [sp+124h] [bp-410h] BYREF
  size_t n; // [sp+524h] [bp-10h]
  FILE *s; // [sp+528h] [bp-Ch]
  int v30; // [sp+52Ch] [bp-8h]

  memset(v27, 0, sizeof(v27));
  SHA256_Init(v26);
  v30 = 0;
  n = 0;
  s = 0;
  if ( a6 )
  {
    strcpy(v17, "/tmp/tmpfw/");
    memset(&v17[12], 0, 0x74u);
    switch ( a4 )
    {
      case 0:
        strcat(v17, "BOOT.bin");
        break;
      case 1:
        strcat(v17, "devicetree.dtb");
        break;
      case 2:
        strcat(v17, "uImage");
        break;
      case 3:
        strcat(v17, "minerfs.image.gz");
        break;
      case 4:
        strcat(v17, "update.image.gz");
        break;
      case 5:
        strcat(v17, "crl.tar.gz");
        break;
      case 6:
        strcat(v17, "miner.btm.tar.gz");
        break;
      case 7:
        strcat(v17, "reserve");
        break;
      case 9:
        strcat(v17, "datafile");
        break;
      default:
        break;
    }
    if ( a5 )
      strcat(v17, ".sig");
    printf("fileName:'%s', size:[%d]\r\n", v17, a2);
    s = (FILE *)fopen64(v17, "wb");
    if ( !s )
      printf("Create File '%s' Failed!\r\n", v17);
  }
  while ( (unsigned int)(a2 - v30) > 0x400 )
  {
    n = fread(v27, 1u, 0x400u, a1);
    v30 += n;
    SHA256_Update(v26, v27, 1024);
    if ( a6 && s )
      fwrite(v27, 1u, 0x400u, s);
  }
  n = fread(v27, 1u, a2 - v30, a1);
  SHA256_Update(v26, v27, n);
  if ( a6 && s )
    fwrite(v27, 1u, n, s);
  v18 = 0;
  v19 = 0;
  v20 = 0;
  v21 = 0;
  v22 = 0;
  v23 = 0;
  v24 = 0;
  v25 = 0;
  SHA256_Final(&v18, v26);
  if ( a6 && s )
  {
    fclose(s);
    s = 0;
  }
  v6 = v19;
  v7 = v20;
  v8 = v21;
  *a3 = v18;
  a3[1] = v6;
  a3[2] = v7;
  a3[3] = v8;
  v9 = v23;
  v10 = v24;
  v11 = v25;
  a3[4] = v22;
  a3[5] = v9;
  a3[6] = v10;
  a3[7] = v11;
  return v11;
}
