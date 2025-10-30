int *__fastcall sub_22DAC8(int *a1)
{
  _DWORD *v2; // r0
  void *v3; // r0
  int v4; // r1
  int v5; // r2
  bool v6; // zf
  _DWORD *v7; // r0
  char *v8; // r5
  _DWORD *v9; // r0
  int v10; // r0
  _DWORD *v11; // r0
  char *v12; // r5
  _DWORD *v13; // r0
  int v14; // r0
  _DWORD *v15; // r0
  void *ptr; // [sp+4h] [bp-10h] BYREF
  int v18; // [sp+8h] [bp-Ch]
  int v19; // [sp+Ch] [bp-8h]

  *a1 = 0;
  a1[1] = 0;
  a1[2] = 0;
  v2 = (_DWORD *)sub_242FC8(a1);
  sub_2594B0(*v2, "-> %s->to_memory_map (...)\n", (const char *)dword_489C90);
  off_489E18(&ptr, &unk_489C8C);
  v3 = (void *)*a1;
  v4 = v18;
  v5 = v19;
  v6 = *a1 == 0;
  *a1 = (int)ptr;
  ptr = 0;
  a1[1] = v4;
  a1[2] = v5;
  v18 = 0;
  v19 = 0;
  if ( !v6 )
  {
    sub_339E64(v3);
    v3 = ptr;
    if ( ptr )
      sub_339E64(ptr);
  }
  v7 = (_DWORD *)sub_242FC8(v3);
  sub_2594B0(*v7, "<- %s->to_memory_map (", (const char *)dword_489C90);
  v8 = sub_98EEC((int)&unk_489C8C);
  v9 = (_DWORD *)sub_242FC8(v8);
  v10 = sub_256850(v8, *v9);
  v11 = (_DWORD *)sub_242FC8(v10);
  sub_256850(") = ", *v11);
  v12 = sub_98EEC(*a1);
  v13 = (_DWORD *)sub_242FC8(v12);
  v14 = sub_256850(v12, *v13);
  v15 = (_DWORD *)sub_242FC8(v14);
  sub_256850(&word_356638, *v15);
  return a1;
}
