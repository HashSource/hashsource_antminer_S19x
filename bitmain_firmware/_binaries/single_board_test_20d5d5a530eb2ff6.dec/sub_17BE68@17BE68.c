int __fastcall sub_17BE68(int a1, int a2)
{
  int v3; // r0
  int v4; // r0
  unsigned int v5; // r3
  int v6; // r0
  char *v7; // r0
  _DWORD *v8; // r10
  _DWORD *v9; // r11
  signed int i; // r5
  char *v11; // r7
  int v12; // r0
  char *v13; // r4
  _DWORD *v14; // r6
  char *v15; // r0
  _DWORD *v16; // r0
  int v17; // r0
  int v18; // r0
  int v20; // r0
  int v21; // r3
  int *v22; // r0
  int *v23; // r0
  const char *v24; // [sp+14h] [bp-30h]
  char v25; // [sp+1Ch] [bp-28h]
  signed int v26; // [sp+24h] [bp-20h]
  int v27; // [sp+28h] [bp-1Ch]
  _DWORD *v29; // [sp+30h] [bp-14h]
  int v30; // [sp+3Ch] [bp-8h] BYREF

  v3 = sub_BBDB4(a1);
  v29 = (_DWORD *)sub_13B390(a2, v3);
  if ( v29 )
  {
    v26 = 0;
    v4 = sub_10C010((int)v29);
    v5 = 0;
    if ( v4 <= 0 )
      return 1;
    while ( 2 )
    {
      v6 = sub_10C01C(v29, v5);
      v24 = *(const char **)(v6 + 4);
      v27 = *(_DWORD *)(v6 + 8);
      v30 = -1;
      v7 = strchr(v24, 46);
      if ( v7 )
        v24 = v7 + 1;
      v8 = (_DWORD *)sub_13B390(a2, v27);
      if ( v8 )
      {
        v25 = 0;
        v9 = 0;
        for ( i = 0; i < sub_10C010((int)v8); ++i )
        {
          v12 = sub_10C01C(v8, i);
          v13 = *(char **)(v12 + 4);
          v14 = (_DWORD *)v12;
          v15 = strchr(v13, 46);
          if ( v15 )
            v13 = v15 + 1;
          v11 = (char *)v14[2];
          if ( !strcmp(v13, "engine_id") )
          {
            v24 = v11;
          }
          else if ( !strcmp(v13, "soft_load") )
          {
            v25 = 1;
          }
          else if ( !strcmp(v13, "dynamic_path") )
          {
            v16 = (_DWORD *)sub_CE7EC("dynamic");
            v9 = v16;
            if ( !v16 )
              goto LABEL_43;
            if ( !sub_15A230(v16, "SO_PATH", v11, 0)
              || !sub_15A230(v9, "LIST_ADD", "2", 0)
              || !sub_15A230(v9, "LOAD", 0, 0) )
            {
              goto LABEL_50;
            }
          }
          else
          {
            if ( !v9 )
            {
              v20 = sub_CE7EC(v24);
              v9 = (_DWORD *)v20;
              if ( v20 )
                v21 = 0;
              else
                v21 = v25 & 1;
              if ( v21 )
              {
                sub_D00F0();
                goto LABEL_36;
              }
              if ( !v20 )
              {
LABEL_43:
                v9 = 0;
                sub_D0048(38, 188, 102, (int)"crypto/engine/eng_cnf.c", 141);
                goto LABEL_44;
              }
            }
            if ( !strcmp(v11, "EMPTY") )
              v11 = 0;
            if ( !strcmp(v13, "init") )
            {
              if ( !sub_13B488(a2, v27, (int)"init", &v30) )
                goto LABEL_50;
              if ( v30 == 1 )
              {
                if ( !sub_CDD6C(v9) )
                  goto LABEL_50;
                v22 = (int *)dword_6E2F90;
                if ( !dword_6E2F90 && (v22 = (int *)sub_10BFCC(), (dword_6E2F90 = (int)v22) == 0)
                  || !sub_10BD3C(v22, (int)v9) )
                {
                  sub_CDDF8((int)v9);
LABEL_50:
                  sub_D0048(38, 188, 102, (int)"crypto/engine/eng_cnf.c", 141);
LABEL_44:
                  sub_D1240(6, "section=", *v14, ", name=", v14[1], ", value=", v14[2]);
LABEL_45:
                  sub_CE00C((int)v9);
                  return 0;
                }
              }
              else if ( v30 )
              {
                sub_D0048(38, 188, 151, (int)"crypto/engine/eng_cnf.c", 122);
                goto LABEL_50;
              }
            }
            else if ( !strcmp(v13, "default_algorithms") )
            {
              if ( !sub_15AC94((int)v9, v11) )
                goto LABEL_50;
            }
            else if ( !sub_15A230(v9, v13, v11, 0) )
            {
              goto LABEL_50;
            }
          }
        }
        v17 = (int)v9;
        if ( !v9 || v30 != -1 )
          goto LABEL_35;
        if ( sub_CDD6C(v9) )
        {
          v23 = (int *)dword_6E2F90;
          if ( dword_6E2F90 || (v23 = (int *)sub_10BFCC(), (dword_6E2F90 = (int)v23) != 0) )
          {
            if ( sub_10BD3C(v23, (int)v9) )
            {
              v17 = (int)v9;
LABEL_35:
              sub_CE00C(v17);
LABEL_36:
              ++v26;
              v18 = sub_10C010((int)v29);
              v5 = v26;
              if ( v26 < v18 )
                continue;
              return 1;
            }
          }
          sub_CDDF8((int)v9);
        }
        sub_D0048(38, 188, 102, (int)"crypto/engine/eng_cnf.c", 141);
        goto LABEL_45;
      }
      break;
    }
    sub_D0048(38, 188, 149, (int)"crypto/engine/eng_cnf.c", 61);
    return 0;
  }
  else
  {
    sub_D0048(38, 187, 148, (int)"crypto/engine/eng_cnf.c", 165);
    return 0;
  }
}
