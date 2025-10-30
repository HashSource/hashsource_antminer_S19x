void __fastcall sub_43708(int a1, char *s)
{
  size_t v3; // r0
  size_t v4; // r0
  size_t v5; // r7
  void *v6; // r8
  int v7; // r5
  char *v8; // r7
  const char *v9; // r8
  char *v10; // r0
  FILE *v11; // r4
  __pid_t v12; // r0
  size_t v13; // r0
  size_t v14; // r7
  char *v15; // r9
  __int16 v16; // r3
  int v17; // r0
  FILE *v18; // r0
  FILE *v19; // r5
  __int64 v20; // r0
  time_t v21; // [sp+14h] [bp-28h] BYREF
  int v22; // [sp+18h] [bp-24h] BYREF
  int v23[2]; // [sp+20h] [bp-1Ch] BYREF
  __int16 v24; // [sp+28h] [bp-14h]
  _DWORD v25[2]; // [sp+2Ch] [bp-10h] BYREF

  strcpy((char *)v25, ".TEMP");
  switch ( a1 )
  {
    case 1:
      if ( s )
      {
        v13 = strlen(s);
        v14 = v13;
        if ( v13 )
        {
          stats_drift_file = sub_64B04(stats_drift_file, v13 + 1, 0, 0);
          v15 = (char *)sub_64B04(dword_BDCD0, v14 + 6, 0, 0);
          dword_BDCD0 = (int)v15;
          memcpy((void *)stats_drift_file, s, v14 + 1);
          memcpy(v15, s, v14);
          v16 = v25[1];
          *(_DWORD *)&v15[v14] = v25[0];
          v17 = stats_drift_file;
          *(_WORD *)&v15[v14 + 4] = v16;
          v18 = (FILE *)fopen64(v17, "r");
          v19 = v18;
          if ( v18 )
          {
            if ( fscanf(v18, "%lf", v23) == 1 )
            {
              fclose(v19);
              LODWORD(v20) = 12;
              sub_30B38(v20);
              dbl_BDCC8 = drift_comp;
            }
            else
            {
              sub_65D40(3, "format error frequency file %s", (const char *)stats_drift_file);
              fclose(v19);
            }
          }
        }
      }
      break;
    case 2:
      v3 = strlen(s);
      if ( v3 > 0xFE )
      {
        sub_65D40(3, "statsdir too long (>%d, sigh)", 254);
      }
      else
      {
        if ( !v3 || s[v3 - 1] == 47 )
          sub_6D00C(statsdir, 256, "%s", s);
        else
          sub_6D00C(statsdir, 256, "%s%c", s, 47);
        sub_2CC3C();
      }
      break;
    case 3:
      v11 = (FILE *)fopen64(s, "w");
      if ( v11 )
      {
        v12 = getpid();
        _fprintf_chk(v11, 1, "%d", v12);
        fclose(v11);
      }
      else
      {
        sub_65D40(3, "pid file %s: %m", s);
      }
      break;
    case 4:
      if ( s )
      {
        v4 = strlen(s);
        if ( v4 )
        {
          v5 = v4 + 1;
          v6 = (void *)sub_64B04(dword_BDBF8, v4 + 1, 0, 0);
          dword_BDBF8 = (int)v6;
          memcpy(v6, s, v5);
          if ( sub_2E9C8((const char *)v6, dword_BDCD8, 1, 1) )
          {
            sub_6055C(&v22);
            time(&v21);
            sub_2DFC4(v23);
            v7 = v24;
            v8 = sub_43614(v23[1]);
            if ( sub_2E02C(v22, 0) )
              v9 = "expired";
            else
              v9 = "expires";
            v10 = sub_43614(v23[0]);
            sub_266AC(14, 0, (int)"%d leap %s %s %s", v7, v8, v9, v10);
            dword_BDCD4 = 1;
            sub_424FC(1, v22, &v21);
          }
        }
      }
      break;
    default:
      return;
  }
}
