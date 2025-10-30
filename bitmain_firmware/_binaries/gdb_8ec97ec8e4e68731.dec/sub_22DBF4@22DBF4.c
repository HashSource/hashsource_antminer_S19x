int __fastcall sub_22DBF4(int a1, int a2, int a3, int a4, int a5, _DWORD *a6)
{
  _DWORD *i; // r4
  int (__fastcall *v11)(_DWORD *, int, int, int, int, int, _DWORD *); // r6
  int v12; // r6
  _DWORD *v14; // r0
  _DWORD *v15; // r11
  int *v16; // r0
  int v17; // r2
  _DWORD *v18; // r3
  int v19; // r0
  unsigned int v20; // r12
  int v21; // r3
  _DWORD *v22; // r1
  int v23; // r2
  int v24; // lr
  unsigned int v25; // r3
  unsigned int v26; // r12
  _DWORD *v27; // r1

  if ( dword_489AD8 <= 1 )
    goto LABEL_34;
  for ( i = (_DWORD *)dword_4899A0; ; i = (_DWORD *)sub_22451C("file I/O") )
  {
    while ( 1 )
    {
      if ( !i )
      {
        v12 = -1;
        *a6 = 88;
        return v12;
      }
      v11 = (int (__fastcall *)(_DWORD *, int, int, int, int, int, _DWORD *))i[117];
      if ( v11 )
        break;
      i = (_DWORD *)*i;
    }
    v14 = (_DWORD *)v11(i, a1, a2, a3, a4, a5, a6);
    v15 = v14;
    if ( (int)v14 < 0 )
    {
      v12 = -1;
      goto LABEL_11;
    }
    v14 = (_DWORD *)dword_489F94;
    if ( !dword_489F94 )
    {
      if ( dword_489F98 )
      {
        MEMORY[0] = i;
        __und(0);
      }
LABEL_38:
      v14 = sub_99EB8((unsigned int *)dword_489F94, 1, 8, 8);
      v20 = *v14;
      v25 = v14[1];
      dword_489F94 = (int)v14;
      goto LABEL_31;
    }
    v20 = *(_DWORD *)dword_489F94;
    if ( (unsigned int)dword_489F98 >= *(_DWORD *)dword_489F94 )
    {
      v21 = dword_489F98;
      v27 = 0;
    }
    else
    {
      v21 = dword_489F98 + 1;
      v22 = (_DWORD *)(dword_489F94 + 8 * (dword_489F98 + 1));
      if ( (int)v22[1] < 0 )
        goto LABEL_25;
      v23 = dword_489F94 + 8 * dword_489F98;
      while ( 1 )
      {
        if ( v21 == v20 )
        {
          dword_489F98 = *(_DWORD *)dword_489F94;
          goto LABEL_30;
        }
        v24 = *(_DWORD *)(v23 + 20);
        v23 += 8;
        if ( v24 < 0 )
          break;
        ++v21;
      }
      v27 = (_DWORD *)(dword_489F94 + 8 * (v21 + 1));
      dword_489F98 = v21;
    }
    if ( v21 != v20 )
    {
      v12 = dword_489F98;
      *v27 = i;
      v27[1] = v15;
      dword_489F98 = v12 + 1;
      goto LABEL_11;
    }
LABEL_30:
    v25 = *(_DWORD *)(dword_489F94 + 4);
    if ( v20 == v25 )
      goto LABEL_38;
LABEL_31:
    if ( v20 < v25 )
      break;
    sub_94700(
      (int)"target.c",
      2760,
      "%s: Assertion `%s' failed.",
      "fileio_fh_t* VEC_fileio_fh_t_quick_push(VEC_fileio_fh_t*, const fileio_fh_t*, const char*, unsigned int)",
      "quick_push");
LABEL_34:
    ;
  }
  v26 = v20 + 1;
  v22 = &v14[2 * v26];
  *v14 = v26;
LABEL_25:
  v12 = dword_489F98;
  *v22 = i;
  v22[1] = v15;
  dword_489F98 = v12 + 1;
LABEL_11:
  if ( !dword_489C84 )
    return v12;
  v16 = (int *)sub_242FC8(v14);
  if ( a1 )
    v17 = *(_DWORD *)(a1 + 8);
  else
    v17 = 0;
  if ( v12 == -1 )
    v18 = a6;
  else
    v18 = 0;
  v19 = *v16;
  if ( v12 == -1 )
    v18 = (_DWORD *)*v18;
  sub_2594B0(v19, "target_fileio_open (%d,%s,0x%x,0%o,%d) = %d (%d)\n", v17, a2, a3, a4, a5, v12, v18);
  return v12;
}
