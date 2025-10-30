int __fastcall sub_7EFD4(_DWORD *a1)
{
  unsigned int v1; // r5
  int v2; // r7
  int v5; // r0

  v1 = 17744;
  v2 = 16720;
  if ( (*(_DWORD *)(*(_DWORD *)(a1[1] + 100) + 48) & 8) == 0 )
  {
    v1 = 17736;
    v2 = 16712;
  }
  if ( a1[409] )
    return 1;
  if ( !sub_9C7D8() )
    v1 = v2;
  if ( v1 < a1[410] )
    v1 = a1[410];
  v5 = CRYPTO_malloc(v1, "ssl/record/ssl3_buffer.c", 63);
  if ( v5 )
  {
    a1[409] = v5;
    a1[411] = v1;
    return 1;
  }
  else
  {
    sub_95494(a1, -1, 156, 65, "ssl/record/ssl3_buffer.c", 70);
    return 0;
  }
}
