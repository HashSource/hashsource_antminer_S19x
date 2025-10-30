bool __fastcall sub_8ADD8(int a1, char *s)
{
  char *v4; // r0
  int v5; // r4
  int v6; // r0
  int v7; // r3

  if ( s )
  {
    if ( strlen(s) > 0x80 )
    {
      sub_D0048(20, 272, 146, "ssl/ssl_lib.c", 4337);
      return 0;
    }
    else
    {
      CRYPTO_free(*(_DWORD *)(*(_DWORD *)(a1 + 192) + 260), "ssl/ssl_lib.c", 4340);
      v4 = s;
      v5 = *(_DWORD *)(a1 + 192);
      v6 = sub_E9E3C(v4, "ssl/ssl_lib.c", 4342);
      v7 = *(_DWORD *)(a1 + 192);
      *(_DWORD *)(v5 + 260) = v6;
      return *(_DWORD *)(v7 + 260) != 0;
    }
  }
  else
  {
    CRYPTO_free(*(_DWORD *)(*(_DWORD *)(a1 + 192) + 260), "ssl/ssl_lib.c", 4340);
    *(_DWORD *)(*(_DWORD *)(a1 + 192) + 260) = 0;
    return 1;
  }
}
