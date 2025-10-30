void __fastcall sub_20CD4(int a1, int a2, int a3, int a4, int a5)
{
  int v7; // r1
  _DWORD *v9; // r0
  __int64 v10; // r0
  int v11; // r2
  int v12; // r5
  int v13; // r6
  int v14; // r4
  _DWORD *v15; // r0
  int v16; // [sp+1Ch] [bp-8h]

  v7 = dword_487978;
  if ( dword_487978 )
  {
    v16 = a4;
    v9 = (_DWORD *)sub_242FC8(a1);
    sub_2594B0(*v9, "displaced: writing pc %.8lx\n", a3);
    a4 = v16;
  }
  switch ( a5 )
  {
    case 0:
    case 3:
      sub_1F88C(a1);
      *(_DWORD *)(a2 + 140) = 1;
      break;
    case 1:
    case 2:
      sub_1A888(a1, v7, a3, a4);
      *(_DWORD *)(a2 + 140) = 1;
      break;
    case 4:
      sub_946B0("Instruction wrote to PC in an unexpected way when single-stepping", v7, a3, a4);
      *(_DWORD *)(a2 + 140) = 1;
      break;
    default:
      v10 = sub_94700("arm-tdep.c", 4569, "Invalid argument to displaced_write_reg", a4);
      v12 = v11;
      v13 = HIDWORD(v10);
      v14 = *(_DWORD *)(v11 + 204) + *(_DWORD *)(v11 + 160);
      if ( dword_487978 )
      {
        v15 = (_DWORD *)sub_242FC8(v10);
        sub_2594B0(*v15, "displaced: cleanup for svc, resume at %.8lx\n", v14);
      }
      sub_20CD4(v13, v12, v14);
      break;
  }
}
