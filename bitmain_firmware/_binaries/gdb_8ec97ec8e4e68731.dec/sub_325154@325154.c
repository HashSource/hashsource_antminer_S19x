const char *__fastcall sub_325154(int a1, unsigned int a2, int a3, int a4, int a5, _BYTE *ptr, int a7, int *a8)
{
  FILE *v9; // r0
  int v11; // r10
  int v13; // r6
  _BYTE *v14; // r9
  unsigned int v15; // r8
  int v16; // r7
  bool v17; // nf
  unsigned int v18; // r3
  const char *v19; // r3
  int v20; // r5
  _BOOL4 v21; // r10
  int v22; // r8
  int v23; // r2
  int v25; // r12
  int v26; // r3
  int v27; // r5
  int v28; // r2
  int v29; // r2
  int (__fastcall *v30)(int, _BYTE *, unsigned int, unsigned int); // r7
  int v31; // r0
  int v32; // r2
  _BYTE *v33; // r0
  _BYTE *v34; // r8
  int v35; // r7
  void *v36; // r0
  int v37; // r1
  _DWORD *v38; // r0
  int v39; // r2
  void *v40; // r0
  int v41; // r1
  _DWORD *v42; // r0
  int v43; // r3
  int v44; // r2
  const char *v45; // [sp+2Ch] [bp-10h] BYREF
  int v46; // [sp+30h] [bp-Ch] BYREF
  int v47; // [sp+34h] [bp-8h]

  v9 = *(FILE **)(a1 + 48);
  v11 = a3;
  if ( v9 )
  {
    if ( fclose(v9) == -1 )
      return "closing pipeline input file";
    *(_DWORD *)(a1 + 48) = 0;
  }
  if ( *(_DWORD *)(a1 + 16) )
  {
    if ( !sub_324F30((int *)a1, 0, (int)&v45, (int)a8) )
      return v45;
    v13 = (**(int (__fastcall ***)(int, _DWORD, unsigned int))(a1 + 68))(a1, *(_DWORD *)(a1 + 16), (a2 >> 4) & 1);
    if ( v13 < 0 )
    {
      v29 = *_errno_location();
      v45 = "open temporary file";
      *a8 = v29;
      return v45;
    }
    if ( *(_DWORD *)(a1 + 20) )
    {
      free(*(void **)(a1 + 16));
      *(_DWORD *)(a1 + 20) = 0;
    }
    v14 = (_BYTE *)(a2 & 1);
    *(_DWORD *)(a1 + 16) = 0;
    if ( (a2 & 1) == 0 )
      goto LABEL_11;
LABEL_21:
    if ( !ptr )
    {
      v16 = (int)v14;
      *(_DWORD *)(a1 + 12) = -1;
      goto LABEL_15;
    }
    v15 = (a2 >> 5) & 1;
    if ( (a2 & 4) == 0 )
      a3 = -1;
    v18 = (a2 >> 8) & 1;
    if ( (a2 & 4) != 0 )
    {
      ptr = sub_31E27C(*(const char **)(a1 + 8), (int)ptr, 0, v18);
      v30 = *(int (__fastcall **)(int, _BYTE *, unsigned int, unsigned int))(*(_DWORD *)(a1 + 68) + 4);
      *(_DWORD *)(a1 + 12) = -1;
      v31 = v30(a1, ptr, (a2 >> 5) & 1, (a2 >> 8) & 1);
      v16 = v31;
      if ( v31 < 0 )
        goto LABEL_31;
      free(ptr);
      goto LABEL_15;
    }
    *(_DWORD *)(a1 + 12) = a3;
    goto LABEL_28;
  }
  v13 = *(_DWORD *)(a1 + 12);
  if ( v13 < 0 )
  {
    v45 = "pipeline already complete";
    *a8 = 0;
    return v45;
  }
  v14 = (_BYTE *)(a2 & 1);
  if ( (a2 & 1) != 0 )
    goto LABEL_21;
LABEL_11:
  if ( (*(_DWORD *)a1 & 2) != 0 )
  {
    v15 = (a2 >> 5) & 1;
    if ( (*(int (__fastcall **)(int, int *, unsigned int))(*(_DWORD *)(a1 + 68) + 20))(a1, &v46, v15) >= 0 )
    {
      v16 = v47;
      v17 = v47 < 0;
      *(_DWORD *)(a1 + 12) = v46;
      if ( !v17 )
        goto LABEL_15;
      v18 = (a2 >> 8) & 1;
      goto LABEL_28;
    }
    v28 = *_errno_location();
    v45 = "pipe";
    *a8 = v28;
LABEL_52:
    if ( !v13 )
      return v45;
    v21 = 0;
    v22 = -1;
    v20 = 0;
    v16 = -1;
    goto LABEL_33;
  }
  v33 = sub_325018((const char **)(a1 + 8), a2, (int)ptr, *(_DWORD *)a1);
  v34 = v33;
  if ( !v33 )
  {
    ptr = v14;
    v45 = "could not create temporary file";
    *a8 = (int)v14;
    goto LABEL_52;
  }
  v35 = *(_DWORD *)a1 & 4;
  if ( v35 )
  {
    v35 = ptr != v33;
  }
  else
  {
    v36 = *(void **)(a1 + 64);
    v37 = *(_DWORD *)(a1 + 60) + 1;
    *(_DWORD *)(a1 + 60) = v37;
    v38 = sub_93050(v36, 4 * v37);
    *(_DWORD *)(a1 + 64) = v38;
    if ( ptr == v34 )
    {
      v39 = sub_327254(v34);
      v38 = *(_DWORD **)(a1 + 64);
    }
    else
    {
      v39 = (int)v34;
    }
    v38[*(_DWORD *)(a1 + 60) - 1] = v39;
  }
  *(_DWORD *)(a1 + 16) = v34;
  v18 = (a2 >> 8) & 1;
  ptr = v34;
  v15 = (a2 >> 5) & 1;
  *(_DWORD *)(a1 + 20) = v35;
LABEL_28:
  v16 = (*(int (__fastcall **)(int, _BYTE *, unsigned int, unsigned int))(*(_DWORD *)(a1 + 68) + 4))(a1, ptr, v15, v18);
  if ( v16 < 0 )
  {
    v14 = 0;
LABEL_31:
    v23 = *_errno_location();
    v20 = 0;
    v45 = "open temporary output file";
    v21 = 0;
    v22 = -1;
    *a8 = v23;
    goto LABEL_32;
  }
LABEL_15:
  if ( a7 )
  {
    v14 = (_BYTE *)(a2 & 0x40);
    if ( (a2 & 0x40) != 0 )
    {
      v19 = "both ERRNAME and PEX_STDERR_TO_PIPE specified.";
      v20 = 0;
LABEL_18:
      v14 = 0;
      v45 = v19;
      v21 = v16 != 1;
      v22 = -1;
      *a8 = 0;
      goto LABEL_32;
    }
    if ( *(_DWORD *)(a1 + 24) == -1 )
    {
      v22 = (*(int (__fastcall **)(int, int, unsigned int, unsigned int))(*(_DWORD *)(a1 + 68) + 4))(
              a1,
              a7,
              (a2 >> 7) & 1,
              (a2 >> 9) & 1);
      if ( v22 < 0 )
      {
        v32 = *_errno_location();
        v45 = "open error file";
        v21 = v16 != 1;
        v20 = a2 & 0x40;
        *a8 = v32;
        goto LABEL_32;
      }
      v25 = *(_DWORD *)(a1 + 68);
      goto LABEL_44;
    }
LABEL_58:
    v19 = "PEX_STDERR_TO_PIPE used in the middle of pipeline";
    v20 = 0;
    goto LABEL_18;
  }
  v22 = *(_DWORD *)(a1 + 24);
  if ( v22 != -1 )
    goto LABEL_58;
  v25 = *(_DWORD *)(a1 + 68);
  if ( (a2 & 0x40) != 0 )
  {
    if ( (*(int (__fastcall **)(int, int *, unsigned int))(v25 + 20))(a1, &v46, (a2 >> 7) & 1) < 0 )
    {
      v44 = *_errno_location();
      v20 = 0;
      v45 = "pipe";
      v21 = v16 != 1;
      v14 = 0;
      *a8 = v44;
      goto LABEL_32;
    }
    v22 = v47;
    v25 = *(_DWORD *)(a1 + 68);
    *(_DWORD *)(a1 + 24) = v46;
  }
  else
  {
    v22 = 2;
  }
LABEL_44:
  if ( (*(_DWORD *)a1 & 2) != 0 )
    v26 = *(_DWORD *)(a1 + 12);
  else
    v26 = -1;
  v27 = (*(int (__fastcall **)(int, unsigned int, int, int, int, int, int, int, int, const char **, int *))(v25 + 8))(
          a1,
          a2,
          v11,
          a4,
          a5,
          v13,
          v16,
          v22,
          v26,
          &v45,
          a8);
  if ( v27 < 0 )
  {
    v21 = v16 != 1;
    v20 = v22 >= 0;
    v14 = 0;
    if ( v22 == 2 )
      v20 = 0;
LABEL_32:
    if ( !v13 )
    {
LABEL_34:
      if ( v21 )
        (*(void (__fastcall **)(int, int))(*(_DWORD *)(a1 + 68) + 12))(a1, v16);
      if ( v20 )
        (*(void (__fastcall **)(int, int))(*(_DWORD *)(a1 + 68) + 12))(a1, v22);
      if ( v14 )
        free(ptr);
      return v45;
    }
LABEL_33:
    (*(void (__fastcall **)(int, int))(*(_DWORD *)(a1 + 68) + 12))(a1, v13);
    goto LABEL_34;
  }
  v40 = *(void **)(a1 + 32);
  v41 = *(_DWORD *)(a1 + 28) + 1;
  *(_DWORD *)(a1 + 28) = v41;
  v42 = sub_93050(v40, 4 * v41);
  v43 = *(_DWORD *)(a1 + 28);
  *(_DWORD *)(a1 + 32) = v42;
  v42[v43 - 1] = v27;
  return 0;
}
