int __fastcall sub_231488(unsigned int a1, int a2, int *a3)
{
  int v5; // r3
  int v6; // r0
  int v7; // r6
  int v9; // r0
  int v10; // r3
  __int64 v11; // r0

  if ( dword_489F94 && a1 < *(_DWORD *)dword_489F94 )
  {
    v5 = dword_489F94 + 8 * a1;
    if ( *(int *)(v5 + 12) < 0 )
    {
      *a3 = 9;
      if ( !dword_489C84 )
        return -1;
      v9 = *(_DWORD *)sub_242FC8(a1);
    }
    else
    {
      v6 = (*(int (**)(void))(*(_DWORD *)(v5 + 8) + 480))();
      v7 = v6;
      if ( !dword_489C84 )
        return v7;
      v9 = *(_DWORD *)sub_242FC8(v6);
      if ( v7 != -1 )
      {
        v10 = 0;
LABEL_9:
        sub_2594B0(v9, "target_fileio_fstat (%d) = %d (%d)\n", a1, v7, v10);
        return v7;
      }
    }
    v10 = *a3;
    v7 = -1;
    goto LABEL_9;
  }
  v11 = ((__int64 (__fastcall *)(int))loc_164A8)(2897);
  return sub_231568(v11, HIDWORD(v11));
}
