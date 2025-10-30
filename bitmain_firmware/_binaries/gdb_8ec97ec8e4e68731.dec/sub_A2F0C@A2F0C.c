int __fastcall sub_A2F0C(const char *a1)
{
  const char *v1; // r5
  char *v2; // r0
  int v3; // r0
  size_t v4; // r4
  unsigned int v5; // r2
  char *v6; // r6
  int v7; // r3
  int v9; // r3
  size_t v10; // r4
  char *v11; // r8
  unsigned int v12; // r4
  char *v13; // r0
  int v14; // r6
  const char *v15; // r2
  int v16; // [sp+4h] [bp-4h] BYREF

  v1 = a1;
  v2 = strrchr(a1, 46);
  if ( !v2 )
  {
    while ( 1 )
    {
      v3 = sub_338BD4(v1, &dword_3C439C);
      if ( !v3 )
      {
        if ( *v1 == 81 )
          goto LABEL_16;
        goto LABEL_13;
      }
      if ( (unsigned int)*(unsigned __int8 *)(v3 + 2) - 48 <= 9 )
        break;
      v1 = (const char *)(v3 + 2);
    }
    if ( *v1 != 81 )
      goto LABEL_4;
    goto LABEL_16;
  }
  v1 = v2 + 1;
  if ( v2[1] == 81 )
  {
LABEL_16:
    if ( (v1[1] & 0xFD) == 0x55 && sscanf(v1 + 2, "%x", &v16) == 1 )
    {
      v10 = dword_477CB0;
      v11 = (char *)dword_477CB4;
      if ( (unsigned int)dword_477CB0 <= 0xF )
      {
        v12 = 2 * dword_477CB0;
        if ( (unsigned int)(2 * dword_477CB0) > 0xF )
          dword_477CB0 *= 2;
        else
          v9 = 16;
        if ( v12 <= 0xF )
          dword_477CB0 = v9;
        v13 = (char *)sub_9D470((void *)dword_477CB4, &dword_477CB0, 1);
        v10 = dword_477CB0;
        v11 = v13;
        dword_477CB4 = (int)v13;
      }
      v14 = v16;
      if ( (v16 & 0xFFFFFF80) != 0 || !isprint(v16) )
      {
        if ( v1[1] == 85 )
          LOWORD(v15) = 21408;
        else
          LOWORD(v15) = 21420;
        HIWORD(v15) = 55;
        sub_93170(v11, v10, v15, v14);
      }
      else
      {
        sub_93170(v11, v10, "'%c'", v14);
      }
      return dword_477CB4;
    }
    return (int)v1;
  }
  v3 = sub_338BD4(v2 + 1, &dword_3C439C);
  if ( !v3 )
  {
LABEL_13:
    v3 = sub_338BD4(v1, "$");
    if ( !v3 )
      return (int)v1;
  }
LABEL_4:
  v4 = v3 - (_DWORD)v1;
  v5 = v3 - (_DWORD)v1 + 1;
  v6 = (char *)dword_477CB4;
  if ( v5 > dword_477CB0 )
  {
    v7 = 2 * dword_477CB0;
    if ( 2 * dword_477CB0 < v5 )
      v7 = v3 - (_DWORD)v1 + 1;
    dword_477CB0 = v7;
    v6 = (char *)sub_9D470((void *)dword_477CB4, &dword_477CB0, 1);
    dword_477CB4 = (int)v6;
  }
  strncpy(v6, v1, v4);
  v6[v4] = 0;
  return (int)v6;
}
