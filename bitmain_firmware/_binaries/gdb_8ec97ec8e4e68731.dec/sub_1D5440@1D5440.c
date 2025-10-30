int __fastcall sub_1D5440(int a1, int a2, int a3, int a4)
{
  int result; // r0
  _DWORD *v6; // r4
  int v7; // r6
  const char *v8; // r0
  int v9; // [sp+4h] [bp-Ch] BYREF
  int v10; // [sp+8h] [bp-8h]
  int v11; // [sp+Ch] [bp-4h]

  result = dword_487D4C;
  v9 = a2;
  v10 = a3;
  v11 = a4;
  if ( dword_487D4C )
  {
    v7 = *(_DWORD *)sub_242FC8(dword_487D4C);
    v8 = (const char *)sub_23095C(v9, v10, v11);
    result = sub_2594B0(v7, "[record-btrace] stop %s\n", v8);
  }
  if ( dword_48794C != 1 )
  {
    result = sub_1D5110(a1, dword_46BBCC, dword_46BBD0, dword_46BBD4);
    if ( !result )
      return (*(int (**)(void))(*(_DWORD *)a1 + 284))();
  }
  v6 = (_DWORD *)dword_48A4D4;
  if ( dword_48A4D4 )
  {
    do
    {
      result = (int)(v6 + 2);
      if ( v6[11] != 2 )
      {
        result = sub_9904C((int *)result, &v9);
        if ( result )
          v6[74] = v6[74] & 0xFFFFFFE0 | 0x10;
      }
      v6 = (_DWORD *)v6[1];
    }
    while ( v6 );
  }
  return result;
}
