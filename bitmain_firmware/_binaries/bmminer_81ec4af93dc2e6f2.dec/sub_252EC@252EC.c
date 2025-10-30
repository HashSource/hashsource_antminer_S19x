int __fastcall sub_252EC(int a1, size_t *a2, void **a3)
{
  _DWORD *v5; // r0
  _DWORD *v6; // r5
  void *v7; // r3
  _DWORD *v8; // r0
  void *v9; // r3
  const char *v10; // r12
  _DWORD *v12; // r0
  void *v13; // r3
  int v14; // r0
  int v15; // r1
  int v16; // r2
  int v17; // r3
  int v18; // r12
  _DWORD *v19; // r0
  _DWORD *v20; // r9
  size_t v21; // r0
  signed int v22; // r8
  int v23; // r0
  __int16 v24; // r0
  int v25; // r3
  int v26; // r3
  const char *v27; // r0
  int v28; // r3
  _DWORD *v29; // r0
  void *v30; // r3
  int v31; // r0
  int v32; // r3
  int v33; // r0
  int v34; // r3
  _DWORD v35[512]; // [sp+0h] [bp-800h] BYREF

  v5 = (_DWORD *)sub_72B10(a1, "power");
  v6 = v5;
  if ( !v5 )
  {
    v7 = off_AFC24;
    goto LABEL_12;
  }
  v7 = off_AFC24;
  if ( *v5 )
  {
LABEL_12:
    if ( (unsigned int)v7 <= 3 )
      return -1;
    strcpy((char *)v35, "get power failed\n");
    sub_3AF5C(3, v35, 0, *(_DWORD *)"iled\n");
    return -1;
  }
  if ( (unsigned int)off_AFC24 > 4 )
  {
    strcpy((char *)v35, "power:\n");
    sub_3AF5C(4, v35, 0, "power:\n");
  }
  v8 = (_DWORD *)sub_72B10(v6, "type");
  if ( !v8 )
  {
    v9 = off_AFC24;
    goto LABEL_8;
  }
  v9 = off_AFC24;
  if ( *v8 != 2 )
  {
LABEL_8:
    if ( (unsigned int)v9 > 3 )
    {
      v10 = "get type failed\n";
LABEL_21:
      v14 = *(_DWORD *)v10;
      v15 = *((_DWORD *)v10 + 1);
      v16 = *((_DWORD *)v10 + 2);
      v17 = *((_DWORD *)v10 + 3);
      v18 = *((_DWORD *)v10 + 4);
      v35[0] = v14;
      v35[1] = v15;
      v35[2] = v16;
      v35[3] = v17;
      LOBYTE(v35[4]) = v18;
      sub_3AF5C(3, v35, 0, v17);
      return -1;
    }
    return -1;
  }
  if ( (unsigned int)off_AFC24 > 4 )
  {
    v27 = (const char *)sub_74300(v8);
    snprintf((char *)v35, 0x800u, "type: %s\n", v27);
    sub_3AF5C(4, v35, 0, v28);
  }
  v19 = (_DWORD *)sub_72B10(v6, "version");
  v20 = v19;
  if ( v19 && *v19 == 1 )
  {
    v21 = sub_7365C(v19);
    *a2 = v21;
    *a3 = calloc(v21, 2u);
    if ( (int)*a2 > 0 )
    {
      v22 = 0;
      do
      {
        v23 = sub_736A8(v20, v22);
        v24 = sub_747D0(v23);
        v25 = 2 * v22++;
        *(_WORD *)((char *)*a3 + v25) = v24;
        if ( (unsigned int)off_AFC24 > 4 )
        {
          snprintf((char *)v35, 0x800u, "psu version = 0x%x", *(unsigned __int16 *)((char *)*a3 + v25));
          sub_3AF5C(4, v35, 0, v26);
        }
      }
      while ( v22 < (int)*a2 );
    }
    v29 = (_DWORD *)sub_72B10(v6, "i2c_addr");
    if ( v29 )
    {
      v30 = off_AFC24;
      if ( *v29 == 3 )
      {
        if ( (unsigned int)off_AFC24 > 4 )
        {
          v31 = sub_747D0(v29);
          snprintf((char *)v35, 0x800u, "i2c_addr: %d\n", v31);
          sub_3AF5C(4, v35, 0, v32);
        }
        v12 = (_DWORD *)sub_72B10(v6, "gpio");
        if ( v12 )
        {
          v13 = off_AFC24;
          if ( *v12 == 3 )
          {
            if ( (unsigned int)off_AFC24 > 4 )
            {
              v33 = sub_747D0(v12);
              snprintf((char *)v35, 0x800u, "gpio: %d\n", v33);
              sub_3AF5C(4, v35, 0, v34);
            }
            return 0;
          }
        }
        else
        {
          v13 = off_AFC24;
        }
        if ( (unsigned int)v13 > 3 )
        {
          v10 = (const char *)&unk_8F64C;
          goto LABEL_21;
        }
        return -1;
      }
    }
    else
    {
      v30 = off_AFC24;
    }
    if ( (unsigned int)v30 <= 3 )
      return -1;
    strcpy((char *)v35, "get i2c_addr failed\n");
    sub_3AF5C(3, v35, 0, *(_DWORD *)" failed\n");
    return -1;
  }
  else
  {
    if ( (unsigned int)off_AFC24 <= 3 )
      return -1;
    strcpy((char *)v35, "get version array failed\n");
    sub_3AF5C(3, v35, 0, *(_DWORD *)"array failed\n");
    return -1;
  }
}
