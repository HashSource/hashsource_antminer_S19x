int __fastcall sub_2065BC(unsigned __int8 **a1, int *a2)
{
  int v3; // r1
  int v4; // r0
  int v5; // r3
  int v6; // r0
  unsigned __int8 **v8; // r5
  int v9; // r0
  int v10; // r3
  int v11[2]; // [sp+4h] [bp-8h] BYREF

  if ( **a1 == 40 )
  {
    ++*a1;
    v8 = a1;
    v9 = sub_2058D4(a1, 44, v11, 0);
    v10 = v11[0];
    *a2 = v9;
    if ( v10 )
      return -1;
    a1 = v8;
    v3 = 41;
  }
  else
  {
    *a2 = 0;
    v3 = 0;
  }
  v4 = sub_2058D4(a1, v3, v11, 0);
  v5 = v11[0];
  a2[1] = v4;
  v6 = v5;
  if ( v5 )
    v6 = 1;
  return -v6;
}
