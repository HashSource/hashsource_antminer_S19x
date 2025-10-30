int __fastcall sub_1475C0(int *a1, int a2)
{
  int v3; // r6
  int v4; // r4
  int v5; // r2
  int result; // r0
  int *v7; // t0
  int v8; // r2
  int v9; // r5
  int v10; // r4
  int v11; // r5
  char v12; // r9
  const char *v13; // r0
  unsigned int v14; // t1
  int v15; // r2
  bool v16; // cc
  char v17; // r3
  int v18; // r0
  int v19; // [sp+4h] [bp-Ch]
  int v20; // [sp+8h] [bp-8h]
  int v21; // [sp+Ch] [bp-4h]
  int v22; // [sp+10h] [bp+0h]
  int (__fastcall *v23)(int); // [sp+14h] [bp+4h]

  v3 = *a1;
  v4 = *(_DWORD *)(*a1 + 48);
  v5 = *(_DWORD *)(*a1 + 40) + 8 * a2;
  v7 = (int *)a1[3];
  result = *v7;
  v8 = *(_DWORD *)(v5 + 4);
  v22 = *v7;
  v23 = (int (__fastcall *)(int))v7[1];
  v9 = *(_DWORD *)(v4 + v8);
  v10 = v4 + v8;
  v20 = *(_DWORD *)a1[1];
  v21 = *(_DWORD *)a1[4];
  v19 = *(_DWORD *)(a1[2] + 4);
  if ( v9 )
  {
    v11 = v10 + 4 * v9;
    v12 = 0;
    while ( 1 )
    {
      v14 = *(_DWORD *)(v10 + 4);
      v10 += 4;
      result = v14;
      v15 = (v14 >> 28) & 7;
      v16 = v15 == 0;
      if ( v15 )
        v16 = *(_DWORD *)(v3 + 20) <= 6;
      v17 = !v16;
      if ( v16 )
        goto LABEL_13;
      if ( ((unsigned __int8)v12 & (result >= 0)) != 0 )
      {
        v12 &= result >= 0;
LABEL_5:
        if ( v11 == v10 )
          return result;
      }
      else
      {
        if ( result >= 0 )
          v12 = v17;
        if ( v21 == 1 )
        {
          if ( v15 != 3 )
            goto LABEL_5;
        }
        else if ( v21 )
        {
          if ( v21 == 2 && v15 != 1 )
            goto LABEL_5;
        }
        else if ( v15 != 2 )
        {
          goto LABEL_5;
        }
LABEL_13:
        result &= 0xFFFFFFu;
        if ( result >= *(_DWORD *)(dword_4872D8 + 352) + *(_DWORD *)(dword_4872D8 + 356) )
        {
          if ( dword_47AC88 > 0 )
          {
            v13 = (const char *)sub_1B87A8(v20);
            result = (int)sub_F43B4(&off_46D334, ".gdb_index entry has bad CU index [in module %s]", v13);
          }
          goto LABEL_5;
        }
        v18 = ((int (*)(void))loc_11E164)();
        result = sub_147544(v18, v19, v22, v23);
        if ( v11 == v10 )
          return result;
      }
    }
  }
  return result;
}
