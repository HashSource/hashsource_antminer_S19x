int sub_37B10()
{
  char v1[48]; // [sp+0h] [bp-30h] BYREF

  if ( sub_37510() )
  {
    sub_1E938(v1, 0x30u);
    printf("%s ", v1);
    printf("%s : %s can't detect scanner!!!.\n", "flush_scanner_data", "flush_scanner_data");
    snprintf(byte_62A664, 0x100u, "%s can't detect scanner!!!.", "flush_scanner_data");
    sub_3CC5C(byte_62A664, v1);
    return -1;
  }
  else
  {
    dword_62A764 = 0;
    dword_21C0B0 = 255;
    memset(&byte_629764, 0, 0x100u);
    return sub_6F404(3);
  }
}
