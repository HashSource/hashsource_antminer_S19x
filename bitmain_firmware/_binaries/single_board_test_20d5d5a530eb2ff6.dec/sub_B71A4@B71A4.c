int *__fastcall sub_B71A4(int *result)
{
  int *v1; // r4
  int v2; // r10
  int v3; // r5
  _DWORD *v4; // r0
  int v5; // r8
  int v6; // r7
  int v7; // r6
  int v8; // r6
  int v9; // [sp+4h] [bp-8h]

  v1 = result;
  if ( result )
  {
    v2 = 0;
    v3 = 0;
    while ( 1 )
    {
      v4 = sub_B655C(*v1);
      v5 = (int)v4;
      if ( !v4 )
        break;
      v6 = v1[3];
      v9 = v1[4];
      v7 = v1[5];
      v4[2] = v1[2];
      v4[5] = v7;
      v4[6] = v1[6];
      v4[8] = v1[8];
      v8 = v1[1];
      v4[3] = v6;
      v4[1] = v8;
      v4[4] = v9;
      if ( !sub_B6ECC((int)v1, 12, 0, (int)v4) || !sub_DC054(12, v5 + 72, v1 + 18) )
      {
        BIO_vfree_0(v5);
        break;
      }
      if ( v3 )
      {
        sub_B70C0(v2, v5);
        v1 = (int *)v1[10];
        v2 = v5;
        if ( !v1 )
          return (int *)v3;
      }
      else
      {
        v1 = (int *)v1[10];
        v3 = v5;
        v2 = v5;
        if ( !v1 )
          return (int *)v3;
      }
    }
    sub_B717C(v3);
    return 0;
  }
  return result;
}
