int __fastcall sub_243ED8(char *a1, int a2, char *a3)
{
  char *v3; // r3
  int v5; // r2
  int v6; // r3
  int *v7; // r5
  int v8; // r2
  FILE *v9; // r9
  int v10; // r7
  _DWORD *v11; // r0
  int *v12; // r5
  int v13; // r6
  int v14; // r3
  int v15; // r7
  _DWORD *v16; // r6
  int v17; // r8
  int *v18; // r3
  int v19; // r0
  const char *v20; // r0
  int v21; // r0
  int v22; // r5
  int (__fastcall *v24)(char *); // r1
  size_t v25; // r5
  size_t v26; // r0
  char *v27; // r1
  void *v28; // r0
  size_t v29; // r6
  char *v30; // r1
  char dest[4]; // [sp+8h] [bp-D4h] BYREF
  char *v32; // [sp+Ch] [bp-D0h]
  int *v33; // [sp+10h] [bp-CCh]
  int v34; // [sp+14h] [bp-C8h]
  int v35; // [sp+18h] [bp-C4h]
  int v36; // [sp+1Ch] [bp-C0h]
  char *s; // [sp+20h] [bp-BCh]
  int *v38; // [sp+24h] [bp-B8h]
  char v39; // [sp+2Ah] [bp-B2h] BYREF
  char v40; // [sp+2Bh] [bp-B1h] BYREF
  int v41[2]; // [sp+2Ch] [bp-B0h] BYREF
  int v42; // [sp+34h] [bp-A8h] BYREF
  _DWORD v43[33]; // [sp+38h] [bp-A4h] BYREF

  v38 = &dword_487668;
  v3 = "";
  if ( a3 )
    v3 = a3;
  s = v3;
  v5 = *(_DWORD *)(dword_487668 + 44);
  v6 = *(_DWORD *)(dword_487668 + 48);
  v34 = a2;
  v35 = v5;
  v36 = v6;
  if ( v6 == v5 && dword_48968C > 1 )
  {
    v25 = strlen(s);
    if ( a1 )
    {
      v26 = strlen(a1);
      v27 = a1;
      a1 = dest;
      memcpy(dest, v27, v26 + 1);
    }
    else
    {
      a1 = dest;
      dest[0] = 0;
    }
    v29 = strlen(dest);
    v30 = s;
    *(_DWORD *)&dest[v29] = 1710602;
    memcpy(&dest[v29 + 3], v30, v25);
    *(_WORD *)&dest[v29 + 3 + v25] = 10;
  }
  if ( !dword_48A52C )
  {
    sub_92080(&unk_48A530);
    dword_48A52C = 1;
  }
  dword_48A538 = 0;
  v33 = &dword_475220;
  if ( dword_475220 )
    signal(20, (__sighandler_t)sub_1538BC);
  v32 = "";
  while ( 1 )
  {
    sub_259B58(v32);
    v7 = v38;
    sub_25680C(*(_DWORD *)(*v38 + 72));
    sub_25680C(*(_DWORD *)(*v7 + 80));
    if ( dword_48A53C )
      ++dword_48A540;
    if ( v36 == v35 )
    {
      if ( dword_48968C > 1 )
      {
        sub_25A6E8(&unk_3EC8D0);
        sub_25A6E8(s);
        sub_25A6E8(&word_356638);
        if ( dword_48A544 )
        {
LABEL_42:
          v8 = *v38;
          if ( !dword_487A50 && sub_242EE0(v8) )
          {
            v20 = (const char *)v24(a1);
            goto LABEL_30;
          }
          goto LABEL_13;
        }
      }
      else if ( dword_48A544 )
      {
        goto LABEL_42;
      }
      v8 = *v38;
      if ( dword_48A548 && !dword_487A50 && sub_242EE0(v8) )
      {
        v20 = (const char *)sub_243CB4(a1);
        goto LABEL_30;
      }
    }
    else
    {
      v8 = *v38;
    }
LABEL_13:
    v9 = *(FILE **)(v8 + 48);
    if ( !v9 )
      v9 = (FILE *)stdin;
    v10 = fileno(v9);
    v11 = sub_92080(v41);
    if ( a1 )
    {
      v12 = v38;
      sub_256850(a1, *(_DWORD *)(*v38 + 72));
      v11 = (_DWORD *)sub_25680C(*(_DWORD *)(*v12 + 72));
    }
    v13 = v10 / 32;
    LOBYTE(v14) = v10 & 0x1F;
    if ( v10 <= 0 )
      v14 = -(-v10 & 0x1F);
    v15 = v10 + 1;
    v16 = &v43[v13 + 32];
    v17 = 1 << v14;
    while ( 1 )
    {
      while ( 1 )
      {
        sub_258BD4(v11);
        v18 = &v42;
        do
        {
          v18[1] = 0;
          ++v18;
        }
        while ( &v43[31] != v18 );
        *(v16 - 32) |= v17;
        if ( sub_154724(v15, (fd_set *)v43, 0, 0, 0) != -1 )
          break;
        v11 = _errno_location();
        if ( *v11 != 4 )
          sub_258B04("select");
      }
      v19 = fgetc(v9);
      if ( v19 == -1 )
        break;
      if ( v19 == 10 )
      {
        if ( v42 && *(_BYTE *)(v41[0] + v42 - 1) == 13 )
          --v42;
        goto LABEL_29;
      }
      v40 = v19;
      v11 = sub_92044(v41, &v40, 1u);
    }
    if ( v42 )
    {
LABEL_29:
      v39 = 0;
      sub_92044(v41, &v39, 1u);
      v20 = (const char *)sub_92094(v41);
      goto LABEL_30;
    }
    v28 = (void *)sub_92094(v41);
    if ( v28 )
      free(v28);
    v20 = 0;
LABEL_30:
    v21 = sub_1542C0((int *)&unk_48A530, v20, v34, (int)s);
    if ( v21 == -1 )
      break;
    a1 = 0;
    if ( v21 )
    {
      v22 = v21;
      goto LABEL_33;
    }
  }
  v22 = 0;
LABEL_33:
  if ( *v33 )
    signal(20, 0);
  return v22;
}
