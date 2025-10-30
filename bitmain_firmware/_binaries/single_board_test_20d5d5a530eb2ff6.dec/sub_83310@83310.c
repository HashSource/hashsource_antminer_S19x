int __fastcall sub_83310(_DWORD *a1, int a2, unsigned int a3, char *a4)
{
  char *v6; // r4
  int v7; // r3
  int result; // r0
  int v9; // r4
  int v10; // r0
  int v11; // r3
  int v12; // r2
  int v13; // r3
  int v14; // r3
  int v15; // r3
  int v16; // r3
  int v17; // r6
  bool v18; // zf
  int v19; // r0
  _DWORD *v20; // r3
  int v21; // r0
  int v22; // r5
  unsigned __int16 *v23; // r6
  int i; // r7
  _DWORD *v25; // r0
  int v26; // r3
  int v27; // r3
  int v28; // r0
  int v29; // r3
  int v30; // r2
  int v31; // [sp+Ch] [bp-8h] BYREF

  v6 = a4;
  switch ( a2 )
  {
    case 3:
      if ( !a4 )
      {
        v30 = 3416;
        goto LABEL_100;
      }
      v9 = sub_832EC((int)a4);
      if ( v9 )
      {
        v10 = sub_D9AE4();
        if ( sub_854EC(a1, (char *)&loc_40006 + 1, v10, 0, v9) )
        {
          sub_DA240(*(_DWORD *)(a1[257] + 4));
          *(_DWORD *)(a1[257] + 4) = v9;
          return 1;
        }
        else
        {
          sub_D0048(20, 213, 394, "ssl/s3_lib.c", 3426);
          sub_DA240(v9);
          return 0;
        }
      }
      else
      {
        sub_D0048(20, 213, 65, "ssl/s3_lib.c", 3421);
        return 0;
      }
    case 4:
      if ( a4 )
      {
        if ( sub_C59B8(a4) )
        {
          result = sub_C6284();
          v31 = result;
          if ( result )
            return sub_A2948(a1 + 349, a1 + 348, &v31, 1);
        }
        else
        {
          sub_D0048(20, 213, 124, "ssl/s3_lib.c", 3456);
          return 0;
        }
      }
      else
      {
        v30 = 3451;
LABEL_100:
        sub_D0048(20, 213, 67, "ssl/s3_lib.c", v30);
        return 0;
      }
      return result;
    case 6:
      sub_D0048(20, 213, 66, "ssl/s3_lib.c", 3437);
      return 0;
    case 10:
      return *(_DWORD *)(a1[31] + 248);
    case 11:
      v29 = a1[31];
      result = *(_DWORD *)(v29 + 248);
      *(_DWORD *)(v29 + 248) = 0;
      return result;
    case 12:
      return *(_DWORD *)(a1[31] + 244);
    case 13:
      return *(_DWORD *)a1[31];
    case 55:
      if ( a3 )
      {
        sub_D0048(20, 213, 320, "ssl/s3_lib.c", 3497);
        return 0;
      }
      else
      {
        CRYPTO_free(a1[334], "ssl/s3_lib.c", 3481);
        a1[334] = 0;
        if ( !v6 )
          return 1;
        if ( strlen(v6) - 1 > 0xFE )
        {
          sub_D0048(20, 213, 319, "ssl/s3_lib.c", 3489);
          return 0;
        }
        else
        {
          v28 = sub_E9E3C(v6, "ssl/s3_lib.c", 3492);
          a1[334] = v28;
          if ( v28 )
            return 1;
          sub_D0048(20, 213, 68, "ssl/s3_lib.c", 3493);
          return 0;
        }
      }
    case 57:
      a1[333] = a4;
      return 1;
    case 65:
      a1[335] = a3;
      return 1;
    case 66:
      v27 = a1[340];
      result = 1;
      *(_DWORD *)v6 = v27;
      return result;
    case 67:
      a1[340] = a4;
      return 1;
    case 68:
      v26 = a1[339];
      result = 1;
      *(_DWORD *)v6 = v26;
      return result;
    case 69:
      a1[339] = a4;
      return 1;
    case 70:
      result = a1[342];
      if ( result <= 0 )
        result = -1;
      *(_DWORD *)a4 = a1[341];
      return result;
    case 71:
      CRYPTO_free(a1[341], "ssl/s3_lib.c", 3543);
      a1[341] = v6;
      result = 1;
      a1[342] = a3;
      return result;
    case 88:
      if ( a3 )
        return sub_84730(a1, 0, a4);
      else
        return sub_84680(a1, 0, a4);
    case 89:
      if ( a3 )
        return sub_847EC(a1, 0, a4);
      else
        return sub_84780(a1, 0, a4);
    case 90:
      if ( !a1[285] )
        return 0;
      v22 = a1[350];
      if ( a4 && v22 )
      {
        v23 = (unsigned __int16 *)a1[351];
        for ( i = 0; i != v22; ++i )
        {
          v25 = (_DWORD *)sub_A276C(*v23);
          if ( v25 )
            *(_DWORD *)v6 = *v25;
          else
            *(_DWORD *)v6 = *v23 | 0x1000000;
          ++v23;
          v6 += 4;
        }
      }
      return v22;
    case 91:
      return sub_A2948(a1 + 349, a1 + 348, a4, a3);
    case 92:
      return sub_A2A3C(a1 + 349, a1 + 348, a4);
    case 93:
      result = sub_A2838(a1, a3);
      if ( a3 != -1 )
      {
        v21 = sub_A276C(result);
        if ( !v21 )
          return 0;
        return *(_DWORD *)v21;
      }
      return result;
    case 97:
      return sub_A45B8(a1[257], a4, a3, 0);
    case 98:
      return sub_A457C(a1[257], a4, 0);
    case 101:
      return sub_A45B8(a1[257], a4, a3, 1);
    case 102:
      return sub_A457C(a1[257], a4, 1);
    case 103:
      if ( a1[7] )
        return 0;
      v20 = (_DWORD *)a1[31];
      if ( !v20[134] )
        return 0;
      if ( v6 )
      {
        *(_DWORD *)v6 = v20[135];
        v20 = (_DWORD *)a1[31];
      }
      return v20[136];
    case 104:
      if ( !a1[7] )
        return 0;
      v17 = a1[257];
      CRYPTO_free(*(_DWORD *)(v17 + 200), "ssl/s3_lib.c", 4392);
      v18 = a3 == 0;
      if ( a3 )
        v18 = v6 == 0;
      *(_DWORD *)(v17 + 200) = 0;
      *(_DWORD *)(v17 + 204) = 0;
      if ( v18 )
        return 1;
      if ( a3 > 0xFF )
        return 0;
      v19 = sub_E9E68(v6, a3, "ssl/s3_lib.c", 4399);
      *(_DWORD *)(v17 + 200) = v19;
      if ( !v19 )
        return 0;
      *(_DWORD *)(v17 + 204) = a3;
      return 1;
    case 105:
      return sub_850E8(a1, 0, a3);
    case 106:
      return sub_85354(a1[257], a4, 0, a3);
    case 107:
      return sub_85354(a1[257], a4, 1, a3);
    case 108:
      v7 = *(_DWORD *)(a1[31] + 632);
      if ( v7 )
        goto LABEL_16;
      return 0;
    case 109:
      if ( !a1[285] || !*(_DWORD *)(a1[31] + 856) )
        return 0;
      sub_D9C08();
      *(_DWORD *)v6 = *(_DWORD *)(a1[31] + 856);
      return 1;
    case 111:
      v16 = a1[347];
      if ( !v16 )
        return 0;
      *(_DWORD *)v6 = v16;
      return a1[346];
    case 115:
      v15 = a1[257];
      result = 1;
      *(_DWORD *)v6 = *(_DWORD *)(*(_DWORD *)v15 + 8);
      return result;
    case 116:
      return sub_84800(a1[257], a4);
    case 117:
      if ( a3 != 3 )
        return sub_84928(a1[257], a3);
      if ( !a1[7] )
        return 0;
      v12 = a1[31];
      v13 = *(_DWORD *)(v12 + 528);
      if ( !v13 )
        return 0;
      if ( (*(_DWORD *)(v13 + 20) & 0x44) != 0 )
        return 2;
      v14 = *(_DWORD *)(v12 + 612);
      if ( !v14 )
        return 0;
      *(_DWORD *)a1[257] = v14;
      return 1;
    case 118:
      v11 = a1[257];
      result = 1;
      *(_DWORD *)(v11 + 12) = a3;
      return result;
    case 127:
      return a1[335];
    case 132:
      v7 = *(_DWORD *)(a1[31] + 608);
      if ( !v7 )
        return 0;
LABEL_16:
      *(_DWORD *)v6 = *(_DWORD *)(v7 + 8);
      return 1;
    case 133:
      if ( !a1[285] || !*(_DWORD *)(a1[31] + 532) )
        return 0;
      sub_D9C08();
      *(_DWORD *)v6 = *(_DWORD *)(a1[31] + 532);
      return 1;
    case 137:
      return sub_85388(a1[257], a4, 0);
    case 138:
      return sub_85388(a1[257], a4, 1);
    default:
      return 0;
  }
}
