int sub_30348()
{
  int v0; // r7
  int v1; // r2
  int v2; // r4
  _DWORD *v3; // r1
  int v4; // t1
  int v6; // [sp+4h] [bp-804h] BYREF
  char s[2048]; // [sp+8h] [bp-800h] BYREF

  v0 = dword_1AEA14;
  v6 = 0;
  if ( dword_1AEA14 )
    return v0;
  v1 = dword_A0D68;
  if ( dword_9C294 == 2 )
  {
    v3 = &unk_242DB4;
    do
    {
      v4 = *(_DWORD *)(v1 + 4);
      v1 += 4;
      ++v3;
      if ( v4 == 1 )
        v0 += 29874 * *(v3 - 1);
    }
    while ( v3 != (_DWORD *)&unk_242DF4 );
    v0 /= 1000;
  }
  else
  {
    v2 = dword_1AEA14;
    while ( 1 )
    {
      if ( *(_DWORD *)(v1 + 4 * v2 + 4) == 1 )
      {
        sub_18EE4(v2, (unsigned __int8)dword_9EE38, &v6);
        v0 += v6;
      }
      if ( ++v2 == 16 )
        break;
      v1 = dword_A0D68;
    }
  }
  dword_1AEA14 = v0;
  if ( (unsigned int)dword_9E31C <= 3 )
    return v0;
  snprintf(s, 0x800u, "ideal_hash_rate = %d\n", v0);
  sub_47AB4(3, s, 0);
  return dword_1AEA14;
}
