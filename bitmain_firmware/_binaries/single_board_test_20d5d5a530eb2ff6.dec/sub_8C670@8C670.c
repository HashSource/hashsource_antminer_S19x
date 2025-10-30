int __fastcall sub_8C670(int a1, int a2, unsigned int a3, unsigned __int8 *a4, int a5)
{
  int v6; // r3
  int result; // r0
  int v10; // r0
  int v11; // r7
  int v12; // r9
  int v13; // r8
  char *v14; // r4
  char *v15; // r0
  int v16; // t1
  _BYTE *v17; // r4
  unsigned __int8 *v18; // r8
  char *v19; // r9
  int v20; // t1
  char *v21; // r0

  if ( a3 <= 7 )
  {
    sub_95494(a1, 80, 499, 68, "ssl/ssl_lib.c", 5331);
    return 0;
  }
  else
  {
    v6 = *(_DWORD *)(a1 + 1232);
    result = 1;
    if ( *(_DWORD *)(v6 + 540) )
    {
      v10 = CRYPTO_malloc(2 * (a5 + 8) + 6, "ssl/ssl_lib.c", 5295);
      v11 = v10;
      if ( v10 )
      {
        v12 = a2 - 1;
        v13 = v10 + 20;
        *(_DWORD *)v10 = 4281170;
        v14 = (char *)(v10 + 4);
        *(_BYTE *)(v10 + 3) = 32;
        do
        {
          v15 = v14;
          v16 = *(unsigned __int8 *)++v12;
          v14 += 2;
          sprintf(v15, "%02x", v16);
        }
        while ( v14 != (char *)v13 );
        v17 = (_BYTE *)(v11 + 21);
        *(_BYTE *)(v11 + 20) = 32;
        if ( a5 )
        {
          v18 = &a4[a5];
          v19 = (char *)(v11 + 21);
          do
          {
            v20 = *a4++;
            v21 = v19;
            v19 += 2;
            sprintf(v21, "%02x", v20);
          }
          while ( v18 != a4 );
          v17 += 2 * a5;
        }
        *v17 = 0;
        (*(void (__fastcall **)(int, int))(*(_DWORD *)(a1 + 1232) + 540))(a1, v11);
        sub_E0758(v11, 2 * (a5 + 8) + 6, (size_t)"ssl/ssl_lib.c");
        return 1;
      }
      else
      {
        sub_95494(a1, 80, 500, 65, "ssl/ssl_lib.c", 5297);
        return 0;
      }
    }
  }
  return result;
}
