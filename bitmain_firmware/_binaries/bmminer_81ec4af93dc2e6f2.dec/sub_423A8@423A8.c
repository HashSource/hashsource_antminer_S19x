FILE *sub_423A8()
{
  FILE *v0; // r10
  char *v1; // r6
  char *v2; // r4
  size_t v3; // r0
  const char *v4; // r5
  char *v5; // r7
  size_t v6; // r5
  const char *v7; // r11
  FILE *result; // r0
  FILE *v9; // r7
  char *v10; // r5
  int v11; // r6
  const char *v12; // r5
  bool v13; // zf
  int v14; // r2
  const char *v15; // r8
  char *v16; // r9
  int v17; // r11
  const char *v18; // r12
  const char *v19; // r3
  const char *v20; // lr
  const char *v21; // r9
  const char *v22; // r6
  int v23; // r8
  int v24; // r9
  int v25; // r10
  const char *v26; // r12
  const char *v27; // r4
  const char *v28; // lr
  const char *v29; // r0
  int v30; // r4
  char *v31; // r0
  int v32; // r3
  char *v33; // r8
  const char *v34; // r3
  int v35; // r9
  int v36; // r10
  int v37; // r11
  char *v38; // r1
  char *v39; // r2
  char *v40; // r12
  char *v41; // r1
  const char *v42; // [sp+4h] [bp-A38h]
  int v43; // [sp+10h] [bp-A2Ch]
  int v44; // [sp+14h] [bp-A28h]
  int v45; // [sp+14h] [bp-A28h]
  char *v46; // [sp+18h] [bp-A24h]
  int v47; // [sp+30h] [bp-A0Ch]
  const char *v48; // [sp+30h] [bp-A0Ch]
  int v49; // [sp+34h] [bp-A08h]
  char s[512]; // [sp+38h] [bp-A04h] BYREF
  char v51[2052]; // [sp+238h] [bp-804h] BYREF

  sub_421F0();
  v0 = fopen("/nvdata/mbin.data", "r+");
  if ( !v0 )
  {
    result = fopen("/nvdata/mbin.data", "w+");
    v9 = result;
    if ( result )
    {
      v14 = (unsigned __int8)byte_B3F78;
      if ( (unsigned int)off_AFC24 > 3 )
      {
        v15 = "None";
        if ( byte_B3F78 )
          v16 = &byte_B3F78;
        else
          v16 = "None";
        v17 = sub_266E0();
        v49 = sub_26530();
        v47 = sub_26540();
        v42 = v16;
        v44 = sub_26550();
        v18 = byte_4B6D00;
        v19 = &byte_4B6D40;
        v20 = &byte_4B6D80;
        if ( !byte_4B6D00[0] )
          v18 = "None";
        v21 = &byte_4B6DC0;
        if ( !byte_4B6D40 )
          v19 = "None";
        if ( !byte_4B6D80 )
          v20 = "None";
        if ( !byte_4B6DC0 )
          v21 = "None";
        if ( byte_4B6E00 )
          v15 = &byte_4B6E00;
        snprintf(
          v51,
          0x800u,
          "MCT:%s,TYPE:%s,SN:%s,ChN:%d,ChDN:%d,ChAN:%d,DoAN:%d,ChSN0:%s,ChSN1:%s,ChSN2:%s,ChSN3:%s,PWR:%s",
          byte_B3D78,
          dest,
          v42,
          v17,
          v49,
          v47,
          v44,
          v18,
          v19,
          v20,
          v21,
          v15);
        sub_3BAF0(3, v51, 0);
        if ( (unsigned int)off_AFC24 > 3 )
        {
          snprintf(v51, 0x800u, "InitStat:%d", dword_4B6CB0);
          sub_3BAF0(3, v51, 0);
        }
        v14 = (unsigned __int8)byte_B3F78;
      }
      v12 = "None";
      v13 = v14 == 0;
LABEL_36:
      if ( v13 )
        v22 = "None";
      else
        v22 = &byte_B3F78;
      v23 = sub_266E0();
      v24 = sub_26530();
      v25 = sub_26540();
      v43 = sub_26550();
      if ( byte_4B6D00[0] )
        v26 = byte_4B6D00;
      else
        v26 = "None";
      if ( byte_4B6D40 )
        v27 = &byte_4B6D40;
      else
        v27 = "None";
      if ( byte_4B6D80 )
        v28 = &byte_4B6D80;
      else
        v28 = "None";
      if ( byte_4B6DC0 )
        v29 = &byte_4B6DC0;
      else
        v29 = "None";
      if ( byte_4B6E00 )
        v12 = &byte_4B6E00;
      fprintf(
        v9,
        "MCT:%s,TYPE:%s,SN:%s,ChN:%d,ChDN:%d,ChAN:%d,DoAN:%d,ChSN0:%s,ChSN1:%s,ChSN2:%s,ChSN3:%s,PWR:%s",
        byte_B3D78,
        dest,
        v22,
        v23,
        v24,
        v25,
        v43,
        v26,
        v27,
        v28,
        v29,
        v12);
      fflush(v9);
      return (FILE *)fclose(v9);
    }
    else if ( (unsigned int)off_AFC24 > 3 )
    {
      v30 = *_errno_location();
      v31 = strerror(v30);
      snprintf(v51, 0x800u, "file op errno = %d reason = %s", v30, v31);
      return (FILE *)sub_3AF5C(3, v51, 0, v32);
    }
    return result;
  }
  memset(s, 0, sizeof(s));
  fgets(s, 511, v0);
  v1 = strtok(s, ",");
  if ( !v1 )
    goto LABEL_10;
  do
  {
    v2 = (char *)&unk_AFE95;
    do
    {
      while ( 1 )
      {
        v4 = *(const char **)(v2 - 21);
        if ( !strstr(v1, v4) )
          goto LABEL_5;
        v5 = strstr(*(const char **)(v2 - 17), "str");
        v6 = strlen(v4);
        v7 = &v1[v6];
        if ( !v5 )
          break;
        v3 = strlen(v1);
        strncpy(v2, v7, v3 - v6);
LABEL_5:
        v2 += 88;
        if ( &unk_B02B5 == (_UNKNOWN *)v2 )
          goto LABEL_9;
      }
      v2 += 88;
      *(v2 - 89) = strtol(v7, 0, 10);
    }
    while ( &unk_B02B5 != (_UNKNOWN *)v2 );
LABEL_9:
    v1 = strtok(0, ",");
  }
  while ( v1 );
LABEL_10:
  result = (FILE *)sub_4224C();
  if ( !result )
  {
    if ( (unsigned int)off_AFC24 > 3 )
    {
      snprintf(v51, 0x800u, "InitStat:%d", dword_4B6CB0);
      return (FILE *)sub_3BAF0(3, v51, 0);
    }
    return result;
  }
  fclose(v0);
  result = fopen("/nvdata/mbin.data", "w");
  v9 = result;
  if ( result )
  {
    if ( (unsigned int)off_AFC24 > 3 )
    {
      LOWORD(v10) = (unsigned __int16)&byte_B3F78;
      strcpy(v51, "update droa bin data");
      sub_3AF5C(3, v51, 0, *(int *)"bin data");
      if ( (unsigned int)off_AFC24 <= 3 )
      {
        HIWORD(v10) = (unsigned int)&byte_B3F78 >> 16;
      }
      else
      {
        HIWORD(v10) = (unsigned int)&byte_B3F78 >> 16;
        v33 = "None";
        if ( *v10 )
          v34 = v10;
        else
          v34 = "None";
        v48 = v34;
        v35 = sub_266E0();
        v36 = sub_26530();
        v37 = sub_26540();
        v45 = sub_26550();
        v38 = byte_4B6D00;
        v39 = &byte_4B6D40;
        v40 = &byte_4B6D80;
        if ( !byte_4B6D00[0] )
          v38 = "None";
        v46 = v38;
        if ( !byte_4B6D40 )
          v39 = "None";
        if ( !byte_4B6D80 )
          v40 = "None";
        if ( byte_4B6DC0 )
          v41 = &byte_4B6DC0;
        else
          v41 = "None";
        if ( byte_4B6E00 )
          v33 = &byte_4B6E00;
        snprintf(
          v51,
          0x800u,
          "MCT:%s,TYPE:%s,SN:%s,ChN:%d,ChDN:%d,ChAN:%d,DoAN:%d,ChSN0:%s,ChSN1:%s,ChSN2:%s,ChSN3:%s,PWR:%s",
          byte_B3D78,
          dest,
          v48,
          v35,
          v36,
          v37,
          v45,
          v46,
          v39,
          v40,
          v41,
          v33);
        sub_3BAF0(3, v51, 0);
        if ( (unsigned int)off_AFC24 > 3 )
        {
          snprintf(v51, 0x800u, "InitStat:%d", dword_4B6CB0);
          sub_3BAF0(3, v51, 0);
        }
      }
    }
    else
    {
      v10 = &byte_B3F78;
    }
    v11 = (unsigned __int8)*v10;
    v12 = "None";
    v13 = v11 == 0;
    goto LABEL_36;
  }
  if ( (unsigned int)off_AFC24 > 3 )
  {
    strcpy(v51, "droa log miner bin data update failed");
    return (FILE *)sub_3AF5C(3, v51, 0, *(int *)"te failed");
  }
  return result;
}
