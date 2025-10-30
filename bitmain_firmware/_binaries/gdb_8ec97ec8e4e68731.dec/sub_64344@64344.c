void __fastcall sub_64344(int a1, int a2, int a3)
{
  char v5; // r3
  int v6; // r2
  _DWORD *v7; // r11
  int v8; // r0
  _DWORD *v9; // r4
  void *v10; // r0
  void *v11; // r0
  void *v12; // r0
  _DWORD *v13; // r4
  void *v14; // r0
  void *v15; // r0
  int v16; // r6
  int v17; // r10
  int v18; // r10
  void *v19; // r0
  void *v20; // r0
  int v21; // r7
  int v22; // r5
  const char *v23; // t1
  int v24; // r0
  bool v25; // cc
  int v26; // r4
  int v27; // [sp+4h] [bp-10h]
  void *ptr; // [sp+Ch] [bp-8h] BYREF

  v5 = byte_474878;
  __dmb(0xBu);
  if ( (v5 & 1) == 0 )
  {
    a1 = sub_33A554(&byte_474878);
    if ( a1 )
    {
      sub_33A65C(&byte_474878);
      a1 = _aeabi_atexit(&dword_47487C, (void (*)(void *))sub_681D4);
    }
  }
  v6 = *(_DWORD *)sub_242FDC(a1);
  v7 = (_DWORD *)dword_47487C;
  dword_47487C = 0;
  v27 = v6;
  v8 = sub_15F7E8(0);
  sub_160144(&ptr, v8);
  v9 = (_DWORD *)dword_47487C;
  v10 = ptr;
  ptr = 0;
  dword_47487C = (int)v10;
  if ( v9 )
  {
    v11 = (void *)v9[2];
    if ( v11 )
      free(v11);
    v12 = (void *)v9[3];
    if ( v12 )
      free(v12);
    sub_33AC04(v9);
    v13 = ptr;
    if ( ptr )
    {
      v14 = (void *)*((_DWORD *)ptr + 2);
      if ( v14 )
        free(v14);
      v15 = (void *)v13[3];
      if ( v15 )
        free(v15);
      sub_33AC04(v13);
    }
    v10 = (void *)dword_47487C;
  }
  v16 = sub_1DD58C(v10);
  v17 = ((int (*)(void))loc_166E9C)();
  v18 = v17 + ((int (__fastcall *)(int))loc_166F48)(v16);
  sub_2578AC(v27, 1);
  if ( a3 )
  {
    if ( a3 > 0 )
    {
      v21 = a2 - 4;
      v22 = 0;
      do
      {
        v23 = *(const char **)(v21 + 4);
        v21 += 4;
        v24 = strtol(v23, 0, 10);
        v25 = v24 <= 0;
        if ( v24 >= 0 )
          v25 = v18 <= v24;
        v26 = v24;
        if ( v25
          || !((int (__fastcall *)(int, int))loc_1677C0)(v16, v24)
          || !*(_BYTE *)((int (__fastcall *)(int, int))loc_1677C0)(v16, v26) )
        {
          sub_946E0("bad register number");
        }
        if ( sub_62C20(v26, (int)v7, dword_47487C) )
          sub_257504(v27, 0, v26);
        ++v22;
      }
      while ( a3 != v22 );
    }
  }
  else if ( v18 > 0 )
  {
    do
    {
      if ( ((int (__fastcall *)(int, int))loc_1677C0)(v16, a3)
        && *(_BYTE *)((int (__fastcall *)(int, int))loc_1677C0)(v16, a3)
        && sub_62C20(a3, (int)v7, dword_47487C) )
      {
        sub_257504(v27, 0, a3);
      }
      ++a3;
    }
    while ( v18 != a3 );
  }
  sub_25734C(v27, 1);
  if ( v7 )
  {
    v19 = (void *)v7[2];
    if ( v19 )
      free(v19);
    v20 = (void *)v7[3];
    if ( v20 )
      free(v20);
    sub_33AC04(v7);
  }
}
