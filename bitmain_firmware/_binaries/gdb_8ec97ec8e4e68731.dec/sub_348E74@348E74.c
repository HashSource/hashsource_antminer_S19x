int __fastcall sub_348E74(unsigned int *a1, int *a2)
{
  int v4; // r8
  int v5; // r0
  char v6; // r4
  int v7; // r3
  int v8; // r3
  int v9; // r2
  int result; // r0
  unsigned __int8 v11; // r5
  int v12; // r5
  int v13; // r5
  int v14; // r4
  unsigned __int16 v15; // r4
  unsigned int v16; // r2
  int v17; // r0
  unsigned int v18; // r0
  int v19; // r0
  int v20; // r0
  unsigned int v21; // r0
  char v22; // r0
  char v23; // r5
  char i; // r0
  int v25; // r3
  _DWORD v26[2]; // [sp+Ch] [bp-8h] BYREF

  v4 = 0;
  while ( 1 )
  {
    v5 = sub_348E18(a2);
    v6 = v5;
    if ( v5 == 176 )
      break;
    if ( (v5 & 0x80) != 0 )
    {
      v7 = v5 & 0xF0;
      switch ( v7 )
      {
        case 128:
          v14 = (v5 << 8) | sub_348E18(a2);
          if ( v14 == 0x8000 )
            return 9;
          v15 = 16 * v14;
          if ( sub_3489C8(a1, 0, v15, 0) )
            return 9;
          if ( (v15 & 0x8000) != 0 )
            v4 = 1;
          break;
        case 144:
          if ( (v5 & 0xD) == 0xD )
            return 9;
          sub_34858C((int)a1, 0, v5 & 0xF, 0, v26);
          sub_3485E0((int)a1, 0, 0xDu, 0, v26);
          break;
        case 160:
          v16 = (4080 >> (~(_BYTE)v5 & 7)) & 0xFF0;
          if ( (v5 & 8) != 0 )
            v16 |= 0x4000u;
          if ( sub_3489C8(a1, 0, v16, 0) )
            return 9;
          break;
        case 176:
          switch ( v5 )
          {
            case 177:
              v18 = sub_348E18(a2);
              if ( !v18 || (v18 & 0xF0) != 0 || sub_3489C8(a1, 0, v18, 0) )
                return 9;
              break;
            case 178:
              sub_34858C((int)a1, 0, 0xDu, 0, v26);
              v23 = 2;
              for ( i = sub_348E18(a2); i < 0; i = sub_348E18(a2) )
              {
                v25 = (i & 0x7F) << v23;
                v23 += 7;
                v26[0] += v25;
              }
              v26[0] += ((i & 0x7F) << v23) + 516;
              sub_3485E0((int)a1, 0, 0xDu, 0, v26);
              break;
            case 179:
              v19 = sub_348E18(a2);
              if ( sub_3489C8(a1, 1, ((v19 & 0xF) + 1) | (v19 << 12) & 0xF0000, 1) )
                return 9;
              break;
            default:
              if ( (v5 & 0xFC) == 0xB4 )
                return 9;
              v8 = 1;
              v9 = (v5 & 7) + 1;
LABEL_11:
              if ( sub_3489C8(a1, 1, v9 | 0x80000, v8) )
                return 9;
              break;
          }
          break;
        case 192:
          if ( v5 == 198 )
          {
            v20 = sub_348E18(a2);
            if ( sub_3489C8(a1, 3, ((v20 & 0xF) + 1) | (v20 << 12) & 0xF0000, 3) )
              return 9;
          }
          else if ( v5 == 199 )
          {
            v21 = sub_348E18(a2);
            if ( !v21 || (v21 & 0xF0) != 0 || sub_3489C8(a1, 4, v21, 0) )
              return 9;
          }
          else if ( (v5 & 0xF8) == 0xC0 )
          {
            if ( sub_3489C8(a1, 3, ((v5 & 0xF) + 1) | 0xA0000, 3) )
              return 9;
          }
          else if ( v5 == 200 )
          {
            v22 = sub_348E18(a2);
            if ( sub_3489C8(a1, 1, ((v22 & 0xF) + 1) | (((v22 & 0xF0) + 16) << 12), 5) )
              return 9;
          }
          else
          {
            if ( v5 != 201 )
              return 9;
            v17 = sub_348E18(a2);
            if ( sub_3489C8(a1, 1, ((v17 & 0xF) + 1) | (v17 << 12) & 0xF0000, 5) )
              return 9;
          }
          break;
        default:
          if ( (v5 & 0xF8) != 0xD0 )
            return 9;
          v8 = 5;
          v9 = (v5 & 7) + 1;
          goto LABEL_11;
      }
    }
    else
    {
      v11 = 4 * v5;
      sub_34858C((int)a1, 0, 0xDu, 0, v26);
      v12 = v11 + 4;
      if ( (v6 & 0x40) != 0 )
        v13 = v26[0] - v12;
      else
        v13 = v12 + v26[0];
      v26[0] = v13;
      sub_3485E0((int)a1, 0, 0xDu, 0, v26);
    }
  }
  result = 0;
  if ( !v4 )
  {
    sub_34858C((int)a1, 0, 0xEu, 0, v26);
    sub_3485E0((int)a1, 0, 0xFu, 0, v26);
    return 0;
  }
  return result;
}
