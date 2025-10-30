int __fastcall sub_16F9BC(int result, int a2)
{
  _BYTE *v2; // r3
  int v3; // r4
  int v4; // r5
  int v5; // r1
  int v6; // r3
  char v7; // r2
  int v8; // r3
  int v9; // r12
  bool v10; // zf
  int v11; // r3

  v2 = *(_BYTE **)result;
  **(_BYTE **)result = a2;
  switch ( a2 )
  {
    case 3:
    case 4:
    case 24:
      *((_WORD *)v2 + 1) = *((_WORD *)v2 + 1) & 0xFC7F | 0x80;
      *((_DWORD *)v2 + 7) = &word_3B4A2C;
      result = 1;
      break;
    case 7:
      v3 = result;
      v10 = (*((_WORD *)v2 + 1) & 0x10) == 0;
      *((_WORD *)v2 + 1) = *((_WORD *)v2 + 1) & 0xFC7F | 0x200;
      if ( v10 )
      {
        result = (int)sub_930CC(0xCu);
      }
      else
      {
        v4 = *((_DWORD *)v2 + 4);
        v5 = *(_DWORD *)(v4 + 64);
        v6 = *(_DWORD *)(v4 + 60);
        v7 = v5 - v6;
        if ( (unsigned int)(v5 - v6) <= 0xB )
        {
          obstack_newchunk((struct obstack *)(v4 + 48), 12);
          v6 = *(_DWORD *)(v4 + 60);
          v5 = *(_DWORD *)(v4 + 64);
        }
        result = *(_DWORD *)(v4 + 56);
        v8 = v6 + 12;
        v9 = *(_DWORD *)(v4 + 72);
        *(_DWORD *)(v4 + 60) = v8;
        v10 = v8 == result;
        if ( v8 == result )
          v7 = *(_BYTE *)(v4 + 88);
        v11 = (v8 + v9) & ~v9;
        *(_DWORD *)(v4 + 60) = v11;
        if ( v10 )
          *(_BYTE *)(v4 + 88) = v7 | 2;
        if ( v11 - *(_DWORD *)(v4 + 52) > (unsigned int)(v5 - *(_DWORD *)(v4 + 52)) )
        {
          v11 = v5;
          *(_DWORD *)(v4 + 60) = v5;
        }
        *(_DWORD *)(v4 + 56) = v11;
        *(_DWORD *)result = 0;
        *(_DWORD *)(result + 4) = 0;
        *(_DWORD *)(result + 8) = 0;
      }
      *(_DWORD *)(*(_DWORD *)v3 + 28) = result;
      break;
    case 9:
      *((_WORD *)v2 + 1) = *((_WORD *)v2 + 1) & 0xFC7F | 0x180;
      break;
    default:
      return result;
  }
  return result;
}
