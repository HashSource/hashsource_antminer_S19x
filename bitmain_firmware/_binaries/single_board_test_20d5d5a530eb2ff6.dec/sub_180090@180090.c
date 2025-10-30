int __fastcall sub_180090(int a1, int a2, int a3, int *a4)
{
  int v8; // r0
  int *v9; // r4
  int v10; // r0
  int v11; // r9
  int result; // r0
  int v13; // r3
  int v14; // r3
  int v15; // r3
  int v16; // r3
  int v17; // r3
  void (__fastcall *v18)(int, int *, int *, int *); // r5
  int v19; // r3
  bool v20; // zf
  int v21; // r0
  int (__fastcall *v22)(int, int *, int *, int *); // r5

  v8 = sub_B66C8(a1);
  if ( !v8 )
    return 0;
  v9 = (int *)v8;
  v10 = sub_B7170(a1);
  v11 = v10;
  if ( a2 == 151 )
  {
    v17 = a4[1];
    v9[10] = *a4;
    v9[11] = v17;
    return 1;
  }
  if ( a2 <= 151 )
  {
    if ( a2 == 149 )
    {
      v16 = a4[1];
      v9[8] = *a4;
      v9[9] = v16;
      return 1;
    }
    if ( a2 > 149 )
    {
      v15 = v9[9];
      *a4 = v9[8];
      a4[1] = v15;
      return 1;
    }
    if ( a2 != 11 )
      goto LABEL_19;
    if ( !v10 )
      return 0;
    v13 = *v9;
    if ( *v9 == 2 )
    {
      v22 = (int (__fastcall *)(int, int *, int *, int *))v9[10];
      if ( v22 && !v22(a1, v9 + 12, v9 + 13, v9 + 15) )
        goto LABEL_16;
      if ( v9[13] <= 0 )
        v13 = 6;
      else
        v13 = 5;
      *v9 = v13;
    }
    if ( v13 == 5 )
    {
      if ( v9[13] > 0 )
      {
        v18 = (void (__fastcall *)(int, int *, int *, int *))v9[11];
        while ( 1 )
        {
          v21 = sub_B7170(a1);
          result = sub_B69CC(v21, v9[12] + v9[14], v9[13]);
          if ( result <= 0 )
            break;
          v19 = v9[13] - result;
          v20 = v9[13] == result;
          v9[13] = v19;
          if ( v19 < 0 || v20 )
          {
            if ( v18 )
              v18(a1, v9 + 12, v9 + 13, v9 + 15);
            *v9 = 6;
            v9[14] = 0;
            return sub_B6ECC(v11, 11, a3, (int)a4);
          }
          v9[14] += result;
        }
        return result;
      }
    }
    else if ( v13 == 6 )
    {
      return sub_B6ECC(v11, 11, a3, (int)a4);
    }
LABEL_16:
    sub_B66FC(a1, 15);
    return 0;
  }
  if ( a2 != 153 )
  {
    if ( a2 < 153 )
    {
      v14 = v9[11];
      *a4 = v9[10];
      a4[1] = v14;
      return 1;
    }
    if ( a2 == 154 )
    {
      *a4 = v9[15];
      return 1;
    }
LABEL_19:
    if ( v10 )
      return sub_B6ECC(v10, a2, a3, (int)a4);
    return 0;
  }
  v9[15] = (int)a4;
  return 1;
}
