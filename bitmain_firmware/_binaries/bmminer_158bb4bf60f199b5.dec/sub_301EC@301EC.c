int sub_301EC()
{
  int result; // r0
  int v1; // r3
  int v2; // r4
  int v3; // r5
  int *v4; // r2
  int v5; // t1
  _DWORD *v6; // r2
  int v7; // t1
  _BYTE v8[8]; // [sp+0h] [bp-93Ch] BYREF
  int v9; // [sp+134h] [bp-808h] BYREF
  char s[2052]; // [sp+138h] [bp-804h] BYREF

  result = dword_1AEA10;
  if ( !dword_1AEA10 )
  {
    v1 = dword_A0D68;
    if ( dword_9C294 != 2 )
    {
      v2 = dword_1AEA10;
      v3 = dword_1AEA10;
      while ( 1 )
      {
        if ( *(_DWORD *)(v1 + 4 * v3 + 4) == 1 )
        {
          sub_18D10(v3, (unsigned __int8)dword_9EE38, (int)v8);
          v4 = (int *)&v8[-4];
          do
          {
            v5 = v4[1];
            ++v4;
            v2 += 383 * v5;
          }
          while ( v4 != &v9 );
          if ( ++v3 == 16 )
            goto LABEL_10;
        }
        else if ( ++v3 == 16 )
        {
          goto LABEL_10;
        }
        v1 = dword_A0D68;
      }
    }
    v6 = &unk_242DB4;
    v2 = dword_1AEA10;
    do
    {
      v7 = *(_DWORD *)(v1 + 4);
      v1 += 4;
      ++v6;
      if ( v7 == 1 )
        v2 += 29874 * *(v6 - 1);
    }
    while ( v6 != (_DWORD *)&unk_242DF4 );
LABEL_10:
    result = v2 / 1000;
    dword_1AEA10 = result;
    if ( (unsigned int)dword_9E31C > 3 )
    {
      snprintf(s, 0x800u, "max_hash_rate = %d\n", v2 / 1000);
      sub_47AB4(3, s, 0);
      return dword_1AEA10;
    }
  }
  return result;
}
