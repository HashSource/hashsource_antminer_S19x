int __fastcall sub_81DDC(char *a1, _BYTE *a2, char a3)
{
  int v4; // r1
  int v5; // r3
  int v6; // r6
  unsigned int v8; // r3
  unsigned int v9; // r2
  unsigned int v10; // r0
  unsigned int v11; // r3
  unsigned int v12; // r1
  int v13; // r3
  unsigned __int8 v14; // [sp+0h] [bp-8h] BYREF
  char v15; // [sp+1h] [bp-7h]
  char v16; // [sp+2h] [bp-6h]
  int v17; // [sp+4h] [bp-4h]

  v4 = (unsigned __int8)*a1;
  v5 = _stack_chk_guard;
  *a2 = v4;
  v17 = v5;
  switch ( v4 )
  {
    case 0:
      return 0;
    case 10:
      v6 = 1;
      goto LABEL_3;
    case 13:
      if ( a1[1] != 10 )
        goto LABEL_7;
      v6 = 2;
LABEL_3:
      *a2 = a3;
      break;
    case 48:
    case 49:
    case 50:
    case 51:
    case 52:
    case 53:
    case 54:
    case 55:
      v8 = (unsigned __int8)a1[1];
      v14 = *a1;
      if ( v8 <= 0x7F && (dword_9F184[v8] & 0x10000) != 0 )
      {
        v9 = (unsigned __int8)a1[2];
        v15 = v8;
        if ( v9 <= 0x7F && (dword_9F184[v9] & 0x10000) != 0 )
        {
          v6 = 3;
          v16 = v9;
        }
        else
        {
          v6 = 2;
        }
      }
      else
      {
        v6 = 1;
      }
      *(&v14 + v6) = 0;
      v10 = strtoul((const char *)&v14, 0, 8);
      if ( v10 >= 0xFF )
        LOBYTE(v10) = -1;
      *a2 = v10;
      return v6;
    case 88:
    case 120:
      v11 = (unsigned __int8)a1[1];
      if ( v11 > 0x7F || (dword_9F184[v11] & 0x70000) == 0 )
        goto LABEL_7;
      v12 = (unsigned __int8)a1[2];
      v14 = a1[1];
      if ( v12 <= 0x7F && (dword_9F184[v12] & 0x70000) != 0 )
      {
        v15 = v12;
        v6 = 3;
        v13 = 2;
      }
      else
      {
        v6 = 2;
        v13 = 1;
      }
      *(&v14 + v13) = 0;
      *a2 = strtoul((const char *)&v14, 0, 16);
      break;
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
LABEL_7:
      v6 = 1;
      break;
  }
  return v6;
}
