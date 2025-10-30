int sub_2F9E4()
{
  int v0; // r5
  int v1; // r5
  int result; // r0
  unsigned int *v3; // r11
  int v4; // r10
  unsigned int *v5; // r8
  __int64 v6; // r6
  int v7; // r4
  int v8; // r0
  unsigned __int64 v9; // r0
  unsigned __int64 v10; // r0
  unsigned int *v11; // lr
  int v12; // r12
  unsigned int v13; // t1
  char v14[2048]; // [sp+0h] [bp-800h] BYREF

  v0 = sub_26A34();
  v1 = sub_26AA4() * v0;
  result = (int)malloc(4 * v1);
  v3 = (unsigned int *)result;
  if ( result )
  {
    v4 = 0;
    while ( 1 )
    {
      if ( sub_26C0C(v4) )
      {
        if ( v1 )
        {
          v5 = v3 - 1;
          v6 = 0;
          v7 = 0;
          do
          {
            v8 = sub_39D80(v4, v7++);
            v5[1] = v8;
            ++v5;
            v6 += (unsigned int)v8;
          }
          while ( v1 != v7 );
          LODWORD(v9) = sub_8FE20(v6, HIDWORD(v6), v1, 0);
          if ( v9 > 0x1387 )
          {
            v10 = v9 >> 1;
            if ( v10 > *v3 )
            {
LABEL_16:
              if ( (unsigned int)dword_B308C > 3 )
              {
                strcpy(v14, "Domain unbalance happened!\n");
                sub_3B6AC(3, v14, 0, *(_DWORD *)"ance happened!\n");
                free(v3);
              }
              else
              {
                free(v3);
              }
              return 1;
            }
            v11 = v3;
            v12 = 0;
            while ( v1 != ++v12 )
            {
              v13 = v11[1];
              ++v11;
              if ( v10 > v13 )
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
  if ( (unsigned int)dword_B308C > 3 )
  {
    strcpy(v14, "failed alloc memory!\n");
    sub_3B6AC(3, v14, 0, *(_DWORD *)" memory!\n");
    return 0;
  }
  return result;
}
