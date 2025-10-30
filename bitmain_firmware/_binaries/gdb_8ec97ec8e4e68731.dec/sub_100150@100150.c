_DWORD *__fastcall sub_100150(_DWORD *a1, const char *a2, int a3)
{
  char v4; // r5
  void *v5; // r3
  int v8; // r5
  size_t v9; // r0
  size_t v10; // r8
  _DWORD *v11; // r2
  void *v12; // r0
  void *v13; // r3
  bool v14; // zf
  _DWORD *v15; // r0
  void *v16; // [sp+4h] [bp-24h] BYREF
  void *ptr; // [sp+8h] [bp-20h] BYREF
  size_t v18; // [sp+Ch] [bp-1Ch] BYREF
  void *v19; // [sp+10h] [bp-18h] BYREF
  size_t v20; // [sp+14h] [bp-14h]
  _DWORD v21[4]; // [sp+18h] [bp-10h] BYREF

  v4 = a3;
  if ( *a2 )
  {
    sub_FEB54(&v16, (int)a2, 0);
    v5 = v16;
    if ( v16 )
      v8 = 0;
    else
      v8 = v4 & 1;
    if ( !v8 )
      goto LABEL_4;
    v19 = v21;
    v9 = strlen(a2);
    v10 = v9;
    v18 = v9;
    if ( v9 > 0xF )
    {
      v15 = (_DWORD *)sub_33B2BC(&v19, &v18, 0);
      v19 = v15;
      v21[0] = v18;
    }
    else
    {
      if ( v9 == 1 )
      {
        v11 = v21;
        LOBYTE(v21[0]) = *a2;
        goto LABEL_12;
      }
      if ( !v9 )
      {
        v11 = v21;
        goto LABEL_12;
      }
      v15 = v21;
    }
    memcpy(v15, a2, v10);
    v10 = v18;
    v11 = v19;
LABEL_12:
    v20 = v10;
    *((_BYTE *)v11 + v10) = 0;
    do
    {
      if ( !v20 )
        break;
      sub_33B5A4(&v19, v20 - 1, 1);
      sub_FEB54(&ptr, (int)v19, 0);
      v12 = v16;
      v13 = ptr;
      ptr = 0;
      v14 = v16 == 0;
      v16 = v13;
      if ( !v14 )
      {
        free(v12);
        if ( ptr )
          free(ptr);
        v13 = v16;
      }
    }
    while ( !v13 );
    if ( v19 != v21 )
      sub_339E64(v19);
    v5 = v16;
    goto LABEL_4;
  }
  if ( !a3 )
  {
    sub_FEB54(&v16, (int)a2, 0);
    v5 = v16;
LABEL_4:
    *a1 = v5;
    return a1;
  }
  *a1 = sub_327254("");
  return a1;
}
