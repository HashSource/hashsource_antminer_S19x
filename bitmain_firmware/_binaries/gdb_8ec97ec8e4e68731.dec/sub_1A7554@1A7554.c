int *sub_1A7554()
{
  int *v0; // r5
  int **v1; // r4
  int *v2; // r0
  int *v3; // r1
  int *v4; // r2
  int *v5; // r3
  int *v6; // r7
  int *result; // r0
  int *v8; // r1
  int *v9; // r2
  int *v10; // r3

  v0 = (int *)dword_487AC4;
  if ( dword_487AC4 && (v1 = *(int ***)(dword_487AC4 + 4)) != 0
    || (result = (int *)sub_93094(1u, 0x24u), v0 = (int *)dword_487AC4, v1 = (int **)result, dword_487AC4) )
  {
    v2 = (int *)*v0;
    v3 = (int *)v0[1];
    v4 = (int *)v0[2];
    v5 = (int *)v0[3];
    v6 = v1[1];
    dword_487AC4 = (int)v1;
    *v1 = v2;
    v1[1] = v3;
    v1[2] = v4;
    v1[3] = v5;
    result = (int *)v0[4];
    v8 = (int *)v0[5];
    v9 = (int *)v0[6];
    v10 = (int *)v0[7];
    v1[4] = result;
    v1[5] = v8;
    v1[6] = v9;
    v1[7] = v10;
    v1[8] = (int *)v0[8];
    v0[1] = (int)v1;
    *v1 = v0;
    v1[1] = v6;
  }
  else
  {
    dword_487AC4 = (int)result;
  }
  return result;
}
