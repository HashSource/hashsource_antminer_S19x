int __fastcall sub_D53B0(int a1, int a2, size_t n, int *src)
{
  int v7; // r4
  int v9; // r0
  int v10; // r4
  int v11; // r3
  int v12; // r3
  int v13; // r3
  int v14; // r2
  int v15; // r0
  int v16; // r3
  int v17; // r2
  int v18; // r6
  int v19; // r1
  int v20; // r5
  int v21; // r0

  v7 = *(_DWORD *)(a1 + 96);
  switch ( a2 )
  {
    case 0:
      if ( v7
        || (v21 = sub_F1800(),
            v7 = sub_E0740(v21 + 208, "crypto/evp/e_chacha20_poly1305.c", 509),
            (*(_DWORD *)(a1 + 96) = v7) != 0) )
      {
        *(_QWORD *)(v7 + 168) = 0;
        *(_QWORD *)(v7 + 176) = 0;
        *(_DWORD *)(v7 + 184) = 0;
        *(_DWORD *)(v7 + 188) = 0;
        *(_DWORD *)(v7 + 192) = 0;
        *(_DWORD *)(v7 + 148) = 0;
        *(_DWORD *)(v7 + 196) = 12;
        *(_DWORD *)(v7 + 200) = -1;
        *(_DWORD *)(v7 + 152) = 0;
        *(_DWORD *)(v7 + 156) = 0;
        *(_DWORD *)(v7 + 160) = 0;
        return 1;
      }
      else
      {
        sub_D0048(6, 182, 134, (int)"crypto/evp/e_chacha20_poly1305.c", 511);
        return 0;
      }
    case 8:
      if ( !v7 )
        return 1;
      v9 = sub_F1800();
      v10 = sub_E9E68(v7, v9 + 208, "crypto/evp/e_chacha20_poly1305.c", 529);
      src[24] = v10;
      if ( v10 )
        return 1;
      sub_D0048(6, 182, 173, (int)"crypto/evp/e_chacha20_poly1305.c", 531);
      return 0;
    case 9:
      if ( n - 1 > 0xB )
        return 0;
      *(_DWORD *)(v7 + 196) = n;
      return 1;
    case 16:
      if ( n - 1 > 0xF || !*(_DWORD *)(a1 + 8) )
        return 0;
      memcpy(src, (const void *)(v7 + 132), n);
      return 1;
    case 17:
      if ( n - 1 > 0xF )
        return 0;
      if ( !src )
        return 1;
      memcpy((void *)(v7 + 132), src, n);
      *(_DWORD *)(v7 + 192) = n;
      return 1;
    case 18:
      if ( n != 12 )
        return 0;
      v11 = *src;
      *(_DWORD *)(v7 + 36) = *src;
      *(_DWORD *)(v7 + 120) = v11;
      v12 = src[1];
      *(_DWORD *)(v7 + 40) = v12;
      *(_DWORD *)(v7 + 124) = v12;
      v13 = src[2];
      *(_DWORD *)(v7 + 44) = v13;
      *(_DWORD *)(v7 + 128) = v13;
      return 1;
    case 22:
      if ( n != 13 )
        return 0;
      v14 = src[2];
      v15 = *src;
      *(_DWORD *)(v7 + 152) = src[1];
      *(_DWORD *)(v7 + 156) = v14;
      *(_DWORD *)(v7 + 148) = v15;
      *(_BYTE *)(v7 + 160) = *((_BYTE *)src + 12);
      v16 = *((unsigned __int8 *)src + 12) | (*((unsigned __int8 *)src + 11) << 8);
      if ( *(_DWORD *)(a1 + 8) )
        goto LABEL_25;
      if ( v16 <= 15 )
        return 0;
      v16 -= 16;
      *(_BYTE *)(v7 + 160) = v16;
      *(_BYTE *)(v7 + 159) = BYTE1(v16);
LABEL_25:
      v17 = *(_DWORD *)(v7 + 152);
      v18 = *(_DWORD *)(v7 + 128);
      v19 = *(_DWORD *)(v7 + 148) ^ *(_DWORD *)(v7 + 124);
      v20 = *(_DWORD *)(v7 + 120);
      *(_DWORD *)(v7 + 200) = v16;
      *(_DWORD *)(v7 + 40) = v19;
      *(_DWORD *)(v7 + 44) = v18 ^ v17;
      *(_DWORD *)(v7 + 36) = v20;
      *(_DWORD *)(v7 + 188) = 0;
      return 16;
    case 23:
      return 1;
    case 37:
      *src = *(_DWORD *)(v7 + 196);
      return 1;
    default:
      return -1;
  }
}
