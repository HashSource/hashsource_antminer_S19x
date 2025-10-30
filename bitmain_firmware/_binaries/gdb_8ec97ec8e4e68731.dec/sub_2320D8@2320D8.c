_DWORD *sub_2320D8(_DWORD *a1, int a2, ...)
{
  _DWORD *v3; // r0
  int v4; // r0
  int v5; // r1
  int v6; // r2
  _DWORD *v7; // r0
  char *v8; // r4
  _DWORD *v9; // r0
  int v10; // r0
  _DWORD *v11; // r0
  int v12; // r0
  char *v13; // r4
  _DWORD *v14; // r0
  int v15; // r0
  _DWORD *v16; // r0
  int v17; // r0
  void *v18; // r4
  _DWORD *v19; // r0
  void *v20; // r0
  _DWORD *v21; // r0
  void *v22; // r4
  _DWORD *v23; // r0
  int v24; // r0
  _DWORD *v25; // r0
  int v26; // r0
  char *v27; // r4
  _DWORD *v28; // r0
  int v29; // r0
  _DWORD *v30; // r0
  _DWORD v32[4]; // [sp+10h] [bp+0h] BYREF
  void *ptr; // [sp+20h] [bp+10h] BYREF
  char v34; // [sp+28h] [bp+18h] BYREF
  int varg_r2; // [sp+58h] [bp+48h] BYREF
  va_list varg_r2a; // [sp+58h] [bp+48h]
  int varg_r3; // [sp+5Ch] [bp+4Ch]
  int v38; // [sp+60h] [bp+50h]
  int v39; // [sp+64h] [bp+54h]
  int v40; // [sp+68h] [bp+58h]
  va_list va1; // [sp+6Ch] [bp+5Ch] BYREF

  va_start(va1, a2);
  va_start(varg_r2a, a2);
  varg_r2 = va_arg(va1, _DWORD);
  varg_r3 = va_arg(va1, _DWORD);
  v38 = va_arg(va1, _DWORD);
  v39 = va_arg(va1, _DWORD);
  v40 = va_arg(va1, _DWORD);
  v3 = (_DWORD *)sub_242FC8(a1);
  sub_2594B0(*v3, "-> %s->to_wait (...)\n", (const char *)dword_489C90);
  off_489CC4(v32, &unk_489C8C, varg_r2, varg_r3, v38, v39, v40);
  v4 = v32[0];
  v5 = v32[1];
  v6 = v32[2];
  *a1 = v32[0];
  a1[1] = v5;
  a1[2] = v6;
  v7 = (_DWORD *)sub_242FC8(v4);
  sub_2594B0(*v7, "<- %s->to_wait (", (const char *)dword_489C90);
  v8 = sub_98EEC((int)&unk_489C8C);
  v9 = (_DWORD *)sub_242FC8(v8);
  v10 = sub_256850(v8, *v9);
  v11 = (_DWORD *)sub_242FC8(v10);
  sub_256850(", ", *v11);
  v12 = ps_getpid_0((int)varg_r2a);
  v13 = sub_988AC(v12);
  v14 = (_DWORD *)sub_242FC8(v13);
  v15 = sub_256850(v13, *v14);
  v16 = (_DWORD *)sub_242FC8(v15);
  sub_256850(", ", *v16);
  v17 = sub_277578(&ptr, v39);
  v18 = ptr;
  v19 = (_DWORD *)sub_242FC8(v17);
  sub_256850(v18, *v19);
  v20 = ptr;
  if ( ptr != &v34 )
    sub_339E64(ptr);
  v21 = (_DWORD *)sub_242FC8(v20);
  sub_256850(", ", *v21);
  v22 = (void *)sub_232060(v40);
  v23 = (_DWORD *)sub_242FC8(v22);
  v24 = sub_256850(v22, *v23);
  if ( v22 )
    free(v22);
  v25 = (_DWORD *)sub_242FC8(v24);
  sub_256850(") = ", *v25);
  v26 = ps_getpid_0((int)a1);
  v27 = sub_988AC(v26);
  v28 = (_DWORD *)sub_242FC8(v27);
  v29 = sub_256850(v27, *v28);
  v30 = (_DWORD *)sub_242FC8(v29);
  sub_256850(&word_356638, *v30);
  return a1;
}
