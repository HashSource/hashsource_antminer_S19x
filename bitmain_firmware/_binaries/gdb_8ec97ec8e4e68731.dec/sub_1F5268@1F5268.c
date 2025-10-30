int __fastcall sub_1F5268(int a1, int a2)
{
  int v2; // r3
  int v3; // r8
  int v6; // r8
  bool v7; // cc
  int v8; // r8
  int v9; // r4
  int v10; // r0
  int v11; // r1
  int v12; // r2
  int v13; // r2
  _BYTE *v14; // r3
  int v15; // r12
  int v16; // r0
  int v17; // r2
  void *v18; // r0
  int v19; // r2
  int v20; // r3
  int v21; // r12
  int v22; // r1
  int v23; // r2
  _DWORD *v24; // r3
  int v25; // r2
  _BYTE *v26; // r3
  int v27; // r1
  int v28; // r3
  int v29; // r0
  int v30; // r3
  void *v31; // r0
  void *v32; // r0
  void *v33; // r0

  v2 = *(_DWORD *)(a1 + 4);
  v3 = a2 + 76;
  if ( v2 != a2 + 76 )
  {
    v6 = v2 - v3;
    v7 = v6 <= 0;
    v8 = 678152731 * (v6 >> 2);
    if ( v7 )
    {
      v3 = *(_DWORD *)(a1 + 4);
      goto LABEL_21;
    }
    v9 = a2 + 152;
    while ( 1 )
    {
      v22 = *(_DWORD *)(v9 - 72);
      v23 = *(_DWORD *)(v9 - 68);
      v24 = (_DWORD *)(v9 - 152);
      *v24 = *(_DWORD *)(v9 - 76);
      v24[1] = v22;
      v24[2] = v23;
      v25 = *(_DWORD *)(v9 - 64);
      v26 = *(_BYTE **)(v9 - 140);
      if ( v25 == v9 - 56 )
      {
        sub_33B48C(v9 - 140, v9 - 64);
        v26 = *(_BYTE **)(v9 - 64);
      }
      else
      {
        if ( v26 == (_BYTE *)(v9 - 132) )
        {
          v27 = *(_DWORD *)(v9 - 60);
          v28 = *(_DWORD *)(v9 - 56);
          *(_DWORD *)(v9 - 140) = v25;
          *(_DWORD *)(v9 - 136) = v27;
          *(_DWORD *)(v9 - 132) = v28;
        }
        else
        {
          v10 = *(_DWORD *)(v9 - 60);
          v11 = *(_DWORD *)(v9 - 56);
          *(_DWORD *)(v9 - 140) = v25;
          *(_DWORD *)(v9 - 136) = v10;
          v12 = *(_DWORD *)(v9 - 132);
          *(_DWORD *)(v9 - 132) = v11;
          if ( v26 )
          {
            *(_DWORD *)(v9 - 64) = v26;
            *(_DWORD *)(v9 - 56) = v12;
            goto LABEL_7;
          }
        }
        *(_DWORD *)(v9 - 64) = v9 - 56;
        v26 = (_BYTE *)(v9 - 56);
      }
LABEL_7:
      *(_DWORD *)(v9 - 60) = 0;
      *v26 = 0;
      v13 = *(_DWORD *)(v9 - 40);
      v14 = *(_BYTE **)(v9 - 116);
      if ( v13 == v9 - 32 )
      {
        sub_33B48C(v9 - 116, v9 - 40);
        v14 = *(_BYTE **)(v9 - 40);
        goto LABEL_11;
      }
      if ( v14 == (_BYTE *)(v9 - 108) )
      {
        v29 = *(_DWORD *)(v9 - 36);
        v30 = *(_DWORD *)(v9 - 32);
        *(_DWORD *)(v9 - 116) = v13;
        *(_DWORD *)(v9 - 112) = v29;
        *(_DWORD *)(v9 - 108) = v30;
LABEL_19:
        *(_DWORD *)(v9 - 40) = v9 - 32;
        v14 = (_BYTE *)(v9 - 32);
        goto LABEL_11;
      }
      v15 = *(_DWORD *)(v9 - 36);
      v16 = *(_DWORD *)(v9 - 32);
      *(_DWORD *)(v9 - 116) = v13;
      *(_DWORD *)(v9 - 112) = v15;
      v17 = *(_DWORD *)(v9 - 108);
      *(_DWORD *)(v9 - 108) = v16;
      if ( !v14 )
        goto LABEL_19;
      *(_DWORD *)(v9 - 40) = v14;
      *(_DWORD *)(v9 - 32) = v17;
LABEL_11:
      *(_DWORD *)(v9 - 36) = 0;
      *v14 = 0;
      v18 = *(void **)(v9 - 88);
      v19 = *(_DWORD *)(v9 - 8);
      v20 = *(_DWORD *)(v9 - 4);
      v21 = *(_DWORD *)(v9 - 16);
      *(_DWORD *)(v9 - 88) = *(_DWORD *)(v9 - 12);
      *(_DWORD *)(v9 - 12) = 0;
      *(_DWORD *)(v9 - 92) = v21;
      *(_DWORD *)(v9 - 84) = v19;
      *(_DWORD *)(v9 - 8) = 0;
      *(_DWORD *)(v9 - 80) = v20;
      *(_DWORD *)(v9 - 4) = 0;
      if ( v18 )
        sub_339E64(v18);
      --v8;
      v9 += 76;
      if ( !v8 )
      {
        v3 = *(_DWORD *)(a1 + 4);
        break;
      }
    }
  }
LABEL_21:
  v31 = *(void **)(v3 - 12);
  *(_DWORD *)(a1 + 4) = v3 - 76;
  if ( v31 )
    sub_339E64(v31);
  v32 = *(void **)(v3 - 40);
  if ( v32 != (void *)(v3 - 32) )
    sub_339E64(v32);
  v33 = *(void **)(v3 - 64);
  if ( v33 != (void *)(v3 - 56) )
    sub_339E64(v33);
  return a2;
}
