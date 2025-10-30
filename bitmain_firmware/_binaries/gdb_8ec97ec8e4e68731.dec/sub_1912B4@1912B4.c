int __fastcall sub_1912B4(int *a1, int a2)
{
  _DWORD *v4; // r0
  _DWORD *v5; // r5
  int v6; // r6
  void *v7; // r6
  int v8; // r3
  int (__fastcall *v9)(int *); // r6
  int *v10; // r5
  int v11; // r0
  int v12; // r12
  _DWORD *v14; // r0
  void (*v15)(); // r5
  __int64 v16; // r0
  int v17; // lr
  int v18; // r4
  int v19; // [sp-4h] [bp-10h]

  v4 = sub_1911C0();
  v5 = v4;
  v6 = v4[1];
  if ( a2 )
  {
    if ( v6 )
    {
      sub_94700(
        (int)"interps.c",
        157,
        "%s: Assertion `%s' failed.",
        "void interp_set(interp*, bool)",
        "!top_level || !ui_interp->current_interpreter");
    }
    else if ( !v4[2] )
    {
      v4[1] = a1;
      v4[2] = a1;
      goto LABEL_6;
    }
    v16 = sub_94700(
            (int)"interps.c",
            158,
            "%s: Assertion `%s' failed.",
            "void interp_set(interp*, bool)",
            "!top_level || !ui_interp->top_level_interpreter");
    v19 = v17;
    v18 = v16;
    *(_DWORD *)v16 = &off_3C06EC;
    *(_DWORD *)(v16 + 4) = sub_327254(HIDWORD(v16));
    *(_BYTE *)(v18 + 12) = 0;
    __asm { POP             {R4,PC} }
  }
  if ( v6 )
  {
    v14 = (_DWORD *)sub_242FDC(v4);
    sub_2573CC(*v14);
    v4 = (_DWORD *)(*(int (__fastcall **)(int))(*(_DWORD *)v6 + 16))(v6);
  }
  v5[1] = a1;
LABEL_6:
  v7 = (void *)dword_487A44;
  if ( dword_487A44 )
  {
    v4 = (_DWORD *)strcmp((const char *)a1[1], (const char *)dword_487A44);
    if ( v4 )
    {
      free(v7);
      v4 = (_DWORD *)sub_327254(a1[1]);
      dword_487A44 = (int)v4;
    }
  }
  v8 = *a1;
  if ( !*((_BYTE *)a1 + 12) )
  {
    v15 = *(void (**)())(v8 + 8);
    if ( v15 != nullsub_2 )
    {
      v4 = (_DWORD *)((int (__fastcall *)(int *, int))v15)(a1, a2);
      v8 = *a1;
    }
    *((_BYTE *)a1 + 12) = 1;
  }
  v9 = *(int (__fastcall **)(int *))(v8 + 24);
  v10 = (int *)sub_242FDC(v4);
  v11 = v9(a1);
  v12 = *a1;
  *v10 = v11;
  off_48A584 = 0;
  off_48A580 = 0;
  off_48A57C = 0;
  off_48A568 = 0;
  off_48A578 = 0;
  dword_48A544 = 0;
  off_48A574 = 0;
  off_48A560 = 0;
  off_48A564 = 0;
  off_48A520 = 0;
  off_48A9F0 = 0;
  return (*(int (__fastcall **)(int *))(v12 + 12))(a1);
}
