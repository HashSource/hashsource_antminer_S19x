void __fastcall sub_DE4E8(
        int a1,
        int a2,
        void **a3,
        void **a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        char a14)
{
  int v15; // r12
  void *v16; // r10
  void *v17; // r7
  _DWORD *v18; // r5
  void *v19; // r6
  void *v20; // r8
  int v21; // r4
  int v22; // r0
  char v23; // [sp+3Ch] [bp-58h]
  _DWORD *v24; // [sp+40h] [bp-54h]
  void *v26; // [sp+74h] [bp-20h] BYREF
  int v27; // [sp+78h] [bp-1Ch] BYREF
  void *ptr; // [sp+7Ch] [bp-18h] BYREF
  void *v29; // [sp+80h] [bp-14h] BYREF
  void *v30[3]; // [sp+84h] [bp-10h] BYREF

  v15 = *(unsigned __int8 *)(a2 + 1);
  v16 = *a3;
  *a3 = 0;
  v17 = *a4;
  v18 = *(_DWORD **)(a2 + 8);
  *a4 = 0;
  v24 = *(_DWORD **)(a2 + 12);
  if ( v15 && *(_DWORD *)(a2 + 12) - (_DWORD)v18 != 16 )
  {
    v22 = sub_94700(
            (int)"breakpoint.c",
            9048,
            "%s: Assertion `%s' failed.",
            "void create_breakpoints_sal(gdbarch*, linespec_result*, gdb::unique_xmalloc_ptr<char>, gdb::unique_xmalloc_p"
            "tr<char>, bptype, bpdisp, int, int, int, const breakpoint_ops*, int, int, int, unsigned int)",
            "canonical->lsals.size () == 1");
    if ( v26 )
      v22 = ((int (__fastcall *)(void **))loc_19D154)(&v26);
    if ( v17 )
      free(v17);
    if ( v16 )
      free(v16);
    sub_338FFC(v22);
  }
  if ( v18 == v24 )
  {
    if ( v17 )
      free(v17);
    if ( v16 )
      free(v16);
  }
  else
  {
    do
    {
      if ( *(_DWORD *)(a2 + 4) )
        ((void (__fastcall *)(void **))loc_19CF64)(&v26);
      else
        v26 = 0;
      v19 = (void *)*v18;
      if ( *v18 )
        v19 = (void *)sub_327254(*v18);
      v20 = (void *)v18[1];
      v23 = *(_BYTE *)a2;
      v21 = -858993459 * ((v18[2] - (int)v20) >> 3);
      sub_CCB74(&v27, a5);
      v30[2] = (void *)v21;
      v30[1] = v20;
      v30[0] = v19;
      v29 = v16;
      ptr = v17;
      sub_DDE28(v27, a1, (int *)v20, v21, &v26, (int *)v30, &v29, &ptr, a5, a6, a7, a8, a9, a10, a11, a12, a14, v23);
      if ( ptr )
        free(ptr);
      if ( v29 )
        free(v29);
      if ( v30[0] )
        free(v30[0]);
      sub_D9044(a13, &v27, 0);
      if ( v27 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v27 + 4))(v27);
      if ( v26 )
        ((void (__fastcall *)(void **))loc_19D154)(&v26);
      v18 += 4;
      v17 = 0;
      v16 = 0;
    }
    while ( v24 != v18 );
  }
}
