int __fastcall sub_D1DF8(int *a1, int a2, signed int a3, int *a4)
{
  int v8; // r0
  int v9; // r5
  int v10; // r3
  int result; // r0
  int v12; // r0
  int v13; // r0
  int v14; // r3
  int v15; // r6
  int *v16; // r0
  int v17; // r0
  int v18; // r2
  signed int v19; // r2
  int v20; // r1
  int v21; // r2
  int v22; // r3
  int v23; // r0
  int v24; // r1
  int v25; // r1
  int v26; // r1
  int v27; // r1
  int v28; // r1
  int v29; // r1
  int v30; // r2
  int v31; // r1
  int v32; // r0
  int v33; // r1
  int v34; // r3
  unsigned int v35; // r2
  void *v36; // r0

  v8 = sub_D8934(a1);
  v9 = v8;
  switch ( a2 )
  {
    case 0:
      v12 = *a1;
      *(_DWORD *)(v9 + 248) = 0;
      *(_DWORD *)(v9 + 252) = 0;
      *(_DWORD *)(v9 + 684) = sub_D8940(v12);
      *(_DWORD *)(v9 + 680) = a1 + 8;
      result = 1;
      *(_DWORD *)(v9 + 692) = 0;
      *(_DWORD *)(v9 + 688) = -1;
      *(_DWORD *)(v9 + 696) = -1;
      return result;
    case 8:
      v13 = sub_D8934(a4);
      v14 = *(_DWORD *)(v9 + 628);
      v15 = v13;
      if ( v14 )
      {
        if ( v14 != v9 )
          return 0;
        *(_DWORD *)(v13 + 628) = v13;
      }
      if ( *(int **)(v9 + 680) == a1 + 8 )
      {
        *(_DWORD *)(v13 + 680) = a4 + 8;
        return 1;
      }
      else
      {
        v36 = (void *)CRYPTO_malloc(*(_DWORD *)(v9 + 684), "crypto/evp/e_aes.c", 2971);
        *(_DWORD *)(v15 + 680) = v36;
        if ( !v36 )
        {
          v18 = 2972;
          goto LABEL_14;
        }
        memcpy(v36, *(const void **)(v9 + 680), *(_DWORD *)(v9 + 684));
        return 1;
      }
    case 9:
      if ( a3 <= 0 )
        return 0;
      if ( a3 <= 16 || a3 <= *(_DWORD *)(v8 + 684) )
        goto LABEL_50;
      v16 = *(int **)(v8 + 680);
      if ( v16 != a1 + 8 )
        CRYPTO_free(v16, "crypto/evp/e_aes.c", 2869);
      v17 = CRYPTO_malloc(a3, "crypto/evp/e_aes.c", 2870);
      v18 = 2871;
      *(_DWORD *)(v9 + 680) = v17;
      if ( v17 )
      {
LABEL_50:
        *(_DWORD *)(v9 + 684) = a3;
        return 1;
      }
      else
      {
LABEL_14:
        sub_D0048(6, 196, 65, (int)"crypto/evp/e_aes.c", v18);
        return 0;
      }
    case 16:
      if ( (unsigned int)(a3 - 1) > 0xF || !a1[2] || *(int *)(v8 + 688) < 0 )
        return 0;
      memcpy(a4, a1 + 12, a3);
      return 1;
    case 17:
      if ( (unsigned int)(a3 - 1) > 0xF || a1[2] )
        return 0;
      memcpy(a1 + 12, a4, a3);
      *(_DWORD *)(v9 + 688) = a3;
      return 1;
    case 18:
      if ( a3 == -1 )
      {
        memcpy(*(void **)(v8 + 680), a4, *(_DWORD *)(v8 + 684));
        *(_DWORD *)(v9 + 692) = 1;
        return 1;
      }
      else
      {
        if ( a3 <= 3 )
          return 0;
        if ( *(_DWORD *)(v8 + 684) - a3 <= 7 )
          return 0;
        memcpy(*(void **)(v8 + 680), a4, a3);
        if ( a1[2] )
        {
          if ( sub_F497C(*(_DWORD *)(v9 + 680) + a3, *(_DWORD *)(v9 + 684) - a3) <= 0 )
            return 0;
        }
        *(_DWORD *)(v9 + 692) = 1;
        return 1;
      }
    case 19:
      if ( !*(_DWORD *)(v8 + 692) || !*(_DWORD *)(v8 + 248) )
        return 0;
      sub_E56D4(v8 + 256, *(_DWORD *)(v8 + 680), *(_DWORD *)(v8 + 684));
      v19 = *(_DWORD *)(v9 + 684);
      if ( a3 <= 0 || a3 > v19 )
      {
        v20 = 0;
      }
      else
      {
        v20 = v19 - a3;
        v19 = a3;
      }
      memcpy(a4, (const void *)(v20 + *(_DWORD *)(v9 + 680)), v19);
      v21 = *(_DWORD *)(v9 + 684);
      v22 = *(_DWORD *)(v9 + 680);
      v23 = v21 - 8;
      v24 = (unsigned __int8)(*(_BYTE *)(v22 + v21 - 1) + 1);
      *(_BYTE *)(v22 + v21 - 1) = v24;
      if ( !v24 )
      {
        v25 = (unsigned __int8)(*(_BYTE *)(v22 + v21 - 2) + 1);
        *(_BYTE *)(v22 + v21 - 2) = v25;
        if ( !v25 )
        {
          v26 = (unsigned __int8)(*(_BYTE *)(v22 + v21 - 3) + 1);
          *(_BYTE *)(v22 + v21 - 3) = v26;
          if ( !v26 )
          {
            v27 = (unsigned __int8)(*(_BYTE *)(v22 + v21 - 4) + 1);
            *(_BYTE *)(v22 + v21 - 4) = v27;
            if ( !v27 )
            {
              v28 = (unsigned __int8)(*(_BYTE *)(v22 + v21 - 5) + 1);
              *(_BYTE *)(v22 + v21 - 5) = v28;
              if ( !v28 )
              {
                v29 = (unsigned __int8)(*(_BYTE *)(v22 + v21 - 6) + 1);
                *(_BYTE *)(v22 + v21 - 6) = v29;
                if ( !v29 )
                {
                  v30 = v21 - 7;
                  v31 = (unsigned __int8)(*(_BYTE *)(v22 + v30) + 1);
                  *(_BYTE *)(v22 + v30) = v31;
                  if ( !v31 )
                    ++*(_BYTE *)(v22 + v23);
                }
              }
            }
          }
        }
      }
      goto LABEL_49;
    case 22:
      if ( a3 != 13 )
        return 0;
      v32 = *a4;
      v33 = a4[1];
      a1[14] = a4[2];
      a1[12] = v32;
      a1[13] = v33;
      *((_BYTE *)a1 + 60) = *((_BYTE *)a4 + 12);
      *(_DWORD *)(v9 + 696) = 13;
      v34 = *((unsigned __int8 *)a1 + 60) | (*((unsigned __int8 *)a1 + 59) << 8);
      if ( v34 <= 7 )
        return 0;
      v35 = v34 - 8;
      if ( a1[2] )
        goto LABEL_44;
      if ( v35 <= 0xF )
        return 0;
      LOWORD(v35) = _byteswap_ushort(*(_WORD *)((char *)a1 + 59)) - 24;
LABEL_44:
      *((_BYTE *)a1 + 60) = v35;
      *((_BYTE *)a1 + 59) = BYTE1(v35);
      return 16;
    case 24:
      if ( !*(_DWORD *)(v8 + 692) || !*(_DWORD *)(v8 + 248) || a1[2] )
        return 0;
      memcpy((void *)(*(_DWORD *)(v8 + 680) + *(_DWORD *)(v8 + 684) - a3), a4, a3);
      sub_E56D4(v9 + 256, *(_DWORD *)(v9 + 680), *(_DWORD *)(v9 + 684));
LABEL_49:
      *(_DWORD *)(v9 + 252) = 1;
      return 1;
    case 37:
      v10 = *(_DWORD *)(v8 + 684);
      result = 1;
      *a4 = v10;
      return result;
    default:
      return -1;
  }
}
