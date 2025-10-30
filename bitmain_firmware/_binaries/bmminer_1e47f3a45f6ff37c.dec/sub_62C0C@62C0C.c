int __fastcall sub_62C0C(char a1, void *a2)
{
  unsigned __int8 v6[80]; // [sp+4Ch] [bp-888h] BYREF
  char v7[2048]; // [sp+9Ch] [bp-838h] BYREF
  int v8; // [sp+89Ch] [bp-38h] BYREF
  __int16 v9; // [sp+8A0h] [bp-34h]
  __int16 v11; // [sp+8AAh] [bp-2Ah]
  int i; // [sp+8ACh] [bp-28h]

  if ( !sub_6197C() )
    return -1;
  v8 = 251963989;
  v9 = 3844;
  memset(v6, 0, sizeof(v6));
  v11 = 0;
  if ( sub_61724(dword_536348, (unsigned __int8 *)&v8, 6u, v6, 0x4Au) )
  {
    strcpy(v7, "Get power error data failed\n");
    sub_3B6AC(3, v7, 0, (int)v7);
    return -1;
  }
  else
  {
    memcpy(a2, &v6[4], 0x44u);
    if ( a1 )
    {
      strcpy(v7, "Get power error data:\n");
      sub_3B6AC(3, v7, 0, (int)v7);
      for ( i = 0; i <= 59; i += 12 )
      {
        snprintf(
          v7,
          0x800u,
          "data[%02d-%02d]: %02x%02x%02x%02x %02x%02x%02x%02x %02x%02x%02x%02x\n",
          i,
          i + 11,
          v6[i + 4],
          v6[i + 5],
          v6[i + 6],
          v6[i + 7],
          v6[i + 8],
          v6[i + 9],
          v6[i + 10],
          v6[i + 11],
          v6[i + 12],
          v6[i + 13],
          v6[i + 14],
          v6[i + 15]);
        sub_3B6AC(3, v7, 0, (int)v7);
      }
      snprintf(
        v7,
        0x800u,
        "data[60-67]: %02x%02x%02x%02x %02x%02x%02x%02x\n",
        v6[64],
        v6[65],
        v6[66],
        v6[67],
        v6[68],
        v6[69],
        v6[70],
        v6[71]);
      sub_3B6AC(3, v7, 0, (int)v7);
    }
    return 0;
  }
}
