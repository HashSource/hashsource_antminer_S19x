int __fastcall sub_629B8(char a1, char a2)
{
  int v6; // [sp+2Ch] [bp-848h] BYREF
  int v7; // [sp+30h] [bp-844h]
  _BYTE v8[24]; // [sp+34h] [bp-840h] BYREF
  char v9[2048]; // [sp+4Ch] [bp-828h] BYREF
  int dest; // [sp+84Ch] [bp-28h] BYREF
  int v11; // [sp+850h] [bp-24h] BYREF
  __int16 v12; // [sp+854h] [bp-20h]
  __int16 v14; // [sp+85Eh] [bp-16h]

  if ( !sub_6197C() )
    return -1;
  v11 = 235186773;
  v12 = 3588;
  v6 = 0;
  v7 = 0;
  memset(v8, 0, sizeof(v8));
  v14 = 0;
  if ( a1 )
  {
    HIBYTE(v12) = -114;
    HIBYTE(v11) = -114;
  }
  if ( sub_61724(dword_536348, (unsigned __int8 *)&v11, 6u, (unsigned __int8 *)&v6, 0xEu) )
  {
    strcpy(v9, "Get power error code failed\n");
    sub_3B6AC(3, v9, 0, (int)v9);
    return -1;
  }
  else
  {
    memcpy(&dest, v8, sizeof(dest));
    if ( a2 )
    {
      snprintf(
        v9,
        0x800u,
        "Get power error code[4-7 8-11] %02x%02x%02x%02x %02x%02x%02x%02x, err_code:0x%08x\n",
        (unsigned __int8)v7,
        BYTE1(v7),
        BYTE2(v7),
        HIBYTE(v7),
        v8[0],
        v8[1],
        v8[2],
        v8[3],
        dest);
      sub_3B6AC(3, v9, 0, (int)v9);
    }
    return dest;
  }
}
