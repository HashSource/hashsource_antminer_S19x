int __fastcall sub_1B122C(int a1, int a2, int *a3)
{
  int v3; // r12
  int v5; // r4
  int result; // r0
  int v7; // r0
  int v8; // r0
  unsigned __int8 *v9; // r0
  int v10; // r3
  int v11; // r4
  bool v12; // zf
  bool v13; // zf
  int v14; // r2
  int v15; // r3
  int v16; // r4
  bool v17; // zf

  v3 = *(__int16 *)(a2 + 22);
  if ( v3 == -1 )
  {
    v9 = (unsigned __int8 *)sub_94700((int)"minsyms.c", 63, "Section index is uninitialized");
    v10 = *v9;
    v11 = 0;
    while ( 1 )
    {
      v12 = v10 == 40;
      if ( v10 != 40 )
        v12 = v10 == 0;
      if ( v12 )
        break;
      while ( 1 )
      {
        v9 = (unsigned __int8 *)sub_9360C(v9);
        v10 = *v9;
        v13 = v10 == 40;
        if ( v10 != 40 )
          v13 = v10 == 0;
        if ( v13 )
          break;
        v14 = byte_438798[v10];
        v15 = *++v9;
        v16 = 67 * v11;
        v17 = v15 == 40;
        if ( v15 != 40 )
          v17 = v15 == 0;
        v11 = v16 - 113 + v14;
        if ( v17 )
          return v11;
      }
    }
    return v11;
  }
  else
  {
    v5 = *(_DWORD *)(a2 + 8) + *(_DWORD *)(*(_DWORD *)(a1 + 144) + 4 * v3);
    switch ( *(_BYTE *)(a2 + 32) & 0xF )
    {
      case 3:
      case 4:
      case 5:
      case 6:
      case 9:
      case 0xA:
        v7 = sub_1B7250(a1);
        v8 = ((int (__fastcall *)(int, int, int *))loc_169ED8)(v7, v5, &dword_4899A0);
        if ( v5 != v8 )
        {
          if ( a3 )
            *a3 = v8;
          goto LABEL_8;
        }
        result = 0;
        break;
      default:
        if ( a3 )
        {
          *a3 = v5;
          result = 1;
        }
        else
        {
LABEL_8:
          result = 1;
        }
        break;
    }
  }
  return result;
}
