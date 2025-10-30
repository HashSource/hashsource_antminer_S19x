int __fastcall sub_3BDC8(int a1)
{
  int v3; // r4
  unsigned __int8 v4; // [sp+Ch] [bp-34h] BYREF
  char v5; // [sp+Dh] [bp-33h]
  char v6[48]; // [sp+10h] [bp-30h] BYREF

  v4 = 0;
  v5 = 0;
  if ( !sub_3BB60(a1, 1, 209, &v4, 2) )
    return 0;
  v5 = v5 & 0xE0 | 5;
  usleep(0x30D40u);
  v3 = sub_3BD08(a1, 1, 209, (int)&v4, 2);
  sub_1E938(v6, 0x30u);
  printf("%s ", v6);
  if ( v3 )
  {
    printf("%s : success\n", "init_dac53401_NBT2006_36");
    strcpy(&byte_633468[512], "success");
    sub_3CC5C(&byte_633468[512], v6);
    return v3;
  }
  else
  {
    printf("%s : fail\n", "init_dac53401_NBT2006_36");
    strcpy(&byte_633468[256], "fail");
    sub_3CC5C(&byte_633468[256], v6);
    return 0;
  }
}
