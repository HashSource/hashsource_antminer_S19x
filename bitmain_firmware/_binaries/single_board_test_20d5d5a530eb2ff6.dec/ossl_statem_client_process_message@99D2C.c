int __fastcall ossl_statem_client_process_message(int *a1, int *a2)
{
  int result; // r0
  unsigned int v4; // r3
  int v5; // r2
  unsigned int v6; // r3
  unsigned int v7; // r5
  int v8; // [sp+Ch] [bp-10h] BYREF
  _DWORD v9[3]; // [sp+10h] [bp-Ch] BYREF

  switch ( a1[16] )
  {
    case 2:
      result = sub_979D4((int)a1, a2);
      break;
    case 3:
      result = sub_97A3C(a1, (unsigned __int8 **)a2);
      break;
    case 4:
      result = sub_981D8(a1, (unsigned __int8 **)a2);
      break;
    case 5:
      result = sub_98F3C(a1, (int)a2);
      break;
    case 6:
      result = sub_99260(a1, a2);
      break;
    case 7:
      result = sub_98618(a1, (unsigned __int8 **)a2);
      break;
    case 8:
      result = sub_99C58(a1, (int)a2);
      break;
    case 9:
      result = sub_98984(a1, a2);
      break;
    case 10:
      result = sub_9BE74();
      break;
    case 11:
      result = sub_9DAFC();
      break;
    case 38:
      v4 = a2[1];
      v8 = 0;
      if ( v4 > 1
        && (v5 = *a2, v6 = v4 - 2, v7 = *(unsigned __int8 *)(*a2 + 1) | (*(unsigned __int8 *)*a2 << 8), v7 <= v6)
        && v7 == v6 )
      {
        *a2 = v5 + 2 + v7;
        a2[1] = 0;
        v9[0] = v5 + 2;
        v9[1] = v7;
        if ( sub_8F274(a1, (int)v9, 1024, &v8, 0, 1) && sub_8F658(a1, 1024, v8, 0, 0, 1) )
        {
          CRYPTO_free(v8, "ssl/statem/statem_clnt.c", 3711);
          return 3;
        }
      }
      else
      {
        sub_95494(a1, 50, 444, 159, (int)"ssl/statem/statem_clnt.c", 3698);
      }
      CRYPTO_free(v8, "ssl/statem/statem_clnt.c", 3715);
      result = 0;
      break;
    case 39:
      result = sub_9B7A4();
      break;
    case 41:
      result = sub_99CCC(a1, (int)a2);
      break;
    case 45:
      result = sub_9BD88();
      break;
    default:
      sub_95494(a1, 80, 594, 68, (int)"ssl/statem/statem_clnt.c", 1030);
      result = 0;
      break;
  }
  return result;
}
