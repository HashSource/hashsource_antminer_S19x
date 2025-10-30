int __fastcall sub_4E738(int a1, int a2)
{
  int v4; // r0
  int v5; // r2
  int v6; // r4
  int v7; // r2
  int v8; // r3
  int v9; // t1
  int v10; // r0
  int v11; // r0
  int v12; // r4
  int v13; // r3
  char s[2052]; // [sp+8h] [bp-804h] BYREF

  v4 = sub_26A44();
  if ( v4 )
  {
    v5 = a2 + (a1 << 10);
    v6 = 0;
    v7 = v5 - 4;
    v8 = 0;
    do
    {
      ++v8;
      v9 = *(_DWORD *)(v7 + 4);
      v7 += 4;
      v6 += v9;
    }
    while ( v4 != v8 );
  }
  else
  {
    v6 = 0;
  }
  v10 = sub_26A44();
  v11 = sub_8F588(v6, v10);
  v12 = v11;
  if ( (unsigned int)dword_B308C > 4 )
  {
    snprintf(s, 0x800u, "chain = %d, freq_avg = %d\n", a1, v11);
    sub_3B6AC(4, s, 0, v13);
  }
  return v12;
}
