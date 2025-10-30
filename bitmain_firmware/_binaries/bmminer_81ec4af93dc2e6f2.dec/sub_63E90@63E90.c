int __fastcall sub_63E90(char a1, char a2)
{
  _DWORD v6[8]; // [sp+2Ch] [bp-848h] BYREF
  char v7[2048]; // [sp+4Ch] [bp-828h] BYREF
  int v8; // [sp+84Ch] [bp-28h]
  int v9; // [sp+850h] [bp-24h] BYREF
  __int16 v10; // [sp+854h] [bp-20h]
  __int16 v12; // [sp+85Eh] [bp-16h]

  if ( !sub_62FF4() )
    return -1;
  v9 = 235186773;
  v10 = 3588;
  memset(v6, 0, sizeof(v6));
  v12 = 0;
  if ( a1 )
  {
    HIBYTE(v10) = -114;
    HIBYTE(v9) = -114;
  }
  if ( sub_62DA0(dword_531538, (unsigned __int8 *)&v9, 6u, (unsigned __int8 *)v6, 0xEu) )
  {
    strcpy(v7, "Get power error code failed\n");
    sub_3AF5C(3, v7, 0, (int)v7);
    return -1;
  }
  else
  {
    v8 = v6[2];
    if ( a2 )
    {
      snprintf(
        v7,
        0x800u,
        "Get power error code[4-7 8-11] %02x%02x%02x%02x %02x%02x%02x%02x, err_code:0x%08x\n",
        LOBYTE(v6[1]),
        BYTE1(v6[1]),
        BYTE2(v6[1]),
        HIBYTE(v6[1]),
        LOBYTE(v6[2]),
        BYTE1(v6[2]),
        BYTE2(v6[2]),
        HIBYTE(v6[2]),
        v8);
      sub_3AF5C(3, v7, 0, (int)v7);
    }
    return v8;
  }
}
