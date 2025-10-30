int sub_2F3C0()
{
  int v0; // r6
  int v1; // r6
  int result; // r0
  unsigned int *v3; // r7
  int v4; // r5
  unsigned int *v5; // r8
  __int64 v6; // r10
  int v7; // r4
  int v8; // r0
  unsigned __int64 v9; // r0
  unsigned __int64 v10; // r0
  unsigned int *v11; // lr
  int v12; // r12
  unsigned int v13; // t1
  char v14[2048]; // [sp+0h] [bp-800h] BYREF

  v0 = sub_26530();
  v1 = sub_265A0() * v0;
  result = (int)malloc(4 * v1);
  v3 = (unsigned int *)result;
  if ( result )
  {
    v4 = 0;
    while ( 1 )
    {
      if ( sub_266F0(v4) )
      {
        if ( v1 )
        {
          v5 = v3 - 1;
          v6 = 0;
          v7 = 0;
          do
          {
            v8 = sub_396BC(v4, v7++);
            v6 += (unsigned int)v8;
            v5[1] = v8;
            ++v5;
          }
          while ( v1 != v7 );
          LODWORD(v9) = sub_8CAB8(v6, HIDWORD(v6), v1, 0);
          if ( v9 > 0x1387 )
          {
            v10 = v9 >> 1;
            if ( *v3 < v10 )
            {
LABEL_16:
              if ( (unsigned int)off_AFC24 > 3 )
              {
                strcpy(v14, "Domain unbalance happened!\n");
                sub_3AF5C(3, v14, 0, *(_DWORD *)"ance happened!\n");
              }
              free(v3);
              return 1;
            }
            v11 = v3;
            v12 = 0;
            while ( ++v12 != v7 )
            {
              v13 = v11[1];
              ++v11;
              if ( v13 < v10 )
                goto LABEL_16;
            }
          }
        }
      }
      if ( ++v4 == 4 )
      {
        free(v3);
        return 0;
      }
    }
  }
  if ( (unsigned int)off_AFC24 > 3 )
  {
    strcpy(v14, "failed alloc memory!\n");
    sub_3AF5C(3, v14, 0, *(_DWORD *)" memory!\n");
    return 0;
  }
  return result;
}
