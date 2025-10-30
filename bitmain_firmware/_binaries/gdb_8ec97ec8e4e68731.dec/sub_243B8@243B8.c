int __fastcall sub_243B8(int a1, unsigned int **a2, _DWORD *a3)
{
  unsigned int *v4; // r5
  int v6; // r7
  int v7; // r0
  int v8; // r2
  int result; // r0
  int v10; // r1
  int v11; // r2
  int v12; // r3
  int v13; // r12
  _DWORD v15[6]; // [sp+Ch] [bp-18h] BYREF

  v4 = *a2;
  if ( !*a2 )
  {
    v4 = sub_24218(a1);
    *a2 = v4;
  }
  v6 = sub_15DDFC(a1);
  v7 = sub_15E058(a1);
  if ( v7 )
    v8 = v7;
  else
    v8 = v6;
  sub_15CD0C(v15, *v4, v8);
  result = v15[0];
  v10 = v15[1];
  v11 = v15[2];
  v12 = v15[3];
  v13 = v15[4];
  *a3 = v15[0];
  a3[1] = v10;
  a3[2] = v11;
  a3[3] = v12;
  a3[4] = v13;
  return result;
}
