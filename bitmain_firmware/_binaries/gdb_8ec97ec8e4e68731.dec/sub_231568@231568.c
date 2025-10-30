int __fastcall sub_231568(int a1, int *a2)
{
  int v3; // r2
  int v5; // r5
  int v6; // r0
  int v7; // r3
  int v8; // r2
  int v9; // r8
  int v11; // r0
  int v12; // r3
  _DWORD *v13; // r0
  int v14; // lr
  _BYTE v15[8]; // [sp+4h] [bp-14h] BYREF
  int v16; // [sp+Ch] [bp-Ch]

  if ( !dword_489F94 || (unsigned int)a1 >= *(_DWORD *)dword_489F94 )
  {
    v13 = (_DWORD *)((int (__fastcall *)(int))loc_164A8)(2917);
    v16 = v14;
    sub_231568(*v13, v15);
    __asm { POP             {PC} }
  }
  v3 = dword_489F94 + 8 * a1;
  v5 = dword_489F94 + 8 * (a1 + 1);
  if ( *(int *)(v3 + 12) < 0 )
  {
    *a2 = 9;
    if ( !dword_489C84 )
      return -1;
    v11 = *(_DWORD *)sub_242FC8(a1);
    goto LABEL_15;
  }
  v6 = (*(int (**)(void))(*(_DWORD *)(v3 + 8) + 484))();
  v7 = dword_489F98;
  v8 = dword_489C84;
  v9 = v6;
  *(_DWORD *)(v5 + 4) = -1;
  if ( v7 >= a1 )
    v7 = a1;
  dword_489F98 = v7;
  if ( !v8 )
    return v9;
  v11 = *(_DWORD *)sub_242FC8(v6);
  if ( v9 == -1 )
  {
LABEL_15:
    v12 = *a2;
    v9 = -1;
    goto LABEL_11;
  }
  v12 = 0;
LABEL_11:
  sub_2594B0(v11, "target_fileio_close (%d) = %d (%d)\n", a1, v9, v12);
  return v9;
}
