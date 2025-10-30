int __fastcall sub_47BF8(int a1, _BYTE *a2, _DWORD *a3)
{
  char v3; // r3
  char v5; // r3
  char v6; // r3
  int v7; // r12

  if ( a1 < 0 )
    return -1;
  if ( a1 <= 127 )
  {
    *a2 = a1;
    *a3 = 1;
    return 0;
  }
  else if ( a1 < 2048 )
  {
    v5 = (a1 & 0x3F) + 0x80;
    *a2 = (a1 >> 6) - 64;
    a2[1] = v5;
    *a3 = 2;
    return 0;
  }
  else if ( a1 < 0x10000 )
  {
    v6 = (a1 & 0x3F) + 0x80;
    v7 = (((unsigned int)a1 >> 6) & 0x3F) - 128;
    *a2 = (a1 >> 12) - 32;
    a2[1] = v7;
    a2[2] = v6;
    *a3 = 3;
    return 0;
  }
  else if ( a1 >= 1114112 )
  {
    return -1;
  }
  else
  {
    v3 = (a1 & 0x3F) + 0x80;
    *a2 = (a1 >> 18) - 16;
    a2[1] = (((unsigned int)a1 >> 12) & 0x3F) + 0x80;
    a2[2] = (((unsigned int)a1 >> 6) & 0x3F) + 0x80;
    a2[3] = v3;
    *a3 = 4;
    return 0;
  }
}
