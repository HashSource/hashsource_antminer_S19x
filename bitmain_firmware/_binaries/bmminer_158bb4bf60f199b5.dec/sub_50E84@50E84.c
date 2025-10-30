void __fastcall sub_50E84(_DWORD *a1, char *a2, int a3)
{
  int v5; // r0
  int v6; // r1
  int v7; // r2
  int v8; // r3
  int v9; // r0
  int v10; // r1
  int v11; // r2
  int v12; // r3
  int *v13; // lr
  _DWORD *v14; // r12
  int v15; // r1
  int v16; // r2
  int v17; // r1
  int v18; // r2
  int v19; // r3
  int v20; // r1
  int v21; // r2
  int v22; // r3
  char v23; // r3
  char v24; // t1
  char v25; // t1
  char *v26; // r2
  _DWORD *v27; // r3
  char v28; // t1
  char v29; // r1
  _DWORD *v30; // r3
  char *v31; // r2
  char v32; // r1
  char v33; // t1
  char v34; // t1
  const char *v35; // r5
  char *v36; // r8
  char *v37; // r7
  char *v38; // r9
  char *v39; // r6
  int v40; // r0
  int v41; // r1
  size_t v42; // r0
  int v43; // r4
  size_t v44; // r0
  unsigned __int64 v45; // r2
  int i; // r4
  size_t v47; // r0
  size_t v48; // r0
  char *ptr; // [sp+20h] [bp-C7Ch]
  char *v51; // [sp+28h] [bp-C74h]
  __int64 v52; // [sp+2Ch] [bp-C70h]
  char *v53; // [sp+34h] [bp-C68h] BYREF
  _DWORD v54[3]; // [sp+38h] [bp-C64h] BYREF
  _DWORD v55[5]; // [sp+44h] [bp-C58h] BYREF
  int v56; // [sp+58h] [bp-C44h] BYREF
  _DWORD v57[2]; // [sp+5Ch] [bp-C40h] BYREF
  _DWORD v58[4]; // [sp+64h] [bp-C38h] BYREF
  int v59; // [sp+74h] [bp-C28h] BYREF
  _DWORD v60[3]; // [sp+78h] [bp-C24h] BYREF
  _DWORD v61[5]; // [sp+84h] [bp-C18h] BYREF
  char s[1024]; // [sp+98h] [bp-C04h] BYREF
  char v63[2052]; // [sp+498h] [bp-804h] BYREF

  memset(s, 0, sizeof(s));
  v5 = a1[32];
  memset(v58, 0, sizeof(v58));
  v6 = a1[33];
  v7 = a1[34];
  v8 = a1[35];
  v54[0] = v5;
  v54[1] = v6;
  v54[2] = v7;
  v55[0] = v8;
  v9 = a1[36];
  v10 = a1[37];
  v11 = a1[38];
  v12 = a1[39];
  v13 = &v56;
  v59 = 0;
  v55[1] = v9;
  v55[2] = v10;
  v55[3] = v11;
  v55[4] = v12;
  v14 = (char **)((char *)&v53 + 3);
  v15 = a1[17];
  v16 = a1[18];
  v56 = a1[16];
  v57[0] = v15;
  v57[1] = v16;
  v17 = a1[49];
  v18 = a1[50];
  v19 = a1[51];
  v60[0] = a1[48];
  v60[1] = v17;
  v60[2] = v18;
  v61[0] = v19;
  v20 = a1[53];
  v21 = a1[54];
  v22 = a1[55];
  v61[1] = a1[52];
  v61[2] = v20;
  v61[3] = v21;
  v61[4] = v22;
  do
  {
    v24 = *((_BYTE *)v14 + 1);
    v14 = (_DWORD *)((char *)v14 + 1);
    v23 = v24;
    v25 = *((_BYTE *)v13 - 1);
    v13 = (int *)((char *)v13 - 1);
    *(_BYTE *)v14 = v25;
    *(_BYTE *)v13 = v23;
  }
  while ( v14 != (_DWORD *)((char *)v55 + 3) );
  v26 = (char *)&v56;
  v27 = v58;
  do
  {
    v28 = *((_BYTE *)v27 - 1);
    v27 = (_DWORD *)((char *)v27 - 1);
    v29 = *v26;
    *v26++ = v28;
    *(_BYTE *)v27 = v29;
  }
  while ( (_DWORD *)((char *)v57 + 2) != v27 );
  v30 = (int *)((char *)&v59 + 3);
  v31 = s;
  do
  {
    v33 = *((_BYTE *)v30 + 1);
    v30 = (_DWORD *)((char *)v30 + 1);
    v32 = v33;
    v34 = *--v31;
    *(_BYTE *)v30 = v34;
    *v31 = v32;
  }
  while ( v30 != (_DWORD *)((char *)v61 + 3) );
  ptr = sub_4988C((int)a1, 128);
  v35 = "o";
  v36 = sub_4988C((int)v54, 32);
  v37 = sub_4988C((int)&v56, 12);
  v51 = sub_4988C((int)a2, 4);
  v38 = sub_4988C((int)a2, 5);
  v39 = sub_4988C((int)v60, 32);
  v40 = sub_532CC(a1);
  HIDWORD(v52) = v41;
  if ( !a3 )
    v35 = "x";
  LODWORD(v52) = v40;
  sprintf(s, "%s %08x midstate %s data %s nonce %s hash %s diff %lld", v35, a1[85], v36, v37, v38, v39, v40, v41);
  if ( !strcmp((const char *)dword_1AECD0, "screen") )
  {
    if ( byte_244080 || byte_1AECC4 || dword_9E320 > 2 )
    {
      snprintf(v63, 0x800u, s);
      sub_47AB4(3, v63, 0);
    }
  }
  else
  {
    v53 = &byte_244080;
    if ( byte_244080 || byte_1AECC4 || dword_9E320 > 2 )
    {
      snprintf(v63, 0x800u, s);
      sub_47AB4(3, v63, 0);
    }
    if ( dword_1B0D34 )
    {
      sprintf(
        s,
        "%s %08x work %s midstate %s data %s nonce %s hash %s diff %lld",
        v35,
        a1[85],
        ptr,
        v36,
        v37,
        v38,
        v39,
        v52);
      v42 = strlen(s);
      fwrite(s, v42, 1u, (FILE *)dword_1B0D34);
      fwrite(&word_8B454, 1u, 1u, (FILE *)dword_1B0D34);
      fflush((FILE *)dword_1B0D34);
      if ( a3 )
      {
        if ( dword_1B0B28 == 1 )
        {
          sprintf(s, "midstate %s data %s nonce %s hash %s", v36, v37, v51, v39);
          v48 = strlen(s);
          fwrite(s, v48, 1u, (FILE *)dword_1B0C30[0]);
          fwrite(&word_8B454, 1u, 1u, (FILE *)dword_1B0C30[0]);
          fflush((FILE *)dword_1B0C30[0]);
        }
        else if ( ((dword_1B0B28 - 32) & 0xFFFFFFDF) == 0 )
        {
          sprintf(s, "midstate %s data %s nonce %s hash %s", v36, v37, v51, v39);
          v43 = sub_50B9C(dword_1B0B28, *a2);
          v44 = strlen(s);
          fwrite(s, v44, 1u, (FILE *)dword_1B0C30[v43]);
          fwrite(&word_8B454, 1u, 1u, (FILE *)dword_1B0C30[v43]);
          fflush((FILE *)dword_1B0C30[v43]);
        }
        if ( byte_1B0B24 )
        {
          v45 = v52;
          for ( i = 0; i != 64; ++i )
          {
            v45 >>= 1;
            if ( !v45 )
              break;
          }
          if ( byte_1AECC5 && (*v53 || byte_1AECC4 || dword_9E320 > 6) )
          {
            snprintf(v63, 0x800u, "work diff %lld diffnum %d", v52, i);
            sub_47AB4(7, v63, 0);
          }
          sprintf(s, "midstate %s data %s nonce %s hash %s", v36, v37, v51, v39);
          v47 = strlen(s);
          fwrite(s, v47, 1u, *((FILE **)&unk_1B0B2C + i));
          fwrite(&word_8B454, 1u, 1u, *((FILE **)&unk_1B0B2C + i));
          fflush(*((FILE **)&unk_1B0B2C + i));
        }
      }
    }
  }
  if ( ptr )
    free(ptr);
  if ( v36 )
    free(v36);
  if ( v37 )
    free(v37);
  if ( v51 )
    free(v51);
  if ( v38 )
    free(v38);
  if ( v39 )
    free(v39);
}
