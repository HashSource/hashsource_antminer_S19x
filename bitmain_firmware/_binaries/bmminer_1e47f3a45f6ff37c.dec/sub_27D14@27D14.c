int sub_27D14()
{
  int result; // r0
  int v1; // r5
  int v2; // r4
  int v3; // r10
  int v4; // r0
  int v5; // r6
  int v6; // r0
  int v7; // r4
  int v8; // r9
  int v9; // r6
  int v11; // r10
  int v12; // r7
  int v13; // r0
  int v14; // r9
  int v15; // r7
  int v16; // r0
  char v17[2048]; // [sp+8h] [bp-800h] BYREF

  result = sub_26A34();
  if ( result > 9 )
  {
    result = sub_26A34();
    v1 = result - 1;
    if ( result - 1 >= 0 )
    {
      do
      {
        v2 = 0;
        v3 = v1 * sub_26A54();
        do
        {
          v4 = sub_26C0C(v2);
          v5 = (unsigned __int8)v2++;
          if ( v4 )
          {
            v14 = sub_26AB4();
            v15 = sub_26A34() - v1;
            v16 = sub_26A54();
            sub_7A17C(v5, v3 * v14, v16 * v15 + 14, 1, 1);
          }
        }
        while ( v2 != 4 );
        v6 = sub_26A54();
        v7 = 0;
        v8 = v6 + v1 * v6 - 1;
        do
        {
          v9 = (unsigned __int8)v7;
          result = sub_26C0C(v7++);
          if ( result )
          {
            v11 = sub_26AB4();
            v12 = sub_26A34() - v1;
            v13 = sub_26A54();
            result = sub_7A17C(v9, v8 * v11, v13 * v12 + 14, 1, 1);
          }
        }
        while ( v7 != 4 );
      }
      while ( v1-- != 0 );
    }
  }
  else if ( (unsigned int)dword_B308C > 4 )
  {
    strcpy(v17, "no need to set uart relay\n");
    return sub_3B6AC(4, v17, 0, *(unsigned __int16 *)"");
  }
  return result;
}
