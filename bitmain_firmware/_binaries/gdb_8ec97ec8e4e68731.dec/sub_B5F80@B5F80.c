void __fastcall sub_B5F80(int a1, int a2, const char *a3, const char *a4, int a5, int a6, int *a7, int *a8, int a9)
{
  _BOOL4 v10; // r3
  _BOOL4 v12; // r0
  int v13; // r8
  char *v14; // r2
  int v15; // r3
  int v16; // r11
  int v17; // r10
  _BYTE *v18; // r2
  int v19; // r12
  int v20; // r1
  int v21; // r0
  bool v22; // zf
  char *v23; // r3
  int i; // r2
  _BYTE *v25; // r2
  int v26; // r12
  int v27; // r1
  int v28; // r0
  void *v29; // r0
  const char *v30; // r0
  char *v31; // r0
  const char *v32; // r4
  size_t v33; // r0
  _BYTE *v34; // r3
  int v35; // r0
  int v36; // r2
  int v37; // r1
  void *v38; // r0
  int v39; // [sp+18h] [bp-5Ch]
  int v40; // [sp+20h] [bp-54h] BYREF
  int v41; // [sp+24h] [bp-50h] BYREF
  void *v42; // [sp+28h] [bp-4Ch] BYREF
  _BYTE v43[16]; // [sp+30h] [bp-44h] BYREF
  void *v44; // [sp+40h] [bp-34h] BYREF
  int v45; // [sp+44h] [bp-30h]
  _DWORD v46[4]; // [sp+48h] [bp-2Ch] BYREF
  void *ptr; // [sp+58h] [bp-1Ch] BYREF
  int v48; // [sp+5Ch] [bp-18h]
  _DWORD v49[5]; // [sp+60h] [bp-14h] BYREF

  v22 = a4 == 0;
  v41 = a1;
  v40 = a2;
  v10 = a9 == 0;
  if ( !v22 )
    v10 = 1;
  if ( !v10 )
  {
    sub_94700(
      (int)"ada-varobj.c",
      668,
      "%s: Assertion `%s' failed.",
      "void ada_varobj_describe_child(value*, type*, const char*, const char*, int, std::__cxx11::string*, value**, type*"
      "*, std::__cxx11::string*)",
      "parent_path_expr != NULL");
    v38 = v42;
    if ( v42 != v43 )
      sub_339E64(v42);
    sub_338FFC(v38);
  }
  sub_B5774(&v41, &v40);
  sub_B57B4((int)&v41, &v40);
  if ( a6 )
  {
    ptr = v49;
    v48 = 0;
    LOBYTE(v49[0]) = 0;
    sub_33B48C(a6, &ptr);
    v48 = 0;
    *(_BYTE *)ptr = 0;
    if ( ptr != v49 )
      sub_339E64(ptr);
  }
  if ( a7 )
    *a7 = 0;
  if ( a8 )
    *a8 = 0;
  if ( a9 )
  {
    ptr = v49;
    v48 = 0;
    LOBYTE(v49[0]) = 0;
    sub_33B48C(a9, &ptr);
    v48 = 0;
    *(_BYTE *)ptr = 0;
    if ( ptr != v49 )
      sub_339E64(ptr);
  }
  v12 = sub_A0C94(v40);
  v13 = v40;
  v14 = *(char **)(v40 + 24);
  v15 = *v14;
  if ( v12 && v15 == 23 )
    goto LABEL_22;
  switch ( v15 )
  {
    case 2:
      v16 = *(_DWORD *)(*((_DWORD *)v14 + 6) + 12);
      v39 = v41;
      v17 = a5 + sub_9E8E8(v16);
      if ( !a6 )
        goto LABEL_30;
      sub_B5D04(&ptr, v16, v17);
      v18 = *(_BYTE **)a6;
      if ( ptr == v49 )
      {
        sub_33B48C(a6, &ptr);
        v18 = ptr;
      }
      else
      {
        v19 = v48;
        v20 = v49[0];
        if ( v18 == (_BYTE *)(a6 + 8) )
        {
          *(_DWORD *)a6 = ptr;
          *(_DWORD *)(a6 + 4) = v19;
          *(_DWORD *)(a6 + 8) = v20;
        }
        else
        {
          *(_DWORD *)a6 = ptr;
          *(_DWORD *)(a6 + 4) = v19;
          v21 = *(_DWORD *)(a6 + 8);
          *(_DWORD *)(a6 + 8) = v20;
          if ( v18 )
          {
            ptr = v18;
            v49[0] = v21;
            goto LABEL_28;
          }
        }
        ptr = v49;
        v18 = v49;
      }
LABEL_28:
      v48 = 0;
      *v18 = 0;
      if ( ptr != v49 )
        sub_339E64(ptr);
LABEL_30:
      v22 = a7 == 0;
      if ( a7 )
        v22 = v39 == 0;
      if ( !v22 )
        sub_B5A9C(v39, *(_DWORD *)(v13 + 24), v17, a7, 0);
      if ( a8 )
        sub_B5A9C(v39, *(_DWORD *)(v13 + 24), v17, 0, a8);
      if ( !a9 )
        return;
      sub_B5D04(&v42, v16, v17);
      v23 = *(char **)(v16 + 24);
      for ( i = *v23; i == 12; i = *v23 )
      {
        v16 = *((_DWORD *)v23 + 5);
        v23 = *(char **)(v16 + 24);
      }
      if ( (i & 0xFFFFFFEF) == 5 )
      {
        v30 = (const char *)sub_A0854(v16);
        if ( v30 )
        {
          v31 = sub_9EB80(v30);
          v32 = v31;
          if ( v31 )
          {
            v33 = sub_9E5E8(v31);
            sub_931D8((char **)&v44, "(%s)(%.*s'(%s))", a4, v33, v32, (const char *)v42);
            v34 = *(_BYTE **)a9;
            if ( v44 == v46 )
            {
              sub_33B48C(a9, &v44);
              v34 = v44;
            }
            else
            {
              v35 = v45;
              v36 = v46[0];
              if ( v34 == (_BYTE *)(a9 + 8) )
              {
                *(_DWORD *)a9 = v44;
                *(_DWORD *)(a9 + 4) = v35;
                *(_DWORD *)(a9 + 8) = v36;
              }
              else
              {
                *(_DWORD *)a9 = v44;
                *(_DWORD *)(a9 + 4) = v35;
                v37 = *(_DWORD *)(a9 + 8);
                *(_DWORD *)(a9 + 8) = v36;
                if ( v34 )
                {
                  v44 = v34;
                  v46[0] = v37;
                  goto LABEL_53;
                }
              }
              v44 = v46;
              v34 = v46;
            }
LABEL_53:
            v45 = 0;
            *v34 = 0;
            v29 = v44;
            if ( v44 == v46 )
              goto LABEL_55;
            goto LABEL_54;
          }
        }
      }
      sub_931D8((char **)&ptr, "(%s)(%s)", a4, (const char *)v42);
      v25 = *(_BYTE **)a9;
      if ( ptr == v49 )
      {
        sub_33B48C(a9, &ptr);
        v25 = ptr;
      }
      else
      {
        v26 = v48;
        v27 = v49[0];
        if ( v25 == (_BYTE *)(a9 + 8) )
        {
          *(_DWORD *)a9 = ptr;
          *(_DWORD *)(a9 + 4) = v26;
          *(_DWORD *)(a9 + 8) = v27;
        }
        else
        {
          *(_DWORD *)a9 = ptr;
          *(_DWORD *)(a9 + 4) = v26;
          v28 = *(_DWORD *)(a9 + 8);
          *(_DWORD *)(a9 + 8) = v27;
          if ( v25 )
          {
            ptr = v25;
            v49[0] = v28;
            goto LABEL_44;
          }
        }
        ptr = v49;
        v25 = v49;
      }
LABEL_44:
      v48 = 0;
      *v25 = 0;
      v29 = ptr;
      if ( ptr == v49 )
      {
LABEL_55:
        if ( v42 != v43 )
          sub_339E64(v42);
        return;
      }
LABEL_54:
      sub_339E64(v29);
      goto LABEL_55;
    case 3:
      ((void (__fastcall *)(int, int, const char *, const char *, int, int, int *, int *, int))loc_B6484)(
        v41,
        v40,
        a3,
        a4,
        a5,
        a6,
        a7,
        a8,
        a9);
      break;
    case 1:
LABEL_22:
      sub_B5DC8(v41, v40, a3, a4, (void **)a6, a7, a8, (void **)a9);
      return;
    default:
      if ( a6 )
        sub_33BC54(a6, 0, *(_DWORD *)(a6 + 4), "???", 3u);
      break;
  }
}
