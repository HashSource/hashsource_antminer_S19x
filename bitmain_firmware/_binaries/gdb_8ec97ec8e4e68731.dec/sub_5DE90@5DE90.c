int __fastcall sub_5DE90(int a1, int a2, int a3)
{
  int v5; // r4
  int v6; // r9
  int v7; // r0
  int v8; // r7
  int v9; // r0
  int v10; // r6
  int result; // r0
  _DWORD *v12; // r0
  int v13; // [sp+Ch] [bp-10h]
  int v14; // [sp+10h] [bp-Ch] BYREF
  _BYTE v15[8]; // [sp+14h] [bp-8h] BYREF

  v14 = 0;
  if ( a3 <= 1 )
  {
    if ( a3 == 1 )
    {
      v5 = 0;
      v8 = sub_15F7E8(0);
      v9 = sub_69BC0(*(_DWORD *)(a2 + 4 * v14));
      v10 = v9;
      goto LABEL_14;
    }
LABEL_18:
    sub_946E0("-stack-list-locals: Usage: [--no-frame-filters] [--skip-unavailable] PRINT_VALUES");
  }
  v5 = 0;
  v6 = a3 - 1;
  v13 = 0;
  while ( 1 )
  {
    v7 = sub_602EC("-stack-list-locals", v6, a2, &off_35980C, &v14, v15);
    if ( v7 < 0 )
      break;
    if ( v7 )
    {
      if ( v7 == 1 )
        v5 = 1;
    }
    else
    {
      v5 = 1;
      v13 = v14;
    }
  }
  if ( a3 - v14 != 1 )
    goto LABEL_18;
  v8 = sub_15F7E8(0);
  v9 = sub_69BC0(*(_DWORD *)(a2 + 4 * v14));
  v10 = v9;
  if ( v13 )
    return sub_5D8FC(0, v10, v8, v5);
LABEL_14:
  if ( !dword_474834 )
    return sub_5D8FC(0, v10, v8, v5);
  v12 = (_DWORD *)sub_242FDC(v9);
  result = sub_157E7C(v8, 9, v10, *v12, 0, 0);
  if ( !dword_474834 || result == 3 )
    return sub_5D8FC(0, v10, v8, v5);
  return result;
}
