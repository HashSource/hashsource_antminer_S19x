int __fastcall sub_13C54(unsigned int a1, int a2)
{
  int v3; // r10
  int v4; // r4
  int v5; // r0
  int v6; // r3
  int v7; // r5
  int v8; // r1
  int v9; // r2
  int v10; // r0
  unsigned int v11; // r3
  unsigned int v13; // r2
  char s[2052]; // [sp+10h] [bp-804h] BYREF

  v3 = 10;
  do
  {
    v4 = 0;
    sub_70CC0();
    do
    {
      while ( 1 )
      {
        v5 = sub_66480(v4);
        if ( v5 >= 0 )
        {
          v6 = dword_A0D68;
          v7 = 4 * (v4 + 3204);
          *(_DWORD *)(dword_A0D68 + v7 + 6) = v5;
          if ( (unsigned int)dword_9E31C > 4 )
          {
            snprintf(s, 0x800u, "fan[%u] speed[%u]\n", v4, v5);
            sub_47AB4(4, s, 0);
            if ( (unsigned int)dword_9E31C > 4 )
            {
              snprintf(s, 0x800u, "fan_id = %d, fan_speed = %d\n", v4, *(_DWORD *)(dword_A0D68 + v7 + 6));
              sub_47AB4(4, s, 0);
            }
            v6 = dword_A0D68;
            v5 = *(_DWORD *)(dword_A0D68 + v7 + 6);
          }
          v8 = v6 + v4;
          if ( a1 > v5 )
          {
            if ( *(_BYTE *)(v6 + v4 + 12814) == 1 )
            {
              *(_BYTE *)(v8 + 12814) = 0;
              --*(_BYTE *)(v6 + 12936);
              *(_DWORD *)(v6 + 76) &= ~(1 << v4);
            }
            goto LABEL_5;
          }
          if ( !*(_BYTE *)(v6 + v4 + 12814) )
            break;
        }
LABEL_5:
        if ( ++v4 == 8 )
          goto LABEL_11;
      }
      *(_BYTE *)(v8 + 12814) = 1;
      ++*(_BYTE *)(v6 + 12936);
      v9 = *(_DWORD *)(v6 + 76) | (1 << v4++);
      *(_DWORD *)(v6 + 76) = v9;
    }
    while ( v4 != 8 );
LABEL_11:
    if ( *(unsigned __int8 *)(dword_A0D68 + 12936) > 3u )
      return 0;
    if ( a2 )
      v10 = 2000;
    else
      v10 = 50;
    sub_4A804(v10);
    --v3;
  }
  while ( v3 );
  v11 = *(unsigned __int8 *)(dword_A0D68 + 12936);
  if ( v11 > 3 )
    return 0;
  v13 = dword_9E31C;
  if ( (unsigned int)dword_9E31C > 1 )
  {
    snprintf(s, 0x800u, "Error, fan lost, only find %d (< %d)\n", v11, 4);
    sub_47AB4(1, s, 0);
    v13 = dword_9E31C;
  }
  while ( 1 )
  {
    if ( v13 > 3 )
    {
      snprintf(s, 0x800u, "fan_id = %d, fan_speed = %d\n", v3, *(_DWORD *)(dword_A0D68 + 4 * (v3 + 3204) + 6));
      sub_47AB4(3, s, 0);
    }
    if ( ++v3 == 8 )
      break;
    v13 = dword_9E31C;
  }
  sub_31794(10, 255);
  sub_226C0(6, "fan lost");
  return -1;
}
