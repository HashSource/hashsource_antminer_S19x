void __fastcall sub_24C848(const char *a1, int a2)
{
  int v3; // r3
  void *v5; // r0
  char *v6; // r6
  void *v7; // r0
  void *v8; // r0
  const char *v9; // r4
  char *v10; // r5
  size_t v11; // r7
  int v12; // r0
  unsigned __int8 *v13; // r5
  char *v14; // r0
  unsigned __int8 *v15; // r4
  _BOOL4 v16; // r6
  size_t v17; // r0
  _BYTE *v18; // r1
  unsigned __int8 *v19; // r0
  int v20; // kr00_4
  unsigned __int8 *v21; // r0
  char *v22; // r0
  char *v23; // r6
  int v24; // r4
  _BYTE *v25; // r0
  unsigned __int8 *v26; // r0
  __int64 v27; // r2
  unsigned __int8 *v28; // r0
  __int64 v29; // r2
  size_t v30; // r0
  _BYTE *v31; // r0
  size_t v32; // r0
  _BYTE *v33; // r0
  __int64 v34; // [sp+8h] [bp-Ch] BYREF

  *(_DWORD *)(a2 + 4) = 1;
  v3 = *(unsigned __int8 *)a1;
  v5 = *(void **)(a2 + 20);
  v6 = (char *)(a1 + 1);
  *(_DWORD *)(a2 + 12) = 0;
  *(_DWORD *)(a2 + 8) = v3 == 49;
  if ( v5 )
    free(v5);
  v7 = *(void **)(a2 + 48);
  *(_DWORD *)(a2 + 20) = 0;
  *(_DWORD *)(a2 + 40) = 0;
  *(_DWORD *)(a2 + 44) = 0;
  *(_DWORD *)(a2 + 24) = -1;
  *(_DWORD *)(a2 + 28) = -1;
  *(_DWORD *)(a2 + 36) = -1;
  *(_DWORD *)(a2 + 32) = -1;
  if ( v7 )
    free(v7);
  v8 = *(void **)(a2 + 52);
  *(_DWORD *)(a2 + 48) = 0;
  if ( v8 )
    free(v8);
  *(_DWORD *)(a2 + 52) = 0;
  *(_QWORD *)(a2 + 64) = 0;
  *(_QWORD *)(a2 + 56) = 0;
LABEL_8:
  while ( 1 )
  {
    v9 = v6 + 1;
    if ( !*v6 )
      break;
    while ( 1 )
    {
      v10 = strchr(v9, 58);
      if ( !v10 )
        sub_946E0("Malformed trace status, at %s\nStatus line: '%s'\n", v9, a1);
      v6 = strchr(v9, 59);
      if ( !v6 )
        v6 = (char *)&v9[strlen(v9)];
      v11 = v10 - v9;
      v12 = strncmp(v9, off_46DD04[0], v10 - v9);
      v13 = (unsigned __int8 *)(v10 + 1);
      if ( !v12 )
      {
        v6 = (char *)sub_99188(v13, (unsigned int *)&v34);
        *(_DWORD *)(a2 + 12) = 3;
        goto LABEL_8;
      }
      if ( !strncmp(v9, off_46DCFC[0], v11) )
      {
        v6 = (char *)sub_99188(v13, (unsigned int *)&v34);
        *(_DWORD *)(a2 + 12) = 1;
        goto LABEL_8;
      }
      if ( !strncmp(v9, off_46DD0C[0], v11) )
      {
        v28 = sub_99188(v13, (unsigned int *)&v34);
        HIDWORD(v29) = v34;
        LODWORD(v29) = 5;
        v6 = (char *)v28;
        *(_QWORD *)(a2 + 12) = v29;
        goto LABEL_8;
      }
      if ( strncmp(v9, off_46DD00[0], v11) )
        break;
      v14 = strchr((const char *)v13, 58);
      v15 = (unsigned __int8 *)v14;
      v16 = v6 < v14;
      if ( !v14 )
        v16 = 1;
      if ( !v16 )
      {
        if ( v13 == (unsigned __int8 *)v14 )
        {
          *(_DWORD *)(a2 + 20) = sub_327254("");
        }
        else
        {
          v17 = strlen(a1);
          v18 = sub_93028(v17);
          v19 = v13;
          *(_DWORD *)(a2 + 20) = v18;
          v20 = v15 - v13;
          v13 = v15;
          sub_991F8(v19, v18, v20 / 2)[*(_DWORD *)(a2 + 20)] = 0;
        }
      }
      v21 = sub_99188(v13 + 1, (unsigned int *)&v34);
      *(_DWORD *)(a2 + 12) = 2;
      v9 = (const char *)(v21 + 1);
      if ( !*v21 )
        return;
    }
    if ( !strncmp(v9, off_46DD08[0], v11) )
    {
      v6 = (char *)sub_99188(v13, (unsigned int *)&v34);
      *(_DWORD *)(a2 + 12) = 4;
    }
    else if ( !strncmp(v9, off_46DD10, v11) )
    {
      v22 = strchr((const char *)v13, 58);
      v23 = v22;
      if ( v13 == (unsigned __int8 *)v22 )
      {
        *(_DWORD *)(a2 + 20) = sub_327254("");
      }
      else
      {
        v24 = (v22 - (char *)v13) / 2;
        v25 = sub_93028(v24 + 1);
        *(_DWORD *)(a2 + 20) = v25;
        sub_991F8(v13, v25, v24)[*(_DWORD *)(a2 + 20)] = 0;
      }
      v26 = sub_99188((unsigned __int8 *)v23 + 1, (unsigned int *)&v34);
      HIDWORD(v27) = v34;
      LODWORD(v27) = 6;
      v6 = (char *)v26;
      *(_QWORD *)(a2 + 12) = v27;
    }
    else if ( !strncmp(v9, "tframes", v11) )
    {
      v6 = (char *)sub_99188(v13, (unsigned int *)&v34);
      *(_DWORD *)(a2 + 24) = v34;
    }
    else if ( !strncmp(v9, "tcreated", v11) )
    {
      v6 = (char *)sub_99188(v13, (unsigned int *)&v34);
      *(_DWORD *)(a2 + 28) = v34;
    }
    else if ( !strncmp(v9, "tfree", v11) )
    {
      v6 = (char *)sub_99188(v13, (unsigned int *)&v34);
      *(_DWORD *)(a2 + 36) = v34;
    }
    else if ( !strncmp(v9, "tsize", v11) )
    {
      v6 = (char *)sub_99188(v13, (unsigned int *)&v34);
      *(_DWORD *)(a2 + 32) = v34;
    }
    else if ( !strncmp(v9, "disconn", v11) )
    {
      v6 = (char *)sub_99188(v13, (unsigned int *)&v34);
      *(_DWORD *)(a2 + 40) = v34;
    }
    else if ( !strncmp(v9, "circular", v11) )
    {
      v6 = (char *)sub_99188(v13, (unsigned int *)&v34);
      *(_DWORD *)(a2 + 44) = v34;
    }
    else if ( !strncmp(v9, "starttime", v11) )
    {
      v6 = (char *)sub_99188(v13, (unsigned int *)&v34);
      *(_QWORD *)(a2 + 56) = v34;
    }
    else if ( !strncmp(v9, "stoptime", v11) )
    {
      v6 = (char *)sub_99188(v13, (unsigned int *)&v34);
      *(_QWORD *)(a2 + 64) = v34;
    }
    else if ( !strncmp(v9, "username", v11) )
    {
      v30 = strlen(v9);
      v31 = sub_93028(v30 >> 1);
      *(_DWORD *)(a2 + 48) = v31;
      sub_991F8(v13, v31, (v6 - (char *)v13) / 2)[*(_DWORD *)(a2 + 48)] = 0;
    }
    else if ( !strncmp(v9, "notes", v11) )
    {
      v32 = strlen(v9);
      v33 = sub_93028(v32 >> 1);
      *(_DWORD *)(a2 + 52) = v33;
      sub_991F8(v13, v33, (v6 - (char *)v13) / 2)[*(_DWORD *)(a2 + 52)] = 0;
    }
    else
    {
      v6 = strchr((const char *)v13, 59);
      if ( !v6 )
        return;
    }
  }
}
