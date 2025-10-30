int __fastcall sub_8EFF4(_DWORD *a1)
{
  if ( a1[7] )
  {
    a1[335] = -1;
    return 1;
  }
  else
  {
    CRYPTO_free(a1[341], "ssl/statem/extensions.c", 1097);
    a1[341] = 0;
    a1[342] = 0;
    return 1;
  }
}
