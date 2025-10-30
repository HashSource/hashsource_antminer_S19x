const char *__fastcall sub_FF00(int a1)
{
  const char *result; // r0

  if ( !ssl_init_done )
    sub_FDCC();
  result = (const char *)OBJ_nid2sn(a1);
  if ( a1 == 894 )
  {
    if ( debug )
      _fprintf_chk(stderr, 1, "%s:%d:%s():%s:nid\n", "ssl_init.c", 223, "keytype_name", "AES128CMAC");
    return "AES128CMAC";
  }
  else if ( !result )
  {
    return "(unknown key type)";
  }
  return result;
}
