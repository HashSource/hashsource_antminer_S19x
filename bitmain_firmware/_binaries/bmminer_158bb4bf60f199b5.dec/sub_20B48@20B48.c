int sub_20B48()
{
  int v0; // r0
  int v1; // r1
  int v2; // r2
  int v3; // r3
  unsigned int v5; // r5
  int v6; // r9
  int v7; // r0
  int v8; // r8
  int v9; // r7
  int v10; // r6
  int v11; // r4
  int v12; // r3
  int v13; // r6
  int v14; // r0
  char s[2052]; // [sp+8h] [bp-804h] BYREF

  v0 = sub_16940();
  if ( v0 <= 7 || (double)sub_3047C(v0, v1, v2, v3) * 0.98 <= dbl_241D48 )
    return 0;
  v5 = sub_16940();
  v6 = sub_30524(v5, 1);
  v7 = sub_312D8();
  v8 = sub_3050C(v7, 0);
  v9 = sub_1A1B0();
  v10 = sub_1A1C0();
  if ( (unsigned int)dword_9E31C > 3 )
  {
    snprintf(s, 0x800u, "latest avg rate < %.2f......\n", 0.98);
    sub_47AB4(3, s, 0);
    if ( (unsigned int)dword_9E31C > 3 )
    {
      snprintf(s, 0x800u, "current PCB min temperature %d\n", v5);
      sub_47AB4(3, s, 0);
      if ( (unsigned int)dword_9E31C > 3 )
      {
        snprintf(s, 0x800u, "current voltage raw is %d, working voltage raw is %d\n", v10, v9);
        sub_47AB4(3, s, 0);
      }
    }
  }
  if ( v5 > 0x16 )
  {
    v11 = (unsigned __int8)byte_A06CC;
    if ( byte_A06CC )
    {
      if ( (unsigned int)dword_9E31C > 3 )
      {
        strcpy(s, "high temp, voltage has already increased 0.1V/0.2V\n");
        sub_47AB4(3, s, 0);
      }
      return 0;
    }
    if ( v8 >= 2 )
      v12 = 10;
    else
      v12 = 20;
    v13 = v12 + v10;
    if ( (unsigned int)dword_9E31C > 3 )
    {
      snprintf(s, 0x800u, "high temp, increase voltage 0.1V/0.2V to %d\n", v13);
      sub_47AB4(3, s, v11);
    }
    byte_A06CC = 1;
    byte_A06B8 = 0;
    v14 = sub_1A0F0(v13);
  }
  else
  {
    if ( v9 != v10 )
    {
      if ( (unsigned int)dword_9E31C > 3 )
      {
        strcpy(s, "low temp, voltage has already increased to higher voltage\n");
        sub_47AB4(3, s, 0);
        return 0;
      }
      return 0;
    }
    if ( byte_A06CC )
      v14 = sub_3055C(v8, v6);
    else
      v14 = sub_30540(v8, v6);
    if ( v9 + 99 < v14 )
      v14 = v9 + 100;
    if ( (unsigned int)dword_9E31C > 3 )
    {
      snprintf(s, 0x800u, "low temp, increase voltage to higher voltage %d\n", v14);
      v14 = sub_47AB4(3, s, 0);
    }
    byte_A06B8 = 0;
  }
  if ( sub_257E4(v14) )
    sub_226C0(4, "reopen core failed!");
  sub_20B28();
  return -1;
}
