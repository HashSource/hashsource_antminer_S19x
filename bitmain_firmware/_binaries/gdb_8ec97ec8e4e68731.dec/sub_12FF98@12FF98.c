int __fastcall sub_12FF98(int a1, int a2, int a3)
{
  int v5; // r0
  int v6; // r3
  unsigned int v7; // r3
  bool v8; // cc
  int v9; // r5
  bool v10; // cc
  _BOOL4 v11; // r2
  int v13; // r0
  int result; // r0

  v5 = sub_12E694(a1, 56, a2);
  if ( v5 )
  {
    *(_QWORD *)a3 = 0;
    switch ( *(_WORD *)(v5 + 2) & 0x7FFF )
    {
      case 5:
      case 6:
      case 7:
      case 0xB:
      case 0xD:
      case 0xF:
      case 0x21:
        *(_QWORD *)a3 = sub_12459C(v5);
        result = 1;
        break;
      default:
        v7 = *(_WORD *)(v5 + 2) & 0x7FFF;
        v8 = v7 > 0x17;
        if ( v7 != 23 )
          v8 = v7 - 6 > 1;
        v9 = !v8;
        if ( v8 )
        {
          v10 = v7 - 9 > 1;
          if ( v7 - 9 > 1 )
            v10 = v7 - 3 > 1;
          v11 = !v10;
          if ( v7 == 24 ? v11 | 1 : v11 )
          {
            v13 = sub_122F44(*(unsigned int **)(v5 + 8), a2);
            v6 = 1;
            *(_DWORD *)(a3 + 4) = v9;
            *(_DWORD *)a3 = v13;
            return v6;
          }
        }
        if ( dword_47AC88 <= 0 )
          return 1;
        sub_121FE4();
        result = 1;
        break;
    }
  }
  else
  {
    return 0;
  }
  return result;
}
