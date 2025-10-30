void __fastcall __noreturn sub_8B180(int a1, int a2)
{
  int v2; // r7
  char *v4; // r0
  FILE *v5; // r2
  char v6; // r1
  int v7; // r12
  int v8; // r8
  char v9; // r1
  int v10; // r12
  int v11; // r0
  char *v12; // r1
  char *v13; // r2
  int v14; // r0
  int v15; // r9
  int v16; // r3
  int v17; // r3
  int v18; // r3
  const char *v19; // r0
  const char *v20; // r0
  int v21; // r0
  _DWORD *v22; // r0
  const char *v23; // r0
  int v24; // r3
  int v25; // r2
  int v26; // r12
  int v27; // r3
  int v28; // r0
  int v29; // r9
  int v30; // r7
  int v31; // r3
  const char *v32; // r1
  __int16 v33; // r2
  char *s; // [sp+8h] [bp-24h] BYREF
  char dest[24]; // [sp+Ch] [bp-20h] BYREF

  v2 = a2;
  if ( a2 == 10064 )
  {
    byte_1083F0 = 0;
    sub_88348((int *)(a1 + 12), 0);
  }
  else
  {
    byte_1083F0 = 0;
    sub_88348((int *)(a1 + 12), 0);
    if ( v2 )
    {
      if ( *(int *)a1 < 122880 )
      {
        v5 = (FILE *)option_usage_fp;
        if ( option_usage_fp )
        {
LABEL_51:
          fprintf(v5, *(const char **)(a1 + 56), *(_DWORD *)(a1 + 28));
          v14 = *(_DWORD *)(a1 + 12);
          if ( (v14 & 0x4000) != 0 )
          {
            if ( *(int *)a1 >= 155648 )
            {
              v24 = *(_DWORD *)(a1 + 104);
              v25 = *(_DWORD *)(a1 + 68) + (v24 << 6);
              if ( *(_DWORD *)(v25 + 20) != 3 )
              {
                v26 = *(_DWORD *)(a1 + 100);
                v27 = v24 + 1;
                if ( v27 >= v26 )
LABEL_98:
                  sub_7E31C((int)off_B948C);
                while ( 1 )
                {
                  v25 += 64;
                  if ( *(_DWORD *)(v25 + 20) == 3 )
                    break;
                  if ( ++v27 == v26 )
                    goto LABEL_98;
                }
              }
              v28 = *(_DWORD *)(a1 + 12) & 3;
              if ( v28 == 2 )
              {
                dest[0] = 45;
                v33 = *(_WORD *)(v25 + 2);
                dest[2] = 0;
                dest[1] = v33;
              }
              else if ( v28 == 3 || v28 == 1 )
              {
                v32 = *(const char **)(v25 + 52);
                memset(dest, 45, 2);
                strncpy(&dest[2], v32, 0x14u);
              }
              else
              {
                strncpy(dest, *(const char **)(v25 + 52), 0x14u);
              }
            }
            else
            {
              v21 = *(_DWORD *)(a1 + 12) & 3;
              if ( v21 == 2 )
              {
                strcpy(dest, "-h");
              }
              else if ( v21 == 3 || v21 == 1 )
              {
                strcpy(dest, "--help");
              }
              else
              {
                strcpy(dest, "help");
              }
            }
            v8 = v2;
            fprintf((FILE *)option_usage_fp, off_B9528, *(_DWORD *)(a1 + 28), dest);
            goto LABEL_18;
          }
          v8 = v2;
LABEL_24:
          s = 0;
          if ( (v14 & 0x1000) != 0 )
          {
            v15 = sub_7E87C(v14, &s);
            sprintf(byte_1083F4, "%%-%ds %%s\n", v15);
            fputc(10, (FILE *)option_usage_fp);
          }
          else
          {
            v15 = sub_7E9D0(v14, &s);
            sprintf(byte_1083F4, "%%-%ds %%s\n", v15);
            if ( v2 || (*(_DWORD *)(*(_DWORD *)(a1 + 68) + 16) & 0x200000) == 0 )
              fputs(s, (FILE *)option_usage_fp);
          }
          v16 = v15 + 15;
          if ( v15 + 15 < 0 )
            v16 = v15 + 22;
          v17 = 4 - (v16 >> 3);
          if ( v17 > 0 )
            dword_1083EC = v17;
          sub_81B90((_DWORD *)a1, v2, (int)s);
          v18 = *(_DWORD *)(a1 + 12);
          if ( (v18 & 3) == 1 )
          {
            fputs(off_B9588, (FILE *)option_usage_fp);
            v18 = *(_DWORD *)(a1 + 12);
          }
          else if ( (v18 & 3) != 0 )
          {
            if ( (v18 & 3) == 3 )
            {
              fputs(off_B9574, (FILE *)option_usage_fp);
              v18 = *(_DWORD *)(a1 + 12);
            }
          }
          else
          {
            fputs(off_B95A4, (FILE *)option_usage_fp);
            v18 = *(_DWORD *)(a1 + 12);
          }
          if ( (v18 & 0x20) != 0 )
          {
            fputs(off_B95A0, (FILE *)option_usage_fp);
            v18 = *(_DWORD *)(a1 + 12);
          }
          if ( (v18 & 0x800) != 0 )
            fputs(off_B95E0, (FILE *)option_usage_fp);
          v19 = *(const char **)(a1 + 60);
          if ( v19 )
            fputs(v19, (FILE *)option_usage_fp);
          if ( v2 )
          {
LABEL_44:
            if ( *(int *)a1 >= 139264 && (v20 = *(const char **)(a1 + 128)) != 0 )
            {
              fputs(v20, (FILE *)option_usage_fp);
            }
            else if ( *(_DWORD *)(a1 + 72) )
            {
              fprintf((FILE *)option_usage_fp, off_B95AC);
            }
            fflush((FILE *)option_usage_fp);
            if ( ferror((FILE *)option_usage_fp) )
            {
              v11 = *(_DWORD *)(a1 + 28);
              v12 = off_B9538;
              if ( (struct _IO_FILE *)option_usage_fp == stderr )
              {
LABEL_20:
                v13 = off_B9534;
                goto LABEL_21;
              }
LABEL_49:
              v13 = off_B9530;
LABEL_21:
              sub_7E374(v11, (int)v12, (int)v13);
            }
LABEL_18:
            fflush((FILE *)option_usage_fp);
            if ( !ferror((FILE *)option_usage_fp) )
              sub_7E2B8(v8);
            v11 = *(_DWORD *)(a1 + 28);
            v12 = off_B9538;
            if ( (struct _IO_FILE *)option_usage_fp != stdout )
              goto LABEL_20;
            goto LABEL_49;
          }
          v22 = *(_DWORD **)(a1 + 52);
          if ( v22 )
          {
            sub_857B8(v22, *(const char **)(a1 + 36), *(const char **)(a1 + 24));
            if ( (*(_DWORD *)(a1 + 12) & 0x100) == 0 )
              goto LABEL_65;
          }
          else
          {
            if ( (*(_DWORD *)(a1 + 12) & 0x100) == 0 )
            {
LABEL_65:
              if ( byte_1083F0 )
              {
                v29 = *(_DWORD *)(a1 + 100);
                v30 = *(_DWORD *)(a1 + 68);
                fputc(10, (FILE *)option_usage_fp);
                fflush((FILE *)option_usage_fp);
                do
                {
                  v31 = (unsigned __int16)*(_DWORD *)(v30 + 16) >> 12;
                  if ( v31 == 2 || v31 == 4 )
                    (*(void (__fastcall **)(int, int))(v30 + 40))(1, v30);
                  --v29;
                  v30 += 64;
                }
                while ( v29 > 0 );
              }
              v23 = *(const char **)(a1 + 64);
              if ( v23 )
                fputs(v23, (FILE *)option_usage_fp);
              goto LABEL_44;
            }
            fputs(off_B95B4, (FILE *)option_usage_fp);
          }
          fprintf((FILE *)option_usage_fp, off_B9568, *(_DWORD *)(a1 + 32));
          goto LABEL_65;
        }
        v6 = 0;
        v4 = 0;
      }
      else
      {
        v4 = *(char **)(a1 + 112);
        v5 = (FILE *)option_usage_fp;
        v6 = (char)v4;
        if ( v4 )
          v6 = 1;
        if ( option_usage_fp )
        {
LABEL_7:
          v7 = *(_DWORD *)(a1 + 12);
          if ( (*(_DWORD *)&v6 & ((v7 ^ 0x100000u) >> 20) & 1) != 0 )
          {
            if ( (v7 & 0x2000) == 0 )
            {
LABEL_9:
              v8 = v2;
              fputs(v4, v5);
              goto LABEL_18;
            }
            goto LABEL_17;
          }
          goto LABEL_51;
        }
      }
      v5 = stderr;
      option_usage_fp = (int)stderr;
      goto LABEL_7;
    }
  }
  if ( *(int *)a1 < 122880 )
  {
    v5 = (FILE *)option_usage_fp;
    if ( option_usage_fp )
    {
LABEL_23:
      v8 = 0;
      fprintf(v5, *(const char **)(a1 + 56), *(_DWORD *)(a1 + 28));
      v14 = *(_DWORD *)(a1 + 12);
      goto LABEL_24;
    }
    v9 = 0;
    v4 = 0;
  }
  else
  {
    v4 = *(char **)(a1 + 108);
    v5 = (FILE *)option_usage_fp;
    v9 = (char)v4;
    if ( v4 )
      v9 = 1;
    if ( option_usage_fp )
    {
LABEL_15:
      v10 = *(_DWORD *)(a1 + 12);
      if ( (*(_DWORD *)&v9 & ((v10 ^ 0x100000u) >> 20) & 1) != 0 )
      {
        v2 = 0;
        if ( (v10 & 0x2000) == 0 )
          goto LABEL_9;
LABEL_17:
        v8 = v2;
        sub_8AFF0(v4, 1, v5);
        goto LABEL_18;
      }
      goto LABEL_23;
    }
  }
  if ( byte_1082E8 )
    v5 = stderr;
  else
    v5 = stdout;
  option_usage_fp = (int)v5;
  goto LABEL_15;
}
