int __fastcall sub_318ED8(unsigned int a1, int a2, int *a3, int **a4)
{
  int **v8; // r2
  int v9; // r8
  int v10; // r1
  int v11; // r2
  int v12; // r1
  int v13; // r3
  int v14; // r2
  int v15; // r3
  int v16; // r1
  int v17; // r2
  int v18; // r3
  int v19; // r2
  void (__fastcall *v20)(unsigned int, int, int); // r3
  int v21; // r2
  int v22; // r3
  int v23; // r2
  void (__fastcall *v24)(unsigned int, int, int); // r3
  int v25; // r3
  int v26; // r2
  void (__fastcall *v27)(unsigned int, int, int); // r3
  int v28; // r1
  int result; // r0

  if ( !a4 || a4[2] )
  {
LABEL_7:
    v9 = *(_DWORD *)(a1 + 276);
    *(_DWORD *)(a1 + 276) = 0;
    sub_3191C4(a1, a2, a4, 0);
    v10 = *(_DWORD *)(a1 + 256);
  }
  else
  {
    v8 = a4;
    while ( 2 )
    {
      switch ( *v8[1] )
      {
        case 25:
        case 26:
        case 27:
        case 33:
        case 37:
        case 38:
        case 43:
          v15 = *(unsigned __int8 *)(a1 + 260);
          v16 = *(_DWORD *)(a1 + 256);
          goto LABEL_12;
        case 34:
        case 35:
        case 36:
          v15 = *(unsigned __int8 *)(a1 + 260);
          v16 = *(_DWORD *)(a1 + 256);
          if ( (v15 & 0xFD) == 0x28 )
            goto LABEL_17;
LABEL_12:
          if ( v15 == 32 )
            goto LABEL_17;
          if ( v16 == 255 )
          {
            v17 = *(_DWORD *)(a1 + 268);
            *(_BYTE *)(a1 + 255) = 0;
            (*(void (__fastcall **)(unsigned int, int, int))(a1 + 264))(a1, 255, v17);
            v18 = *(_DWORD *)(a1 + 296);
            v16 = 1;
            *(_BYTE *)a1 = 32;
            *(_DWORD *)(a1 + 296) = v18 + 1;
LABEL_15:
            v19 = v16 + 1;
            goto LABEL_19;
          }
          *(_DWORD *)(a1 + 256) = v16 + 1;
          *(_BYTE *)(a1 + v16++) = 32;
          *(_BYTE *)(a1 + 260) = 32;
LABEL_17:
          if ( v16 != 255 )
            goto LABEL_15;
          v20 = *(void (__fastcall **)(unsigned int, int, int))(a1 + 264);
          v21 = *(_DWORD *)(a1 + 268);
          *(_BYTE *)(a1 + 255) = 0;
          v20(a1, 255, v21);
          v19 = 1;
          v16 = 0;
          ++*(_DWORD *)(a1 + 296);
LABEL_19:
          *(_DWORD *)(a1 + 256) = v19;
          *(_BYTE *)(a1 + v16) = 40;
          *(_BYTE *)(a1 + 260) = 40;
          v9 = *(_DWORD *)(a1 + 276);
          *(_DWORD *)(a1 + 276) = 0;
          sub_3191C4(a1, a2, a4, 0);
          v22 = *(_DWORD *)(a1 + 256);
          if ( v22 == 255 )
          {
            v23 = *(_DWORD *)(a1 + 268);
            v24 = *(void (__fastcall **)(unsigned int, int, int))(a1 + 264);
            *(_BYTE *)(a1 + 255) = 0;
            v24(a1, 255, v23);
            v25 = *(_DWORD *)(a1 + 296);
            v10 = 1;
            *(_BYTE *)a1 = 41;
            *(_DWORD *)(a1 + 296) = v25 + 1;
            goto LABEL_21;
          }
          v10 = v22 + 1;
          *(_DWORD *)(a1 + 256) = v22 + 1;
          *(_BYTE *)(a1 + v22) = 41;
          *(_BYTE *)(a1 + 260) = 41;
          break;
        default:
          v8 = (int **)*v8;
          if ( !v8 || v8[2] )
            goto LABEL_7;
          continue;
      }
      break;
    }
  }
  if ( v10 == 255 )
  {
    v11 = *(_DWORD *)(a1 + 268);
    *(_BYTE *)(a1 + 255) = 0;
    (*(void (__fastcall **)(unsigned int, int, int))(a1 + 264))(a1, 255, v11);
    v12 = *(_DWORD *)(a1 + 296);
    *(_BYTE *)a1 = 40;
    v13 = 1;
    *(_BYTE *)(a1 + 260) = 40;
    v14 = *a3;
    *(_DWORD *)(a1 + 296) = v12 + 1;
    *(_DWORD *)(a1 + 256) = 1;
    if ( !v14 )
    {
LABEL_25:
      v28 = v13 + 1;
      goto LABEL_24;
    }
    goto LABEL_10;
  }
LABEL_21:
  v13 = v10 + 1;
  *(_DWORD *)(a1 + 256) = v10 + 1;
  *(_BYTE *)(a1 + v10) = 40;
  *(_BYTE *)(a1 + 260) = 40;
  v14 = *a3;
  if ( *a3 )
  {
LABEL_10:
    sub_314740(a1, a2, v14);
    v13 = *(_DWORD *)(a1 + 256);
  }
  if ( v13 != 255 )
    goto LABEL_25;
  v26 = *(_DWORD *)(a1 + 268);
  v27 = *(void (__fastcall **)(unsigned int, int, int))(a1 + 264);
  *(_BYTE *)(a1 + 255) = 0;
  v27(a1, 255, v26);
  v28 = 1;
  v13 = 0;
  ++*(_DWORD *)(a1 + 296);
LABEL_24:
  *(_DWORD *)(a1 + 256) = v28;
  *(_BYTE *)(a1 + v13) = 41;
  *(_BYTE *)(a1 + 260) = 41;
  result = sub_3191C4(a1, a2, a4, 1);
  *(_DWORD *)(a1 + 276) = v9;
  return result;
}
