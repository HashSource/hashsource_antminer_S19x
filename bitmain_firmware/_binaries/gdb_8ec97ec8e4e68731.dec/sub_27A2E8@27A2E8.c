void *__fastcall sub_27A2E8(int a1, int a2, int a3, int a4, int a5)
{
  _DWORD *v5; // r8
  int v8; // r0
  _BOOL4 v9; // r4
  size_t v10; // r0
  void *v11; // r11
  int v12; // r6
  int i; // r0
  int v14; // r4
  int *v15; // r0
  void *v16; // r9
  int v17; // r0
  int v18; // r3
  unsigned int v19; // r12
  unsigned int v20; // r3
  _DWORD *v22; // [sp+4h] [bp-68h]
  _DWORD *v25; // [sp+18h] [bp-54h]
  void *ptr; // [sp+30h] [bp-3Ch] BYREF
  _DWORD v27[6]; // [sp+34h] [bp-38h] BYREF
  int (**v28)(); // [sp+4Ch] [bp-20h] BYREF
  _BYTE *v29; // [sp+50h] [bp-1Ch]
  int v30; // [sp+54h] [bp-18h]
  _BYTE v31[20]; // [sp+58h] [bp-14h] BYREF

  v5 = (_DWORD *)a4;
  v8 = sub_C2668(a4);
  v9 = v5 == (_DWORD *)v8;
  if ( !v8 )
    v9 = 1;
  if ( v9 )
    return 0;
  v10 = ((int (__fastcall *)(int))loc_166E9C)(a3);
  v11 = sub_93094(v10, 1u);
  v25 = sub_9253C((int)sub_279508, (int)v11);
  v12 = sub_323AE0(1, sub_279568, sub_279538, 0, sub_93094, sub_279508);
  while ( 2 )
  {
    for ( i = sub_C28A8(v5, v27); ; i = sub_C28E4((int)v27) )
    {
      v14 = i;
      if ( !i )
        break;
      v15 = (int *)sub_324030(v12, i, 1);
      if ( *v15 )
        continue;
      *v15 = v14;
      v16 = sub_92E28();
      sub_172880();
      if ( v17 )
        goto LABEL_20;
      while ( 1 )
      {
        v18 = *(unsigned __int8 *)(v14 + 32) >> 3;
        if ( *((_DWORD *)off_46DBB8 + 4 * v18 + 1) )
          break;
        v20 = *((_DWORD *)off_46DBB8 + 4 * v18);
        if ( v20 < 3 )
          goto LABEL_13;
        if ( v20 <= 7 )
          sub_946E0("Local symbol unhandled when generating C code.");
        if ( v20 != 14 )
          goto LABEL_13;
        sub_94700(
          (int)"compile/compile-c-symbols.c",
          685,
          "%s: %s",
          "void generate_c_for_for_one_variable(compile_c_instance*, string_file&, gdbarch*, unsigned char*, CORE_ADDR, symbol*)",
          "LOC_COMPUTED variable missing a method.");
LABEL_20:
        sub_256760(&v28);
        v31[0] = 0;
        v22 = *(_DWORD **)(v14 + 24);
        v30 = 0;
        v28 = &off_3F2924;
        v29 = v31;
        sub_279578(a1, (int)&v28, a3, (int)v11, a5, v22, v14);
        (*(void (__fastcall **)(int, _BYTE *, int))(*(_DWORD *)a2 + 8))(a2, v29, v30);
        sub_256478(&v28);
      }
      sub_2794D0(&ptr, v14);
      sub_256760(&v28);
      v31[0] = 0;
      v19 = *(unsigned __int8 *)(v14 + 32);
      v30 = 0;
      v29 = v31;
      v28 = &off_3F2924;
      (*(void (__fastcall **)(int, int (***)(), int, void *, int, void *))(*((_DWORD *)off_46DBB8 + 4 * (v19 >> 3) + 1)
                                                                         + 24))(
        v14,
        &v28,
        a3,
        v11,
        a5,
        ptr);
      (*(void (__fastcall **)(int, _BYTE *, int))(*(_DWORD *)a2 + 8))(a2, v29, v30);
      sub_256478(&v28);
      if ( ptr )
        free(ptr);
LABEL_13:
      sub_92E40((int)v16);
    }
    if ( !v5[2] )
    {
      v5 = (_DWORD *)v5[3];
      continue;
    }
    break;
  }
  sub_92640(v25);
  if ( v12 )
    sub_323B84(v12);
  return v11;
}
