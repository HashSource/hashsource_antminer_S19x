int __fastcall sub_19D18(int a1, int a2)
{
  int v4; // r7
  int v5; // r0
  int v6; // r2
  unsigned int v7; // r3
  int v8; // r6
  unsigned int v9; // r5
  unsigned int v10; // r4
  unsigned int v11; // r10
  int v12; // r11
  int v13; // r4
  char s[2052]; // [sp+10h] [bp-804h] BYREF

  v4 = sub_73604();
  v5 = sub_73604();
  v6 = v4 - v5;
  LOWORD(v7) = -3855;
  if ( v4 - v5 < 0 )
    v6 = v5 - v4;
  HIWORD(v7) = -3856;
  v8 = v5;
  v9 = (unsigned int)(((unsigned int)v6 * (unsigned __int64)v7) >> 32) >> 4;
  if ( (unsigned int)dword_9E31C > 4 )
  {
    snprintf(s, 0x800u, "da_N_target %d, da_N_curr %d, da_N_step %d, step %d\n", v4, v5, 17, v9);
    sub_47AB4(4, s, 0);
  }
  if ( v9 )
  {
    v10 = v8 + 17;
    v11 = v8 - 17;
    v12 = 17 * v9 + v8 + 17;
    do
    {
      if ( v4 > v8 )
        v9 = v10;
      else
        v9 = v11;
      v10 += 17;
      v11 -= 17;
      sub_73584((unsigned __int8)v9);
    }
    while ( v10 != v12 );
  }
  if ( v4 != v9 )
    sub_73584((unsigned __int8)v4);
  v13 = sub_19BB4();
  if ( v13 )
  {
    sub_31794(12, 0);
    sub_226C0(8, "power set failed!");
  }
  *(_DWORD *)(a2 + 4) = a1;
  *(_BYTE *)a2 = 1;
  return v13;
}
