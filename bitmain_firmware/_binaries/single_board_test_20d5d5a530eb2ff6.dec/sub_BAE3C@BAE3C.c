int __fastcall sub_BAE3C(int result)
{
  int v1; // r4
  int v2; // r0

  if ( result )
  {
    v1 = result;
    v2 = *(_DWORD *)(result + 4);
    if ( v2 )
    {
      if ( (*(_DWORD *)(v1 + 12) & 1) != 0 )
        ((void (*)(void))loc_E18E0)();
      else
        sub_E0758(v2, *(_DWORD *)(v1 + 8), (size_t)"crypto/buffer/buffer.c");
    }
    return CRYPTO_free(v1, "crypto/buffer/buffer.c", 53);
  }
  return result;
}
