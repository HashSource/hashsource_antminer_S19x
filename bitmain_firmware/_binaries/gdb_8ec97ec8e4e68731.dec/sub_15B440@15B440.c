int __fastcall sub_15B440(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  int v10; // r8
  int v11; // r5
  int v12; // r0
  _DWORD *v13; // r0
  int v14; // r1
  __int64 v16; // r0
  int varg_r3; // [sp+24h] [bp+1Ch] BYREF

  v10 = *(_DWORD *)(a2 + 20);
  v11 = sub_26BB80(a2);
  *(_DWORD *)nullsub_31(v11) = 2;
  if ( sub_15FE8C(varg_r3, a5, a6, a7, a8) )
  {
    v12 = ((int (*)(void))loc_15D6F4)();
    ((void (__fastcall *)(int *, int))loc_15CFA0)(&varg_r3, v12);
  }
  else
  {
    varg_r3 = 0;
    a5 = 0;
    a6 = 0;
    a7 = 0;
    a8 = 0;
  }
  v13 = (_DWORD *)sub_26C19C(v11);
  *v13 = varg_r3;
  v13[1] = a5;
  v13[2] = a6;
  v13[3] = a7;
  v13[4] = a8;
  *(_DWORD *)sub_26C1B8(v11) = a3;
  if ( ((int (__fastcall *)(int))loc_165BB8)(a1) || v10 >= ((int (__fastcall *)(int, int))loc_1DD420)(a1, a3) )
  {
    sub_26BC88(v11, v14, 0, 0);
  }
  else
  {
    v16 = ((__int64 (__fastcall *)(int, int))loc_1DD420)(a1, a3);
    sub_26BC88(v11, HIDWORD(v16), v16 - v10, ((int)v16 - v10) >> 31);
  }
  return v11;
}
