int __fastcall sub_1309F8(int a1, int a2)
{
  int result; // r0
  int v5; // r3
  int v6; // r0
  bool v7; // zf
  int v8; // r3
  int v9; // r0
  bool v10; // zf
  int v11; // r0
  int v12; // [sp+4h] [bp-14h] BYREF

  switch ( *(_WORD *)a1 )
  {
    case 2:
    case 4:
    case 8:
    case 0xD:
    case 0x13:
    case 0x16:
    case 0x17:
    case 0x1D:
    case 0x28:
    case 0x2E:
    case 0x38:
    case 0x39:
      result = 1;
      break;
    case 0x27:
    case 0x34:
      if ( sub_12E694(a1, 71, a2) )
      {
        v12 = a2;
        v11 = sub_1309AC(a1, &v12);
        result = sub_1309F8(v11, v12);
      }
      else
      {
        result = sub_12E694(a1, 63, a2);
        v5 = **(unsigned __int16 **)(a1 + 20);
        if ( result )
          goto LABEL_4;
        v10 = v5 == 30;
        if ( v5 != 30 )
          v10 = v5 == 57;
        if ( v10 )
        {
LABEL_4:
          v6 = (v5 - 46) & 0xFFFB;
          v7 = v5 == 37;
          if ( v5 != 37 )
            v7 = v5 == 11;
          v8 = v7;
          if ( v6 )
            v9 = v8;
          else
            v9 = 1;
          result = v9 ^ 1;
        }
      }
      break;
    default:
      result = 0;
      break;
  }
  return result;
}
