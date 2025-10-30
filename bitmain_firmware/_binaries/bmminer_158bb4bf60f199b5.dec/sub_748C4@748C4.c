int __fastcall sub_748C4(int a1, int a2, int a3, int a4, int a5)
{
  int v9; // r10
  int v10; // r1
  int v11; // r2
  int v12; // r0
  _BYTE v14[12]; // [sp+Ch] [bp-Ch] BYREF

  v9 = sub_76008(a2, a3, a4, a5, v14);
  if ( v9 )
    return -1;
  sub_761B0(a1, v14, 9);
  if ( a2 == 1 )
  {
    v10 = a1;
    v11 = 0;
    v12 = 0;
  }
  else
  {
    v11 = a3;
    v10 = a1;
    v12 = 1;
  }
  sub_75ED0(v12, v10, v11, a4, a5);
  return v9;
}
