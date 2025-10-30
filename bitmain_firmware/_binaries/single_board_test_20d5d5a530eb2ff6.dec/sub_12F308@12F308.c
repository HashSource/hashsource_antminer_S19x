int __fastcall sub_12F308(int a1, int a2, int a3, int a4, int a5)
{
  int v8; // r6
  int v9; // r4
  int v10; // r5
  int v11; // r9
  int v12; // t1
  int v13; // r1

  if ( a5 > 0 )
  {
    if ( a5 != 1 )
    {
      v8 = a4 - 1;
      v9 = 0;
      v10 = 0;
      v11 = a5 - 1;
      while ( 1 )
      {
        while ( 1 )
        {
          v12 = *(unsigned __int8 *)++v8;
          ++v10;
          sub_B550C(a1, "%02X:", v12);
          sub_18959C(v9 + 1, a3);
          v9 = v13;
          if ( !v13 )
            break;
          if ( v11 == v10 )
            goto LABEL_6;
        }
        sub_B550C(a1, (unsigned __int8 *)"\n");
        if ( v11 == v10 )
          break;
        sub_B550C(a1, (unsigned __int8 *)"%*s", a2, &byte_1A4198);
      }
      sub_B550C(a1, (unsigned __int8 *)"%*s", a2, &byte_1A4198);
    }
LABEL_6:
    sub_B550C(a1, (unsigned __int8 *)"%02X", *(unsigned __int8 *)(a4 + a5 - 1));
  }
  return 1;
}
