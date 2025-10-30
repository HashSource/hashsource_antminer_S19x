int *__fastcall sub_103CD4(int *a1, int a2, char *a3, _DWORD *a4, int a5, int a6)
{
  int v10; // r0
  int v11; // r2
  _BOOL4 v13; // r3
  int v14; // r1
  int v15; // r0
  int v16; // r9
  int v17; // r10
  int v18; // r3
  int v19; // r0
  char *v20; // r2
  int v21; // t1
  bool v22; // zf
  int v23; // r9
  int v24; // r1
  bool v25; // zf
  char *v26; // r2
  int v27; // t1
  bool v28; // zf
  int v29; // r0
  char *v30; // r9
  size_t v31; // r0
  size_t v32; // r0
  _DWORD *v33; // r2
  _BYTE *v34; // r3
  int v35; // r2
  char *v36; // r4
  int v37; // r2
  _BYTE *v38; // r3
  int v39; // r2
  void *v40; // r0
  int v41; // [sp+8h] [bp-70h] BYREF
  int v42; // [sp+Ch] [bp-6Ch]
  int v43; // [sp+10h] [bp-68h] BYREF
  void *v44; // [sp+18h] [bp-60h] BYREF
  int v45; // [sp+1Ch] [bp-5Ch]
  _DWORD v46[4]; // [sp+20h] [bp-58h] BYREF
  void *ptr; // [sp+30h] [bp-48h] BYREF
  int v48; // [sp+34h] [bp-44h]
  _DWORD v49[4]; // [sp+38h] [bp-40h] BYREF
  void *v50; // [sp+48h] [bp-30h] BYREF
  int v51; // [sp+4Ch] [bp-2Ch]
  _DWORD v52[4]; // [sp+50h] [bp-28h] BYREF
  void *v53; // [sp+60h] [bp-18h] BYREF
  int v54; // [sp+64h] [bp-14h]
  _DWORD v55[4]; // [sp+68h] [bp-10h] BYREF

  v10 = sub_21CFB4(&v41, a3, a4, a5);
  if ( v41 )
  {
    v11 = v42;
    *a1 = v41;
    a1[1] = v11;
    return a1;
  }
  v13 = a5 == 1;
  if ( !a2 )
    v13 = 0;
  if ( v13 )
  {
    v14 = a4 ? sub_C233C(a4) : sub_16F654(v10);
    v15 = ((int (__fastcall *)(int, int, char *))loc_19470C)(a2, v14, a3);
    if ( v15 )
    {
      *a1 = v15;
      a1[1] = 0;
      return a1;
    }
  }
  sub_21D720(&v41, a3, a4, a5);
  v16 = v41;
  v17 = v42;
  if ( !v41 && a6 )
  {
    v18 = (unsigned __int8)*a3;
    v45 = v41;
    LOBYTE(v46[0]) = v41;
    v48 = v41;
    v19 = v18 == 46;
    if ( !v18 )
      v19 = 1;
    LOBYTE(v49[0]) = v41;
    v44 = v46;
    ptr = v49;
    if ( v19 )
    {
      v19 = v41;
    }
    else
    {
      v20 = a3;
      do
      {
        v21 = (unsigned __int8)*++v20;
        v18 = v21;
        ++v19;
        v22 = v21 == 0;
        if ( v21 )
          v22 = v18 == 46;
      }
      while ( !v22 );
    }
    v23 = 0;
    while ( v18 )
    {
      if ( v18 != 46 )
      {
        sub_94700(
          (int)"d-namespace.c",
          62,
          "%s: Assertion `%s' failed.",
          "unsigned int d_entire_prefix_len(const char*)",
          "name[current_len] == '.'");
        if ( ptr != v49 )
          sub_339E64(ptr);
        v40 = v44;
        if ( v44 != v46 )
          sub_339E64(v44);
        sub_338FFC(v40);
      }
      v24 = v19 + 1;
      v18 = (unsigned __int8)a3[v19 + 1];
      v25 = v18 == 0;
      if ( a3[v19 + 1] )
        v25 = v18 == 46;
      if ( !v25 )
      {
        v26 = &a3[v19 + 2];
        do
        {
          v24 = v26 - a3;
          v27 = (unsigned __int8)*v26++;
          v18 = v27;
          v28 = v27 == 46;
          if ( v27 != 46 )
            v28 = v18 == 0;
        }
        while ( !v28 );
      }
      v23 = v19;
      v19 = v24;
    }
    if ( !v23 )
    {
      v29 = sub_194438(5);
      sub_21CDC4(&v53, v29, a4);
      if ( !v53 )
      {
        v33 = ptr;
        *a1 = 0;
        a1[1] = 0;
        goto LABEL_61;
      }
      v30 = *(char **)(*(_DWORD *)(sub_171258(*(_DWORD *)(*(_DWORD *)(*((_DWORD *)v53 + 6) + 24) + 20)) + 24) + 8);
      v31 = strlen(v30);
      sub_33BC54((int)&v44, 0, v45, v30, v31);
      v32 = strlen(a3);
      sub_33BC54((int)&ptr, 0, v48, a3, v32);
LABEL_40:
      sub_21D720(&v43, v44, a4, a5);
      v33 = ptr;
      if ( v43 )
      {
        sub_103B1C(&v41, *(_DWORD *)(v43 + 24), (const char *)ptr, (int)a4);
        v16 = v41;
        v17 = v42;
        if ( ptr != v49 )
          sub_339E64(ptr);
        if ( v44 != v46 )
          sub_339E64(v44);
        goto LABEL_13;
      }
      *a1 = 0;
      a1[1] = 0;
LABEL_61:
      if ( v33 != v49 )
        sub_339E64(v33);
      if ( v44 != v46 )
        sub_339E64(v44);
      return a1;
    }
    v50 = v52;
    sub_103A6C(&v50, a3, (int)&a3[v23]);
    if ( v50 == v52 )
    {
      sub_33B48C(&v44, &v50);
      v34 = v50;
    }
    else
    {
      v34 = v44;
      if ( v44 == v46 )
      {
        v44 = v50;
        v45 = v51;
        v46[0] = v52[0];
      }
      else
      {
        v44 = v50;
        v45 = v51;
        v35 = v46[0];
        v46[0] = v52[0];
        if ( v34 )
        {
          v50 = v34;
          v52[0] = v35;
          goto LABEL_49;
        }
      }
      v50 = v52;
      v34 = v52;
    }
LABEL_49:
    v51 = 0;
    *v34 = 0;
    if ( v50 != v52 )
      sub_339E64(v50);
    v36 = &a3[v23 + 1];
    v53 = v55;
    if ( v36 )
      v37 = (int)&v36[strlen(v36)];
    else
      v37 = -1;
    sub_103A6C(&v53, v36, v37);
    if ( v53 == v55 )
    {
      sub_33B48C(&ptr, &v53);
      v38 = v53;
    }
    else
    {
      v38 = ptr;
      if ( ptr == v49 )
      {
        ptr = v53;
        v48 = v54;
        v49[0] = v55[0];
      }
      else
      {
        ptr = v53;
        v48 = v54;
        v39 = v49[0];
        v49[0] = v55[0];
        if ( v38 )
        {
          v53 = v38;
          v55[0] = v39;
          goto LABEL_58;
        }
      }
      v53 = v55;
      v38 = v55;
    }
LABEL_58:
    v54 = 0;
    *v38 = 0;
    if ( v53 != v55 )
      sub_339E64(v53);
    goto LABEL_40;
  }
LABEL_13:
  *a1 = v16;
  a1[1] = v17;
  return a1;
}
