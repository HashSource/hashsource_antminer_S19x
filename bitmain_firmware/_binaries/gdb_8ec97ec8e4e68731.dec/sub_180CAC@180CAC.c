void __fastcall sub_180CAC(const char *a1, int a2, int a3)
{
  int *v6; // r0
  int v7; // r4
  _DWORD *v8; // r0
  void *v9; // r8
  int v10; // r6
  int v11; // r0
  int v12; // r0
  int v13; // r10
  void (__fastcall *v14)(int, int, void **, int, int); // r11
  const char *v15; // r0
  char *v16; // r1
  size_t v17; // r0
  int v18; // r2
  _BYTE *v19; // r0
  int v20; // r0
  int v21; // r0
  _DWORD *v22; // r4
  _DWORD *v23; // r0
  int v24; // r0
  int v25; // r0
  int v26; // r2
  int v27; // r3
  int v28; // r0
  int v29; // r0
  int v30; // r2
  int v31; // r3
  int v32; // r0
  int v33; // r0
  int v34; // r0
  const char *v35; // [sp+Ch] [bp-38h]
  _DWORD v36[4]; // [sp+10h] [bp-34h] BYREF
  int v37; // [sp+20h] [bp-24h] BYREF
  void *ptr; // [sp+24h] [bp-20h] BYREF
  void *v39; // [sp+28h] [bp-1Ch] BYREF
  int v40; // [sp+2Ch] [bp-18h]
  _DWORD v41[5]; // [sp+30h] [bp-14h] BYREF

  v6 = (int *)sub_242FDC(a1);
  v7 = *v6;
  sub_243C34(v6);
  if ( !sub_98F78(&dword_4878EC, &dword_475848) && sub_22EBBC(0) )
  {
    v32 = sub_230E90();
    if ( a2 )
    {
      v32 = sub_25A3E4("The program being debugged has been started already.\nStart it from the beginning? ");
      if ( !v32 )
        sub_946E0("Program not restarted.");
    }
    sub_22EF14(v32);
  }
  sub_187EB0();
  sub_CD39C();
  sub_230804(a2);
  sub_FA464();
  sub_21580C();
  v8 = sub_17EBD4(&ptr, a1, &v37);
  v9 = ptr;
  v10 = sub_230F34(v8);
  v11 = sub_180104(v10, v37);
  if ( dword_487950 )
  {
    v11 = (*(int (__fastcall **)(int))(v10 + 360))(v10);
    if ( !v11 )
      sub_946E0("The target does not support running in non-stop mode.");
  }
  if ( a3 == 1 )
  {
    v33 = sub_220404(v11);
    sub_DAB38(v33);
  }
  v12 = sub_FA624(0);
  v13 = v12;
  if ( v9 )
    v12 = sub_17FBA4(v9);
  if ( a2 )
  {
    sub_2575E8(v7, 0, "Starting program");
    sub_257380(v7, &word_3B6A00, v26, v27);
    if ( v13 )
      sub_2575E8(v7, "execfile", v13);
    v28 = sub_257374(v7, 1);
    v29 = sub_17FF1C(v28);
    sub_2575E8(v7, "infargs", v29);
    sub_257380(v7, &word_356638, v30, v31);
    v12 = sub_2573CC(v7);
  }
  v14 = *(void (__fastcall **)(int, int, void **, int, int))(v10 + 196);
  v15 = (const char *)sub_17FF1C(v12);
  v16 = (char *)v15;
  v39 = v41;
  if ( v15 )
  {
    v35 = v15;
    v17 = strlen(v15);
    v16 = (char *)v35;
    v18 = (int)&v35[v17];
  }
  else
  {
    v18 = -1;
  }
  v19 = sub_17F838(&v39, v16, v18);
  v20 = sub_183688(v19);
  v21 = sub_93894(v20 + 60);
  v14(v10, v13, &v39, v21, a2);
  if ( v39 != v41 )
    sub_339E64(v39);
  if ( dword_487950 )
  {
    v34 = ps_getpid_0((int)&dword_4878EC);
    sub_98F50(v36, v34);
    v39 = (void *)v36[0];
    v40 = v36[1];
    v41[0] = v36[2];
  }
  else
  {
    v39 = (void *)dword_46BBCC;
    v40 = dword_46BBD0;
    v41[0] = dword_46BBD4;
  }
  v22 = sub_9253C((int)dword_23F744, (int)&v39);
  v23 = (_DWORD *)sub_17FFD4((int)&dword_4899A0, 0);
  if ( a3 == 2 )
  {
    v23 = (_DWORD *)((int (__fastcall *)(_DWORD *))loc_23DBE4)(v23);
    v23[39] = 0;
    v23[42] = 1;
    v23[38] = 1;
  }
  v24 = sub_1DDBBC(v23);
  v25 = sub_1DFB3C(v24);
  sub_18BAD4(v25, 0);
  sub_92640(v22);
  if ( ptr )
    free(ptr);
}
