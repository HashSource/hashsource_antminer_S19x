int __fastcall sub_7F15C(int a1)
{
  int v2; // r5
  int v3; // r4

  v2 = *(_DWORD *)(a1 + 1632);
  if ( v2 )
  {
    v3 = a1 + 20 * v2;
    do
    {
      --v2;
      CRYPTO_free(*(_DWORD *)(v3 + 1636), "ssl/record/ssl3_buffer.c", 162);
      v3 -= 20;
      *(_DWORD *)(v3 + 1656) = 0;
    }
    while ( v2 );
  }
  *(_DWORD *)(a1 + 1632) = 0;
  return 1;
}
