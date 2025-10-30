void __fastcall sub_141A04(int *a1, int a2)
{
  int v4; // r1
  unsigned __int16 *v5; // r10
  int v6; // r1
  int v7; // r2
  bool v8; // zf
  int *v9; // r5
  int v10; // r3
  bool v11; // zf
  int v12; // r2
  int *v13; // r4
  int v14; // r0
  int v15; // r1
  __int64 v16; // r2
  char *v17; // r4
  char *v18; // r6
  char *v19; // r5
  int v20; // r5
  char *v21; // r5
  unsigned int *v22; // r4
  char *v23; // lr
  char *v24; // r1
  unsigned int *v25; // r2
  unsigned int v26; // r12
  unsigned int v27; // t1
  unsigned int v28; // r3
  unsigned int v29; // t1
  char *v30; // r1
  int v31; // r5
  char *v32; // r6
  int v33; // r3
  int v34; // t1
  int v35; // t1
  int v36; // r1
  unsigned int v37; // r2
  unsigned int v38; // r0
  char *v39; // r3
  unsigned int v40; // t1
  char *v41; // r1
  int v42; // [sp+0h] [bp-24h]
  int v43; // [sp+Ch] [bp-18h] BYREF
  int v44; // [sp+10h] [bp-14h] BYREF
  void *ptr; // [sp+14h] [bp-10h] BYREF
  char *v46; // [sp+18h] [bp-Ch]
  char *v47; // [sp+1Ch] [bp-8h]

  v4 = sub_12E694((int)a1, 49, a2);
  if ( !v4 )
    return;
  v43 = a2;
  v5 = (unsigned __int16 *)sub_12E620(a1 + 2, v4, &v43);
  v6 = *v5;
  v7 = *(unsigned __int16 *)a1;
  v42 = *(_DWORD *)(v43 + 76);
  *(_DWORD *)(v43 + 76) = *(_DWORD *)(a2 + 76);
  if ( v7 != v6 )
  {
    v8 = v7 == 29;
    if ( v7 == 29 )
      v8 = v6 == 46;
    if ( !v8 && dword_47AC88 > 0 )
      sub_F43B4(&off_46D334, "DIE 0x%x and its abstract origin 0x%x have different tags", a1[2], *((_DWORD *)v5 + 2));
  }
  v9 = (int *)a1[3];
  ptr = 0;
  v46 = 0;
  v47 = 0;
  if ( !v9 || (v10 = *(unsigned __int16 *)v9, !*(_WORD *)v9) )
  {
    v31 = *((_DWORD *)v5 + 3);
    v36 = v43;
    if ( !v31 )
    {
      *(_DWORD *)(v43 + 76) = v42;
      return;
    }
    v18 = 0;
    v17 = 0;
    goto LABEL_56;
  }
  do
  {
    v11 = v10 == 72;
    if ( v10 != 72 )
      v11 = v10 == 16649;
    if ( !v11 )
    {
      v12 = a2;
      v13 = v9;
      v44 = a2;
      while ( 1 )
      {
        v15 = sub_12E694((int)v13, 49, v12);
        if ( !v15 )
          break;
        v14 = sub_12E620(v13 + 2, v15, &v44);
        v12 = v44;
        v13 = (int *)v14;
      }
      if ( v13 != v9 )
      {
        LODWORD(v16) = *(unsigned __int16 *)v9;
        HIDWORD(v16) = *(unsigned __int16 *)v13;
        if ( (_DWORD)v16 == HIDWORD(v16) || v16 == 0x2E0000001DLL || dword_47AC88 <= 0 )
        {
          if ( (unsigned __int16 *)v13[5] != v5 )
            goto LABEL_21;
        }
        else
        {
          sub_F43B4(&off_46D334, "Child DIE 0x%x and its abstract origin 0x%x have different tags", v9[2], v13[2]);
          if ( (unsigned __int16 *)v13[5] != v5 )
          {
LABEL_21:
            if ( dword_47AC88 > 0 )
              sub_F43B4(
                &off_46D334,
                "Child DIE 0x%x and its abstract origin 0x%x have different parents",
                v9[2],
                v13[2]);
            goto LABEL_23;
          }
        }
        if ( v46 == v47 )
        {
          sub_1489D4(&ptr);
        }
        else
        {
          v41 = v46 + 4;
          if ( v46 )
            *(_DWORD *)v46 = v13[2];
          v46 = v41;
        }
      }
    }
LABEL_23:
    v9 = (int *)v9[4];
    if ( !v9 )
      break;
    v10 = *(unsigned __int16 *)v9;
  }
  while ( *(_WORD *)v9 );
  v17 = (char *)ptr;
  v18 = v46;
  if ( ptr == v46 )
  {
    v19 = (char *)ptr + 4;
  }
  else
  {
    v20 = v46 - (_BYTE *)ptr;
    sub_141878((int)ptr, v46, 2 * (31 - __clz((v46 - (_BYTE *)ptr) >> 2)));
    if ( v20 <= 64 )
    {
      sub_149A64(v17);
    }
    else
    {
      v21 = v17 + 64;
      sub_149A64(v17);
      if ( v18 != v17 + 64 )
      {
        v22 = (unsigned int *)(v17 + 60);
        v23 = v21;
        do
        {
          while ( 1 )
          {
            v24 = v23;
            v25 = v22;
            v27 = *(_DWORD *)v23;
            v23 += 4;
            v26 = v27;
            v29 = *v22++;
            v28 = v29;
            if ( v26 < v29 )
              break;
            *(_DWORD *)v24 = v26;
            if ( v18 == v23 )
              goto LABEL_47;
          }
          v30 = v23;
          while ( 1 )
          {
            *((_DWORD *)v30 - 1) = v28;
            v30 -= 4;
            v28 = *(v25 - 1);
            if ( v26 >= v28 )
              break;
            --v25;
          }
          *v25 = v26;
        }
        while ( v18 != v23 );
      }
    }
LABEL_47:
    v18 = (char *)ptr;
    v17 = v46;
    v19 = (char *)ptr + 4;
  }
  if ( v17 > v19 )
  {
    v32 = v19 - 8;
    do
    {
      while ( 1 )
      {
        v34 = *((_DWORD *)v32 + 1);
        v32 += 4;
        v33 = v34;
        v35 = *(_DWORD *)v19;
        v19 += 4;
        if ( v33 == v35 && dword_47AC88 > 0 )
          break;
        if ( v17 <= v19 )
          goto LABEL_54;
      }
      sub_F43B4(&off_46D334, "Multiple children of DIE 0x%x refer to DIE 0x%x as their abstract origin", a1[2], v33);
    }
    while ( v17 > v19 );
LABEL_54:
    v18 = (char *)ptr;
  }
  v31 = *((_DWORD *)v5 + 3);
  v36 = v43;
  if ( !v31 )
    goto LABEL_43;
LABEL_56:
  if ( !*(_WORD *)v31 )
    goto LABEL_43;
  while ( 2 )
  {
    if ( v18 >= v17 )
    {
LABEL_39:
      if ( (*(_BYTE *)(v31 + 3) & 2) == 0 )
        goto LABEL_63;
      goto LABEL_40;
    }
    v37 = *(_DWORD *)v18;
    v38 = *(_DWORD *)(v31 + 8);
    if ( v38 <= *(_DWORD *)v18 )
    {
LABEL_38:
      if ( v37 <= v38 )
        goto LABEL_40;
      goto LABEL_39;
    }
    v39 = v18 + 4;
    while ( 1 )
    {
      v18 = v39;
      if ( v39 >= v17 )
        break;
      v40 = *(_DWORD *)v39;
      v39 += 4;
      v37 = v40;
      if ( v40 >= v38 )
        goto LABEL_38;
    }
    if ( (*(_BYTE *)(v31 + 3) & 2) == 0 )
    {
LABEL_63:
      ((void (__fastcall *)(int))loc_143F88)(v31);
      v36 = v43;
    }
LABEL_40:
    v31 = *(_DWORD *)(v31 + 16);
    if ( v31 && *(_WORD *)v31 )
      continue;
    break;
  }
  v18 = (char *)ptr;
LABEL_43:
  *(_DWORD *)(v36 + 76) = v42;
  if ( v18 )
    sub_339E64(v18);
}
