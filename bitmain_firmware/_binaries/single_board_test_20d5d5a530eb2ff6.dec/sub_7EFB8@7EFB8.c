int __fastcall sub_7EFB8(_DWORD *a1)
{
  int result; // r0

  result = CRYPTO_free(*a1, "ssl/record/ssl3_buffer.c", 33);
  *a1 = 0;
  return result;
}
