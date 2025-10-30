int __fastcall sub_286DA0(int a1)
{
  int v1; // r10
  char *v2; // r8
  size_t v4; // r0
  char *v5; // r0
  char *(__fastcall *v6)(char *, int); // r3
  int v7; // r2
  const char *v8; // r11
  const char **v9; // r0
  bool v10; // zf
  int v11; // r3
  int v12; // r0
  int v13; // r1
  const char *v14; // r0
  int v15; // r1
  const char **v16; // r7
  unsigned __int8 v18; // r0
  __int64 v19; // r0
  const char *v20; // r3
  const char **v21; // r5
  const char *v22; // r0
  const char **v23; // r5
  const char *v24; // r10
  const char *v25; // t1
  int v26; // r2
  const char *v27; // r7
  int v28; // [sp+Ch] [bp-20h]
  _BOOL4 v29; // [sp+Ch] [bp-20h]
  char *(__fastcall *v30)(char *, int); // [sp+Ch] [bp-20h]
  int (__fastcall *v31)(const char *, signed int); // [sp+10h] [bp-1Ch]
  int v32; // [sp+10h] [bp-1Ch]
  int v33; // [sp+10h] [bp-1Ch]
  signed int v34; // [sp+14h] [bp-18h]
  unsigned __int8 v35; // [sp+1Bh] [bp-11h] BYREF
  const char **v36; // [sp+1Ch] [bp-10h] BYREF
  int v37; // [sp+20h] [bp-Ch] BYREF
  int v38; // [sp+24h] [bp-8h] BYREF

  v2 = (char *)dword_48AAD4;
  dword_48AAA0 |= 0x4000u;
  dword_4900EC = dword_48AD34;
  dword_48AD30 = a1;
  dword_48ACC0 = 0;
  dword_48ACB8 = 0;
  dword_48ACBC = 0;
  dword_47074C = 1;
  dword_470740 = 32;
  if ( dword_48AAD4 )
  {
    v4 = strlen((const char *)dword_48AAD4);
    v5 = (char *)sub_93028(v4 + 1);
    v2 = strcpy(v5, (const char *)dword_48AAD4);
  }
  v6 = (char *(__fastcall *)(char *, int))dword_48AD38;
  v7 = dword_4900D8;
  if ( !dword_48AD38 )
    v6 = sub_284C1C;
  v37 = 0;
  v38 = 0;
  if ( !dword_4900D8 )
    v1 = 0;
  v35 = 0;
  if ( dword_4900D8 )
  {
    v33 = dword_4900D8;
    v30 = v6;
    v18 = sub_286230(&v38, &v37);
    v1 = dword_4900D8;
    v35 = v18;
    v6 = v30;
    v7 = v33;
  }
  v31 = (int (__fastcall *)(const char *, signed int))v6;
  dword_4900D8 = v7;
  v28 = v7;
  v8 = (const char *)sub_2912A8(v1, v7);
  v9 = (const char **)sub_286D08(v8, v1, v28, v31, v38, v35);
  v36 = v9;
  if ( v9 )
    v29 = strcmp(v8, *v9) != 0;
  else
    v29 = 0;
  v10 = a1 == 64;
  if ( a1 != 64 )
    v10 = a1 == 33;
  v11 = v10;
  v32 = v11;
  if ( v10 )
    v34 = strlen(v8);
  v12 = sub_297758(v8);
  if ( v36 )
  {
    v14 = (const char *)sub_285C20(&v36, dword_48ACC0);
    if ( v14 )
    {
      if ( a1 == 42 )
      {
        v21 = v36;
        sub_2926F8(v14);
        if ( v35 && v1 && *(unsigned __int8 *)(dword_48AAD4 + v1 - 1) == v35 )
          --v1;
        sub_294F5C(v1, dword_4900D8);
        v22 = v21[1];
        dword_4900D8 = v1;
        if ( v22 )
        {
          v23 = v21 + 1;
          do
          {
            v24 = sub_285EC8(v22, 1, &v35);
            sub_294F3C(v24);
            sub_294F3C(&word_3E1F84);
            if ( v24 != *v23 )
              sub_297758(v24);
            v25 = v23[1];
            ++v23;
            v22 = v25;
          }
          while ( v25 );
        }
        else
        {
          v27 = sub_285EC8(*v21, 1, &v35);
          sub_294F3C(v27);
          v22 = (const char *)sub_294F3C(&word_3E1F84);
          if ( v27 != *v21 )
            v22 = (const char *)sub_297758(v27);
        }
        sub_292748(v22);
        v16 = v36;
        goto LABEL_26;
      }
      if ( a1 <= 42 )
      {
        if ( a1 != 9 && a1 != 33 )
        {
LABEL_38:
          v19 = sub_2914C8("bad value %d for what_to_do in rl_complete", a1);
          sub_2945C8(v19, HIDWORD(v19));
          if ( v2 )
            free(v2);
          dword_4900F0 = 0;
          dword_4900F8 = 0;
          dword_48AAA0 &= ~0x4000u;
          return 1;
        }
      }
      else
      {
        if ( a1 == 63 )
        {
          sub_286AA8((int)v36);
          v16 = v36;
LABEL_26:
          if ( v16 )
            sub_286184(v16);
          if ( v2 )
          {
            dword_48AD04 = strcmp((const char *)dword_48AAD4, v2) != 0;
            sub_297758(v2);
          }
          dword_4900F0 = 0;
          dword_48AAA0 &= ~0x4000u;
          dword_4900F8 = 0;
          return 0;
        }
        if ( a1 != 64 )
          goto LABEL_38;
      }
      v16 = v36;
      v20 = v36[1];
      if ( a1 == 9 )
      {
        if ( **v36 )
        {
          if ( v20 )
            v26 = 2;
          else
            v26 = 1;
          v14 = sub_285F80(*v36, v1, v26, &v35);
          v16 = v36;
          v20 = v36[1];
        }
        if ( v20 )
          goto LABEL_71;
      }
      else
      {
        if ( **v36 )
        {
          if ( v20 )
          {
            v14 = (const char *)strlen(*v36);
            if ( v34 > (int)v14 )
            {
LABEL_49:
              if ( a1 == 33 )
                goto LABEL_52;
              if ( v32 )
              {
                if ( v29 )
                  goto LABEL_26;
LABEL_52:
                sub_286AA8((int)v16);
                v16 = v36;
                goto LABEL_26;
              }
LABEL_71:
              if ( dword_46DED4 )
              {
                sub_2945C8(v14, v15);
                v16 = v36;
              }
              goto LABEL_26;
            }
            v14 = sub_285F80(*v36, v1, 2, &v35);
            v16 = v36;
            v20 = v36[1];
          }
          else
          {
            v14 = sub_285F80(*v36, v1, 1, &v35);
            v16 = v36;
            v20 = v36[1];
          }
        }
        if ( v20 )
          goto LABEL_49;
      }
      sub_2849A0((int)*v16, v37, v35, v29);
      v16 = v36;
      goto LABEL_26;
    }
    sub_2945C8(0, v15);
    if ( v2 )
      free(v2);
    dword_4900F0 = 0;
    dword_48AAA0 &= ~0x4000u;
    dword_48AD04 = 0;
    dword_4900F8 = 0;
    return 0;
  }
  else
  {
    sub_2945C8(v12, v13);
    if ( v2 )
      free(v2);
    dword_4900F0 = 0;
    dword_48AAA0 &= ~0x4000u;
    dword_48AD04 = 0;
    dword_4900F8 = 0;
    return 0;
  }
}
