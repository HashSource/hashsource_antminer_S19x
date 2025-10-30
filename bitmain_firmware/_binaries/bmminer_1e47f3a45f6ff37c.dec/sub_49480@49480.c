int sub_49480()
{
  int v0; // r5
  int result; // r0
  unsigned int v2[8]; // [sp+28h] [bp-804h] BYREF
  int v3; // [sp+48h] [bp-7E4h]
  int v4; // [sp+4Ch] [bp-7E0h]
  int v5; // [sp+50h] [bp-7DCh]
  int v6; // [sp+54h] [bp-7D8h]
  int v7; // [sp+58h] [bp-7D4h]

  if ( (unsigned int)dword_B308C > 4 )
  {
    strcpy((char *)v2, "[DEBUG] Send 1-midstate work.\n");
    sub_3B6AC(4, (const char *)v2, 0, *(int *)".\n");
  }
  v0 = 0;
  v2[0] = 1;
  memset(&v2[1], 0, 28);
  v3 = 0;
  v4 = 0;
  v5 = 0;
  v6 = 0;
  v7 = 0;
  do
  {
    result = sub_26C0C(v0);
    if ( result )
    {
      while ( (sub_6A5C0(result) & (1 << v0)) == 0 )
        result = sub_3E0F0();
      BYTE1(v2[0]) = ~((unsigned int)~(v0 << 25) >> 25);
      sub_27FF8(v2[0], v2[1], v2[2], v2[3], v2[4], v2[5], v2[6], v2[7], v3);
      result = sub_3E0F0();
    }
    ++v0;
  }
  while ( v0 != 4 );
  return result;
}
