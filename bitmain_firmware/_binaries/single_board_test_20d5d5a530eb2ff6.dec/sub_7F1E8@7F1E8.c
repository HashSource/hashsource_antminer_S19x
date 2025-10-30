int __fastcall sub_7F1E8(int result, int a2)
{
  int v2; // r5
  int v4; // r4

  if ( a2 )
  {
    v2 = 0;
    v4 = result;
    do
    {
      ++v2;
      result = CRYPTO_free(*(_DWORD *)(v4 + 28), "ssl/record/ssl3_record.c", 55);
      *(_DWORD *)(v4 + 28) = 0;
      v4 += 48;
    }
    while ( a2 != v2 );
  }
  return result;
}
