int __fastcall sub_8B350(_DWORD *a1, int a2, int a3, int *a4)
{
  int v5; // r6
  int v9; // r3
  int result; // r0
  int v11; // r5
  int v12; // r5
  int v13; // r2
  int v14; // [sp+Ch] [bp-8h] BYREF

  v5 = a1[26];
  switch ( v5 )
  {
    case 0:
      if ( !a1[7] && sub_95464(a1) )
      {
        v9 = a1[285];
        if ( v9 )
        {
          if ( *(_DWORD *)(v9 + 480) )
            goto LABEL_7;
        }
        if ( a1[307] )
          goto LABEL_7;
      }
      v13 = 2024;
      goto LABEL_19;
    case 1:
LABEL_7:
      a1[26] = 2;
      if ( sub_8B330(a1) > 0 )
        goto LABEL_9;
      a1[26] = 1;
      return 0;
    case 3:
LABEL_9:
      v11 = a1[316];
      a1[26] = 4;
      a1[316] = v11 & 0xFFFFFFFE;
      result = sub_88DA8(a1, a2, a3, &v14);
      a1[316] |= v11 & 1;
      if ( result )
      {
        a1[26] = 5;
LABEL_11:
        result = sub_95E50(a1);
        if ( result == 1 )
        {
          *a4 = a3;
          a1[26] = 3;
        }
        else
        {
          return 0;
        }
      }
      else
      {
        a1[26] = 3;
      }
      return result;
    case 5:
      goto LABEL_11;
    case 10:
    case 12:
      a1[26] = 6;
      v12 = sub_88DA8(a1, a2, a3, a4);
      if ( v12 )
        sub_B6ECC(a1[3], 11, 0, 0);
      a1[26] = v5;
      return v12;
    default:
      v13 = 2078;
LABEL_19:
      sub_D0048(20, 526, 66, "ssl/ssl_lib.c", v13);
      return 0;
  }
}
