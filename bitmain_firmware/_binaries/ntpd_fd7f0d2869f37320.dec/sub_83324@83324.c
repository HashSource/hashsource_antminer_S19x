int __fastcall sub_83324(char *a1, _BYTE *a2, char a3)
{
  int v4; // r1
  int v5; // r3
  int v6; // r4
  unsigned int v8; // r3
  unsigned int v9; // r3
  unsigned int v10; // r1
  int v11; // r3
  unsigned int v12; // r0
  char v13[4]; // [sp+0h] [bp-8h] BYREF
  int v14; // [sp+4h] [bp-4h]

  v4 = (unsigned __int8)*a1;
  v5 = _stack_chk_guard;
  *a2 = v4;
  v14 = v5;
  switch ( v4 )
  {
    case 0:
      return 0;
    case 10:
      v6 = 1;
      goto LABEL_3;
    case 13:
      if ( a1[1] != 10 )
        return 1;
      v6 = 2;
LABEL_3:
      *a2 = a3;
      return v6;
    case 48:
    case 49:
    case 50:
    case 51:
    case 52:
    case 53:
    case 54:
    case 55:
      v6 = 1;
      v13[0] = *a1;
      break;
    case 88:
    case 120:
      v9 = (unsigned __int8)a1[1];
      if ( v9 > 0x7F || (dword_A0784[v9] & 0x70000) == 0 )
        return 1;
      v10 = (unsigned __int8)a1[2];
      v13[0] = a1[1];
      if ( v10 <= 0x7F && (dword_A0784[v10] & 0x70000) != 0 )
      {
        v6 = 3;
        v11 = 2;
        v13[1] = v10;
      }
      else
      {
        v6 = 2;
        v11 = 1;
      }
      v13[v11] = 0;
      *a2 = strtoul(v13, 0, 16);
      return v6;
    case 97:
      v6 = 1;
      *a2 = 7;
      return v6;
    case 98:
      v6 = 1;
      *a2 = 8;
      return v6;
    case 102:
      v6 = 1;
      *a2 = 12;
      return v6;
    case 110:
      v6 = 1;
      *a2 = 10;
      return v6;
    case 114:
      v6 = 1;
      *a2 = 13;
      return v6;
    case 116:
      v6 = 1;
      *a2 = 9;
      return v6;
    case 118:
      v6 = 1;
      *a2 = 11;
      return v6;
    default:
      return 1;
  }
  while ( 1 )
  {
    v8 = (unsigned __int8)a1[v6];
    if ( v8 > 0x7F || (dword_A0784[v8] & 0x10000) == 0 )
      break;
    v13[v6] = v8;
    if ( v6 == 2 )
    {
      v6 = 3;
      break;
    }
    v6 = 2;
  }
  v13[v6] = 0;
  v12 = strtoul(v13, 0, 8);
  if ( v12 >= 0xFF )
    LOBYTE(v12) = -1;
  *a2 = v12;
  return v6;
}
