void __fastcall sub_1F6BB4(const char *a1)
{
  int v1; // r4
  int v2; // r7
  int v3; // r5
  char *v4; // r0
  char *v5; // r10
  char *v6; // r6
  int v7; // r9
  size_t v8; // r9
  __int64 v9; // r8
  ssize_t v10; // r0
  int *v11; // r4
  int v12; // r0
  __int64 v13; // r0
  int v14; // r0
  _BOOL4 v15; // r3
  size_t v16; // r8
  const char *v17; // [sp+Ch] [bp-14h] BYREF
  __int64 v18; // [sp+10h] [bp-10h] BYREF
  __int64 v19; // [sp+18h] [bp-8h] BYREF

  v17 = a1;
  if ( sub_1F5F94(&v17, &v19) )
    goto LABEL_13;
  v1 = sub_1F63C0(v19);
  if ( v1 == -1 )
  {
LABEL_14:
    sub_1F61A4(-1, 9);
    return;
  }
  if ( sub_1F5F94(&v17, &v18) || (v2 = v18, sub_1F5F94(&v17, &v19)) )
  {
LABEL_13:
    sub_1F61A4(-1, 5);
    return;
  }
  v3 = v19;
  if ( v1 == -3 )
    goto LABEL_14;
  if ( v1 == -2 )
  {
    v4 = (char *)sub_93028(0x4000u);
    v5 = (char *)dword_489354;
    v6 = v4;
    if ( dword_489354 )
    {
      v7 = dword_489358;
      if ( dword_489358 <= (unsigned int)v3 )
      {
        memcpy(v4, (const void *)dword_489354, dword_489358);
        v3 = v7;
        free(v5);
        dword_489354 = 0;
      }
      else
      {
        v8 = dword_489358 - v3;
        memcpy(v4, (const void *)dword_489354, v3);
        memmove(v5, &v5[v3], v8);
        dword_489358 = v8;
      }
    }
    else
    {
      v14 = sub_256844(dword_487A3C, v4, 0x3FFF);
      v15 = v14 > 0;
      if ( v14 <= (unsigned int)v3 )
        v15 = 0;
      if ( v15 )
      {
        v16 = v14 - v3;
        dword_489354 = (int)sub_93028(v14 - v3);
        dword_489358 = v16;
        memcpy((void *)dword_489354, &v6[v3], v16);
      }
      else
      {
        v3 = v14;
      }
    }
  }
  else
  {
    v6 = (char *)sub_93028(v19);
    v9 = lseek64(v1);
    v10 = read(v1, v6, v3);
    v3 = v10;
    if ( v10 >= 0 )
    {
      if ( !v10 )
        goto LABEL_18;
      goto LABEL_17;
    }
    if ( *_errno_location() != 4 )
      goto LABEL_12;
    v13 = lseek64(v1);
    if ( v9 == v13 )
      goto LABEL_12;
    v3 = v13 - v9;
  }
  if ( v3 > 0 )
  {
LABEL_17:
    v11 = _errno_location();
    v12 = sub_230484(v2, v6, v3);
    *v11 = v12;
    if ( v12 )
      goto LABEL_12;
LABEL_18:
    sub_1F61A4(v3, 0);
    goto LABEL_19;
  }
  if ( !v3 )
    goto LABEL_18;
LABEL_12:
  sub_1F6474();
LABEL_19:
  free(v6);
}
