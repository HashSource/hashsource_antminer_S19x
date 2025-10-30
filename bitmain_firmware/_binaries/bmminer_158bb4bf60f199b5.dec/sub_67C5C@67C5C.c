unsigned int __fastcall sub_67C5C(int a1, int a2, unsigned int a3)
{
  unsigned int v5; // r5
  int v8; // r6
  int v9; // r0
  unsigned int v10; // r9
  int v11; // r4
  unsigned int v12; // r3
  int v13; // r4
  int v14; // r3
  unsigned int v15; // r1
  unsigned int v16; // r2
  unsigned int v17; // r2
  unsigned int v18; // [sp+Ch] [bp-808h] BYREF
  char s[2052]; // [sp+10h] [bp-804h] BYREF

  v18 = 0;
  switch ( a1 )
  {
    case 0:
      v8 = 96;
      v9 = 95;
      goto LABEL_5;
    case 1:
      v8 = 98;
      v9 = 97;
      goto LABEL_5;
    case 2:
      v8 = 100;
      v9 = 99;
      goto LABEL_5;
    case 3:
      v8 = 102;
      v9 = 101;
      goto LABEL_5;
    case 4:
      v8 = 104;
      v9 = 103;
      goto LABEL_5;
    case 5:
      v8 = 106;
      v9 = 105;
      goto LABEL_5;
    case 6:
      v8 = 108;
      v9 = 107;
      goto LABEL_5;
    case 7:
      v8 = 110;
      v9 = 109;
      goto LABEL_5;
    case 8:
      v8 = 112;
      v9 = 111;
      goto LABEL_5;
    case 9:
      v8 = 114;
      v9 = 113;
      goto LABEL_5;
    case 10:
      v8 = 124;
      v9 = 123;
      goto LABEL_5;
    case 11:
      v8 = 126;
      v9 = 125;
      goto LABEL_5;
    case 12:
      v8 = 128;
      v9 = 127;
      goto LABEL_5;
    case 13:
      v8 = 130;
      v9 = 129;
LABEL_5:
      sub_66908(v9, a3 & 0x3FF | 0x80000000);
      v10 = a3 >> 2;
      if ( a3 >> 2 )
      {
        v11 = a2;
        do
        {
          v11 += 4;
          sub_6688C(v8, &v18);
          v12 = v18;
          *(_BYTE *)(v11 - 1) = v18;
          *(_BYTE *)(v11 - 4) = HIBYTE(v12);
          *(_BYTE *)(v11 - 3) = BYTE2(v12);
          *(_BYTE *)(v11 - 2) = BYTE1(v12);
        }
        while ( a2 + 4 * v10 != v11 );
      }
      v13 = a3 & 3;
      v5 = a3 & 0xFFFFFFFC;
      if ( v13 )
      {
        sub_6688C(v8, &v18);
        v14 = a2 + 4 * v10;
        if ( v13 == 2 )
        {
          v5 += 2;
          v17 = HIWORD(v18);
          *(_BYTE *)(a2 + 4 * v10) = HIBYTE(v18);
          *(_BYTE *)(v14 + 1) = v17;
        }
        else if ( v13 == 3 )
        {
          v5 += 3;
          v15 = HIWORD(v18);
          v16 = v18 >> 8;
          *(_BYTE *)(a2 + 4 * v10) = HIBYTE(v18);
          *(_BYTE *)(v14 + 1) = v15;
          *(_BYTE *)(v14 + 2) = v16;
        }
        else
        {
          ++v5;
          *(_BYTE *)(a2 + 4 * v10) = HIBYTE(v18);
        }
      }
      break;
    default:
      v5 = 0;
      snprintf(s, 0x800u, "%s: The uart%d is not supported!!!\n", "get_read_address_info", a1);
      sub_47AB4(0, s, 0);
      snprintf(s, 0x800u, "get_read_address_info error, chain_id = %d\n", a1);
      sub_47AB4(0, s, 0);
      break;
  }
  return v5;
}
