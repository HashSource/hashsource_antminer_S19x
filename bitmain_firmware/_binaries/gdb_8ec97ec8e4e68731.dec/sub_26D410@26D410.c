const char **__fastcall sub_26D410(int *a1, int a2, int a3, _DWORD *a4)
{
  char *v4; // r7
  _DWORD *v7; // r9
  const char **v8; // r6
  _DWORD *v9; // r0
  const char *v10; // r3
  _DWORD *v11; // r4
  _DWORD *v12; // r6
  int v13; // r0
  int v14; // r0
  const char **v16; // r6
  _BYTE *v17; // r0
  int v18; // r7
  int v19; // r0
  int v20; // r3
  int v21; // r0
  const char **v22; // [sp+8h] [bp-Ch] BYREF
  int v23; // [sp+Ch] [bp-8h]

  v4 = *(char **)(a2 + 16 * a3);
  v7 = *(_DWORD **)(a2 + 16 * a3 + 4);
  sub_21D6B0(&v22, v4, 0, 1, 0);
  v8 = v22;
  if ( !v22 )
  {
    sub_1B1BE8((int *)&v22, v4);
    v16 = v22;
    if ( v22 )
    {
      v17 = sub_26BB80(v7);
      v18 = v23;
      *(_DWORD *)v17 = 1;
      v11 = v17;
      v19 = sub_1B7250(v18);
      v20 = *((__int16 *)v16 + 11);
      if ( v20 == -1 )
      {
        sub_94700((int)"value.c", 3203, "Section index is uninitialized");
        JUMPOUT(0x26D55C);
      }
      v21 = ((int (__fastcall *)(int, const char *, int *))loc_169ED8)(
              v19,
              &v16[2][*(_DWORD *)(*(_DWORD *)(v18 + 144) + 4 * v20)],
              &dword_4899A0);
      if ( *v11 == 1 )
      {
        v11[2] = v21;
        goto LABEL_3;
      }
      ((void (__fastcall *)(int))loc_16574)(v21);
    }
    return v16;
  }
  v22 = 0;
  v23 = 0;
  v9 = sub_26BB80(v7);
  v10 = v8[2];
  v11 = v9;
  *v9 = 1;
  v9[2] = *(_DWORD *)v10;
LABEL_3:
  if ( a1 && a4 != *(_DWORD **)(*a1 + 64) )
  {
    v12 = sub_1700C0(a4);
    v13 = sub_2616BC(*a1);
    v14 = sub_2647C8(v12, v13);
    *a1 = sub_26210C(v14);
  }
  return (const char **)v11;
}
