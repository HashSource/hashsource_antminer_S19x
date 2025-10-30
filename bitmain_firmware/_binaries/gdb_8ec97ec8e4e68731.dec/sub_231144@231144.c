int __fastcall sub_231144(unsigned int a1, int a2, int a3, int a4, int a5, int a6, int *a7)
{
  int v9; // r3
  int v10; // r12
  int v11; // r0
  int v12; // r10
  int v14; // r4
  char *v15; // r0
  int v16; // r3
  __int64 v17; // r0
  int v18; // r2
  int v19; // r3

  if ( dword_489F94 && a1 < *(_DWORD *)dword_489F94 )
  {
    v9 = dword_489F94 + 8 * a1;
    v10 = *(_DWORD *)(v9 + 12);
    if ( v10 < 0 )
    {
      *a7 = 9;
      if ( !dword_489C84 )
        return -1;
      v14 = *(_DWORD *)sub_242FC8(a1);
      v15 = sub_98880(a5, a6);
    }
    else
    {
      v11 = (*(int (__fastcall **)(_DWORD, int, int))(*(_DWORD *)(v9 + 8) + 472))(*(_DWORD *)(v9 + 8), v10, a2);
      v12 = v11;
      if ( !dword_489C84 )
        return v12;
      v14 = *(_DWORD *)sub_242FC8(v11);
      v15 = sub_98880(a5, a6);
      if ( v12 != -1 )
      {
        v16 = 0;
LABEL_9:
        sub_2594B0(v14, "target_fileio_pwrite (%d,...,%d,%s) = %d (%d)\n", a1, a3, v15, v12, v16);
        return v12;
      }
    }
    v16 = *a7;
    v12 = -1;
    goto LABEL_9;
  }
  v17 = ((__int64 (__fastcall *)(int))loc_164A8)(2850);
  return sub_231258(v17, HIDWORD(v17), v18, v19, a5, a6, a7);
}
