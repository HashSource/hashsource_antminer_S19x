int __fastcall sub_140FC8(_DWORD *a1)
{
  int result; // r0

  result = (int)CRYPTO_malloc((void *)0x18);
  if ( result )
  {
    *(_DWORD *)(result + 4) = 224;
    *(_DWORD *)result = 2048;
    *(_DWORD *)(result + 8) = 0;
    *(_DWORD *)(result + 20) = 0;
    a1[5] = result;
    a1[8] = result + 12;
    a1[9] = 2;
    return 1;
  }
  return result;
}
