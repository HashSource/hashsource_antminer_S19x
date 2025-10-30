int sub_6D6EC()
{
  int result; // r0
  int v1; // r6

  result = OpenSSL_version_num();
  v1 = result;
  if ( ((result ^ 0x1010104F) & 0xFFFFF00F) != 0 )
  {
    sub_65D40(byte_4, "OpenSSL version mismatch. Built against %lx, you have %lx", 269488207, result);
    result = _fprintf_chk(stderr, 1, "OpenSSL version mismatch. Built against %lx, you have %lx\n", 269488207, v1);
  }
  if ( !ssl_init_done )
    return sub_6D690();
  return result;
}
