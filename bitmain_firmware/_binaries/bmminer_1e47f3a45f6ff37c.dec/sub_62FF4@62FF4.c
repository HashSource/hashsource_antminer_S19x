int sub_62FF4()
{
  int v2; // [sp+Ch] [bp-838h] BYREF
  _BYTE v3[28]; // [sp+10h] [bp-834h] BYREF
  char v4[2048]; // [sp+2Ch] [bp-818h] BYREF
  int dest; // [sp+82Ch] [bp-18h] BYREF
  int v6; // [sp+830h] [bp-14h] BYREF
  __int16 v7; // [sp+834h] [bp-10h]
  __int16 v9; // [sp+83Eh] [bp-6h]

  if ( !sub_6197C() )
    return -1;
  v6 = 218409557;
  v7 = 3332;
  v2 = 0;
  memset(v3, 0, sizeof(v3));
  v9 = 0;
  if ( sub_61724(dword_536348, (unsigned __int8 *)&v6, 6u, (unsigned __int8 *)&v2, 0xAu) )
  {
    strcpy(v4, "Get power update time failed\n");
    sub_3B6AC(3, v4, 0, (int)v4);
    return -1;
  }
  else
  {
    memcpy(&dest, v3, sizeof(dest));
    return dest;
  }
}
