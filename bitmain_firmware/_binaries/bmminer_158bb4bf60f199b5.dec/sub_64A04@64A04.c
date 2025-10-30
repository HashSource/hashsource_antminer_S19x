int __fastcall sub_64A04(int *a1)
{
  char *v2; // r0
  int v3; // r3
  int *v4; // lr
  char *v5; // r12
  int v6; // r4
  int v7; // r0
  int v8; // r1
  int v9; // r2
  int v10; // r3
  char *v11; // r12
  int result; // r0
  int v13; // r1
  int v14; // r2

  v2 = (char *)realloc((void *)dword_2463E4, 28 * (dword_2463EC + 1));
  v3 = dword_2463EC;
  v4 = a1;
  v5 = v2;
  dword_2463E4 = (int)v2;
  ++dword_2463EC;
  v6 = 7 * v3;
  v7 = *v4;
  v8 = v4[1];
  v9 = v4[2];
  v10 = v4[3];
  v4 += 4;
  v11 = &v5[4 * v6];
  *(_DWORD *)v11 = v7;
  *((_DWORD *)v11 + 1) = v8;
  *((_DWORD *)v11 + 2) = v9;
  *((_DWORD *)v11 + 3) = v10;
  v11 += 16;
  result = *v4;
  v13 = v4[1];
  v14 = v4[2];
  *(_DWORD *)v11 = *v4;
  *((_DWORD *)v11 + 1) = v13;
  *((_DWORD *)v11 + 2) = v14;
  return result;
}
