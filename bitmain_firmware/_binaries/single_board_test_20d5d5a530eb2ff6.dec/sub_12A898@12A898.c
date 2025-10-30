int __fastcall sub_12A898(int *a1, char *a2, int a3, int a4, int a5)
{
  int *v8; // r5
  int *v9; // r0
  int v10; // r6
  int v11; // r0
  int v13; // [sp+14h] [bp-4h] BYREF

  v13 = 0;
  v8 = &v13;
  if ( a1 )
    v8 = a1;
  v9 = (int *)sub_12A850(a5);
  if ( v9 )
  {
    v10 = v9[3];
    if ( (v9[4] & 2) == 0 )
      v10 &= dword_21FE50;
    v11 = sub_170E28((int)v8, a2, a3, a4, v10, v9[1], v9[2]);
  }
  else
  {
    v11 = sub_1714AC(v8, a2, a3, a4, dword_21FE50 & 0x2806);
  }
  if ( v11 <= 0 )
    return 0;
  else
    return *v8;
}
