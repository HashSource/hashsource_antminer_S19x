int sub_6C714()
{
  int result; // r0
  int v1; // r7

  result = OpenSSL_version_num();
  if ( ((result ^ 0x1010104F) & 0xFFFFF00F) != 0 )
  {
    v1 = result;
    sub_64E00(&byte_4, "OpenSSL version mismatch. Built against %lx, you have %lx", 269488207, result);
    result = _fprintf_chk(stderr, 1, "OpenSSL version mismatch. Built against %lx, you have %lx\n", 269488207, v1);
  }
  if ( !ssl_init_done )
    return sub_6C6B8();
  return result;
}
