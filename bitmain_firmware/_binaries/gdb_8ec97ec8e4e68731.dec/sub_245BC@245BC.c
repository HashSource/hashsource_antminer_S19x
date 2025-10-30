int __fastcall sub_245BC(int a1, unsigned int **a2, _DWORD *a3)
{
  unsigned int *v4; // r5
  int v6; // r7
  int result; // r0
  int v8; // r1
  int v9; // r2
  int v10; // r3
  int v11; // r12
  _DWORD v13[7]; // [sp+8h] [bp-1Ch] BYREF

  v4 = *a2;
  if ( !*a2 )
  {
    v4 = sub_244DC(a1);
    *a2 = v4;
  }
  v6 = sub_15DDFC(a1);
  sub_15E058(a1);
  sub_15CD0C(v13, *v4, v6);
  result = v13[0];
  v8 = v13[1];
  v9 = v13[2];
  v10 = v13[3];
  v11 = v13[4];
  *a3 = v13[0];
  a3[1] = v8;
  a3[2] = v9;
  a3[3] = v10;
  a3[4] = v11;
  return result;
}
