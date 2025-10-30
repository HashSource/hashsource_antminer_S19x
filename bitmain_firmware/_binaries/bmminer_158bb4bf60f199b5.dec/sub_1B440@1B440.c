int __fastcall sub_1B440(int a1, int a2)
{
  int v3; // r6
  int v4; // r5
  int v5; // r0
  int v6; // r6
  int v7; // r0
  int v8; // r6
  int v9; // r0
  int v10; // r7
  int v11; // r11
  int v12; // r0
  int v13; // r2
  int v14; // r6
  int v15; // r0
  int v16; // r7
  int v17; // r11
  int v18; // r0
  int v19; // r2
  int v20; // r6
  int v21; // r0
  int result; // r0
  char s[12]; // [sp+Ch] [bp-50h] BYREF
  char v24[68]; // [sp+18h] [bp-44h] BYREF

  v3 = 0;
  v4 = sub_43D6C(a1, "temp_num", dword_A0D68 + 12935, a2);
  do
  {
    v5 = v3++;
    *(_WORD *)s = sub_16C84(v5);
    sprintf(v24, "temp%d", v3);
    v4 = sub_43D8C(v4, v24, s, a2);
  }
  while ( v3 != 16 );
  v6 = 0;
  do
  {
    v7 = v6++;
    *(_WORD *)s = sub_16DE4(v7);
    sprintf(v24, "temp2_%d", v6);
    v4 = sub_43D8C(v4, v24, s, a2);
  }
  while ( v6 != 16 );
  v8 = 0;
  do
  {
    v9 = v8++;
    *(_WORD *)s = sub_17028(v9, 1);
    sprintf(v24, "temp3_%d", v8);
    v4 = sub_43D8C(v4, v24, s, a2);
  }
  while ( v8 != 16 );
  v10 = 0;
  do
  {
    v11 = 0;
    v12 = sub_16E94(v10, 0);
    v13 = sprintf(v24, "%d", v12);
    do
    {
      ++v11;
      v14 = v13 + 1;
      *(_WORD *)&v24[v13] = 45;
      v15 = sub_16E94(v10, (unsigned __int8)v11);
      v13 = sprintf(&v24[v14], "%d", v15) + v14;
    }
    while ( v11 != 3 );
    sprintf(s, "temp_pcb%d", ++v10);
    v4 = sub_43D2C(v4, s, v24, a2);
  }
  while ( v10 != 16 );
  v16 = 0;
  do
  {
    v17 = 0;
    v18 = sub_17028(v16, 0);
    v19 = sprintf(v24, "%d", v18);
    do
    {
      ++v17;
      v20 = v19 + 1;
      *(_WORD *)&v24[v19] = 45;
      v21 = sub_17028(v16, (unsigned __int8)v17);
      v19 = sprintf(&v24[v20], "%d", v21) + v20;
    }
    while ( v17 != 3 );
    sprintf(s, "temp_chip%d", ++v16);
    result = sub_43D2C(v4, s, v24, a2);
    v4 = result;
  }
  while ( v16 != 16 );
  return result;
}
