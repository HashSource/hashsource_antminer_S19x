int __fastcall sub_50B8C(int *a1)
{
  char *v2; // r0
  int v3; // r7
  char *v4; // lr
  int v5; // r0
  int v6; // r1
  int v7; // r2
  int v8; // r3
  char *v9; // r12
  int result; // r0
  int v11; // r1
  int v12; // r2

  v2 = (char *)realloc((void *)dword_9CD914, 28 * (dword_9CD91C + 1));
  v3 = dword_9CD91C++;
  v4 = v2;
  dword_9CD914 = (int)v2;
  v5 = *a1;
  v6 = a1[1];
  v7 = a1[2];
  v8 = a1[3];
  a1 += 4;
  v9 = &v4[28 * v3];
  *(_DWORD *)v9 = v5;
  *((_DWORD *)v9 + 1) = v6;
  *((_DWORD *)v9 + 2) = v7;
  *((_DWORD *)v9 + 3) = v8;
  v9 += 16;
  result = *a1;
  v11 = a1[1];
  v12 = a1[2];
  *(_DWORD *)v9 = *a1;
  *((_DWORD *)v9 + 1) = v11;
  *((_DWORD *)v9 + 2) = v12;
  return result;
}
