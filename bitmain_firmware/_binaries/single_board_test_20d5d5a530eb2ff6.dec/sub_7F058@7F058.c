int __fastcall sub_7F058(_DWORD *a1, int a2, int a3)
{
  int v4; // r6
  int v6; // r3
  int v7; // r6
  int v8; // r4
  int v9; // r6
  int v10; // r5
  _DWORD *i; // r4
  int v12; // r3
  int v13; // r0

  v4 = a3;
  a1[408] = a2;
  if ( !a3 )
  {
    v6 = *(_DWORD *)(*(_DWORD *)(a1[1] + 100) + 48) & 8;
    if ( v6 )
      v7 = 14;
    else
      v7 = 5;
    if ( v6 )
      v8 = 101;
    else
      v8 = 92;
    v9 = v7 + sub_8CD40(a1, a2, 0, v6);
    if ( sub_9C7D8(a1) )
      v4 = v9 + 1111;
    else
      v4 = v9 + 87;
    if ( (a1[315] & 0x800) == 0 )
      v4 += v8;
  }
  if ( !a2 )
    return 1;
  v10 = 0;
  for ( i = a1 + 434; ; i += 5 )
  {
    v12 = *(i - 20);
    __pld(i);
    if ( !v12 )
      break;
    if ( v4 != *(i - 18) )
    {
      CRYPTO_free(v12, "ssl/record/ssl3_buffer.c", 114);
      *(i - 20) = 0;
      break;
    }
LABEL_19:
    if ( a2 == ++v10 )
      return 1;
  }
  v13 = CRYPTO_malloc(v4, "ssl/record/ssl3_buffer.c", 119);
  if ( v13 )
  {
    *(i - 20) = 0;
    *(i - 19) = 0;
    *(i - 18) = 0;
    *(i - 17) = 0;
    *(i - 16) = 0;
    *(i - 20) = v13;
    *(i - 18) = v4;
    goto LABEL_19;
  }
  a1[408] = v10;
  sub_95494(a1, -1, 291, 65, "ssl/record/ssl3_buffer.c", 128);
  return 0;
}
