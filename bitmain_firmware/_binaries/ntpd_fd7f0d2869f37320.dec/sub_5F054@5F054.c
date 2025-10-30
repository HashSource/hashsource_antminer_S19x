int __fastcall sub_5F054(int a1, unsigned __int8 a2, int a3, int a4)
{
  Elf32_Dyn ***v4; // r8
  _DWORD *v7; // r4
  Elf32_Dyn **v8; // r0
  Elf32_Dyn **v9; // r10
  int v10; // lr
  Elf32_Dyn **v11; // r1
  unsigned int v12; // r2
  Elf32_Dyn ***v13; // r12
  int v14; // r3
  int v15; // r3
  Elf32_Dyn **v16; // r1
  unsigned int v17; // lr
  int v18; // r10
  __int64 v19; // r2
  unsigned __int64 v20; // r0
  double v21; // r0
  double v22; // d0
  int v23; // r2
  double v24; // r0
  int v25; // r12
  int v26; // r3
  _DWORD *v27; // r2
  unsigned __int64 v29; // [sp+0h] [bp-1Ch]

  v7 = **(_DWORD ***)(a1 + 84);
  v8 = &GLOBAL_OFFSET_TABLE_;
  v9 = (Elf32_Dyn **)v7[224];
  v10 = v7[225];
  v11 = (Elf32_Dyn **)_stack_chk_guard;
  v12 = v7[223];
  if ( *((_QWORD *)v7 + 112) )
  {
    v13 = (Elf32_Dyn ***)(v7 + 224);
  }
  else
  {
    v4 = (Elf32_Dyn ***)(v7 + 222);
    v13 = (Elf32_Dyn ***)(v7 + 224);
    v8 = (Elf32_Dyn **)v7[222];
    v11 = (Elf32_Dyn **)v7[223];
  }
  if ( *((_QWORD *)v7 + 112) )
    v4 = (Elf32_Dyn ***)(v7 + 222);
  v14 = v7[222];
  if ( !*((_QWORD *)v7 + 112) )
  {
    *v13 = v8;
    v13[1] = v11;
    v9 = v8;
    v10 = v7[225];
  }
  v15 = v14 - (_DWORD)v9;
  v16 = v4[1];
  v17 = v12 - v10;
  if ( v17 > v12 )
    v18 = v15 - 1;
  else
    v18 = v15;
  LODWORD(v19) = 0;
  *v13 = *v4;
  v13[1] = v16;
  HIDWORD(v19) = v18;
  v29 = vshrd_n_u64(vdup_n_s32((unsigned int)v18 >> 31).n64_u64[0], 0x20u);
  v20 = v29 + ((v19 + v17) ^ -(__int64)v29);
  v21 = COERCE_DOUBLE(sub_8D40C(v20, HIDWORD(v20)));
  v22 = v21;
  LODWORD(v21) = -32;
  v24 = ldexp(v21, v23);
  if ( v18 < 0 )
    v22 = -v22;
  if ( v22 > 0.403333333 )
  {
    sub_5E6C4((Elf32_Dyn **)a1);
    goto LABEL_15;
  }
  if ( v22 > 0.0916666667 )
  {
LABEL_15:
    v25 = 1;
    v26 = 0;
    goto LABEL_16;
  }
  v26 = v7[278];
  if ( v26 > 10 )
    return LODWORD(v24);
  v25 = v26 + 1;
LABEL_16:
  LODWORD(v24) = a3;
  v27 = &v7[2 * v26 + 80];
  v7[v26 + 266] = a2;
  *v27 = a3;
  v27[1] = a4;
  v7[278] = v25;
  return LODWORD(v24);
}
