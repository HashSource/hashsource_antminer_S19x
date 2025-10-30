int sub_43480()
{
  int v0; // r0
  int i; // r6
  int result; // r0
  int v3; // r7
  int v4; // r4
  int v5; // r0
  int v6; // r0
  int v7; // r0
  int v8; // r0
  __int16 v9; // [sp+14h] [bp-808h]
  unsigned __int8 v10; // [sp+16h] [bp-806h]
  char v11[2052]; // [sp+18h] [bp-804h] BYREF

  v0 = sub_42988();
  v9 = v0;
  v10 = BYTE2(v0);
  if ( (unsigned int)dword_B308C > 3 )
  {
    strcpy(v11, "start do_core_reset");
    sub_3B6AC(3, v11, 0, *(int *)"e_reset");
  }
  for ( i = 0; i != 4; ++i )
  {
    result = sub_26C0C(i);
    if ( result )
    {
      result = sub_26A44();
      v3 = result;
      if ( result > 0 )
      {
        v4 = 0;
        do
        {
          v5 = sub_26AB4();
          sub_79C08((unsigned __int8)i, v4 * v5);
          sub_3E0F0();
          v6 = sub_26AB4();
          sub_7A268((unsigned __int8)i, v4 * v6, (unsigned __int8)v9, 0);
          sub_3E0F0();
          v7 = sub_26AB4();
          sub_7A284((unsigned __int8)i, v4 * v7, HIBYTE(v9), v10, 0);
          sub_3E0F0();
          v8 = sub_26AB4();
          sub_79CC4((unsigned __int8)i, v4 * v8);
          ++v4;
          result = sub_3E0F0();
        }
        while ( v4 != v3 );
      }
    }
  }
  if ( (unsigned int)dword_B308C > 3 )
  {
    strcpy(v11, "end do_core_reset");
    return sub_3B6AC(3, v11, 0, *(int *)"reset");
  }
  return result;
}
