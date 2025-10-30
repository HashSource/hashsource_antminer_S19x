void *sub_41C48()
{
  void *result; // r0
  char v1[52]; // [sp+0h] [bp-34h] BYREF

  if ( dword_5FE790 )
    return memset((void *)dword_5FE790, 0, 0x27FCu);
  result = calloc(0x27FCu, 1u);
  dword_5FE790 = (int)result;
  if ( !result )
  {
    sub_1E938(v1, 0x30u);
    printf("%s ", v1);
    printf("%s : malloc reg_value_buf failed\n", "reset_registoer_buf");
    strcpy(byte_63D3D8, "malloc reg_value_buf failed");
    return (void *)sub_3CC5C((int)byte_63D3D8, v1);
  }
  return result;
}
