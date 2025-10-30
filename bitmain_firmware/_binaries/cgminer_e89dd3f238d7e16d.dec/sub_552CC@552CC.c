int __fastcall sub_552CC(_DWORD *a1)
{
  int v1; // r2
  _DWORD *v2; // r12
  int v3; // r1
  int v4; // r2
  int v5; // r3
  int result; // r0
  int v7; // r1
  int v8; // r2

  dword_94324 = (int)realloc((void *)dword_94324, 28 * (dword_9431C + 1));
  v1 = dword_9431C++;
  v2 = (_DWORD *)(dword_94324 + 28 * v1);
  v3 = a1[1];
  v4 = a1[2];
  v5 = a1[3];
  *v2 = *a1;
  v2[1] = v3;
  v2[2] = v4;
  v2[3] = v5;
  v2 += 4;
  result = a1[4];
  v7 = a1[5];
  v8 = a1[6];
  *v2 = result;
  v2[1] = v7;
  v2[2] = v8;
  return result;
}
