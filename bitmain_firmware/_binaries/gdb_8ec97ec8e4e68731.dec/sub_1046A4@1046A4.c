_DWORD *__fastcall sub_1046A4(_DWORD *a1, int a2, char *a3, int a4, int a5)
{
  char *v6; // r4
  char *v9; // r6
  int v10; // r1
  int v12; // r1
  _DWORD *v13; // r2
  int v14; // r3
  _DWORD *v15; // r8
  char *v16; // r2
  const char *v17; // r1
  int v18; // r1
  bool v19; // zf
  int v20; // r1
  int v21; // r0
  int v22; // r1
  const char *v23; // r1
  _DWORD *v24; // r4
  const char *v25; // t1
  char *v26; // r1
  size_t v27; // r0
  int v28; // r2
  int v29; // t1
  int v30; // [sp+10h] [bp-2Ch]
  char *s2; // [sp+14h] [bp-28h]
  char *s2a; // [sp+14h] [bp-28h]
  char *s2b; // [sp+14h] [bp-28h]
  int v34; // [sp+18h] [bp-24h]
  _DWORD *v35; // [sp+1Ch] [bp-20h]
  _DWORD v36[2]; // [sp+20h] [bp-1Ch] BYREF
  int v37; // [sp+28h] [bp-14h] BYREF
  int v38; // [sp+2Ch] [bp-10h]
  int v39; // [sp+30h] [bp-Ch] BYREF
  int v40; // [sp+34h] [bp-8h]

  v6 = (char *)a4;
  v9 = sub_C25A8(a4);
  ((void (__fastcall *)(_DWORD *, int, char *, char *, int, char *, _DWORD))loc_104508)(v36, a2, a3, v6, a5, v9, 0);
  if ( v36[0] )
  {
    v10 = v36[1];
    *a1 = v36[0];
    a1[1] = v10;
    return a1;
  }
  sub_10414C(&v37, v9, a3, v6, a5, 1);
  if ( !v37 )
  {
    LOWORD(v13) = (unsigned __int16)&unk_3E3B0C;
    if ( !v6 )
    {
      HIWORD(v13) = (unsigned int)&unk_3E3B0C >> 16;
LABEL_23:
      v20 = v13[1];
      *a1 = *v13;
      a1[1] = v20;
      return a1;
    }
    HIWORD(v13) = (unsigned int)&unk_3E3B0C >> 16;
    v34 = v37;
    v35 = v13;
    while ( 1 )
    {
      sub_10414C(&v39, v9, a3, v6, a5, 1);
      v14 = v39;
      if ( v39 )
      {
        v37 = v39;
        v38 = v40;
        goto LABEL_10;
      }
      v15 = (_DWORD *)sub_C2618((int)v6);
      if ( v15 )
        break;
LABEL_20:
      v18 = v35[1];
      v13 = v35;
      v14 = *v35;
      v19 = *v35 == 0;
      v37 = *v35;
      v38 = v18;
      if ( !v19 )
      {
LABEL_10:
        v37 = v14;
        goto LABEL_5;
      }
      v6 = (char *)*((_DWORD *)v6 + 3);
      if ( !v6 )
        goto LABEL_23;
    }
    while ( 1 )
    {
      if ( v15[5] )
        goto LABEL_19;
      v30 = strcmp(v9, (const char *)v15[1]);
      if ( v30 )
        goto LABEL_19;
      v16 = (char *)v15[3];
      v15[5] = 1;
      if ( !v16 )
        goto LABEL_27;
      v17 = (const char *)v15[2];
      s2 = v16;
      if ( !v17 )
        v17 = v16;
      if ( !strcmp(a3, v17) )
      {
        sub_10414C(&v39, (char *)*v15, s2, v6, a5, 1);
        v14 = v39;
        if ( v39 )
          goto LABEL_25;
        if ( !v15[3] )
        {
LABEL_27:
          v23 = (const char *)v15[6];
          if ( v23 )
          {
            s2a = v6;
            v24 = v15 + 6;
            do
            {
              if ( !strcmp(a3, v23) )
              {
                v6 = s2a;
                goto LABEL_18;
              }
              v25 = (const char *)v24[1];
              ++v24;
              v23 = v25;
            }
            while ( v25 );
            v6 = s2a;
          }
          if ( !v15[2] )
          {
            sub_10414C(&v39, (char *)*v15, a3, v6, a5, 1);
LABEL_37:
            v14 = v39;
            if ( v39 )
            {
LABEL_25:
              v21 = v39;
              v22 = v40;
              v15[5] = 0;
              v37 = v21;
              v38 = v22;
              goto LABEL_10;
            }
            goto LABEL_18;
          }
          s2b = (char *)v15[2];
          if ( !strcmp(a3, s2b) )
          {
            ((void (__fastcall *)(int *, _DWORD, _DWORD, char *, int, char *, _DWORD))loc_104508)(
              &v39,
              0,
              *v15,
              v6,
              a5,
              v9,
              0);
            goto LABEL_37;
          }
          if ( *a3 == 46 )
            goto LABEL_45;
          if ( *a3 )
          {
            v26 = a3;
            v27 = 0;
            while ( 1 )
            {
              v29 = (unsigned __int8)*++v26;
              v28 = v29;
              ++v27;
              if ( v29 == 46 )
                break;
              if ( !v28 )
                goto LABEL_18;
            }
            v30 = v27;
            if ( !strncmp(a3, s2b, v27) )
            {
LABEL_45:
              sub_10414C(&v39, (char *)*v15, &a3[v30 + 1], v6, a5, 1);
              goto LABEL_37;
            }
          }
        }
      }
LABEL_18:
      v15[5] = v34;
LABEL_19:
      v15 = (_DWORD *)v15[4];
      if ( !v15 )
        goto LABEL_20;
    }
  }
LABEL_5:
  v12 = v38;
  *a1 = v37;
  a1[1] = v12;
  return a1;
}
