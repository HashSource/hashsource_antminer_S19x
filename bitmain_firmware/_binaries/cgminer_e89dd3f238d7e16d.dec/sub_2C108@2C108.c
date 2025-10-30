void __fastcall sub_2C108(_DWORD *a1, char *a2, char a3)
{
  int v3; // r1
  int v4; // r2
  int v5; // r3
  int v6; // r1
  int v7; // r2
  int v8; // r3
  int v9; // r1
  int v10; // r2
  int v11; // r3
  int v12; // r1
  int v13; // r2
  int v14; // r3
  const char *v15; // r2
  const char *v16; // r2
  size_t v17; // r0
  size_t v18; // r0
  size_t v19; // r0
  size_t v20; // r0
  _DWORD v24[8]; // [sp+30h] [bp-CA4h] BYREF
  _BYTE v25[32]; // [sp+50h] [bp-C84h] BYREF
  _DWORD v26[8]; // [sp+70h] [bp-C64h] BYREF
  char v27[1024]; // [sp+90h] [bp-C44h] BYREF
  char v28[20]; // [sp+490h] [bp-844h] BYREF
  __int64 v29; // [sp+C90h] [bp-44h]
  int v30; // [sp+C9Ch] [bp-38h]
  void *v31; // [sp+CA0h] [bp-34h]
  void *v32; // [sp+CA4h] [bp-30h]
  void *v33; // [sp+CA8h] [bp-2Ch]
  void *v34; // [sp+CACh] [bp-28h]
  void *v35; // [sp+CB0h] [bp-24h]
  void *ptr; // [sp+CB4h] [bp-20h]
  unsigned __int64 v37; // [sp+CB8h] [bp-1Ch]
  int v38; // [sp+CC4h] [bp-10h]

  if ( dword_86920 )
  {
    memset(v27, 0, sizeof(v27));
    memset(v24, 0, sizeof(v24));
    memset(v25, 0, sizeof(v25));
    memset(v26, 0, sizeof(v26));
    ptr = 0;
    v35 = 0;
    v34 = 0;
    v33 = 0;
    v32 = 0;
    v31 = 0;
    v30 = 0;
    v29 = 0;
    v3 = a1[33];
    v4 = a1[34];
    v5 = a1[35];
    v24[0] = a1[32];
    v24[1] = v3;
    v24[2] = v4;
    v24[3] = v5;
    v6 = a1[37];
    v7 = a1[38];
    v8 = a1[39];
    v24[4] = a1[36];
    v24[5] = v6;
    v24[6] = v7;
    v24[7] = v8;
    memcpy(v25, a1 + 16, 0xCu);
    v9 = a1[49];
    v10 = a1[50];
    v11 = a1[51];
    v26[0] = a1[48];
    v26[1] = v9;
    v26[2] = v10;
    v26[3] = v11;
    v12 = a1[53];
    v13 = a1[54];
    v14 = a1[55];
    v26[4] = a1[52];
    v26[5] = v12;
    v26[6] = v13;
    v26[7] = v14;
    sub_2B220((int)v24, 32);
    sub_2B220((int)v25, 12);
    sub_2B220((int)v26, 32);
    ptr = sub_1FE6C((int)a1, 128);
    v35 = sub_1FE6C((int)v24, 32);
    v34 = sub_1FE6C((int)v25, 12);
    v33 = sub_1FE6C((int)a2, 4);
    v32 = sub_1FE6C((int)a2, 5);
    v31 = sub_1FE6C((int)v26, 32);
    v29 = sub_3521C(a1);
    if ( a3 )
      v15 = "o";
    else
      v15 = "x";
    sprintf(
      v27,
      "%s %08x midstate %s data %s nonce %s hash %s diff %lld",
      v15,
      a1[85],
      (const char *)v35,
      (const char *)v34,
      (const char *)v32,
      (const char *)v31,
      v29);
    if ( !strcmp((const char *)dword_86920, "screen") )
    {
      if ( byte_90DC0 || byte_865D1 || dword_857E4 > 2 )
      {
        snprintf(v28, 0x800u, v27);
        sub_1DB6C(3, v28, 0);
      }
    }
    else
    {
      if ( byte_90DC0 || byte_865D1 || dword_857E4 > 2 )
      {
        snprintf(v28, 0x800u, v27);
        sub_1DB6C(3, v28, 0);
      }
      if ( dword_86700 )
      {
        v16 = a3 ? "o" : "x";
        sprintf(
          v27,
          "%s %08x work %s midstate %s data %s nonce %s hash %s diff %lld",
          v16,
          a1[85],
          (const char *)ptr,
          (const char *)v35,
          (const char *)v34,
          (const char *)v32,
          (const char *)v31,
          v29);
        v17 = strlen(v27);
        fwrite(v27, v17, 1u, (FILE *)dword_86700);
        fwrite(&word_6A46C, 1u, 1u, (FILE *)dword_86700);
        fflush((FILE *)dword_86700);
        if ( a3 )
        {
          if ( dword_8690C == 1 )
          {
            sprintf(
              v27,
              "midstate %s data %s nonce %s hash %s",
              (const char *)v35,
              (const char *)v34,
              (const char *)v33,
              (const char *)v31);
            v18 = strlen(v27);
            fwrite(v27, v18, 1u, (FILE *)dword_86704[0]);
            fwrite(&word_6A46C, 1u, 1u, (FILE *)dword_86704[0]);
            fflush((FILE *)dword_86704[0]);
          }
          else if ( dword_8690C == 32 || dword_8690C == 64 )
          {
            sprintf(
              v27,
              "midstate %s data %s nonce %s hash %s",
              (const char *)v35,
              (const char *)v34,
              (const char *)v33,
              (const char *)v31);
            v30 = sub_2B2CC(dword_8690C, *a2);
            v19 = strlen(v27);
            fwrite(v27, v19, 1u, (FILE *)dword_86704[v30]);
            fwrite(&word_6A46C, 1u, 1u, (FILE *)dword_86704[v30]);
            fflush((FILE *)dword_86704[v30]);
          }
          if ( byte_86928 )
          {
            v38 = 0;
            v37 = v29;
            do
            {
              v37 >>= 1;
              if ( !v37 )
                break;
              ++v38;
            }
            while ( v38 <= 63 );
            if ( byte_865D0 && (byte_90DC0 || byte_865D1 || dword_857E4 > 6) )
            {
              snprintf(v28, 0x800u, "work diff %lld diffnum %d", v29, v38);
              sub_1DB6C(7, v28, 0);
            }
            sprintf(
              v27,
              "midstate %s data %s nonce %s hash %s",
              (const char *)v35,
              (const char *)v34,
              (const char *)v33,
              (const char *)v31);
            v20 = strlen(v27);
            fwrite(v27, v20, 1u, *((FILE **)&unk_86808 + v38));
            fwrite(&word_6A46C, 1u, 1u, *((FILE **)&unk_86808 + v38));
            fflush(*((FILE **)&unk_86808 + v38));
          }
        }
      }
    }
    if ( ptr )
      free(ptr);
    if ( v35 )
      free(v35);
    if ( v34 )
      free(v34);
    if ( v33 )
      free(v33);
    if ( v32 )
      free(v32);
    if ( v31 )
      free(v31);
  }
}
