FILE *sub_43FE0()
{
  FILE *v0; // r9
  char *i; // r6
  char *v2; // r4
  size_t v3; // r5
  size_t v4; // r0
  const char *v5; // r5
  size_t v6; // r0
  FILE *result; // r0
  FILE *v8; // r7
  char *v9; // r5
  int v10; // r6
  char *v11; // r5
  char *v12; // r6
  int v13; // r8
  int v14; // r9
  int v15; // r10
  int v16; // r0
  char *v17; // r2
  char *v18; // r1
  char *v19; // r4
  char *v20; // lr
  char *v21; // r8
  const char *v22; // r9
  int v23; // r10
  int v24; // r11
  int v25; // r0
  char *v26; // lr
  char *v27; // r12
  char *v28; // lr
  char *v29; // r12
  FILE *v30; // r8
  const char *v31; // r5
  int v32; // r6
  char *v33; // r5
  char *v34; // r6
  int v35; // r7
  int v36; // r9
  int v37; // r10
  int v38; // r0
  char *v39; // r2
  char *v40; // r1
  char *v41; // r4
  char *v42; // lr
  char *v43; // r7
  const char *v44; // r10
  int v45; // r11
  int v46; // r0
  char *v47; // r1
  char *v48; // r12
  char *v49; // r12
  char *v50; // r12
  int v51; // r4
  char *v52; // r0
  int v53; // r3
  char *v54; // [sp+18h] [bp-A24h]
  char *v55; // [sp+1Ch] [bp-A20h]
  char *v56; // [sp+1Ch] [bp-A20h]
  char *v57; // [sp+20h] [bp-A1Ch]
  int v58; // [sp+30h] [bp-A0Ch]
  int v59; // [sp+30h] [bp-A0Ch]
  int v60; // [sp+34h] [bp-A08h]
  char s[512]; // [sp+38h] [bp-A04h] BYREF
  char v62[2052]; // [sp+238h] [bp-804h] BYREF

  sub_43E2C();
  v0 = fopen("/nvdata/mbin.data", "r+");
  if ( v0 )
  {
    memset(s, 0, sizeof(s));
    fgets(s, 511, v0);
    for ( i = strtok(s, ","); i; i = strtok(0, ",") )
    {
      v2 = (char *)&unk_B32FD;
      do
      {
        while ( 1 )
        {
          v5 = *(const char **)(v2 - 21);
          if ( strstr(i, v5) )
            break;
LABEL_4:
          v2 += 88;
          if ( v2 == (char *)&unk_B371D )
            goto LABEL_9;
        }
        if ( strstr(*(const char **)(v2 - 17), "str") )
        {
          v3 = strlen(v5);
          v4 = strlen(i);
          strncpy(v2, &i[v3], v4 - v3);
          goto LABEL_4;
        }
        v2 += 88;
        v6 = strlen(v5);
        *(v2 - 89) = strtol(&i[v6], 0, 10);
      }
      while ( v2 != (char *)&unk_B371D );
LABEL_9:
      ;
    }
    result = (FILE *)sub_43E88();
    if ( result )
    {
      fclose(v0);
      result = fopen("/nvdata/mbin.data", "w");
      v8 = result;
      if ( result )
      {
        if ( (unsigned int)dword_B308C > 3 )
        {
          LOWORD(v9) = (unsigned __int16)&byte_B6CEC;
          strcpy(v62, "update droa bin data");
          sub_3B6AC(3, v62, 0, *(int *)"bin data");
          if ( (unsigned int)dword_B308C <= 3 )
          {
            HIWORD(v9) = (unsigned int)&byte_B6CEC >> 16;
          }
          else
          {
            HIWORD(v9) = (unsigned int)&byte_B6CEC >> 16;
            v21 = "None";
            if ( *v9 )
              v22 = v9;
            else
              v22 = "None";
            v23 = sub_26BFC();
            v24 = sub_26A34();
            v58 = sub_26A44();
            v25 = sub_26A54();
            v26 = &byte_534B8C;
            v27 = &byte_534BCC;
            if ( !byte_534B8C )
              v26 = "None";
            v54 = v26;
            if ( !byte_534BCC )
              v27 = "None";
            v28 = &byte_534C0C;
            v55 = v27;
            v29 = &byte_534C4C;
            if ( !byte_534C0C )
              v28 = "None";
            if ( !byte_534C4C )
              v29 = "None";
            if ( byte_534C8C )
              v21 = &byte_534C8C;
            snprintf(
              v62,
              0x800u,
              "MCT:%s,TYPE:%s,SN:%s,ChN:%d,ChDN:%d,ChAN:%d,DoAN:%d,ChSN0:%s,ChSN1:%s,ChSN2:%s,ChSN3:%s,PWR:%s",
              dest,
              byte_B6BEC,
              v22,
              v23,
              v24,
              v58,
              v25,
              v54,
              v55,
              v28,
              v29,
              v21);
            sub_3C288(3, v62, 0);
            if ( (unsigned int)dword_B308C > 3 )
            {
              snprintf(v62, 0x800u, "InitStat:%d", dword_533B3C);
              sub_3C288(3, v62, 0);
            }
          }
        }
        else
        {
          v9 = &byte_B6CEC;
        }
        v10 = (unsigned __int8)*v9;
        v11 = "None";
        if ( v10 )
          v12 = &byte_B6CEC;
        else
          v12 = "None";
        v13 = sub_26BFC();
        v14 = sub_26A34();
        v15 = sub_26A44();
        v16 = sub_26A54();
        if ( byte_534B8C )
          v17 = &byte_534B8C;
        else
          v17 = "None";
        if ( byte_534BCC )
          v18 = &byte_534BCC;
        else
          v18 = "None";
        if ( byte_534C0C )
          v19 = &byte_534C0C;
        else
          v19 = "None";
        if ( byte_534C4C )
          v20 = &byte_534C4C;
        else
          v20 = "None";
        if ( byte_534C8C )
          v11 = &byte_534C8C;
        fprintf(
          v8,
          "MCT:%s,TYPE:%s,SN:%s,ChN:%d,ChDN:%d,ChAN:%d,DoAN:%d,ChSN0:%s,ChSN1:%s,ChSN2:%s,ChSN3:%s,PWR:%s",
          dest,
          byte_B6BEC,
          v12,
          v13,
          v14,
          v15,
          v16,
          v17,
          v18,
          v19,
          v20,
          v11);
        fflush(v8);
        return (FILE *)fclose(v8);
      }
      else if ( (unsigned int)dword_B308C > 3 )
      {
        strcpy(v62, "droa log miner bin data update failed");
        return (FILE *)sub_3B6AC(3, v62, 0, *(int *)"te failed");
      }
    }
    else if ( (unsigned int)dword_B308C > 3 )
    {
      snprintf(v62, 0x800u, "InitStat:%d", dword_533B3C);
      return (FILE *)sub_3C288(3, v62, 0);
    }
  }
  else
  {
    result = fopen("/nvdata/mbin.data", "w+");
    v30 = result;
    if ( result )
    {
      LOWORD(v31) = (unsigned __int16)&byte_B6CEC;
      if ( (unsigned int)dword_B308C > 3 )
      {
        HIWORD(v31) = (unsigned int)&byte_B6CEC >> 16;
        v43 = "None";
        if ( *v31 )
          v44 = v31;
        else
          v44 = "None";
        v45 = sub_26BFC();
        v60 = sub_26A34();
        v59 = sub_26A44();
        v46 = sub_26A54();
        v47 = &byte_534B8C;
        v48 = &byte_534BCC;
        if ( !byte_534B8C )
          v47 = "None";
        if ( !byte_534BCC )
          v48 = "None";
        v56 = v48;
        v49 = &byte_534C0C;
        if ( !byte_534C0C )
          v49 = "None";
        v57 = v49;
        v50 = &byte_534C4C;
        if ( !byte_534C4C )
          v50 = "None";
        if ( byte_534C8C )
          v43 = &byte_534C8C;
        snprintf(
          v62,
          0x800u,
          "MCT:%s,TYPE:%s,SN:%s,ChN:%d,ChDN:%d,ChAN:%d,DoAN:%d,ChSN0:%s,ChSN1:%s,ChSN2:%s,ChSN3:%s,PWR:%s",
          dest,
          byte_B6BEC,
          v44,
          v45,
          v60,
          v59,
          v46,
          v47,
          v56,
          v57,
          v50,
          v43);
        sub_3C288(3, v62, 0);
        if ( (unsigned int)dword_B308C > 3 )
        {
          snprintf(v62, 0x800u, "InitStat:%d", dword_533B3C);
          sub_3C288(3, v62, 0);
        }
      }
      else
      {
        HIWORD(v31) = (unsigned int)&byte_B6CEC >> 16;
      }
      v32 = *(unsigned __int8 *)v31;
      v33 = "None";
      if ( v32 )
        v34 = &byte_B6CEC;
      else
        v34 = "None";
      v35 = sub_26BFC();
      v36 = sub_26A34();
      v37 = sub_26A44();
      v38 = sub_26A54();
      if ( byte_534B8C )
        v39 = &byte_534B8C;
      else
        v39 = "None";
      if ( byte_534BCC )
        v40 = &byte_534BCC;
      else
        v40 = "None";
      if ( byte_534C0C )
        v41 = &byte_534C0C;
      else
        v41 = "None";
      if ( byte_534C4C )
        v42 = &byte_534C4C;
      else
        v42 = "None";
      if ( byte_534C8C )
        v33 = &byte_534C8C;
      fprintf(
        v30,
        "MCT:%s,TYPE:%s,SN:%s,ChN:%d,ChDN:%d,ChAN:%d,DoAN:%d,ChSN0:%s,ChSN1:%s,ChSN2:%s,ChSN3:%s,PWR:%s",
        dest,
        byte_B6BEC,
        v34,
        v35,
        v36,
        v37,
        v38,
        v39,
        v40,
        v41,
        v42,
        v33);
      fflush(v30);
      return (FILE *)fclose(v30);
    }
    else if ( (unsigned int)dword_B308C > 3 )
    {
      v51 = *_errno_location();
      v52 = strerror(v51);
      snprintf(v62, 0x800u, "file op errno = %d reason = %s", v51, v52);
      return (FILE *)sub_3B6AC(3, v62, 0, v53);
    }
  }
  return result;
}
