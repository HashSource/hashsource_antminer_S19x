int __fastcall sub_1C2F50(int *a1, int *a2)
{
  unsigned int v2; // r12
  unsigned int v3; // r3
  char *v6; // r0
  int v7; // r12
  char *v8; // r12
  int result; // r0
  int v10; // r1
  int v11; // r2
  int v12; // r3
  int v13; // r3
  void *v14; // r3

  v2 = a1[2];
  v3 = *a1;
  v6 = (char *)a1[1];
  if ( v2 >= v3 )
  {
    v13 = 2 * v3;
    a1[1] = 0;
    *a1 = v13;
    v6 = (char *)sub_93050(v6, 16 * (v13 + 2));
    v14 = (void *)a1[1];
    a1[1] = (int)v6;
    if ( v14 )
    {
      free(v14);
      v6 = (char *)a1[1];
      v2 = a1[2];
    }
    else
    {
      v2 = a1[2];
    }
  }
  v7 = v2 + 1;
  a1[2] = v7;
  v8 = &v6[16 * v7];
  result = *a2;
  v10 = a2[1];
  v11 = a2[2];
  v12 = a2[3];
  *(_DWORD *)v8 = *a2;
  *((_DWORD *)v8 + 1) = v10;
  *((_DWORD *)v8 + 2) = v11;
  *((_DWORD *)v8 + 3) = v12;
  return result;
}
