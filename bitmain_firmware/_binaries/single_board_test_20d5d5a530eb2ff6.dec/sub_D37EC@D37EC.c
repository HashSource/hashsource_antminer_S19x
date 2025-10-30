int __fastcall sub_D37EC(int *a1, int a2, signed int a3, _DWORD *a4)
{
  int v8; // r0
  int v9; // r5
  int v10; // r3
  int v12; // r0
  int v13; // r0
  int v14; // r0
  int v15; // r3
  int v16; // r6
  int v17; // r4
  int v18; // r0
  int v19; // r2
  const void *v20; // r0
  void *v21; // r0
  signed int v22; // r2
  int v23; // r1
  int v24; // r2
  int v25; // r3
  int v26; // r0
  char v27; // r1
  char v28; // r1
  char v29; // r1
  char v30; // r1
  char v31; // r1
  char v32; // r1
  int v33; // r2
  char v34; // r1
  int v35; // r0
  int v36; // r1
  int v37; // r2
  int v38; // r4
  int v39; // r4
  unsigned int v40; // r5
  int v41; // r0
  int v42; // r4
  void *v43; // r0
  int v44; // r0

  v8 = sub_D8934(a1);
  v9 = v8;
  switch ( a2 )
  {
    case 0:
      v12 = *a1;
      *(_DWORD *)(v9 + 280) = 0;
      *(_DWORD *)(v9 + 284) = 0;
      *(_DWORD *)(v9 + 716) = sub_D8940(v12);
      v13 = sub_D8AC0(a1);
      *(_DWORD *)(v9 + 724) = 0;
      *(_DWORD *)(v9 + 712) = v13;
      v10 = 1;
      *(_DWORD *)(v9 + 720) = -1;
      *(_DWORD *)(v9 + 728) = -1;
      return v10;
    case 8:
      v14 = sub_D8934(a4);
      v15 = *(_DWORD *)(v9 + 660);
      v16 = v14;
      if ( !v15 )
        goto LABEL_55;
      if ( v15 != v9 )
        return 0;
      *(_DWORD *)(v14 + 660) = v14;
LABEL_55:
      v42 = *(_DWORD *)(v9 + 712);
      if ( v42 == sub_D8AC0(a1) )
      {
        v44 = sub_D8AC0(a4);
        v10 = 1;
        *(_DWORD *)(v16 + 712) = v44;
      }
      else
      {
        v43 = (void *)CRYPTO_malloc(*(_DWORD *)(v9 + 716), "crypto/evp/e_aria.c", 378);
        *(_DWORD *)(v16 + 712) = v43;
        if ( v43 )
        {
          memcpy(v43, *(const void **)(v9 + 712), *(_DWORD *)(v9 + 716));
          return 1;
        }
        else
        {
          v19 = 379;
LABEL_14:
          sub_D0048(6, 197, 65, (int)"crypto/evp/e_aria.c", v19);
          return 0;
        }
      }
      return v10;
    case 9:
      if ( a3 <= 0 )
        return 0;
      if ( a3 > 16 && a3 > *(_DWORD *)(v8 + 716) )
      {
        v17 = *(_DWORD *)(v8 + 712);
        if ( v17 != sub_D8AC0(a1) )
          CRYPTO_free(*(_DWORD *)(v9 + 712), "crypto/evp/e_aria.c", 268);
        v18 = CRYPTO_malloc(a3, "crypto/evp/e_aria.c", 269);
        v19 = 270;
        *(_DWORD *)(v9 + 712) = v18;
        if ( !v18 )
          goto LABEL_14;
      }
      *(_DWORD *)(v9 + 716) = a3;
      return 1;
    case 16:
      if ( (unsigned int)(a3 - 1) > 0xF || !sub_D8924(a1) || *(int *)(v9 + 720) < 0 )
        return 0;
      v20 = (const void *)sub_D8AC4(a1);
      memcpy(a4, v20, a3);
      return 1;
    case 17:
      if ( (unsigned int)(a3 - 1) > 0xF || sub_D8924(a1) )
        return 0;
      v21 = (void *)sub_D8AC4(a1);
      memcpy(v21, a4, a3);
      *(_DWORD *)(v9 + 720) = a3;
      return 1;
    case 18:
      if ( a3 == -1 )
      {
        memcpy(*(void **)(v8 + 712), a4, *(_DWORD *)(v8 + 716));
        v10 = 1;
        *(_DWORD *)(v9 + 724) = 1;
        return v10;
      }
      if ( a3 > 3 && *(_DWORD *)(v8 + 716) - a3 > 7 )
      {
        memcpy(*(void **)(v8 + 712), a4, a3);
        if ( !sub_D8924(a1) || sub_F497C(*(_DWORD *)(v9 + 712) + a3, *(_DWORD *)(v9 + 716) - a3) > 0 )
        {
          v10 = 1;
          *(_DWORD *)(v9 + 724) = 1;
          return v10;
        }
      }
      return 0;
    case 19:
      if ( !*(_DWORD *)(v8 + 724) || !*(_DWORD *)(v8 + 280) )
        return 0;
      sub_E56D4(v8 + 288, *(_DWORD *)(v8 + 712), *(_DWORD *)(v8 + 716));
      v22 = *(_DWORD *)(v9 + 716);
      if ( a3 <= 0 || a3 > v22 )
      {
        v23 = 0;
      }
      else
      {
        v23 = v22 - a3;
        v22 = a3;
      }
      memcpy(a4, (const void *)(v23 + *(_DWORD *)(v9 + 712)), v22);
      v24 = *(_DWORD *)(v9 + 716);
      v25 = *(_DWORD *)(v9 + 712);
      v26 = v24 - 8;
      v27 = *(_BYTE *)(v25 + v24 - 1) + 1;
      *(_BYTE *)(v25 + v24 - 1) = v27;
      if ( !v27 )
      {
        v28 = *(_BYTE *)(v25 + v24 - 2) + 1;
        *(_BYTE *)(v25 + v24 - 2) = v28;
        if ( !v28 )
        {
          v29 = *(_BYTE *)(v25 + v24 - 3) + 1;
          *(_BYTE *)(v25 + v24 - 3) = v29;
          if ( !v29 )
          {
            v30 = *(_BYTE *)(v25 + v24 - 4) + 1;
            *(_BYTE *)(v25 + v24 - 4) = v30;
            if ( !v30 )
            {
              v31 = *(_BYTE *)(v25 + v24 - 5) + 1;
              *(_BYTE *)(v25 + v24 - 5) = v31;
              if ( !v31 )
              {
                v32 = *(_BYTE *)(v25 + v24 - 6) + 1;
                *(_BYTE *)(v25 + v24 - 6) = v32;
                if ( !v32 )
                {
                  v33 = v24 - 7;
                  v34 = *(_BYTE *)(v25 + v33) + 1;
                  *(_BYTE *)(v25 + v33) = v34;
                  if ( !v34 )
                    ++*(_BYTE *)(v25 + v26);
                }
              }
            }
          }
        }
      }
      goto LABEL_41;
    case 22:
      if ( a3 != 13 )
        return 0;
      v35 = sub_D8AC4(a1);
      v36 = a4[1];
      v37 = a4[2];
      *(_DWORD *)v35 = *a4;
      *(_DWORD *)(v35 + 4) = v36;
      *(_DWORD *)(v35 + 8) = v37;
      *(_BYTE *)(v35 + 12) = *((_BYTE *)a4 + 12);
      *(_DWORD *)(v9 + 728) = 13;
      v38 = *(unsigned __int8 *)(sub_D8AC4(a1) + 11);
      v39 = (v38 << 8) | *(unsigned __int8 *)(sub_D8AC4(a1) + 12);
      if ( v39 <= 7 )
        return 0;
      v40 = v39 - 8;
      if ( sub_D8924(a1) )
        goto LABEL_47;
      if ( v40 <= 0xF )
        return 0;
      LOWORD(v40) = v39 - 24;
LABEL_47:
      *(_BYTE *)(sub_D8AC4(a1) + 11) = BYTE1(v40);
      v41 = sub_D8AC4(a1);
      v10 = 16;
      *(_BYTE *)(v41 + 12) = v40;
      return v10;
    case 24:
      if ( !*(_DWORD *)(v8 + 724) || !*(_DWORD *)(v8 + 280) || sub_D8924(a1) )
        return 0;
      memcpy((void *)(*(_DWORD *)(v9 + 712) + *(_DWORD *)(v9 + 716) - a3), a4, a3);
      sub_E56D4(v9 + 288, *(_DWORD *)(v9 + 712), *(_DWORD *)(v9 + 716));
LABEL_41:
      v10 = 1;
      *(_DWORD *)(v9 + 284) = 1;
      return v10;
    case 37:
      v10 = 1;
      *a4 = *(_DWORD *)(v8 + 716);
      return v10;
    default:
      return -1;
  }
}
