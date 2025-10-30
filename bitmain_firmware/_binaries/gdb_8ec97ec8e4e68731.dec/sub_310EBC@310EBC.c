int __fastcall sub_310EBC(_DWORD *a1, unsigned __int8 **a2, _DWORD *a3, int a4, int a5)
{
  unsigned __int8 *v8; // r2
  unsigned int v9; // r0
  int v10; // r0
  int v11; // r10
  unsigned __int8 *v13; // r3
  int v14; // r6
  unsigned __int8 *v15; // r2
  void *v16; // r0
  int v17; // r3
  __int64 v18; // r0
  size_t v19; // r2
  char *v20; // r1
  size_t v21; // r2
  char *v22; // r1
  __int64 v23; // r0
  char *v24; // r1
  __int64 v25; // r0
  int v26; // r0
  size_t v27; // r7
  void *v28; // r11
  char *v29; // r0
  char *v30; // r3
  __int64 v31; // r0
  int v32; // r0
  char *v33; // r1
  int v34; // r0
  char *v35; // r1
  char *v36; // [sp+8h] [bp-34h]
  int v37; // [sp+8h] [bp-34h]
  int v38; // [sp+Ch] [bp-30h]
  int v40; // [sp+14h] [bp-28h]
  char nptr[4]; // [sp+1Ch] [bp-20h] BYREF
  void *v42; // [sp+20h] [bp-1Ch] BYREF
  _BYTE *v43; // [sp+24h] [bp-18h]
  int v44; // [sp+28h] [bp-14h]
  void *ptr; // [sp+2Ch] [bp-10h] BYREF
  void *v46; // [sp+30h] [bp-Ch]
  int v47; // [sp+34h] [bp-8h]

  v38 = a4;
  v40 = sub_30CE10(a1);
  if ( a4 )
  {
    v38 = a1[10] & 1;
    if ( !v38 )
      v38 = a1[11] & 1;
  }
  v8 = *a2;
  v44 = 0;
  v43 = 0;
  v42 = 0;
  v47 = 0;
  v46 = 0;
  ptr = 0;
  if ( *v8 != 75 )
  {
    v9 = v8[1];
    if ( v9 < 0x31 )
      return 0;
    if ( v9 <= 0x39 )
    {
      nptr[0] = v8[1];
      nptr[1] = 0;
      v10 = strtol(nptr, 0, 10);
      v13 = *a2;
      if ( (*a2)[2] == 95 )
        ++v13;
      *a2 = v13 + 2;
    }
    else
    {
      if ( v9 != 95 )
        return 0;
      *a2 = v8 + 1;
      v10 = sub_30D0AC(a2);
      if ( v10 == -1 )
        return 0;
    }
    v14 = v10;
    v11 = 1;
    if ( v10 <= 0 )
      goto LABEL_34;
    while ( 1 )
    {
      v15 = *a2;
      v16 = ptr;
      v46 = ptr;
      v17 = *v15;
      if ( v17 == 95 )
      {
        *a2 = v15 + 1;
        v17 = *++v15;
      }
      if ( v17 == 116 )
        break;
      if ( v17 != 75 )
      {
        if ( (*a1 & 0x2000) != 0 )
        {
          v26 = sub_30D00C(a2);
          v27 = v26;
          if ( v26 == -1 )
            goto LABEL_62;
          v28 = sub_93028(v26 + 1);
          memcpy(v28, *a2, v27);
          *((_BYTE *)v28 + v27) = 0;
          v29 = sub_30DFAC((const char *)v28, *a1);
          v30 = v29;
          if ( v29 )
          {
            if ( *v29 )
            {
              v36 = v29;
              sub_30D3E4((int)&v42, v29);
              v30 = v36;
            }
            free(v30);
            HIDWORD(v31) = *a2;
          }
          else
          {
            HIDWORD(v31) = *a2;
            if ( v27 )
            {
              LODWORD(v31) = &v42;
              sub_30D320(v31, v27);
              HIDWORD(v31) = *a2;
            }
          }
          v37 = HIDWORD(v31);
          free(v28);
          *a2 = (unsigned __int8 *)(v37 + v27);
        }
        else
        {
          if ( v16 )
          {
            free(v16);
            v46 = 0;
            v47 = 0;
            ptr = 0;
          }
          v11 = sub_30E828(a1, a2, (unsigned int)&ptr);
          if ( !v11 )
          {
LABEL_62:
            v11 = 0;
            goto LABEL_34;
          }
          HIDWORD(v18) = &ptr;
          LODWORD(v18) = &v42;
          sub_30D52C(v18, (int)v46);
        }
        goto LABEL_24;
      }
      *a2 = v15 + 1;
      v32 = sub_30D0AC(a2);
      if ( v32 == -1 || a1[4] <= v32 )
        goto LABEL_62;
      v33 = *(char **)(a1[2] + 4 * v32);
      if ( v33 && *v33 )
        sub_30D3E4((int)&v42, v33);
LABEL_28:
      if ( v14 != 1 )
      {
        if ( (*a1 & 4) != 0 )
          v20 = ".";
        else
          v20 = "::";
        sub_30D3E4((int)&v42, v20);
      }
      if ( --v14 <= 0 )
        goto LABEL_34;
    }
    v11 = sub_310880(a1, a2, (const void **)&v42, (unsigned int)&ptr, 1, 0);
    if ( !v11 )
      goto LABEL_62;
LABEL_24:
    if ( v42 == v43 )
      v19 = 0;
    else
      v19 = v43 - (_BYTE *)v42;
    sub_30CEA0(a1, v42, v19);
    goto LABEL_28;
  }
  *a2 = v8 + 1;
  v34 = sub_30D0AC(a2);
  if ( v34 == -1 || a1[4] <= v34 )
    return 0;
  v35 = *(char **)(a1[2] + 4 * v34);
  if ( v35 && *v35 )
  {
    v11 = 1;
    sub_30D3E4((int)&v42, v35);
  }
  else
  {
    v11 = 1;
  }
LABEL_34:
  if ( v42 == v43 )
    v21 = 0;
  else
    v21 = v43 - (_BYTE *)v42;
  sub_30D258(a1 + 3, v42, v21, v40);
  if ( v38 )
  {
    v22 = ".";
    if ( (*a1 & 4) == 0 )
      v22 = "::";
    sub_30D3E4((int)&v42, v22);
    if ( (a1[11] & 1) != 0 )
      sub_30D3E4((int)&v42, "~");
    LODWORD(v23) = &v42;
    HIDWORD(v23) = &ptr;
    sub_30D52C(v23, (int)v46);
  }
  if ( a5 )
  {
    sub_30D52C(__SPAIR64__(&v42, (unsigned int)a3), (int)v43);
  }
  else
  {
    if ( *a3 != a3[1] )
    {
      v24 = ".";
      if ( (*a1 & 4) == 0 )
        v24 = "::";
      sub_30D3E4((int)&v42, v24);
    }
    HIDWORD(v25) = v42;
    if ( v42 != v43 && v43 != v42 )
    {
      LODWORD(v25) = a3;
      sub_30D358(v25, v43 - (_BYTE *)v42);
    }
  }
  if ( ptr )
  {
    free(ptr);
    v46 = 0;
    v47 = 0;
    ptr = 0;
  }
  if ( !v42 )
    return v11;
  free(v42);
  return v11;
}
