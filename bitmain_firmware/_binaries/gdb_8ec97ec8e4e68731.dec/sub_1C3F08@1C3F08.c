int **__fastcall sub_1C3F08(char **a1, _BYTE **a2, int a3, void ***a4, int a5, int *a6)
{
  _BYTE *v6; // r12
  int **v9; // r6
  void **v11; // r3
  int v12; // r9
  char **v13; // r5
  int v14; // r8
  _DWORD *v15; // r3
  char **v16; // r1
  int v17; // r0
  int v18; // r10
  void *v19; // r11
  _DWORD *v20; // r0
  int *v21; // r8
  int *v22; // r0
  int v23; // r0
  int v24; // r0
  int *v26; // r5
  int *v27; // r0
  int *v28; // r3
  void *v29[3]; // [sp+Ch] [bp-38h] BYREF
  int v30; // [sp+18h] [bp-2Ch] BYREF
  void *ptr; // [sp+1Ch] [bp-28h]
  int v32; // [sp+20h] [bp-24h]

  v6 = *a2;
  v9 = (int **)a1;
  dword_487CC0 = (int)*a2;
  dword_487CC4 = 0;
  dword_487CC8 = 0;
  dword_487C9C = 0;
  dword_487CB0 = 0;
  dword_46DAA0 = -1;
  if ( dword_487CB4 )
  {
    free((void *)dword_487CB4);
    v6 = (_BYTE *)dword_487CC0;
  }
  dword_487CCC = a5;
  dword_487CB4 = 0;
  if ( !v6 || !*v6 )
    sub_51E9C("expression to compute");
  v11 = v29;
  v12 = dword_487CA8;
  memset(v29, 0, sizeof(v29));
  dword_487CD0 = (int)a4;
  dword_487CA8 = (int)v29;
  if ( !a4 )
  {
    a1 = (char **)sub_20F388(&dword_487CD4);
    dword_487CD0 = (int)a1;
    if ( !a1 )
    {
      a1 = (char **)sub_203210(&v30);
      if ( ptr )
        v28 = (int *)*((_DWORD *)ptr + 1);
      else
        v28 = (int *)dword_487CD0;
      if ( ptr )
      {
        v28 = *(int **)(v28[8] + 12);
        dword_487CD0 = (int)v28;
      }
      if ( v28 )
        dword_487CD4 = *v28;
    }
    goto LABEL_12;
  }
  if ( a3 )
    dword_487CD4 = a3;
  else
    v11 = *a4;
  if ( !a3 )
    dword_487CD4 = (int)v11;
  if ( dword_487A04
    || (a1 = (char **)sub_C23B0((int)a4)) == 0
    || (a1 = sub_194438((_BYTE)a1[5] & 0x1F), (v13 = a1) == 0)
    || !a1[2] )
  {
LABEL_12:
    v13 = off_46D5A4[0];
  }
  v14 = sub_B894C((int)a1);
  v30 = 10;
  v15 = sub_93028(0xC0u);
  *v15 = v13;
  v16 = off_46D5A4[0];
  v15[1] = v14;
  v17 = (int)v13[2];
  v18 = (int)v16[2];
  ptr = v15;
  v32 = 0;
  sub_194204(v17);
  v19 = sub_92E28();
  if ( ((int (__fastcall *)(int *))v13[9])(&v30) )
    ((void (__fastcall *)(_DWORD))v13[10])(0);
  sub_92E40((int)v19);
  v20 = sub_1C375C(v9, (int)&v30);
  v21 = *v9;
  if ( dword_487CD8 )
  {
    v22 = (int *)sub_242FC8(v20);
    sub_1569A8((int)v21, *v22, "before conversion to prefix form");
    v21 = *v9;
  }
  v23 = sub_1C3EC0(v21);
  if ( a6 )
    *a6 = v23;
  v24 = ((int (__fastcall *)(int **, _DWORD))v13[11])(v9, 0);
  if ( dword_487CD8 )
  {
    v26 = *v9;
    v27 = (int *)sub_242FC8(v24);
    sub_157614(v26, *v27);
  }
  *a2 = (_BYTE *)dword_487CC0;
  sub_194204(v18);
  if ( ptr )
    free(ptr);
  dword_487CA8 = v12;
  if ( v29[0] )
    sub_339E64(v29[0]);
  return v9;
}
