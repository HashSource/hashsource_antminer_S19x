int __fastcall sub_B17E4(int *a1, int *a2, int a3)
{
  int v3; // r3
  int *v4; // r9
  int v6; // r7
  int v7; // r5
  int v8; // r4
  bool v9; // cc
  int v10; // r1
  int result; // r0
  int *v12; // [sp+0h] [bp-Ch] BYREF
  int v13; // [sp+4h] [bp-8h] BYREF

  v3 = *a2;
  v4 = a1;
  v6 = *a2 & 0x1000;
  if ( v6 )
  {
    v12 = a1;
    v4 = (int *)&v12;
  }
  if ( (v3 & 6) == 0 )
    return sub_B15B0((int)v4, a2[4], v6);
  v7 = *v4;
  v8 = 0;
  while ( 1 )
  {
    v9 = v8 < sub_10C010(v7, a2, a3);
    v10 = v8++;
    if ( !v9 )
      break;
    v13 = sub_10C01C(v7, v10);
    sub_B15B0((int)&v13, a2[4], v6);
  }
  result = sub_10BDB4(v7);
  *v4 = 0;
  return result;
}
