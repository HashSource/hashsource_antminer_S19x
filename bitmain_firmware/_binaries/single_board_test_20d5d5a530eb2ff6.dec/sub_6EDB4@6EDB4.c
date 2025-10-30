int __fastcall sub_6EDB4(int a1, int a2, unsigned int a3)
{
  int result; // r0
  int v7; // r5
  int v8; // r0
  unsigned int v9; // r10
  int v10; // r8
  int v11; // r4
  unsigned int v12; // r3
  int v13; // r7
  int v14; // r2
  unsigned int v15; // r1
  unsigned int v16; // r3
  unsigned int v17; // r3
  unsigned int v18; // [sp+Ch] [bp-804h] BYREF
  char s[2048]; // [sp+10h] [bp-800h] BYREF

  v18 = 0;
  switch ( a1 )
  {
    case 0:
      v7 = 97;
      v8 = 96;
      goto LABEL_5;
    case 1:
      v7 = 99;
      v8 = 98;
      goto LABEL_5;
    case 2:
      v7 = 101;
      v8 = 100;
      goto LABEL_5;
    case 3:
      v7 = 103;
      v8 = 102;
      goto LABEL_5;
    case 4:
      v7 = 105;
      v8 = 104;
      goto LABEL_5;
    case 5:
      v7 = 107;
      v8 = 106;
      goto LABEL_5;
    case 6:
      v7 = 109;
      v8 = 108;
      goto LABEL_5;
    case 7:
      v7 = 111;
      v8 = 110;
      goto LABEL_5;
    case 8:
      v7 = 113;
      v8 = 112;
      goto LABEL_5;
    case 9:
      v7 = 115;
      v8 = 114;
      goto LABEL_5;
    case 10:
      v7 = 125;
      v8 = 124;
      goto LABEL_5;
    case 11:
      v7 = 127;
      v8 = 126;
      goto LABEL_5;
    case 12:
      v7 = 129;
      v8 = 128;
      goto LABEL_5;
    case 13:
      v7 = 131;
      v8 = 130;
LABEL_5:
      sub_6E0BC(v8, a3 & 0x3FF | 0x80000000);
      v9 = a3 >> 2;
      if ( a3 >> 2 )
      {
        v10 = 4 * v9;
        v11 = a2;
        do
        {
          sub_6E060(v7, &v18);
          v12 = v18;
          v11 += 4;
          *(_BYTE *)(v11 - 1) = v18;
          *(_BYTE *)(v11 - 4) = HIBYTE(v12);
          *(_BYTE *)(v11 - 3) = BYTE2(v12);
          *(_BYTE *)(v11 - 2) = BYTE1(v12);
        }
        while ( a2 + 4 * v9 != v11 );
      }
      else
      {
        v10 = 0;
      }
      v13 = a3 & 3;
      if ( v13 )
      {
        sub_6E060(v7, &v18);
        if ( v13 == 2 )
        {
          v17 = HIWORD(v18);
          *(_BYTE *)(a2 + 4 * v9) = HIBYTE(v18);
          *(_BYTE *)(a2 + v10 + 1) = v17;
          result = v10 + 2;
        }
        else if ( v13 == 3 )
        {
          v14 = a2 + v10;
          v15 = HIWORD(v18);
          v16 = v18 >> 8;
          *(_BYTE *)(a2 + 4 * v9) = HIBYTE(v18);
          *(_BYTE *)(v14 + 1) = v15;
          *(_BYTE *)(v14 + 2) = v16;
          result = v10 + 3;
        }
        else
        {
          *(_BYTE *)(a2 + 4 * v9) = HIBYTE(v18);
          result = v10 + 1;
        }
      }
      else
      {
        result = v10;
      }
      break;
    default:
      snprintf(s, 0x800u, "%s: The uart%d is not supported!!!\n", "get_read_address_info", a1);
      nullsub_8();
      snprintf(s, 0x800u, "get_read_address_info error, chain_id = %d\n", a1);
      nullsub_8();
      result = 0;
      break;
  }
  return result;
}
