int __fastcall sub_65EC8(int a1)
{
  char v3[2048]; // [sp+10h] [bp-824h] BYREF
  _DWORD v4[2]; // [sp+810h] [bp-24h] BYREF
  int v5; // [sp+818h] [bp-1Ch]
  __int16 v6; // [sp+81Ch] [bp-18h]
  int v7; // [sp+820h] [bp-14h] BYREF
  __int16 v8; // [sp+824h] [bp-10h]
  __int16 v9; // [sp+826h] [bp-Eh]
  int v10; // [sp+828h] [bp-Ch]
  char v11; // [sp+82Dh] [bp-7h]
  char v12; // [sp+82Eh] [bp-6h]
  char v13; // [sp+82Fh] [bp-5h]

  v13 = 4;
  v12 = 10;
  v7 = 168077909;
  v4[0] = 0;
  v4[1] = 0;
  v5 = 0;
  v6 = 0;
  v10 = -2147482880;
  v9 = 14;
  v8 = 14;
  v11 = 6;
  if ( sub_62C28(a1, (unsigned __int8 *)&v7, 6u, (unsigned __int8 *)v4, 0xEu) )
  {
    strcpy(v3, "get power status failed\n");
    sub_3AF5C(0, v3, 0, (int)v3);
    return -2147482880;
  }
  else
  {
    return (HIBYTE(v5) << 24) | (BYTE2(v5) << 16) & 0xFF0000 | (unsigned __int16)(BYTE1(v5) << 8) | (unsigned __int8)v5;
  }
}
