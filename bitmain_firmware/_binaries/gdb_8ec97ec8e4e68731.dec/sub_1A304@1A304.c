int __fastcall sub_1A304(int a1, int **a2, _DWORD *a3)
{
  int v5; // r7
  int v6; // r0
  int result; // r0
  int v8; // r1
  int v9; // r2
  int v10; // r3
  int v11; // r12
  int *v13; // r8
  int v14; // r0
  _DWORD v15[6]; // [sp+0h] [bp-18h] BYREF

  if ( *a2 )
  {
    v5 = **a2;
  }
  else
  {
    v13 = (int *)sub_15D27C(16);
    v13[3] = sub_250C50(a1);
    v14 = sub_15ECAC(a1, 13);
    *v13 = v14;
    v5 = v14;
    *a2 = v13;
  }
  v6 = sub_15DDFC(a1);
  sub_15CD0C(v15, v5, v6);
  result = v15[0];
  v8 = v15[1];
  v9 = v15[2];
  v10 = v15[3];
  v11 = v15[4];
  *a3 = v15[0];
  a3[1] = v8;
  a3[2] = v9;
  a3[3] = v10;
  a3[4] = v11;
  return result;
}
