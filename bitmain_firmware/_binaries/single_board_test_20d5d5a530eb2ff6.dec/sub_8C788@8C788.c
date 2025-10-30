int __fastcall sub_8C788(int a1, char *s, unsigned __int8 *a3, int a4)
{
  size_t v7; // r4
  int v8; // r8
  char *v9; // r0
  int v10; // r10
  size_t v11; // r11
  int v12; // r4
  char *v13; // r5
  int v14; // r8
  int v15; // t1
  char *v16; // r0
  _BYTE *v17; // r4
  unsigned __int8 *v18; // r5
  char *v19; // r8
  unsigned __int8 *v20; // r7
  int v21; // t1
  char *v22; // r0
  int v24; // [sp+Ch] [bp-10h]
  int v25; // [sp+10h] [bp-Ch]

  if ( !*(_DWORD *)(*(_DWORD *)(a1 + 1232) + 540) )
    return 1;
  v7 = strlen(s);
  v8 = *(_DWORD *)(a1 + 124);
  v25 = 2 * (a4 + 32);
  v24 = v25 + 3 + v7;
  v9 = (char *)CRYPTO_malloc(v24, "ssl/ssl_lib.c", 5295);
  v10 = (int)v9;
  if ( v9 )
  {
    strcpy(v9, s);
    v11 = v7 + 1 + v10;
    *(_BYTE *)(v10 + v7) = 32;
    v12 = v8 + 171;
    v13 = (char *)v11;
    v14 = v8 + 203;
    do
    {
      v15 = *(unsigned __int8 *)++v12;
      v16 = v13;
      v13 += 2;
      sprintf(v16, "%02x", v15);
    }
    while ( v12 != v14 );
    v17 = (_BYTE *)(v11 + 65);
    *(_BYTE *)(v11 + 64) = 32;
    if ( a4 )
    {
      v18 = a3;
      v19 = (char *)(v11 + 65);
      v20 = &a3[a4];
      do
      {
        v21 = *v18++;
        v22 = v19;
        v19 += 2;
        sprintf(v22, "%02x", v21);
      }
      while ( v20 != v18 );
      v17 += v25 - 64;
    }
    *v17 = 0;
    (*(void (__fastcall **)(int, int))(*(_DWORD *)(a1 + 1232) + 540))(a1, v10);
    sub_E0758(v10, v24, (size_t)"ssl/ssl_lib.c");
    return 1;
  }
  else
  {
    sub_95494(a1, 80, 500, 65, "ssl/ssl_lib.c", 5297);
    return 0;
  }
}
