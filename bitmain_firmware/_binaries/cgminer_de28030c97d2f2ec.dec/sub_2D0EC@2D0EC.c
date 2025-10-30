void __fastcall sub_2D0EC(_DWORD *a1, char *a2, char a3)
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
  int v24; // [sp+30h] [bp-CA4h] BYREF
  int v25; // [sp+34h] [bp-CA0h]
  int v26; // [sp+38h] [bp-C9Ch]
  int v27; // [sp+3Ch] [bp-C98h]
  int v28; // [sp+40h] [bp-C94h]
  int v29; // [sp+44h] [bp-C90h]
  int v30; // [sp+48h] [bp-C8Ch]
  int v31; // [sp+4Ch] [bp-C88h]
  _BYTE v32[32]; // [sp+50h] [bp-C84h] BYREF
  int v33; // [sp+70h] [bp-C64h] BYREF
  int v34; // [sp+74h] [bp-C60h]
  int v35; // [sp+78h] [bp-C5Ch]
  int v36; // [sp+7Ch] [bp-C58h]
  int v37; // [sp+80h] [bp-C54h]
  int v38; // [sp+84h] [bp-C50h]
  int v39; // [sp+88h] [bp-C4Ch]
  int v40; // [sp+8Ch] [bp-C48h]
  char v41[1024]; // [sp+90h] [bp-C44h] BYREF
  char v42[20]; // [sp+490h] [bp-844h] BYREF
  double v43; // [sp+C90h] [bp-44h]
  int v44; // [sp+C9Ch] [bp-38h]
  void *v45; // [sp+CA0h] [bp-34h]
  void *v46; // [sp+CA4h] [bp-30h]
  void *v47; // [sp+CA8h] [bp-2Ch]
  void *v48; // [sp+CACh] [bp-28h]
  void *v49; // [sp+CB0h] [bp-24h]
  void *ptr; // [sp+CB4h] [bp-20h]
  double v51; // [sp+CB8h] [bp-1Ch]
  int v52; // [sp+CC4h] [bp-10h]

  if ( dword_87AB8 )
  {
    memset(v41, 0, sizeof(v41));
    v24 = 0;
    v25 = 0;
    v26 = 0;
    v27 = 0;
    v28 = 0;
    v29 = 0;
    v30 = 0;
    v31 = 0;
    memset(v32, 0, sizeof(v32));
    v33 = 0;
    v34 = 0;
    v35 = 0;
    v36 = 0;
    v37 = 0;
    v38 = 0;
    v39 = 0;
    v40 = 0;
    ptr = 0;
    v49 = 0;
    v48 = 0;
    v47 = 0;
    v46 = 0;
    v45 = 0;
    v44 = 0;
    v43 = 0.0;
    v3 = a1[33];
    v4 = a1[34];
    v5 = a1[35];
    v24 = a1[32];
    v25 = v3;
    v26 = v4;
    v27 = v5;
    v6 = a1[37];
    v7 = a1[38];
    v8 = a1[39];
    v28 = a1[36];
    v29 = v6;
    v30 = v7;
    v31 = v8;
    memcpy(v32, a1 + 16, 0xCu);
    v9 = a1[49];
    v10 = a1[50];
    v11 = a1[51];
    v33 = a1[48];
    v34 = v9;
    v35 = v10;
    v36 = v11;
    v12 = a1[53];
    v13 = a1[54];
    v14 = a1[55];
    v37 = a1[52];
    v38 = v12;
    v39 = v13;
    v40 = v14;
    sub_2C208((int)&v24, 32);
    sub_2C208((int)v32, 12);
    sub_2C208((int)&v33, 32);
    ptr = sub_20744((int)a1, 128);
    v49 = sub_20744((int)&v24, 32);
    v48 = sub_20744((int)v32, 12);
    v47 = sub_20744((int)a2, 4);
    v46 = sub_20744((int)a2, 5);
    v45 = sub_20744((int)&v33, 32);
    *(_QWORD *)&v43 = sub_36274(a1);
    if ( a3 )
      v15 = "o";
    else
      v15 = "x";
    sprintf(
      v41,
      "%s %08x midstate %s data %s nonce %s hash %s diff %lld",
      v15,
      a1[85],
      (const char *)v49,
      (const char *)v48,
      (const char *)v46,
      (const char *)v45,
      v43);
    if ( !strcmp((const char *)dword_87AB8, "screen") )
    {
      if ( byte_91F58 || byte_87769 || dword_8697C > 2 )
      {
        snprintf(v42, 0x800u, v41);
        sub_1E4EC(3, v42, 0);
      }
    }
    else
    {
      if ( byte_91F58 || byte_87769 || dword_8697C > 2 )
      {
        snprintf(v42, 0x800u, v41);
        sub_1E4EC(3, v42, 0);
      }
      if ( dword_87898 )
      {
        v16 = a3 ? "o" : "x";
        sprintf(
          v41,
          "%s %08x work %s midstate %s data %s nonce %s hash %s diff %lld",
          v16,
          a1[85],
          (const char *)ptr,
          (const char *)v49,
          (const char *)v48,
          (const char *)v46,
          (const char *)v45,
          v43);
        v17 = strlen(v41);
        fwrite(v41, v17, 1u, (FILE *)dword_87898);
        fwrite(&word_6B0EC, 1u, 1u, (FILE *)dword_87898);
        fflush((FILE *)dword_87898);
        if ( a3 )
        {
          if ( dword_87AA4 == 1 )
          {
            sprintf(
              v41,
              "midstate %s data %s nonce %s hash %s",
              (const char *)v49,
              (const char *)v48,
              (const char *)v47,
              (const char *)v45);
            v18 = strlen(v41);
            fwrite(v41, v18, 1u, (FILE *)dword_8789C[0]);
            fwrite(&word_6B0EC, 1u, 1u, (FILE *)dword_8789C[0]);
            fflush((FILE *)dword_8789C[0]);
          }
          else if ( dword_87AA4 == 32 || dword_87AA4 == 64 )
          {
            sprintf(
              v41,
              "midstate %s data %s nonce %s hash %s",
              (const char *)v49,
              (const char *)v48,
              (const char *)v47,
              (const char *)v45);
            v44 = sub_2C2B0(dword_87AA4, *a2);
            v19 = strlen(v41);
            fwrite(v41, v19, 1u, (FILE *)dword_8789C[v44]);
            fwrite(&word_6B0EC, 1u, 1u, (FILE *)dword_8789C[v44]);
            fflush((FILE *)dword_8789C[v44]);
          }
          if ( byte_87AC0 )
          {
            v52 = 0;
            v51 = v43;
            do
            {
              *(_QWORD *)&v51 >>= 1;
              if ( v51 == 0.0 )
                break;
              ++v52;
            }
            while ( v52 <= 63 );
            if ( byte_87768 && (byte_91F58 || byte_87769 || dword_8697C > 6) )
            {
              snprintf(v42, 0x800u, "work diff %lld diffnum %d", v43, v52);
              sub_1E4EC(7, v42, 0);
            }
            sprintf(
              v41,
              "midstate %s data %s nonce %s hash %s",
              (const char *)v49,
              (const char *)v48,
              (const char *)v47,
              (const char *)v45);
            v20 = strlen(v41);
            fwrite(v41, v20, 1u, *((FILE **)&unk_879A0 + v52));
            fwrite(&word_6B0EC, 1u, 1u, *((FILE **)&unk_879A0 + v52));
            fflush(*((FILE **)&unk_879A0 + v52));
          }
        }
      }
    }
    if ( ptr )
      free(ptr);
    if ( v49 )
      free(v49);
    if ( v48 )
      free(v48);
    if ( v47 )
      free(v47);
    if ( v46 )
      free(v46);
    if ( v45 )
      free(v45);
  }
}
